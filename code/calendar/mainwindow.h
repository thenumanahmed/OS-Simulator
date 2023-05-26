#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../task.h"

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
    MainWindow(Task *t=nullptr, QWidget *parent=nullptr);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void exitApplication();

    void on_actionClose_triggered();

private:
    Ui::MainWindow *ui;
    Task *task;
    void closeTask();


};
#endif // MAINWINDOW_H
