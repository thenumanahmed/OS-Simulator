/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit_input;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_key;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_encrypt;
    QTextEdit *textEdit_output;
    QMenuBar *menubar;
    QMenu *menuOption;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(378, 340);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);\n"
""));

        verticalLayout->addWidget(label);

        textEdit_input = new QTextEdit(centralwidget);
        textEdit_input->setObjectName(QString::fromUtf8("textEdit_input"));

        verticalLayout->addWidget(textEdit_input);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);\n"
""));

        horizontalLayout->addWidget(label_2);

        lineEdit_key = new QLineEdit(centralwidget);
        lineEdit_key->setObjectName(QString::fromUtf8("lineEdit_key"));
        lineEdit_key->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_key);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_encrypt = new QPushButton(centralwidget);
        pushButton_encrypt->setObjectName(QString::fromUtf8("pushButton_encrypt"));
        pushButton_encrypt->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"background-color: rgb(143, 240, 164);\n"
"font-size: 24px;"));

        horizontalLayout->addWidget(pushButton_encrypt);


        verticalLayout->addLayout(horizontalLayout);

        textEdit_output = new QTextEdit(centralwidget);
        textEdit_output->setObjectName(QString::fromUtf8("textEdit_output"));

        verticalLayout->addWidget(textEdit_output);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 378, 22));
        menuOption = new QMenu(menubar);
        menuOption->setObjectName(QString::fromUtf8("menuOption"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(textEdit_input);
        label_2->setBuddy(lineEdit_key);
#endif // QT_NO_SHORTCUT

        menubar->addAction(menuOption->menuAction());
        menuOption->addAction(actionClose);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionClose->setText(QApplication::translate("MainWindow", "Close", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+Esc", nullptr));
#endif // QT_NO_SHORTCUT
        label->setText(QApplication::translate("MainWindow", "<h4>Enter Your Text here : </h4>\n"
"", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<h4>Enter The Key (1-25): </h4>\n"
"", nullptr));
        pushButton_encrypt->setText(QApplication::translate("MainWindow", "Encrypt", nullptr));
        menuOption->setTitle(QApplication::translate("MainWindow", "Option", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
