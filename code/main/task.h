#pragma once

#include <iostream>

using namespace std;

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
    Task();

    Task(const char *n, long int ram, long int hdd, int noOfcores, pid_t pid);

    void resetTask();

    static Task *sharePid(const char *shm_str, const char *s1, const char *s2, const char *n, const int r, const int h, const int c);
};
