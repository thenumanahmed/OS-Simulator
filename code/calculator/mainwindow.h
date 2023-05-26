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
private slots:
void onButtonClicked();

void on_pushButton_add_clicked();

void on_pushButton_eq_clicked();

void on_pushButton_min_clicked();

void on_pushButton_mul_clicked();

void on_pushButton_div_clicked();


void on_actionClose_triggered();

public:
    MainWindow(Task* t=nullptr
            ,QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString m_inputValue;
    QString m_operation;


    Task* task;
    void closeTask();
protected:
    void closeEvent(QCloseEvent *event) override;
};
#endif // MAINWINDOW_H



