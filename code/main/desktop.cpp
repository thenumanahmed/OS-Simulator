#include "desktop.h"
#include "ui_desktop.h"

#include <iostream>
#include <QThread>
#include <QTimer>
#include <QDateTime>
#include <chrono>
#include <vector>
#include "task_object.h"
#include <cstdlib>

#include "QDebug"
using namespace std;

Desktop::Desktop(int c, int r, int h,QWidget *parent) : QMainWindow(parent),noOfCores(c),RAM(r),HDD(h),
    ui(new Ui::Desktop)
{
    ui->setupUi(this);
    initializeSharedTasks();
    systemConfigs(r, h, c);

    // Timmer Secdullar
    QTimer *timer = new QTimer();
    connect(timer, &QTimer::timeout, this, &Desktop::updateCurrentTime);
    timer->start(1000);

    // Task Scehdullar
    QThread *thread = new QThread();
    QObject::connect(thread, &QThread::started, [=]()
    { shortTermSchedular(); });
    thread->start();
}

Desktop::~Desktop()
{
    delete ui;
}

void Desktop::on_notepad_clicked() { buttonClicked(0); }
void Desktop::on_text_editor_clicked() { buttonClicked(1); }
void Desktop::on_tic_tac_toe_clicked() { buttonClicked(2); }
void Desktop::on_image_viewer_clicked() { buttonClicked(3); }
void Desktop::on_calculator_clicked() { buttonClicked(4); }

void Desktop::on_create_file_clicked() { buttonClicked(5); }
void Desktop::on_delete_file_clicked() { buttonClicked(6); }
void Desktop::on_copy_file_clicked() { buttonClicked(7); }
void Desktop::on_move_file_clicked() { buttonClicked(8); }
void Desktop::on_check_file_info_clicked() { buttonClicked(9); }

void Desktop::on_file_encryptor_clicked() { buttonClicked(10); }
void Desktop::on_file_decryptor_clicked() { buttonClicked(11); }
void Desktop::on_text_encryptor_clicked() { buttonClicked(12); }
void Desktop::on_text_decryptor_clicked() { buttonClicked(13); }
void Desktop::on_calender_clicked() { buttonClicked(14); }

// void Desktop::on_task_manager_clicked() { buttonClicked(15); }

void Desktop::on_actionShutdown_triggered()
{
    closeAllTask();
}

void Desktop::closeEvent(QCloseEvent *event)
{
    closeAllTask();
}



void Desktop::updateCurrentTime()
{
    ui->b_time->setText(QDateTime::currentDateTime().toString("h:mm:ss AP\nM/d/yyyy"));
}

// TASK
bool Desktop::initializeSharedTasks()
{
    shared_tasks[0] = new TaskObject("./obj/notepad", "not1", "not2");
    shared_tasks[1] = new TaskObject("./obj/text_editor", "txte1", "txte2");
    shared_tasks[2] = new TaskObject("./obj/tic_tac_toe", "ttt1", "ttt2");
    shared_tasks[3] = new TaskObject("./obj/image_viewer", "img1", "img2");
    shared_tasks[4] = new TaskObject("./obj/calculator", "cal1", "cal2");
    shared_tasks[5] = new TaskObject("./obj/make_file", "maf1", "maf2");
    shared_tasks[6] = new TaskObject("./obj/delete_file", "df1", "df2");
    shared_tasks[7] = new TaskObject("./obj/copy_file", "cf1", "cf2");
    shared_tasks[8] = new TaskObject("./obj/move_file", "mof1", "mof2");
    shared_tasks[9] = new TaskObject("./obj/file_info", "fi1", "fi2");
    shared_tasks[10] = new TaskObject("./obj/file_encryption", "fe1", "fe2");
    shared_tasks[11] = new TaskObject("./obj/file_decryption", "fd1", "fd2");
    shared_tasks[12] = new TaskObject("./obj/text_encryption", "te1", "te2");
    shared_tasks[13] = new TaskObject("./obj/text_decryption", "td1", "td2");
    shared_tasks[14] = new TaskObject("./obj/calendar", "cdr1", "cdr2");
    //    shared_tasks[15] = new TaskObject("./obj/task_manager", "tm1", "tm2");

    return 0;
}

void Desktop::closeAllTask(){
    for(int i =0; i<15;i++){
        shared_tasks[i]->closeTask();
    }
    exit(0);
}

void Desktop::displayTask(){
    system("clear");
    cout<<"Pause Queue: "<<readyQueue.size()
       <<"    Running Queue: "<<runningQueue.size()<<endl;

    for(int i=0;i<15;i++){
        cout<<i+1<<": "<<shared_tasks[i]->command
           <<"    "<<(shared_tasks[i]->pid()==9999?"Not Running":"Running")<<endl;
    }
}

void Desktop::buttonClicked(int index)
{
    //    cout << "HI in button clicked" << endl;
    if (shared_tasks[index]->pid() == 9999)
    {
        // to open: Task not present
        Task *readyTask = shared_tasks[index]->openTask();
        if (kill(readyTask->pid, SIGSTOP) == 0)
        {
            //            cout << "PROCESS STOP SEND TO READY QUEUE" << endl;
            readyQueue.push_back(readyTask);
        }
    }
    else if ((kill(shared_tasks[index]->pid(), 0) != 0))
    {
        // To Open: Task was not close properly
        shared_tasks[index]->task->resetTask();

        Task *readyTask = shared_tasks[index]->openTask();

        readyQueue.push_back(readyTask);
    }
    else
    {
        // to Close: Task Exist
        shared_tasks[index]->closeTask();
    }
}

