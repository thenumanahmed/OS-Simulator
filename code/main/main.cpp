#include "mainwindow.h"
#include "desktop.h"
#include "loadingscreen.h"
#include <QApplication>

using namespace std;

void *initializeMidTermSchedular(void *);

int main(int argc, char *argv[])
{
    int noOfCores=5;
    long int RAM=1024;
    long int HDD=10240;
    if(argc==4){
        cout<<"YOUNG OS"<<endl;
        sleep(2);
        noOfCores = atoi(argv[1]);
        RAM = atoi(argv[2]);
        HDD = atoi(argv[3]);
    }

    QApplication a(argc, argv);
    Desktop w(noOfCores,RAM,HDD);
    w.show();

    return a.exec();
}

