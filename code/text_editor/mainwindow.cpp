#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "iostream"
#include "QFile"
#include "QFileDialog"
#include "QTextStream"
#include "QMessageBox"
#include "QMainWindow"

#include "QDebug"
#include "../task.h"
#include <QApplication>
#include <QCloseEvent>
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
    this->setCentralWidget(ui->textEdit);
    new_file();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{

    if (isTextChanged() == false)
    {
        new_file();
        return;
    }

    if (file_path != "")
    {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "File Already Open", "Do you want to save the file before closing?",
                                      QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel, QMessageBox::Yes);

        if (reply == QMessageBox::Yes)
        {
            on_actionSave_triggered();
            new_file();
        }
        else if (reply == QMessageBox::No)
        {
            new_file();
        }
        else
        {
        }
    }
    else
    {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Save File", "Do you want to save the file before closing?",
                                      QMessageBox::Save | QMessageBox::Close, QMessageBox::Save);

        if (reply == QMessageBox::Save)
        {
            on_actionSaveAs_triggered();
            new_file();
        }
        else
        {
            new_file();
        }
        new_file();
    }
}

void MainWindow::on_actionOpen_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open File Name");
    QFile file(file_name);
    set_file_path_and_title(file_name);

    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "..", "file not open");
        return;
    }

    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionInfo_triggered()
{
}

void MainWindow::on_actionSave_triggered()
{
    // if new file is open and save is clicked
    if (file_path == "")
    {
        this->on_actionSaveAs_triggered();
        return;
    }

    // else save content to file
    QFile file(file_path);
    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "..", "file not open");
        return;
    }

    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}

void MainWindow::on_actionSaveAs_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(this, tr("Save File As"), QDir::currentPath(), tr("Text Files (*.txt)"), nullptr, QFileDialog::DontUseNativeDialog | QFileDialog::ReadOnly);
    if (!file_name.isEmpty())
    {
        QFile file(file_name);
        if (file.open(QIODevice::WriteOnly))
        {
            QFile file(file_name);

            set_file_path_and_title(file_name);

            if (!file.open(QFile::WriteOnly | QFile::Text))
            {
                QMessageBox::warning(this, "..", "file not open");
                return;
            }

            QTextStream out(&file);
            QString text = ui->textEdit->toPlainText();
            out << text;
            file.flush();
            file.close();
        }
        else
        {
            // File creation failed, add your error handling code here
        }
    }
}

QString MainWindow::getFileName(QString fileName)
{
    QFileInfo fileInfo(fileName);
    return fileInfo.fileName();
}

void MainWindow::new_file()
{
    this->file_path = "";
    this->setWindowTitle("Text Editor");
    ui->textEdit->setText("");
}

void MainWindow::set_file_path_and_title(QString file_name)
{
    this->file_path = file_name;
    QString fileName = getFileName(file_name);
    this->setWindowTitle(fileName);
}

bool MainWindow::isTextChanged()
{
    // Get the file text
    QString fileText;
    QFile file(file_path);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        fileText = in.readAll();
        file.close();
    }

    // Get the text in the QTextEdit
    QString uiText = ui->textEdit->toPlainText();

    // Compare the two texts and return the result
    return (fileText != uiText);
}
