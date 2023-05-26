#include <QApplication>
#include <QFileDialog>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFile>
#include <QMessageBox>
#include <QLineEdit>

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
        const char *name = "Make New File";

        t = Task::sharePid(argv[1], argv[2], argv[3], name, ram, hardisk, core);
    }

    QApplication app(argc, argv);

    // Create widgets
    QLabel *fileLabel = new QLabel("Select file to move:");
    QLineEdit *fileNameEdit = new QLineEdit;
    QPushButton *fileButton = new QPushButton("Browse");
    QLabel *destLabel = new QLabel("Select destination folder:");
    QLineEdit *destNameEdit = new QLineEdit;
    QPushButton *destButton = new QPushButton("Browse");
    QPushButton *moveButton = new QPushButton("Move file");

    // Set up layout
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(fileLabel);
    QHBoxLayout *fileLayout = new QHBoxLayout;
    fileLayout->addWidget(fileNameEdit);
    fileLayout->addWidget(fileButton);
    layout->addLayout(fileLayout);
    layout->addWidget(destLabel);
    QHBoxLayout *destLayout = new QHBoxLayout;
    destLayout->addWidget(destNameEdit);
    destLayout->addWidget(destButton);
    layout->addLayout(destLayout);
    layout->addWidget(moveButton);

    // Create window
    QWidget window;
    window.setLayout(layout);
    window.show();

    // Connect file button to file dialog
    QObject::connect(fileButton, &QPushButton::clicked, [&]()
                     {
        QString fileName = QFileDialog::getOpenFileName(&window, "Select file to move", "", "All Files (*)");
        fileNameEdit->setText(fileName); });

    // Connect dest button to file dialog
    QObject::connect(destButton, &QPushButton::clicked, [&]()
                     {
        QString destDir = QFileDialog::getExistingDirectory(&window, "Select destination folder", "");
        destNameEdit->setText(destDir); });

    // Connect move button to move file
    QObject::connect(moveButton, &QPushButton::clicked, [&]()
                     {
        QString srcFile = fileNameEdit->text();
        QString destDir = destNameEdit->text();

        // Check if both file and destination are valid
        if (srcFile.isEmpty() || destDir.isEmpty()) {
            return;
        }

        // Get the base file name
        QFileInfo fileInfo(srcFile);
        QString fileName = fileInfo.fileName();

        // Construct the destination file path
        QString destFile = destDir + "/" + fileName;

        // Move the file
        bool success = QFile::rename(srcFile, destFile);
        if (!success) {
            // Handle error
            QMessageBox::critical(&window, "Error", "Failed to move file");
        } else {
            // Show success message
            QMessageBox::information(&window, "Success", "File moved successfully");
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
