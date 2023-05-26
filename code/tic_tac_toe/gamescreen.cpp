#include "gamescreen.h"
#include "ui_gamescreen.h"
#include "mainwindow.h"
#include "QMessageBox"
#include <QDebug>

#include <QThread>


#include "../task.h"
#include <QApplication>
#include <QCloseEvent>
void GameScreen::closeTask()
{
    if (task != nullptr)
    {
        task->resetTask();
    }
    QApplication::quit();
}

void GameScreen::closeEvent(QCloseEvent *event)
{
    if(toQuit){
            closeTask();
    }
}

void GameScreen::on_actionClose_triggered()
{
 closeTask();
}

void GameScreen::on_actionBack_triggered()
{
    toQuit=false;
    parentWidget()->show();
    this->close();
}

GameScreen::GameScreen(QWidget *parent,Task* t) : QMainWindow(parent),task(t),
                                          ui(new Ui::GameScreen)
{
    ui->setupUi(this);
    resetGame();
}

GameScreen::~GameScreen()
{
    delete ui;
}




void GameScreen::buttonClick(int index)
{

    if (arr[index] != ' ' || isWin() || isTie())
        return;

    arr[index] = player ? 'O' : 'X';
    setBox(index, player ? 'O' : 'X');

    if (isWin())
    {
        winMessage();


    }
    else if (isTie())
    {
        tieMessage();
    }
    else
    {
        playerTurn(); // Switch to the other player's turn
    }
}


void GameScreen::resetGame()
{
        for (int i = 0; i < 9; i++)
        {
            arr[i] = ' ';
            setBox(i, ' ');
        }
        player = false; // Player 1 starts first
        setPlayerLabel();

}

bool GameScreen::isWin()
{
    // Check rows
    for (int i = 0; i < 9; i += 3)
    {
        if (arr[i] != ' ' && arr[i] == arr[i + 1] && arr[i] == arr[i + 2])
        {
            return true;
        }
    }
    // Check columns
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] != ' ' && arr[i] == arr[i + 3] && arr[i] == arr[i + 6])
        {
            return true;
        }
    }
    // Check diagonals
    if (arr[0] != ' ' && arr[0] == arr[4] && arr[0] == arr[8])
    {
        return true;
    }
    if (arr[2] != ' ' && arr[2] == arr[4] && arr[2] == arr[6])
    {
        return true;
    }
    return false;
}

bool GameScreen::isTie()
{
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] == ' ')
        {
            return false; // Found an empty cell, game is not over
        }
    }
    return true; // All cells are filled, game is a tie
}

void GameScreen::playerTurn()
{
    player = !player; // Switch to the other player's turn
    setPlayerLabel();
}

void GameScreen::winMessage()
{
    // Show a message box to ask the user what to do next
    QMessageBox msgBox;
    msgBox.setText("Do you want to proceed?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int choice = msgBox.exec();
    if (choice == QMessageBox::Yes)
    {
        resetGame();
    }
    else if (choice == QMessageBox::No)
    {
        // Code to execute when the "No" button is clicked
        qDebug() << "User clicked No";
        on_actionBack_triggered();
    }

}
void GameScreen::tieMessage()
{
    // Show a message box to ask the user what to do next
    QMessageBox msgBox;
    msgBox.setText("It's a tie!");
    msgBox.setInformativeText("What would you like to do?");
    msgBox.setStandardButtons(QMessageBox::Reset | QMessageBox::Close);
    int choice = msgBox.exec();
    if (choice == QMessageBox::Reset)
    {
        resetGame();
    }
    else
    {
        on_actionBack_triggered();
    }
}

void GameScreen::on_b1_clicked() { buttonClick(0); }
void GameScreen::on_b2_clicked() { buttonClick(1); }
void GameScreen::on_b3_clicked() { buttonClick(2); }
void GameScreen::on_b4_clicked() { buttonClick(3); }
void GameScreen::on_b5_clicked() { buttonClick(4); }
void GameScreen::on_b6_clicked() { buttonClick(5); }
void GameScreen::on_b7_clicked() { buttonClick(6); }
void GameScreen::on_b8_clicked() { buttonClick(7); }
void GameScreen::on_b9_clicked() { buttonClick(8); }

void GameScreen::on_l_player_linkHovered(const QString &link)
{
}

void GameScreen::setPlayerLabel()
{
    int p = player ? 2 : 1;
    char c = player ? 'O' : 'X';
    QString label = QString("%1 - %2").arg(p).arg(QChar(c));
    ui->l_player->setText(label);
}

void GameScreen::setBox(int b, QChar c)
{
    switch (b + 1)
    {
    case 1:
        ui->b1->setText(c);
        break;
    case 2:
        ui->b2->setText(c);
        break;
    case 3:
        ui->b3->setText(c);
        break;
    case 4:
        ui->b4->setText(c);
        break;
    case 5:
        ui->b5->setText(c);
        break;
    case 6:
        ui->b6->setText(c);
        break;
    case 7:
        ui->b7->setText(c);
        break;
    case 8:
        ui->b8->setText(c);
        break;
    case 9:
        ui->b9->setText(c);
        break;
    default:
        break;
    }
}
