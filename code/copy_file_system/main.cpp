#include <QApplication>
#include <QFileDialog>
#include <QFileInfo>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFile>

#include "../task.h"


int main(int argc, char *argv[])
{
    Task *t = nullptr;
    if (argc == 4)
    {
        const int ram = 100;
        const int hardisk = 1000;
        const int core = 1;
        const char *name = "Copy File";

        t = Task::sharePid(argv[1], argv[2], argv[3], name, ram, hardisk, core);
    }

    QApplication app(argc, argv);
    // Create widgets
    QLabel *sourceLabel = new QLabel("No file selected");
    QPushButton *sourceButton = new QPushButton("Select Source");
    QLabel *destinationLabel = new QLabel("No destination selected");
    QPushButton *destinationButton = new QPushButton("Select Destination");
    QPushButton *copyButton = new QPushButton("Copy");
    QLabel *infoLabel = new QLabel;

    // Set up layout
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(sourceLabel);
    QHBoxLayout *sourceLayout = new QHBoxLayout;
    sourceLayout->addWidget(sourceButton);
    layout->addLayout(sourceLayout);
    layout->addWidget(destinationLabel);
    QHBoxLayout *destinationLayout = new QHBoxLayout;
    destinationLayout->addWidget(destinationButton);
    layout->addLayout(destinationLayout);
    layout->addWidget(copyButton);
    layout->addWidget(infoLabel);

    // Create window
    QWidget window;
    window.setLayout(layout);
    window.show();

    // Connect source button to file dialog
    QObject::connect(sourceButton, &QPushButton::clicked, [&]()
                     {
        QString fileName = QFileDialog::getOpenFileName(&window, "Select source file", "", "All Files (*)");
        sourceLabel->setText(fileName); });

    // Connect destination button to file dialog
    QObject::connect(destinationButton, &QPushButton::clicked, [&]()
                     {
        QString fileName = QFileDialog::getSaveFileName(&window, "Select destination file", "", "All Files (*)");
        destinationLabel->setText(fileName); });

    // Connect copy button to copy file
    QObject::connect(copyButton, &QPushButton::clicked, [&]()
                     {
        QString sourceFileName = sourceLabel->text();
        QString destinationFileName = destinationLabel->text();

        if (sourceFileName.isEmpty() || destinationFileName.isEmpty()) {
            // Handle empty file names
            infoLabel->setText("Please select source and destination files");
            return;
        }

        // Check if source and destination files are the same
        if (QFileInfo(sourceFileName).absoluteFilePath() == QFileInfo(destinationFileName).absoluteFilePath()) {
            infoLabel->setText("Source and destination files are the same");
            return;
        }

        // Copy the file
        QFile sourceFile(sourceFileName);
        if (!sourceFile.copy(destinationFileName)) {
            infoLabel->setText("Error copying file");
            return;
        }

        // Display success message
        infoLabel->setText("File copied successfully"); });

    // Connect aboutToQuit signal to custom exit function
    QObject::connect(&app, &QCoreApplication::aboutToQuit, [&]()
                     {
        if(t!=nullptr){
            t->resetTask();
        }

        exit(0); });

    return app.exec();
}
