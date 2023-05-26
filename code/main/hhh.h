#pragma once

#pragma once

#include <cstring>

#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#include <iostream>
#include <semaphore.h>
#include <fcntl.h>

#include <queue>








using namespace std;
class Task;
class TaskObject;
class Scheduling;
class SystemConfigs;
class Shared;

class SystemConfigs
{
    long int RAM;
    int noOfCores;
    long int HDD;
    long int usedHDD;
    long int usedRAM;
    int usedCores;

    // methods
    void getConfigs()
    {
        cout << "Enter the RAM(in GB): ";
        while (RAM < 1)
        {
            cout << "Invalid no of cores, please re enter no of RAM: ";
            cin >> RAM;
        }
        RAM *= 1024; // converted to bytes

        cout << "Enter the HDD(in GB): ";
        while (HDD < 1)
        {
            cout << "Invalid no of cores, please re enter no of HDD: ";
            cin >> HDD;
        }
        HDD *= 1024;

        cout << "Enter the no of cores: ";
        cin >> noOfCores;
        while (noOfCores < 2)
        {
            cout << "Invalid no of cores, please re enter no of cores: ";
            cin >> noOfCores;
        }
    }

public:
    // constructor
    SystemConfigs()
    {
        usedHDD = usedRAM = usedCores = RAM = HDD = noOfCores = 1000;
        // cin.ignore();
        // getConfigs();
    }

    // functions
    long int getusedRAM() { return usedRAM; }
    int getusedCores() { return usedCores; }
    long int getusedHDD() { return usedHDD; }

    bool getResources(Task *task)
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

    bool canExecute(Task *task)
    { // to check before reading to running queue
        if (usedRAM + task->ram > RAM || usedCores + task->noOfcores > noOfCores || usedHDD + task->hard > HDD)
        {
            return true;
        }
        return false;
    }
    void freeResources(Task *task)
    {
        usedCores -= task->noOfcores;
        usedRAM -= task->ram;
        usedHDD -= task->hard;
    }
};

class Scheduling
{
public:
    static queue<Task *> readyQueue;
    static Task *running;
    static void shortTermSchedular();
};
queue<Task *> Scheduling::readyQueue;
Task *Scheduling::running = nullptr;
void Scheduling::shortTermSchedular()
{
    while (true)
    {
        // semaphore wait
        sleep(100);

        if (!readyQueue.empty())
        {
            cout << "Context Switching" << endl;
            if (running == nullptr)
            {
                // no process running and process exist in ready queue

                running = readyQueue.back();
                readyQueue.pop();
                if (running->pid == 9999)
                {
                    // task is closed
                    cout << "Errrorr" << endl;
                    running = nullptr;
                }
                else
                {
                    int r = kill(running->pid, SIGCONT);
                    cout << "running null conitnue " << running->pid << " Result" << ((r == 0) ? "Succes" : "Process not Exist") << endl;
                }
            }
            else
            {

                Task *toPause = running;
                pid_t pid = toPause->pid;

                // get front of queue
                running = readyQueue.front();
                readyQueue.pop();

                if (running->pid != 9999 && kill(running->pid, SIGCONT) == 0)
                {
                    // Process Continue Succefully
                }
                else
                {
                    // Process Not Continue || not exist
                    running->resetTask();
                    running = nullptr;
                }

                if (toPause->pid != 9999 && kill(toPause->pid, SIGSTOP) == 0)
                {
                    // Process succefully Stop
                    readyQueue.push(toPause);
                }
                else
                {
                    // Process Not Stop || not exist
                    toPause->resetTask();
                }
            }
        }
    }
}

class Shared
{
public:
    static TaskObject *shared_tasks[15];

    static bool initialize();

    static void buttonClicked(int index);
};

TaskObject *Shared::shared_tasks[15] = {nullptr};

bool Shared::initialize()
{
    shared_tasks[0] = new TaskObject("./calculator", "cal1", "cal2");
    shared_tasks[1] = new TaskObject("./notepad", "not1", "not2");
    shared_tasks[2] = new TaskObject("./time", "tim1", "time2");
    shared_tasks[3] = new TaskObject("./calender", "clr1", "clr2");
    // shared_tasks[0] = new TaskObject("./calculator", "cal1", "cal2");
    // shared_tasks[0] = new TaskObject("./calculator", "cal1", "cal2");
    // shared_tasks[0] = new TaskObject("./calculator", "cal1", "cal2");
    // shared_tasks[0] = new TaskObject("./calculator", "cal1", "cal2");
    // shared_tasks[0] = new TaskObject("./calculator", "cal1", "cal2");

    return 0;
}

void Shared::buttonClicked(int index)
{
    if (shared_tasks[index]->pid() == 9999)
    {
        // to open: Task not present
        shared_tasks[index]->openTask();
    }
    else if ((kill(shared_tasks[index]->pid(), 0) != 0))
    {
        // To Open: Task was not close properly
        shared_tasks[index]->task->resetTask();
        shared_tasks[index]->openTask();
    }
    else
    {
        // to Close: Task Exist
        shared_tasks[index]->closeTask();
    }
}

class TaskObject
{
public:
    int shm_id;
    Task *task;
    string command;
    sem_t *sem1;
    sem_t *sem2;
    string sem1_str;
    string sem2_str;

