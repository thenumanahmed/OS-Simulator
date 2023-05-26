/********************************************************************************
** Form generated from reading UI file 'gamescreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESCREEN_H
#define UI_GAMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameScreen
{
public:
    QAction *actionClose;
    QAction *actionBack;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *b4;
    QPushButton *b7;
    QPushButton *b8;
    QPushButton *b6;
    QPushButton *b5;
    QPushButton *b1;
    QPushButton *b9;
    QLabel *l_player_title;
    QLabel *l_player;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *GameScreen)
    {
        if (GameScreen->objectName().isEmpty())
            GameScreen->setObjectName(QString::fromUtf8("GameScreen"));
        GameScreen->resize(346, 423);
        GameScreen->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"   border-image: url(:/res/img/bg) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
"\n"
""));
        actionClose = new QAction(GameScreen);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon);
        actionBack = new QAction(GameScreen);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/img/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon1);
        centralwidget = new QWidget(GameScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        b2 = new QPushButton(centralwidget);
        b2->setObjectName(QString::fromUtf8("b2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(b2->sizePolicy().hasHeightForWidth());
        b2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(45);
        font.setBold(true);
        font.setWeight(75);
        b2->setFont(font);
        b2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"    border-width: 0px 5px 5px 5px;\n"
"}\n"
""));

        gridLayout->addWidget(b2, 1, 1, 1, 1);

        b3 = new QPushButton(centralwidget);
        b3->setObjectName(QString::fromUtf8("b3"));
        sizePolicy.setHeightForWidth(b3->sizePolicy().hasHeightForWidth());
        b3->setSizePolicy(sizePolicy);
        b3->setFont(font);
        b3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"    border-width: 0px 0px 5px 5px;\n"
"}\n"
""));

        gridLayout->addWidget(b3, 1, 2, 1, 1);

        b4 = new QPushButton(centralwidget);
        b4->setObjectName(QString::fromUtf8("b4"));
        sizePolicy.setHeightForWidth(b4->sizePolicy().hasHeightForWidth());
        b4->setSizePolicy(sizePolicy);
        b4->setFont(font);
        b4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"    border-width: 5px 5px 5px 0px;\n"
"}\n"
""));

        gridLayout->addWidget(b4, 2, 0, 1, 1);

        b7 = new QPushButton(centralwidget);
        b7->setObjectName(QString::fromUtf8("b7"));
        sizePolicy.setHeightForWidth(b7->sizePolicy().hasHeightForWidth());
        b7->setSizePolicy(sizePolicy);
        b7->setFont(font);
        b7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"    border-width: 5px 5px 0px 0px;\n"
"}\n"
""));

        gridLayout->addWidget(b7, 3, 0, 1, 1);

        b8 = new QPushButton(centralwidget);
        b8->setObjectName(QString::fromUtf8("b8"));
        sizePolicy.setHeightForWidth(b8->sizePolicy().hasHeightForWidth());
        b8->setSizePolicy(sizePolicy);
        b8->setFont(font);
        b8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"    border-width: 5px 5px 0px 5px;\n"
"}\n"
""));

        gridLayout->addWidget(b8, 3, 1, 1, 1);

        b6 = new QPushButton(centralwidget);
        b6->setObjectName(QString::fromUtf8("b6"));
        sizePolicy.setHeightForWidth(b6->sizePolicy().hasHeightForWidth());
        b6->setSizePolicy(sizePolicy);
        b6->setFont(font);
        b6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"    border-width: 5px 0px 5px 5px;\n"
"}\n"
""));

        gridLayout->addWidget(b6, 2, 2, 1, 1);

        b5 = new QPushButton(centralwidget);
        b5->setObjectName(QString::fromUtf8("b5"));
        sizePolicy.setHeightForWidth(b5->sizePolicy().hasHeightForWidth());
        b5->setSizePolicy(sizePolicy);
        b5->setFont(font);
        b5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"    border-width: 5px 5px 5px 5px;\n"
"}\n"
""));

        gridLayout->addWidget(b5, 2, 1, 1, 1);

        b1 = new QPushButton(centralwidget);
        b1->setObjectName(QString::fromUtf8("b1"));
        sizePolicy.setHeightForWidth(b1->sizePolicy().hasHeightForWidth());
        b1->setSizePolicy(sizePolicy);
        b1->setFont(font);
        b1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"    border-width: 0px 5px 5px 0px;\n"
"}\n"
""));

        gridLayout->addWidget(b1, 1, 0, 1, 1);

        b9 = new QPushButton(centralwidget);
        b9->setObjectName(QString::fromUtf8("b9"));
        sizePolicy.setHeightForWidth(b9->sizePolicy().hasHeightForWidth());
        b9->setSizePolicy(sizePolicy);
        b9->setFont(font);
        b9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"    border-width: 5px 0px 0px 5px;\n"
"}\n"
""));

        gridLayout->addWidget(b9, 3, 2, 1, 1);

        l_player_title = new QLabel(centralwidget);
        l_player_title->setObjectName(QString::fromUtf8("l_player_title"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(l_player_title->sizePolicy().hasHeightForWidth());
        l_player_title->setSizePolicy(sizePolicy1);
        l_player_title->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setPointSize(14);
        l_player_title->setFont(font1);
        l_player_title->setMargin(0);

        gridLayout->addWidget(l_player_title, 4, 0, 1, 1);

        l_player = new QLabel(centralwidget);
        l_player->setObjectName(QString::fromUtf8("l_player"));

        gridLayout->addWidget(l_player, 4, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        GameScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameScreen);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 346, 22));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        GameScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(GameScreen);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GameScreen->setStatusBar(statusbar);
        toolBar = new QToolBar(GameScreen);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        GameScreen->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionClose);
        menuOptions->addAction(actionBack);
        toolBar->addAction(actionClose);
        toolBar->addAction(actionBack);

        retranslateUi(GameScreen);

        QMetaObject::connectSlotsByName(GameScreen);
    } // setupUi

    void retranslateUi(QMainWindow *GameScreen)
    {
        GameScreen->setWindowTitle(QApplication::translate("GameScreen", "TIC TAC TOE", nullptr));
        actionClose->setText(QApplication::translate("GameScreen", "Close", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClose->setShortcut(QApplication::translate("GameScreen", "Ctrl+Esc", nullptr));
#endif // QT_NO_SHORTCUT
        actionBack->setText(QApplication::translate("GameScreen", "Back", nullptr));
#ifndef QT_NO_SHORTCUT
        actionBack->setShortcut(QApplication::translate("GameScreen", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
        b2->setText(QApplication::translate("GameScreen", "X", nullptr));
        b3->setText(QApplication::translate("GameScreen", "X", nullptr));
        b4->setText(QApplication::translate("GameScreen", "O", nullptr));
        b7->setText(QApplication::translate("GameScreen", "O", nullptr));
        b8->setText(QApplication::translate("GameScreen", "O", nullptr));
        b6->setText(QApplication::translate("GameScreen", "O", nullptr));
        b5->setText(QApplication::translate("GameScreen", "O", nullptr));
        b1->setText(QApplication::translate("GameScreen", "X", nullptr));
        b9->setText(QApplication::translate("GameScreen", "O", nullptr));
        l_player_title->setText(QApplication::translate("GameScreen", "Player :", nullptr));
        l_player->setText(QString());
        menuOptions->setTitle(QApplication::translate("GameScreen", "Options", nullptr));
        toolBar->setWindowTitle(QApplication::translate("GameScreen", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameScreen: public Ui_GameScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESCREEN_H
