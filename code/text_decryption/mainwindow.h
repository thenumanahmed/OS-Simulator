#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../task.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Task *t = nullptr, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_decrypt_clicked();
    void on_actionClose_triggered();

private:
    Ui::MainWindow *ui;
    Task *task;
    void closeTask();
protected:
    void closeEvent(QCloseEvent *event);
};
#endif // MAINWINDOW_H
