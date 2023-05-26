#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QCalendarWidget>
#include <QMessageBox>
#include <QCloseEvent>

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
    setCentralWidget(ui->calendarWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
