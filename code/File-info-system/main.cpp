#include <QApplication>
#include <QCheckBox>
#include <QDateTime>
#include <QFileDialog>
#include <QFileInfo>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>

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
        const char *name = "File Info";

        t = Task::sharePid(argv[1], argv[2], argv[3], name, ram, hardisk, core);
    }
    QApplication app(argc, argv);

    // Create widgets
    QLabel *fileLabel = new QLabel("No file selected");
    QPushButton *fileButton = new QPushButton("Browse");
    QLabel *permissionLabel = new QLabel("Permissions: ");
    QPushButton *infoButton = new QPushButton("Get Info");
    QLabel *infoLabel = new QLabel;
    QCheckBox *permissionCheckBox = new QCheckBox("Show permissions");

    // Set up layout
    QVBoxLayout *layout = new QVBoxLayout;
    QHBoxLayout *fileLayout = new QHBoxLayout;
    fileLayout->addWidget(fileLabel);
    fileLayout->addWidget(fileButton);
    layout->addLayout(fileLayout);
    QHBoxLayout *permissionLayout = new QHBoxLayout;
    permissionLayout->addWidget(permissionLabel);
    layout->addLayout(permissionLayout);
    layout->addWidget(infoButton);
    layout->addWidget(infoLabel);

    // Create window
    QWidget window;
    window.setLayout(layout);
    window.show();

    // Connect file button to file dialog
    QObject::connect(fileButton, &QPushButton::clicked, [&]()
                     {
        auto fileName = QFileDialog::getOpenFileName(&window, "Select file", "", "All Files (*)");
        fileLabel->setText(fileName); });

    // Connect info button to display file info
    QObject::connect(infoButton, &QPushButton::clicked, [&]()
                     {
        auto fileName = fileLabel->text();
        if (fileName.isEmpty()) {
            // Handle empty file name
            infoLabel->setText("Please select a file");
            return;
        }

        // Get file info
        QFileInfo fileInfo(fileName);
        if (!fileInfo.exists()) {
            infoLabel->setText("File does not exist or cannot be accessed");
            return;
        }

        QString sizeString;
        auto size = fileInfo.size();
        if (size < 1024) {
            sizeString = QString("%1 bytes").arg(size);
        } else if (size < 1024 * 1024) {
            sizeString = QString("%1 KB").arg(size / 1024);
        } else if (size < 1024 * 1024 * 1024) {
            sizeString = QString("%1 MB").arg(size / (1024 * 1024));
        } else {
            sizeString = QString("%1 GB").arg(size / (1024 * 1024 * 1024));
        }

        // Display file info
        QString infoString = QString("File Name: %1\n"
                                     "Designation: %2\n"
                                     "Owner: %3\n"
                                     "Size: %4\n"
                                     "Date: %5\n"
                                     "Type: %6\n")
                                      .arg(fileInfo.fileName())
                                      .arg(fileInfo.path())
                                      .arg(fileInfo.owner())
                                      .arg(sizeString)
                                      .arg(fileInfo.lastModified().toString(Qt::ISODate))
                                      .arg(fileInfo.isDir() ? "Folder" : "File");

        QString permissionsString;
        if (permissionCheckBox->isChecked()) {
            permissionsString += QString("%1%2%3 ")
                    .arg(fileInfo.permissions().testFlag(QFileDevice::ReadGroup) ? "r" : "-")
                    .arg(fileInfo.permissions().testFlag(QFileDevice::WriteGroup) ? "w" : "-")
                    .arg(fileInfo.permissions().testFlag(QFileDevice::ExeGroup) ? "x" : "-");

            permissionsString += QString("%1%2%3 ")
                    .arg(fileInfo.permissions().testFlag(QFileDevice::ReadOther) ? "r" : "-")
                    .arg(fileInfo.permissions().testFlag(QFileDevice::WriteOther) ? "w" : "-")
                    .arg(fileInfo.permissions().testFlag(QFileDevice::ExeOther) ? "x" : "-");
        } else {
            permissionsString = "Permissions: N/A";
        }
        infoString += permissionsString;
        infoLabel->setText(infoString); });

    // Add checkbox for showing permissions

    layout->addWidget(permissionCheckBox);

    // Connect checkbox to info button
    QObject::connect(permissionCheckBox, &QCheckBox::stateChanged, [&]()
                     { infoButton->click(); });

    // Connect aboutToQuit signal to custom exit function
    QObject::connect(&app, &QCoreApplication::aboutToQuit, [&]()
                     {
        if(t!=nullptr){
            t->resetTask();
        }
        exit(0); });

    return app.exec();
}
