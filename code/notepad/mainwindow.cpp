#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "texteditscreen.h"
#include "QFileDialog"
#include "QMessageBox"
#include "QDebug"
#include "QThread"

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

void MainWindow::on_open_clicked()
{
    //    QString filter = "All Files (*.*) ;; Text File (*.txt) ;; XML File (*.txt)";
    QString file_name = QFileDialog::getOpenFileName(this, "Open a file");
    QFile file(file_name);

    if (!file.open(QFile::ReadWrite | QFile::Text))
    {
        QMessageBox::warning(this, "Error", "file not open");
        return;
    }

    file_path = file_name;

    openTextEditScreen(file_name);
}

void MainWindow::openTextEditScreen(QString file_name)
{

    //    QThread *thread = new QThread();
    //    QObject::connect(thread, &QThread::started, [=]() {
    //        TextEditScreen* d = new TextEditScreen(this,file_name);
    //        d->setAttribute(Qt::WA_DeleteOnClose); // optional: to automatically delete the object when the window is closed
    //        d->show();

    //        close(); // to close the current window
    //    });
    //    thread->start();
    TextEditScreen *t = new TextEditScreen(this,task, file_name);
    t->show();
    this->hide();
}
