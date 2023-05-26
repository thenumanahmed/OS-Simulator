#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QLabel>
#include <QPushButton>
#include <QMessageBox>
#include <QFile>
#include <QComboBox>
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
    QWidget window;
    window.setWindowTitle("Create File");
    window.resize(500, 250);

    // Select folder box
    QHBoxLayout *folderLayout = new QHBoxLayout;
    QLabel *folderLabel = new QLabel("Select folder:");
    folderLayout->addWidget(folderLabel);
    QLineEdit *folderLineEdit = new QLineEdit;
    folderLayout->addWidget(folderLineEdit);
    QPushButton *folderButton = new QPushButton("Browse");
    folderLayout->addWidget(folderButton);

    // File name and permission layout
    QHBoxLayout *fileLayout = new QHBoxLayout;
    QLabel *fileLabel = new QLabel("File name:");
    fileLayout->addWidget(fileLabel);
    QLineEdit *fileLineEdit = new QLineEdit;
    fileLayout->addWidget(fileLineEdit);
    QLabel *permissionLabel = new QLabel("Permission:");
    fileLayout->addWidget(permissionLabel);
    QComboBox *permissionComboBox = new QComboBox;
    permissionComboBox->addItem("Read");
    permissionComboBox->addItem("Write");
    permissionComboBox->addItem("Execute");
    fileLayout->addWidget(permissionComboBox);

    // Create button
    QPushButton *createButton = new QPushButton("Create");

    // Main layout
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(folderLayout);
    mainLayout->addLayout(fileLayout);
    mainLayout->addWidget(createButton);
    window.setLayout(mainLayout);

    // Connect signals and slots
    QObject::connect(folderButton, &QPushButton::clicked, [&]()
                     {
        QString folderPath = QFileDialog::getExistingDirectory(&window, "Select folder", QDir::homePath());
        folderLineEdit->setText(folderPath); });

    QObject::connect(createButton, &QPushButton::clicked, [&]()
                     {
        QString folderPath = folderLineEdit->text();
        QString fileName = fileLineEdit->text();
        QString permission = permissionComboBox->currentText();
        QString filePath = folderPath + "/" + fileName;

        QFile file(filePath);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QMessageBox::warning(&window, "Error", "Could not create file");
            return;
        }

        if (permission == "Read") {
            file.setPermissions(QFileDevice::ReadOwner | QFileDevice::ReadGroup | QFileDevice::ReadOther);
        } else if (permission == "Write") {
            file.setPermissions(QFileDevice::WriteOwner | QFileDevice::WriteGroup | QFileDevice::WriteOther);
        } else if (permission == "Execute") {
            file.setPermissions(QFileDevice::ExeOwner | QFileDevice::ExeGroup | QFileDevice::ExeOther);
        }

        QMessageBox::information(&window, "Success", "File created successfully"); });
    // Connect aboutToQuit signal to custom exit function
    QObject::connect(&app, &QCoreApplication::aboutToQuit, [&]()
                     {
        if(t!=nullptr){
            t->resetTask();
        }
        exit(0); });
    window.show();
    return app.exec();
}
