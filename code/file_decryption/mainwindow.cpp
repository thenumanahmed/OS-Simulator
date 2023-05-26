#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


MainWindow::MainWindow(Task *t, QWidget *parent)
    : QMainWindow(parent), task(t), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
void decryptFile(const char *inputFile, const char *outputFile, int key)
{
    encryptFile(inputFile, outputFile, 256 - key);
}


void MainWindow::on_pushButton_decryptFile_2_clicked()
{
    QString selectedFile = ui->lineEdit_selectedFile_2->text();
    int key = ui->lineEdit_key_2->text().toInt();
    QString decryptedFile = selectedFile + "_decr.txt";

    const char *inputFile = selectedFile.toUtf8().constData();
    const char *outputFile = decryptedFile.toUtf8().constData();

    decryptFile(inputFile, outputFile, key);
    ui->label_result_file->clear();
    ui->label_result_file->setText(decryptedFile);
    ui->statusbar->showMessage(tr("File Decrypted Successfully."));

    connect(ui->pushButton_decryptFile_2, &QPushButton::clicked, this, [=]() {
        QString newPath = decryptedFile;
        ui->label_result_file->setText(newPath);
    });
}


void MainWindow::on_pushButton_browse_2_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Select File"), QDir::homePath());
    ui->lineEdit_selectedFile_2->setText(fileName);
}




void MainWindow::on_actionClose_2_triggered()
{
    closeTask();
}

