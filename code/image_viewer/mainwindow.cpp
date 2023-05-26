#include "mainwindow.h"
#include "./ui_mainwindow.h"
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
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Open Image"), ".", tr("Image Files (*.png *.jpg *.bmp)"));
    if (!filename.isEmpty()) {
            QPixmap pixmap(filename);
            pixmap = pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
            ui->label->setAlignment(Qt::AlignCenter);
            ui->label->setPixmap(pixmap);
        }

}



