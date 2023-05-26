#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include<unistd.h>
#include<iostream>
#include <QFileDialog>

#include "../task.h"
#include <QApplication>
#include <QCloseEvent>

#include <iostream>
using namespace std;
void MainWindow::closeTask()
{
    if (task != nullptr)
    {
        task->resetTask();
    }
    QApplication::quit();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    closeTask();
}

void MainWindow::on_actionClose_triggered()
{
    closeTask();
}

MainWindow::MainWindow(Task *t, QWidget *parent)
    : QMainWindow(parent), task(t), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_result_file->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_result_file->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->label_result_file->setOpenExternalLinks(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void encryptFile(const char *inputFile, const char *outputFile, int key)
{
    ifstream in(inputFile, ios::binary);
    ofstream out(outputFile, ios::binary);

    if (!in)
    {
        cerr << "Error opening input file: " << inputFile << endl;
        return;
    }

    if (!out)
    {
        cerr << "Error opening output file: " << outputFile << endl;
        return;
    }

    char buffer[1024];
    while (in.read(buffer, sizeof(buffer)))
    {
        for (int i = 0; i < in.gcount(); i++)
        {
            buffer[i] = ((buffer[i] + key) % 256);
        }

        out.write(buffer, in.gcount());
    }

    int count = in.gcount();
    for (int i = 0; i < count; i++)
    {
        buffer[i] = ((buffer[i] + key) % 256);
    }

    out.write(buffer, count);

    in.close();
    out.close();
}



void MainWindow::on_pushButton_encryptFile_3_clicked()
{
    QString selectedFile = ui->lineEdit_selectedFile_3->text();
    int key = ui->lineEdit_key_3->text().toInt();
    QString encryptedFile = selectedFile + "_enc.txt";

    const char *inputFile = selectedFile.toUtf8().constData();
    const char *outputFile = encryptedFile.toUtf8().constData();

    encryptFile(inputFile, outputFile, key);
    ui->label_result_file->setText(encryptedFile);
    ui->statusbar->showMessage(tr("File Encrypted Successfully."));

}



void MainWindow::on_pushButton_browse_3_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Select File"), QDir::homePath());
    ui->lineEdit_selectedFile_3->setText(fileName);
}



