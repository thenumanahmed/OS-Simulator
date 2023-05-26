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
    MainWindow(Task* t, QWidget *parent = nullptr);
    ~MainWindow();
    QString file_path = "";

private slots:
    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionUndo_triggered();
    void on_actionRedo_triggered();
    void on_actionCut_triggered();
    void on_actionCopy_triggered();
    void on_actionPaste_triggered();
    void on_actionInfo_triggered();
    void on_actionSave_triggered();
    void on_actionSaveAs_triggered();

    void on_actionClose_triggered();

private:
    Ui::MainWindow *ui;
    void new_file();
    bool isTextChanged();
    void set_file_path_and_title(QString);
    QString getFileName(QString);

    Task *task;
    void closeTask();

protected:
    void closeEvent(QCloseEvent *event) override;
};
#endif // MAINWINDOW_H
