#include "loadingscreen.h"
#include "ui_loadingscreen.h"
#include "desktop.h"

#include <QThread>
#include <iostream>
using namespace std;

LoadingScreen::LoadingScreen(QWidget *parent,int r, int h, int c) : QMainWindow(parent),ram(r),harddisk(h),core(c),
                                                ui(new Ui::LoadingScreen)
{
    Desktop *d = new Desktop(core,ram,harddisk,this);

    QThread *thread = new QThread();
    QObject::connect(thread, &QThread::started, [=]() {
        // thread code
        updateProgressBar();
            d->setAttribute(Qt::WA_DeleteOnClose); // optional: to automatically de
        d->show();

        close();
    });
    thread->start();


//    showDesktop();
}

LoadingScreen::~LoadingScreen()
{
    delete ui;
}

void LoadingScreen::updateProgressBar()
{
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);

    int count = 1;

    while (count < 100)
    {
        ui->progressBar->setValue(count);
        count++;
        QThread::msleep(1);
    }
}

void LoadingScreen::showDesktop()
{

    Desktop *d = new Desktop(core,ram,harddisk,this);
    d->setAttribute(Qt::WA_DeleteOnClose); // optional: to automatically delete the object when the window is closed
    d->show();

    close(); // to close the current window
}
