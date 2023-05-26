#pragma once

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <fcntl.h>

#include <sys/types.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#include "task.h"


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
    Task *openTask();  // to open task
    bool closeTask(); // to close task
    bool isActive();  // to check process is running or not
    bool isClose();   // to check pid is 0 or not

    pid_t pid() { return task->pid; }
};
