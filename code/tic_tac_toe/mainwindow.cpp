#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "gamescreen.h"
#include <QThread>

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startBtn_clicked()
{
    GameScreen *g = new GameScreen(this,task);
    g->show();
    this->hide();
}
