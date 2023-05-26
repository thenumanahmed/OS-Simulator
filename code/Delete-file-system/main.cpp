#include <QApplication>
#include <QFileDialog>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QLineEdit>
#include <QFileInfo>
#include <QFile>

#include <iostream>
#include "../task.h"
using namespace std;

int main(int argc, char *argv[])
{
    Task *t = nullptr;
    if (argc == 4)
    {
        const int ram = 100;
        const int hardisk = 1000;
        const int core = 1;
        const char *name = "Delete File";

        t = Task::sharePid(argv[1], argv[2], argv[3], name, ram, hardisk, core);
    }

    QApplication app(argc, argv);

    // Create widgets
    QLabel *fileLabel = new QLabel("Enter name of file to delete or select one to delete:");
    QLineEdit *fileNameEdit = new QLineEdit;
    QPushButton *fileButton = new QPushButton("Browse");
    QPushButton *deleteButton = new QPushButton("Delete file");

    // Set up layout
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(fileLabel);
    layout->addWidget(fileNameEdit);
    QHBoxLayout *fileLayout = new QHBoxLayout;
    fileLayout->addWidget(fileButton);
    layout->addLayout(fileLayout);
    layout->addWidget(deleteButton);

    // Create window
    QWidget window;
    window.setLayout(layout);
    window.show();

    // Connect file button to file dialog
    QObject::connect(fileButton, &QPushButton::clicked, [&]()
                     {
        QString fileName = QFileDialog::getOpenFileName(&window, "Select file to delete", "", "All Files (*)");
        fileNameEdit->setText(fileName); });

    // Connect delete button to delete file
    QObject::connect(deleteButton, &QPushButton::clicked, [&]()
                     {
        QString fileName = fileNameEdit->text();
        if (fileName.isEmpty()) {
            // Handle empty file name
            return;
        }

        // Confirm deletion with user
        QMessageBox::StandardButton confirmDelete = QMessageBox::question(&window, "Confirm deletion", "Are you sure you want to delete this file?", QMessageBox::Yes|QMessageBox::No);
        if (confirmDelete == QMessageBox::No) {
            // User cancelled deletion
            return;
        }

        // Delete the file
        bool success = QFile::remove(fileName);
        if (!success) {
            // Handle error
            QMessageBox::critical(&window, "Error", "Failed to delete file");
        } else {
            // Show success message
            QMessageBox::information(&window, "Success", "File deleted successfully");
            fileNameEdit->clear();
        } });

    // Connect aboutToQuit signal to custom exit function
    QObject::connect(&app, &QCoreApplication::aboutToQuit, [&]()
                     {
        if(t!=nullptr){
            t->resetTask();
        }
        exit(0); });

    return app.exec();
}
