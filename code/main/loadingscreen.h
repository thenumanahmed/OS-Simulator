#ifndef LOADINGSCREEN_H
#define LOADINGSCREEN_H

#include <QMainWindow>


namespace Ui {
class LoadingScreen;
}

class LoadingScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoadingScreen(QWidget *parent = nullptr,int ram = 1024,int harddisk=10240,int core = 1);
    ~LoadingScreen();


private:
    Ui::LoadingScreen *ui;
    void updateProgressBar();
    void showDesktop();

    int ram;
    int harddisk;
    int core;
};

#endif // LOADINGSCREEN_H
