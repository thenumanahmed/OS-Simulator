#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QIntValidator>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QIntValidator *validator = new QIntValidator(this);

        // Set the validator for the QLineEdit widget
        ui->lineEdit_key->setValidator(validator);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_encrypt_clicked()
{
    QString text = ui->textEdit_input->toPlainText();
    int key = ui->lineEdit_key->text().toInt();
    // Create a new QString to store the encrypted text
    QString encryptedText;

    // Encrypt the text character by character
    for (int i = 0; i < text.length(); i++)
    {
       // Convert the character to an ASCII code, encrypt it, and convert it back to a character
       char encryptedChar = (text[i].toLatin1() + key) % 256;
       encryptedText += QString(encryptedChar);
    }

    // Set the encrypted text as the text of the output QTextEdit widget
    ui->textEdit_output->setPlainText(encryptedText);

}

