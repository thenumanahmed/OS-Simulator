#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>

#include "../task.h"
#include <QApplication>
#include <QCloseEvent>
void MainWindow::closeTask(){
    if(task!=nullptr){
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



MainWindow::MainWindow(Task* t,QWidget *parent)
    : QMainWindow(parent),task(t)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonClicked()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (button) {
        QString buttonText = button->text();
        QString currentText = ui->lineEdit->text();
        ui->lineEdit->setText(currentText + buttonText);
    }
}





void MainWindow::on_pushButton_add_clicked()
{
    m_inputValue = ui->lineEdit->text();
    m_operation = "+";
    ui->lineEdit->clear();
}


void MainWindow::on_pushButton_eq_clicked()
{
    QString secondValue = ui->lineEdit->text();
    double result = 0.0;
    if (m_operation == "+") {
        result = m_inputValue.toDouble() + secondValue.toDouble();
    } else if (m_operation == "-") {
        result = m_inputValue.toDouble() - secondValue.toDouble();
    } else if (m_operation == "*") {
        result = m_inputValue.toDouble() * secondValue.toDouble();
    } else if (m_operation == "/") {
        result = m_inputValue.toDouble() / secondValue.toDouble();
    }
    ui->lineEdit->setText(QString::number(result));
}


void MainWindow::on_pushButton_min_clicked()
{
    m_inputValue = ui->lineEdit->text();
    m_operation = "-";
    ui->lineEdit->clear();
}


void MainWindow::on_pushButton_mul_clicked()
{
    m_inputValue = ui->lineEdit->text();
    m_operation = "*";
    ui->lineEdit->clear();
}


void MainWindow::on_pushButton_div_clicked()
{
    m_inputValue = ui->lineEdit->text();
    m_operation = "/";
    ui->lineEdit->clear();
}



