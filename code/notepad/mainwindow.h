#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../task.h"
#include <QApplication>
#include <QCloseEvent>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Task* t=nullptr,QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_open_clicked();
    void on_actionClose_triggered();

private:
    Ui::MainWindow *ui;
    QString file_path;
    void openTextEditScreen(QString file_name);
    Task *task;
    void closeTask();

protected:
    void closeEvent(QCloseEvent *event) override;
};
#endif // MAINWINDOW_H
