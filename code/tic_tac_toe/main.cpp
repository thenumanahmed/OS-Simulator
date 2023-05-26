#include "mainwindow.h"
#include <QApplication>

#include "../task.h";
int main(int argc, char *argv[])
{
    Task *t;
    if (argc == 4)
    {
        const int ram = 100;
        const int hardisk = 1000;
        const int core = 1;
        const char *name = "Tic Tac Toe";

        t = Task::sharePid(argv[1], argv[2], argv[3], name, ram, hardisk, core);
    }

    QApplication a(argc, argv);
    MainWindow w(t);
    w.show();
    return a.exec();
}
