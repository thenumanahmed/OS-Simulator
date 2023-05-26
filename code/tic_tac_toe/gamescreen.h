#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QMainWindow>
#include "../task.h"
namespace Ui
{
    class GameScreen;
}

class GameScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameScreen(QWidget *parent = nullptr,Task* t = nullptr);
    ~GameScreen();

private slots:
    void on_l_player_linkHovered(const QString &link);



private slots:
    void on_b1_clicked();
    void on_b2_clicked();
    void on_b3_clicked();
    void on_b4_clicked();
    void on_b5_clicked();
    void on_b6_clicked();
    void on_b7_clicked();
    void on_b8_clicked();
    void on_b9_clicked();

private slots:
    void on_actionBack_triggered();

private slots:
    void on_actionClose_triggered();

private:
    Ui::GameScreen *ui;

    char arr[9];
    bool player;
    void buttonClick(int);
    void resetGame();
    bool isWin();
    bool isTie();
    void playerTurn();
    void winMessage();
    void tieMessage();
    void setBox(int b, QChar c);
    void setPlayerLabel();
    bool toQuit=true;
    Task *task;
    void closeTask();

protected:
    void closeEvent(QCloseEvent *event) override;
};

#endif // GAMESCREEN_H
