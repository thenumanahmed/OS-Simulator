/********************************************************************************
** Form generated from reading UI file 'desktop.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESKTOP_H
#define UI_DESKTOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Desktop
{
public:
    QAction *actionShutdown;
    QAction *actionlogout;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *file_decryptor;
    QPushButton *text_decryptor;
    QPushButton *calculator;
    QPushButton *tic_tac_toe;
    QPushButton *image_viewer;
    QPushButton *file_encryptor;
    QPushButton *notepad;
    QPushButton *calender;
    QPushButton *text_editor;
    QPushButton *text_encryptor;
    QPushButton *b_time;
    QPushButton *create_file;
    QPushButton *check_file_info;
    QPushButton *move_file;
    QPushButton *copy_file;
    QPushButton *delete_file;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Desktop)
    {
        if (Desktop->objectName().isEmpty())
            Desktop->setObjectName(QString::fromUtf8("Desktop"));
        Desktop->resize(336, 392);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Desktop->sizePolicy().hasHeightForWidth());
        Desktop->setSizePolicy(sizePolicy);
        actionShutdown = new QAction(Desktop);
        actionShutdown->setObjectName(QString::fromUtf8("actionShutdown"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/shutdown.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShutdown->setIcon(icon);
        actionlogout = new QAction(Desktop);
        actionlogout->setObjectName(QString::fromUtf8("actionlogout"));
        centralwidget = new QWidget(Desktop);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        file_decryptor = new QPushButton(centralwidget);
        file_decryptor->setObjectName(QString::fromUtf8("file_decryptor"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(file_decryptor->sizePolicy().hasHeightForWidth());
        file_decryptor->setSizePolicy(sizePolicy1);
        file_decryptor->setMinimumSize(QSize(50, 50));
        file_decryptor->setMaximumSize(QSize(200, 200));
        file_decryptor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/file_decryption.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(file_decryptor, 3, 2, 1, 1);

        text_decryptor = new QPushButton(centralwidget);
        text_decryptor->setObjectName(QString::fromUtf8("text_decryptor"));
        sizePolicy1.setHeightForWidth(text_decryptor->sizePolicy().hasHeightForWidth());
        text_decryptor->setSizePolicy(sizePolicy1);
        text_decryptor->setMinimumSize(QSize(50, 50));
        text_decryptor->setMaximumSize(QSize(200, 200));
        text_decryptor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/text_decryption.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(text_decryptor, 3, 4, 1, 1);

        calculator = new QPushButton(centralwidget);
        calculator->setObjectName(QString::fromUtf8("calculator"));
        sizePolicy1.setHeightForWidth(calculator->sizePolicy().hasHeightForWidth());
        calculator->setSizePolicy(sizePolicy1);
        calculator->setMinimumSize(QSize(50, 50));
        calculator->setMaximumSize(QSize(200, 200));
        calculator->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/calculator.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(calculator, 0, 5, 1, 1);

        tic_tac_toe = new QPushButton(centralwidget);
        tic_tac_toe->setObjectName(QString::fromUtf8("tic_tac_toe"));
        sizePolicy1.setHeightForWidth(tic_tac_toe->sizePolicy().hasHeightForWidth());
        tic_tac_toe->setSizePolicy(sizePolicy1);
        tic_tac_toe->setMinimumSize(QSize(50, 50));
        tic_tac_toe->setMaximumSize(QSize(200, 200));
        tic_tac_toe->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/tictactoe.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(tic_tac_toe, 0, 3, 1, 1);

        image_viewer = new QPushButton(centralwidget);
        image_viewer->setObjectName(QString::fromUtf8("image_viewer"));
        sizePolicy1.setHeightForWidth(image_viewer->sizePolicy().hasHeightForWidth());
        image_viewer->setSizePolicy(sizePolicy1);
        image_viewer->setMinimumSize(QSize(50, 50));
        image_viewer->setMaximumSize(QSize(200, 200));
        image_viewer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/image_viewer.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(image_viewer, 0, 4, 1, 1);

        file_encryptor = new QPushButton(centralwidget);
        file_encryptor->setObjectName(QString::fromUtf8("file_encryptor"));
        sizePolicy1.setHeightForWidth(file_encryptor->sizePolicy().hasHeightForWidth());
        file_encryptor->setSizePolicy(sizePolicy1);
        file_encryptor->setMinimumSize(QSize(50, 50));
        file_encryptor->setMaximumSize(QSize(200, 200));
        file_encryptor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/file_encryption.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(file_encryptor, 3, 0, 1, 1);

        notepad = new QPushButton(centralwidget);
        notepad->setObjectName(QString::fromUtf8("notepad"));
        notepad->setEnabled(true);
        sizePolicy1.setHeightForWidth(notepad->sizePolicy().hasHeightForWidth());
        notepad->setSizePolicy(sizePolicy1);
        notepad->setMinimumSize(QSize(50, 50));
        notepad->setMaximumSize(QSize(200, 200));
        notepad->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/notepad.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(notepad, 0, 0, 1, 1);

        calender = new QPushButton(centralwidget);
        calender->setObjectName(QString::fromUtf8("calender"));
        sizePolicy1.setHeightForWidth(calender->sizePolicy().hasHeightForWidth());
        calender->setSizePolicy(sizePolicy1);
        calender->setMinimumSize(QSize(50, 50));
        calender->setMaximumSize(QSize(200, 200));
        calender->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/calender.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(calender, 3, 5, 1, 1);

        text_editor = new QPushButton(centralwidget);
        text_editor->setObjectName(QString::fromUtf8("text_editor"));
        text_editor->setEnabled(true);
        sizePolicy1.setHeightForWidth(text_editor->sizePolicy().hasHeightForWidth());
        text_editor->setSizePolicy(sizePolicy1);
        text_editor->setMinimumSize(QSize(50, 50));
        text_editor->setMaximumSize(QSize(200, 200));
        text_editor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/text_editor.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(text_editor, 0, 2, 1, 1);

        text_encryptor = new QPushButton(centralwidget);
        text_encryptor->setObjectName(QString::fromUtf8("text_encryptor"));
        sizePolicy1.setHeightForWidth(text_encryptor->sizePolicy().hasHeightForWidth());
        text_encryptor->setSizePolicy(sizePolicy1);
        text_encryptor->setMinimumSize(QSize(50, 50));
        text_encryptor->setMaximumSize(QSize(200, 200));
        text_encryptor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/text_encryption.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(text_encryptor, 3, 3, 1, 1);

        b_time = new QPushButton(centralwidget);
        b_time->setObjectName(QString::fromUtf8("b_time"));
        sizePolicy1.setHeightForWidth(b_time->sizePolicy().hasHeightForWidth());
        b_time->setSizePolicy(sizePolicy1);
        b_time->setMinimumSize(QSize(50, 50));
        b_time->setMaximumSize(QSize(200, 200));
        b_time->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(b_time, 4, 4, 1, 2);

        create_file = new QPushButton(centralwidget);
        create_file->setObjectName(QString::fromUtf8("create_file"));
        sizePolicy1.setHeightForWidth(create_file->sizePolicy().hasHeightForWidth());
        create_file->setSizePolicy(sizePolicy1);
        create_file->setMinimumSize(QSize(50, 50));
        create_file->setMaximumSize(QSize(200, 200));
        create_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/create_file.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(create_file, 1, 0, 1, 1);

        check_file_info = new QPushButton(centralwidget);
        check_file_info->setObjectName(QString::fromUtf8("check_file_info"));
        sizePolicy1.setHeightForWidth(check_file_info->sizePolicy().hasHeightForWidth());
        check_file_info->setSizePolicy(sizePolicy1);
        check_file_info->setMinimumSize(QSize(50, 50));
        check_file_info->setMaximumSize(QSize(200, 200));
        check_file_info->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/file_info.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(check_file_info, 1, 5, 1, 1);

        move_file = new QPushButton(centralwidget);
        move_file->setObjectName(QString::fromUtf8("move_file"));
        sizePolicy1.setHeightForWidth(move_file->sizePolicy().hasHeightForWidth());
        move_file->setSizePolicy(sizePolicy1);
        move_file->setMinimumSize(QSize(50, 50));
        move_file->setMaximumSize(QSize(200, 200));
        move_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/move_file.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(move_file, 1, 4, 1, 1);

        copy_file = new QPushButton(centralwidget);
        copy_file->setObjectName(QString::fromUtf8("copy_file"));
        sizePolicy1.setHeightForWidth(copy_file->sizePolicy().hasHeightForWidth());
        copy_file->setSizePolicy(sizePolicy1);
        copy_file->setMinimumSize(QSize(50, 50));
        copy_file->setMaximumSize(QSize(200, 200));
        copy_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/copy_file.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(copy_file, 1, 3, 1, 1);

        delete_file = new QPushButton(centralwidget);
        delete_file->setObjectName(QString::fromUtf8("delete_file"));
        sizePolicy1.setHeightForWidth(delete_file->sizePolicy().hasHeightForWidth());
        delete_file->setSizePolicy(sizePolicy1);
        delete_file->setMinimumSize(QSize(50, 50));
        delete_file->setMaximumSize(QSize(200, 200));
        delete_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/delete_file.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        gridLayout->addWidget(delete_file, 1, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        Desktop->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Desktop);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 336, 22));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        Desktop->setMenuBar(menubar);
        statusbar = new QStatusBar(Desktop);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Desktop->setStatusBar(statusbar);
        toolBar = new QToolBar(Desktop);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Desktop->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionShutdown);
        toolBar->addAction(actionShutdown);

        retranslateUi(Desktop);

        QMetaObject::connectSlotsByName(Desktop);
    } // setupUi

    void retranslateUi(QMainWindow *Desktop)
    {
        Desktop->setWindowTitle(QApplication::translate("Desktop", "MainWindow", nullptr));
        actionShutdown->setText(QApplication::translate("Desktop", "Shutdown", nullptr));
#ifndef QT_NO_SHORTCUT
        actionShutdown->setShortcut(QApplication::translate("Desktop", "Ctrl+Esc", nullptr));
#endif // QT_NO_SHORTCUT
        actionlogout->setText(QApplication::translate("Desktop", "logout", nullptr));
        file_decryptor->setText(QString());
        text_decryptor->setText(QString());
        calculator->setText(QString());
        tic_tac_toe->setText(QString());
        image_viewer->setText(QString());
        file_encryptor->setText(QString());
        notepad->setText(QString());
        calender->setText(QString());
        text_editor->setText(QString());
        text_encryptor->setText(QString());
        b_time->setText(QApplication::translate("Desktop", "11:56 AM\n"
"4/29/2023", nullptr));
        create_file->setText(QString());
        check_file_info->setText(QString());
        move_file->setText(QString());
        copy_file->setText(QString());
        delete_file->setText(QString());
        menuOptions->setTitle(QApplication::translate("Desktop", "Options", nullptr));
        toolBar->setWindowTitle(QApplication::translate("Desktop", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Desktop: public Ui_Desktop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOP_H