    TaskObject(string command, string s1, string s2);
    bool openTask();  // to open task
    bool closeTask(); // to close task
    bool isActive();  // to check process is running or not
    bool isClose();   // to check pid is 0 or not

    pid_t pid() { return task->pid; }
};

TaskObject::TaskObject(string c, string s1, string s2)
{
    command = c;
    shm_id = shmget(IPC_PRIVATE, sizeof(Task), IPC_CREAT | 0666); // Create shared memory segment
    if (shm_id < 0)
    {
        cout << "Shared Memory creating error" << endl;
        exit(1);
    }

    task = reinterpret_cast<Task *>(shmat(shm_id, nullptr, 0)); // Attach the shared memory segment
    if (task == reinterpret_cast<Task *>(-1))
    {
        cout << "Shared Memory Address assigin error" << endl;
        exit(1);
    }

    sem1_str = s1;
    sem2_str = s2;
    sem1 = sem_open(sem1_str.data(), O_CREAT | O_RDWR, 0666, 0);
    if (sem1 == SEM_FAILED)
    {
        cout << "Semaphore 1 creating failed" << endl;
        exit(EXIT_FAILURE);
    }

    sem2 = sem_open(sem2_str.data(), O_CREAT | O_RDWR, 0666, 1);
    if (sem2 == SEM_FAILED)
    {
        cout << "Semaphore 2 creating failed" << endl;
        exit(EXIT_FAILURE);
    }

    task->resetTask();
}

bool TaskObject::openTask()
{
    pid_t pid = fork(); // create a child process using fork()
    if (pid == 0)
    {
        char shm_id_str[20];
        sprintf(shm_id_str, "%d", shm_id);
        cout << command << endl;
        cout << sem1_str << endl;
        cout << sem2_str << endl;
        const char *c = command.c_str();
        const char *s1 = sem1_str.c_str();
        const char *s2 = sem2_str.c_str();
        // execl("./calculator", "calculator", NULL); // c
        // execlp(c, c, shm_id_str, s1, s2, nullptr);
        execlp("/usr/bin/gnome-terminal", "/usr/bin/gnome-terminal", "--", c, shm_id_str, s1, s2, NULL);

        perror("execlp"); // check for errors
        exit(1);
    }
    else if (pid < 0)
    { // check for errors
        perror("fork error");
        exit(1);
    }
    else
    { // in the parent process
        sem_wait(sem1);

        // TODO:  check resources thaan allow it or not
        sem_post(sem2);

        // process is allowed
        Scheduling::readyQueue.push(task);
        return 0;
    }
    return -1;
}

bool TaskObject::closeTask()
{
    if (task->pid == 9999)
        return -1;

    cout << "Kill Start" << endl;
    cout << "Task->pid " << task->pid << "   Going to exit" << endl;
    kill(task->pid, SIGKILL);
    task->pid = 9999;
    task->ram = 0;
    task->hard = 0;
    task->noOfcores = 0;
    memset(task->name, '\0', sizeof(task->name));
    strcpy(task->name, "");
    cout << "Kill End" << endl;

    return 0;
};

bool TaskObject::isActive()
{
    if (task->pid == 9999)
    {
        cout << "Process PID 0 " << endl;
        return 0;
    }
    const int result = kill(task->pid, 0);

    if (result == 0)
    {
        cout << "Process is running" << endl;
        return 1;
    }
    else
    {
        cout << "Process not running" << endl;
        return 0;
    }
}

bool TaskObject::isClose()
{
    return task->pid == 9999;
}

// TASK

class Task
{
public:
    char name[20];
    pid_t pid;
    long int ram;
    long int hard;
    int noOfcores;
    bool allowRun;
    // string sharedMemName;
public:
    Task()
    {
        cout << "Constructor" << endl;
        resetTask();
    }

    Task(const char *n, long int ram, long int hdd, int noOfcores, pid_t pid)
    {
        strcpy(this->name, n);
        this->ram = ram;
        this->hard = hard;
        this->pid = pid;
        this->noOfcores = noOfcores;
        allowRun = false;
    }

    void resetTask()
    {
        strcpy(this->name, "");
        pid = 9999;
        ram = 0;
        hard = 0;
        noOfcores = 0;
        allowRun = false;
    }

    static Task *sharePid(const char *shm_str, const char *s1, const char *s2, const char *n, const int r, const int h, const int c);
};

Task *Task::sharePid(const char *shm_str, const char *s1, const char *s2, const char *n, const int r, const int h, const int c)
{
    int shm_id = atoi(shm_str);                         // convert shm_id argument to integer
    Task *shared_task = (Task *)shmat(shm_id, NULL, 0); // attach the shared memory segment

    if ((intptr_t)shared_task == -1)
    { // check for errors
        perror("shmat");
        exit(1);
    }

    // signal(SIGKILL, sigterm_handler);
    sem_t *sem = sem_open(s1, O_CREAT | O_RDWR, 1);
    sem_t *sem1 = sem_open(s2, O_CREAT | O_RDWR, 0);

    memset(shared_task->name, '\0', sizeof(shared_task->name));
    strcpy(shared_task->name, n);

    shared_task->pid = getpid(); // write process ID to shared memory
    shared_task->ram = r;
    shared_task->hard = h;
    shared_task->noOfcores = c;
    sem_post(sem);
    cout << "Waiting for signal" << endl;
    sem_wait(sem1);

    return shared_task;
}

// is exitable ->> as main program is not exit able
