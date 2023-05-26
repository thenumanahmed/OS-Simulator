/********************************************************************************
** Form generated from reading UI file 'texteditscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITSCREEN_H
#define UI_TEXTEDITSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEditScreen
{
public:
    QAction *actionBack;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuOption;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TextEditScreen)
    {
        if (TextEditScreen->objectName().isEmpty())
            TextEditScreen->setObjectName(QString::fromUtf8("TextEditScreen"));
        TextEditScreen->resize(368, 338);
        actionBack = new QAction(TextEditScreen);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon);
        centralwidget = new QWidget(TextEditScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);

        TextEditScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TextEditScreen);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 368, 22));
        menuOption = new QMenu(menubar);
        menuOption->setObjectName(QString::fromUtf8("menuOption"));
        TextEditScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(TextEditScreen);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TextEditScreen->setStatusBar(statusbar);
        toolBar = new QToolBar(TextEditScreen);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        TextEditScreen->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuOption->menuAction());
        menuOption->addAction(actionBack);
        toolBar->addAction(actionBack);

        retranslateUi(TextEditScreen);

        QMetaObject::connectSlotsByName(TextEditScreen);
    } // setupUi

    void retranslateUi(QMainWindow *TextEditScreen)
    {
        TextEditScreen->setWindowTitle(QApplication::translate("TextEditScreen", "MainWindow", nullptr));
        actionBack->setText(QApplication::translate("TextEditScreen", "Back", nullptr));
#ifndef QT_NO_TOOLTIP
        actionBack->setToolTip(QApplication::translate("TextEditScreen", "Go Back", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionBack->setShortcut(QApplication::translate("TextEditScreen", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
        menuOption->setTitle(QApplication::translate("TextEditScreen", "Option", nullptr));
        toolBar->setWindowTitle(QApplication::translate("TextEditScreen", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextEditScreen: public Ui_TextEditScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITSCREEN_H
