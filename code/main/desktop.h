#ifndef DESKTOP_H
#define DESKTOP_H

#include <QMainWindow>
#include <iostream>
#include "task_object.h"
#include "queue"
#include <vector>




using namespace std;
namespace Ui
{
    class Desktop;
}

class Desktop : public QMainWindow
{
    Q_OBJECT

public:
    explicit Desktop(int c=5, int r=1024,int h=10240,QWidget *parent = nullptr);
    ~Desktop();

protected:
    void closeEvent(QCloseEvent *event);
private slots:

    void updateCurrentTime();
private slots:
    void on_actionShutdown_triggered();

    void on_notepad_clicked();
    void on_text_editor_clicked();
    void on_tic_tac_toe_clicked();
    void on_image_viewer_clicked();
    void on_calculator_clicked();

    void on_create_file_clicked();
    void on_delete_file_clicked();
    void on_copy_file_clicked();
    void on_move_file_clicked();
    void on_check_file_info_clicked();

    void on_file_encryptor_clicked();
    void on_file_decryptor_clicked();
    void on_text_encryptor_clicked();
    void on_text_decryptor_clicked();
    void on_calender_clicked();

//    void on_task_manager_clicked();
    void on_b_time_clicked();








    void on_actionCreate_triggered();

    void on_actionDelete_triggered();

    void on_actionNotepad_triggered();

    void on_actionText_Editor_triggered();

    void on_actionTic_Tac_Toe_triggered();

    void on_actionImage_Viewer_triggered();

    void on_actionCalculator_triggered();

    void on_actionFile_Encoding_triggered();

    void on_actionCopy_triggered();

    void on_actionMove_triggered();

    void on_actionInfo_triggered();

    void on_actionFile_Decryption_triggered();

    void on_actionText_Encryption_triggered();

    void on_actionText_Decryption_triggered();

    void on_actionCalender_triggered();

private:
    Ui::Desktop *ui;
    void runCalculator();

 // Configs
 private:
    long int RAM;
    int noOfCores;
    long int HDD;
    long int usedHDD;
    long int usedRAM;
    int usedCores;

    void systemConfigs(int,int,int);

    void getConfigs();
    long int getusedRAM();
    int getusedCores();
    long int getusedHDD();
    bool getResources(Task *task);
    bool canExecute(Task *task);
    void freeResources(Task *task);

private:
    // Task
    TaskObject* shared_tasks[15];
    bool initializeSharedTasks();
    void buttonClicked(int index);

    void closeAllTask();

private:
    //Schedullar

    void shortTermSchedular();
    vector<Task *> readyQueue;
    vector<Task *>runningQueue;
    void displayTask();

};

#endif // DESKTOP_H
