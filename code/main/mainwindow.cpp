#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QCloseEvent>
#include <QMessageBox>

#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    // Handle the close event here
    // For example, you could show a confirmation dialog to the user
    int result = QMessageBox::question(this, tr("Confirm Close"),
                                       tr("Are you sure you want to close this window?"),
                                       QMessageBox::Yes | QMessageBox::No);
    if (result == QMessageBox::Yes)
    {
        // If the user confirms the close, call the base class closeEvent()
        // Functions().taskClosed();
        // event->accept();
    }
    else
    {
        // If the user cancels the close, ignore the event
        // event->ignore();
    }
}

void MainWindow::on_pushButton_clicked()
{
//    Functions().openNotepade();
}
