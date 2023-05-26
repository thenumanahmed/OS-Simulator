#include "texteditscreen.h"
#include "ui_texteditscreen.h"
#include "mainwindow.h"

#include "QDebug"
#include "QThread"
#include "QFileInfo"
#include "QMessageBox"
#include "../task.h"
#include <QApplication>
#include <QCloseEvent>



void TextEditScreen::closeTask()
{
    if (task != nullptr)
    {
        task->resetTask();
    }

    QApplication::quit();
}

void TextEditScreen::closeEvent(QCloseEvent *event)
{
    if(toQuit){
            closeTask();
    }

}
void TextEditScreen::on_actionClose_triggered()
{
    closeTask();
}


TextEditScreen::TextEditScreen(QWidget *parent,Task* t, QString file_name) :
    QMainWindow(parent),task(t),
    ui(new Ui::TextEditScreen)
{
    ui->setupUi(this);

    openFile(file_name);
}

TextEditScreen::~TextEditScreen()
{
    delete ui;
}

void TextEditScreen::on_actionBack_triggered()
{
  goBack();
}

void TextEditScreen::set_file_path_and_title(QString file_name)
{
    this->file_path = file_name;
    QString fileName = getFileName(file_name);
    this->setWindowTitle(fileName);
}


QString TextEditScreen::getFileName(QString fileName)
{
    QFileInfo fileInfo(fileName);
    return fileInfo.fileName();
}


void TextEditScreen::openFile(QString file_name){
    QFile file(file_name);
    set_file_path_and_title(file_name);

    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "..", "file not open");
        goBack();
    }

    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();




}


void TextEditScreen::goBack(){
    toQuit=false;
    parentWidget()->show();
    this->close();
}

void TextEditScreen::on_textEdit_textChanged()
{
    QFile file(file_path);
    file.open(QFile::WriteOnly | QFile::Text);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();

}



