#include "mainwindow.h"

#include <QApplication>
#include "../task.h"
#include "iostream"

using namespace std;

int main(int argc, char *argv[])
{

    if (argc == 4)
    {
        cout << "Text Encryption" << endl;

        const int ram = 100;
        const int hardisk = 1000;
        const int core = 1;
        const char *name = "Text Encryption";

        Task *st = Task::sharePid(argv[1], argv[2], argv[3], name, ram, hardisk, core);
    }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