// config
void Desktop::systemConfigs(int r, int h, int c)
{
    RAM = (r > 1024) ? r : 1024;
    HDD = (h > 10240) ? h : 10240;
    noOfCores = (c > 2) ? c : 2;

    usedCores = 0;
    usedRAM = 0;
    usedHDD = 0;
}
bool Desktop::getResources(Task *task)
{ // to check before adding in ready queue
    if (task->ram > RAM || task->noOfcores > noOfCores || task->hard > HDD)
    {
        return false;
    }
    usedCores += task->noOfcores;
    usedRAM += task->ram;
    usedHDD += task->hard;
    return true;
}
bool Desktop::canExecute(Task *task)
{ // to check before reading to running queue
    if (usedRAM + task->ram > RAM || usedCores + task->noOfcores > noOfCores || usedHDD + task->hard > HDD)
    {
        return true;
    }
    return false;
}
void Desktop::freeResources(Task *task)
{
    usedCores -= task->noOfcores;
    usedRAM -= task->ram;
    usedHDD -= task->hard;
}

// Scedeullar

void Desktop::shortTermSchedular()
{
    while (true)
    {
        // semaphore wait
        // cout<<"scheduling "<<endl;
        QThread::msleep(100);
        if (readyQueue.empty() && runningQueue.empty())
        {
            // both are empty no task

            // nothing to do
            //            cout << "Both empty" << endl;
        }
        else if (!readyQueue.empty() && runningQueue.size() < noOfCores)
        {
            // accessing first task from ready queue
            Task *toRun = readyQueue.front();
            readyQueue.erase(readyQueue.begin());

            // running the task
            runningQueue.push_back(toRun);
            kill(toRun->pid, SIGCONT);
            //            cout << "Running task with pid : " << toRun->pid << endl;

            //            cout << "!ready but run<core" << endl;
        }
        else if (!readyQueue.empty() && runningQueue.size() >= noOfCores)
        {
            // accessing the task to pause
            //            cout << "!ready but run         >         core" << endl;

            Task *toPause = runningQueue.front();
            runningQueue.erase(runningQueue.begin());

            // accessing the task to run
            Task *toRun = readyQueue.front();
            readyQueue.erase(readyQueue.begin());

            if (toRun->pid != 9999 && kill(toRun->pid, SIGCONT) == 0)
            {
                // Process is existing in memory
                runningQueue.push_back(toRun);
                //                cout << "Running task with pid : " << toRun->pid << endl;
            }
            else
            { // Process don't exist in memory (is killed)
                //                cout << "Task killed. with pid: " << toRun->pid << endl;
                toRun->resetTask();
            }

            if (toPause->pid != 9999 && kill(toPause->pid, SIGCONT) == 0)
            {
                // Process is existing in memory
                kill(toPause->pid, SIGSTOP);
                //                cout << "Paused task with pid : " << toRun->pid << endl;

                readyQueue.push_back(toPause);
            }
            else
            { // Process don't exist in memory (is killed)
                //                cout << "Task killed with pid: " << toPause->pid << endl;
                toPause->resetTask();
            }
        }

        // check if any task in running is killed through terminal
        if (!runningQueue.empty())
        {
            for (auto it = runningQueue.begin(); it != runningQueue.end(); it++)
            {

                if (kill((*it)->pid, SIGCONT) != 0)
                {
                    //                    cout << "Process with pid " << (*it)->pid << " was killed" << endl;
                    (*it)->resetTask();
                    runningQueue.erase(it); // removing from running queue
                    break;
                }
            }
        }
        displayTask();
    }
}


void Desktop::on_b_time_clicked()
{
}




void Desktop::on_actionNotepad_triggered()
{
    buttonClicked(0);
}


void Desktop::on_actionText_Editor_triggered()
{
    buttonClicked(1);
}


void Desktop::on_actionTic_Tac_Toe_triggered()
{
    buttonClicked(2);
}


void Desktop::on_actionImage_Viewer_triggered()
{
    buttonClicked(3);
}


void Desktop::on_actionCalculator_triggered()
{
    buttonClicked(4);
}

void Desktop::on_actionCreate_triggered()
{
    buttonClicked(5);
}


void Desktop::on_actionDelete_triggered()
{
    buttonClicked(6);
}




void Desktop::on_actionCopy_triggered()
{
    buttonClicked(7);
}


void Desktop::on_actionMove_triggered()
{
    buttonClicked(8);
}


void Desktop::on_actionInfo_triggered()
{
    buttonClicked(9);
}

void Desktop::on_actionFile_Encoding_triggered()
{
    buttonClicked(10);
}

void Desktop::on_actionFile_Decryption_triggered()
{
    buttonClicked(11);
}


void Desktop::on_actionText_Encryption_triggered()
{
    buttonClicked(12);
}


void Desktop::on_actionText_Decryption_triggered()
{
    buttonClicked(13);
}


void Desktop::on_actionCalender_triggered()
{
    buttonClicked(14);
}

