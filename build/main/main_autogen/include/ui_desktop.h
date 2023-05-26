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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Desktop
{
public:
    QAction *actionShutdown;
    QAction *actionlogout;
    QAction *actionCreate;
    QAction *actionDelete;
    QAction *actionCopy;
    QAction *actionMove;
    QAction *actionInfo;
    QAction *actionNotepad;
    QAction *actionText_Editor;
    QAction *actionTic_Tac_Toe;
    QAction *actionImage_Viewer;
    QAction *actionCalculator;
    QAction *actionCalender;
    QAction *actionFile_Encoding;
    QAction *actionFile_Decryption;
    QAction *actionText_Encryption;
    QAction *actionText_Decryption;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_16;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QPushButton *notepad;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_4;
    QPushButton *text_editor;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_3;
    QPushButton *tic_tac_toe;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QPushButton *image_viewer;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QPushButton *calculator;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_10;
    QPushButton *create_file;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_9;
    QPushButton *delete_file;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_8;
    QPushButton *copy_file;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_7;
    QPushButton *move_file;
    QLabel *label_14;
    QVBoxLayout *verticalLayout_6;
    QPushButton *check_file_info;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_15;
    QPushButton *file_encryptor;
    QLabel *label_16;
    QVBoxLayout *verticalLayout_14;
    QPushButton *file_decryptor;
    QLabel *label_17;
    QVBoxLayout *verticalLayout_13;
    QPushButton *text_decryptor;
    QLabel *label_18;
    QVBoxLayout *verticalLayout_12;
    QPushButton *text_encryptor;
    QLabel *label_19;
    QVBoxLayout *verticalLayout_11;
    QPushButton *calender;
    QLabel *label_20;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_time;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QMenu *menuFile;
    QMenu *menuApp;
    QMenu *menuEncode_Decoding;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Desktop)
    {
        if (Desktop->objectName().isEmpty())
            Desktop->setObjectName(QString::fromUtf8("Desktop"));
        Desktop->resize(630, 601);
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
        actionCreate = new QAction(Desktop);
        actionCreate->setObjectName(QString::fromUtf8("actionCreate"));
        actionDelete = new QAction(Desktop);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionCopy = new QAction(Desktop);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionMove = new QAction(Desktop);
        actionMove->setObjectName(QString::fromUtf8("actionMove"));
        actionInfo = new QAction(Desktop);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        actionNotepad = new QAction(Desktop);
        actionNotepad->setObjectName(QString::fromUtf8("actionNotepad"));
        actionText_Editor = new QAction(Desktop);
        actionText_Editor->setObjectName(QString::fromUtf8("actionText_Editor"));
        actionTic_Tac_Toe = new QAction(Desktop);
        actionTic_Tac_Toe->setObjectName(QString::fromUtf8("actionTic_Tac_Toe"));
        actionImage_Viewer = new QAction(Desktop);
        actionImage_Viewer->setObjectName(QString::fromUtf8("actionImage_Viewer"));
        actionCalculator = new QAction(Desktop);
        actionCalculator->setObjectName(QString::fromUtf8("actionCalculator"));
        actionCalender = new QAction(Desktop);
        actionCalender->setObjectName(QString::fromUtf8("actionCalender"));
        actionFile_Encoding = new QAction(Desktop);
        actionFile_Encoding->setObjectName(QString::fromUtf8("actionFile_Encoding"));
        actionFile_Decryption = new QAction(Desktop);
        actionFile_Decryption->setObjectName(QString::fromUtf8("actionFile_Decryption"));
        actionText_Encryption = new QAction(Desktop);
        actionText_Encryption->setObjectName(QString::fromUtf8("actionText_Encryption"));
        actionText_Decryption = new QAction(Desktop);
        actionText_Decryption->setObjectName(QString::fromUtf8("actionText_Decryption"));
        centralwidget = new QWidget(Desktop);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(50, 50));
        verticalLayout_16 = new QVBoxLayout(centralwidget);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        notepad = new QPushButton(centralwidget);
        notepad->setObjectName(QString::fromUtf8("notepad"));
        notepad->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(notepad->sizePolicy().hasHeightForWidth());
        notepad->setSizePolicy(sizePolicy1);
        notepad->setMinimumSize(QSize(100, 100));
        notepad->setMaximumSize(QSize(100, 100));
        notepad->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/notepad.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_5->addWidget(notepad);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(100, 0));
        label_9->setMaximumSize(QSize(100, 16777215));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_9);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        text_editor = new QPushButton(centralwidget);
        text_editor->setObjectName(QString::fromUtf8("text_editor"));
        text_editor->setEnabled(true);
        sizePolicy1.setHeightForWidth(text_editor->sizePolicy().hasHeightForWidth());
        text_editor->setSizePolicy(sizePolicy1);
        text_editor->setMinimumSize(QSize(100, 100));
        text_editor->setMaximumSize(QSize(100, 100));
        text_editor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/text_editor.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_4->addWidget(text_editor);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(100, 0));
        label_8->setMaximumSize(QSize(100, 16777215));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_8);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tic_tac_toe = new QPushButton(centralwidget);
        tic_tac_toe->setObjectName(QString::fromUtf8("tic_tac_toe"));
        sizePolicy1.setHeightForWidth(tic_tac_toe->sizePolicy().hasHeightForWidth());
        tic_tac_toe->setSizePolicy(sizePolicy1);
        tic_tac_toe->setMinimumSize(QSize(100, 100));
        tic_tac_toe->setMaximumSize(QSize(100, 100));
        tic_tac_toe->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/tictactoe.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_3->addWidget(tic_tac_toe);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(100, 0));
        label_7->setMaximumSize(QSize(100, 16777215));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        image_viewer = new QPushButton(centralwidget);
        image_viewer->setObjectName(QString::fromUtf8("image_viewer"));
        sizePolicy1.setHeightForWidth(image_viewer->sizePolicy().hasHeightForWidth());
        image_viewer->setSizePolicy(sizePolicy1);
        image_viewer->setMinimumSize(QSize(100, 100));
        image_viewer->setMaximumSize(QSize(100, 100));
        image_viewer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/image_viewer.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_2->addWidget(image_viewer);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setMaximumSize(QSize(100, 16777215));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);


        gridLayout->addLayout(verticalLayout_2, 0, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        calculator = new QPushButton(centralwidget);
        calculator->setObjectName(QString::fromUtf8("calculator"));
        sizePolicy1.setHeightForWidth(calculator->sizePolicy().hasHeightForWidth());
        calculator->setSizePolicy(sizePolicy1);
        calculator->setMinimumSize(QSize(100, 100));
        calculator->setMaximumSize(QSize(100, 100));
        calculator->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/calculator.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout->addWidget(calculator);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setMaximumSize(QSize(100, 16777215));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);


        gridLayout->addLayout(verticalLayout, 0, 4, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        create_file = new QPushButton(centralwidget);
        create_file->setObjectName(QString::fromUtf8("create_file"));
        sizePolicy1.setHeightForWidth(create_file->sizePolicy().hasHeightForWidth());
        create_file->setSizePolicy(sizePolicy1);
        create_file->setMinimumSize(QSize(100, 100));
        create_file->setMaximumSize(QSize(100, 100));
        create_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/create_file.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_10->addWidget(create_file);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(100, 0));
        label_10->setMaximumSize(QSize(100, 16777215));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_10);


        gridLayout->addLayout(verticalLayout_10, 1, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        delete_file = new QPushButton(centralwidget);
        delete_file->setObjectName(QString::fromUtf8("delete_file"));
        sizePolicy1.setHeightForWidth(delete_file->sizePolicy().hasHeightForWidth());
        delete_file->setSizePolicy(sizePolicy1);
        delete_file->setMinimumSize(QSize(100, 100));
        delete_file->setMaximumSize(QSize(100, 100));
        delete_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/delete_file.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_9->addWidget(delete_file);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(100, 0));
        label_11->setMaximumSize(QSize(100, 16777215));
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_11);


        gridLayout->addLayout(verticalLayout_9, 1, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        copy_file = new QPushButton(centralwidget);
        copy_file->setObjectName(QString::fromUtf8("copy_file"));
        sizePolicy1.setHeightForWidth(copy_file->sizePolicy().hasHeightForWidth());
        copy_file->setSizePolicy(sizePolicy1);
        copy_file->setMinimumSize(QSize(100, 100));
        copy_file->setMaximumSize(QSize(100, 100));
        copy_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/copy_file.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_8->addWidget(copy_file);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(100, 0));
        label_13->setMaximumSize(QSize(100, 16777215));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_13);


        gridLayout->addLayout(verticalLayout_8, 1, 2, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        move_file = new QPushButton(centralwidget);
        move_file->setObjectName(QString::fromUtf8("move_file"));
        sizePolicy1.setHeightForWidth(move_file->sizePolicy().hasHeightForWidth());
        move_file->setSizePolicy(sizePolicy1);
        move_file->setMinimumSize(QSize(100, 100));
        move_file->setMaximumSize(QSize(100, 100));
        move_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/move_file.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_7->addWidget(move_file);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(100, 0));
        label_14->setMaximumSize(QSize(100, 16777215));
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_14);


        gridLayout->addLayout(verticalLayout_7, 1, 3, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        check_file_info = new QPushButton(centralwidget);
        check_file_info->setObjectName(QString::fromUtf8("check_file_info"));
        sizePolicy1.setHeightForWidth(check_file_info->sizePolicy().hasHeightForWidth());
        check_file_info->setSizePolicy(sizePolicy1);
        check_file_info->setMinimumSize(QSize(100, 100));
        check_file_info->setMaximumSize(QSize(100, 100));
        check_file_info->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/file_info.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_6->addWidget(check_file_info);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(100, 0));
        label_15->setMaximumSize(QSize(100, 16777215));
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_15);


        gridLayout->addLayout(verticalLayout_6, 1, 4, 1, 1);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        file_encryptor = new QPushButton(centralwidget);
        file_encryptor->setObjectName(QString::fromUtf8("file_encryptor"));
        sizePolicy1.setHeightForWidth(file_encryptor->sizePolicy().hasHeightForWidth());
        file_encryptor->setSizePolicy(sizePolicy1);
        file_encryptor->setMinimumSize(QSize(100, 100));
        file_encryptor->setMaximumSize(QSize(100, 100));
        file_encryptor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/file_encryption.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_15->addWidget(file_encryptor);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(100, 0));
        label_16->setMaximumSize(QSize(100, 16777215));
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label_16);


        gridLayout->addLayout(verticalLayout_15, 2, 0, 1, 1);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        file_decryptor = new QPushButton(centralwidget);
        file_decryptor->setObjectName(QString::fromUtf8("file_decryptor"));
        sizePolicy1.setHeightForWidth(file_decryptor->sizePolicy().hasHeightForWidth());
        file_decryptor->setSizePolicy(sizePolicy1);
        file_decryptor->setMinimumSize(QSize(100, 100));
        file_decryptor->setMaximumSize(QSize(100, 100));
        file_decryptor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/file_decryption.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_14->addWidget(file_decryptor);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(100, 0));
        label_17->setMaximumSize(QSize(100, 16777215));
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(label_17);


        gridLayout->addLayout(verticalLayout_14, 2, 1, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        text_decryptor = new QPushButton(centralwidget);
        text_decryptor->setObjectName(QString::fromUtf8("text_decryptor"));
        sizePolicy1.setHeightForWidth(text_decryptor->sizePolicy().hasHeightForWidth());
        text_decryptor->setSizePolicy(sizePolicy1);
        text_decryptor->setMinimumSize(QSize(100, 100));
        text_decryptor->setMaximumSize(QSize(100, 100));
        text_decryptor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/text_decryption.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_13->addWidget(text_decryptor);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(100, 0));
        label_18->setMaximumSize(QSize(100, 16777215));
        label_18->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label_18);


        gridLayout->addLayout(verticalLayout_13, 2, 2, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        text_encryptor = new QPushButton(centralwidget);
        text_encryptor->setObjectName(QString::fromUtf8("text_encryptor"));
        sizePolicy1.setHeightForWidth(text_encryptor->sizePolicy().hasHeightForWidth());
        text_encryptor->setSizePolicy(sizePolicy1);
        text_encryptor->setMinimumSize(QSize(100, 100));
        text_encryptor->setMaximumSize(QSize(100, 100));
        text_encryptor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/text_encryption.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_12->addWidget(text_encryptor);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(100, 0));
        label_19->setMaximumSize(QSize(100, 16777215));
        label_19->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_19);


        gridLayout->addLayout(verticalLayout_12, 2, 3, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        calender = new QPushButton(centralwidget);
        calender->setObjectName(QString::fromUtf8("calender"));
        sizePolicy1.setHeightForWidth(calender->sizePolicy().hasHeightForWidth());
        calender->setSizePolicy(sizePolicy1);
        calender->setMinimumSize(QSize(100, 100));
        calender->setMaximumSize(QSize(100, 100));
        calender->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/img/calender.png) 0 0 0 0 stretch stretch;\n"
"    border: none;\n"
"}\n"
""));

        verticalLayout_11->addWidget(calender);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMinimumSize(QSize(100, 0));
        label_20->setMaximumSize(QSize(100, 16777215));
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_20);


        gridLayout->addLayout(verticalLayout_11, 2, 4, 1, 1);


        verticalLayout_16->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

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

        horizontalLayout->addWidget(b_time);


        verticalLayout_16->addLayout(horizontalLayout);

        Desktop->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Desktop);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 630, 22));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuApp = new QMenu(menubar);
        menuApp->setObjectName(QString::fromUtf8("menuApp"));
        menuEncode_Decoding = new QMenu(menubar);
        menuEncode_Decoding->setObjectName(QString::fromUtf8("menuEncode_Decoding"));
        Desktop->setMenuBar(menubar);
        statusbar = new QStatusBar(Desktop);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Desktop->setStatusBar(statusbar);
        toolBar = new QToolBar(Desktop);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Desktop->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuApp->menuAction());
        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEncode_Decoding->menuAction());
        menuOptions->addAction(actionShutdown);
        menuFile->addAction(actionCreate);
        menuFile->addAction(actionDelete);
        menuFile->addAction(actionCopy);
        menuFile->addAction(actionMove);
        menuFile->addAction(actionInfo);
        menuApp->addAction(actionNotepad);
        menuApp->addAction(actionText_Editor);
        menuApp->addAction(actionTic_Tac_Toe);
        menuApp->addAction(actionImage_Viewer);
        menuApp->addAction(actionCalculator);
        menuApp->addAction(actionCalender);
        menuEncode_Decoding->addAction(actionFile_Encoding);
        menuEncode_Decoding->addAction(actionFile_Decryption);
        menuEncode_Decoding->addAction(actionText_Encryption);
        menuEncode_Decoding->addAction(actionText_Decryption);
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
        actionCreate->setText(QApplication::translate("Desktop", "Create", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCreate->setShortcut(QApplication::translate("Desktop", "Ctrl+6", nullptr));
#endif // QT_NO_SHORTCUT
        actionDelete->setText(QApplication::translate("Desktop", "Delete", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDelete->setShortcut(QApplication::translate("Desktop", "Ctrl+7", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("Desktop", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("Desktop", "Ctrl+8", nullptr));
#endif // QT_NO_SHORTCUT
        actionMove->setText(QApplication::translate("Desktop", "Move", nullptr));
#ifndef QT_NO_SHORTCUT
        actionMove->setShortcut(QApplication::translate("Desktop", "Ctrl+9", nullptr));
#endif // QT_NO_SHORTCUT
        actionInfo->setText(QApplication::translate("Desktop", "Info", nullptr));
#ifndef QT_NO_SHORTCUT
        actionInfo->setShortcut(QApplication::translate("Desktop", "Ctrl+0", nullptr));
#endif // QT_NO_SHORTCUT
        actionNotepad->setText(QApplication::translate("Desktop", "Notepad", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNotepad->setShortcut(QApplication::translate("Desktop", "Ctrl+1", nullptr));
#endif // QT_NO_SHORTCUT
        actionText_Editor->setText(QApplication::translate("Desktop", "Text Editor", nullptr));
#ifndef QT_NO_SHORTCUT
        actionText_Editor->setShortcut(QApplication::translate("Desktop", "Ctrl+2", nullptr));
#endif // QT_NO_SHORTCUT
        actionTic_Tac_Toe->setText(QApplication::translate("Desktop", "Tic Tac Toe", nullptr));
#ifndef QT_NO_SHORTCUT
        actionTic_Tac_Toe->setShortcut(QApplication::translate("Desktop", "Ctrl+3", nullptr));
#endif // QT_NO_SHORTCUT
        actionImage_Viewer->setText(QApplication::translate("Desktop", "Image Viewer", nullptr));
#ifndef QT_NO_SHORTCUT
        actionImage_Viewer->setShortcut(QApplication::translate("Desktop", "Ctrl+4", nullptr));
#endif // QT_NO_SHORTCUT
        actionCalculator->setText(QApplication::translate("Desktop", "Calculator", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCalculator->setShortcut(QApplication::translate("Desktop", "Ctrl+5", nullptr));
#endif // QT_NO_SHORTCUT
        actionCalender->setText(QApplication::translate("Desktop", "Calender", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCalender->setShortcut(QApplication::translate("Desktop", "Ctrl+T", nullptr));
#endif // QT_NO_SHORTCUT
        actionFile_Encoding->setText(QApplication::translate("Desktop", "File Encryption", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFile_Encoding->setShortcut(QApplication::translate("Desktop", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionFile_Decryption->setText(QApplication::translate("Desktop", "File Decryption", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFile_Decryption->setShortcut(QApplication::translate("Desktop", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionText_Encryption->setText(QApplication::translate("Desktop", "Text Encryption", nullptr));
#ifndef QT_NO_SHORTCUT
        actionText_Encryption->setShortcut(QApplication::translate("Desktop", "Ctrl+E", nullptr));
#endif // QT_NO_SHORTCUT
        actionText_Decryption->setText(QApplication::translate("Desktop", "Text Decryption", nullptr));
#ifndef QT_NO_SHORTCUT
        actionText_Decryption->setShortcut(QApplication::translate("Desktop", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        notepad->setText(QString());
        label_9->setText(QApplication::translate("Desktop", "Notepad", nullptr));
        text_editor->setText(QString());
        label_8->setText(QApplication::translate("Desktop", "Text Editor", nullptr));
        tic_tac_toe->setText(QString());
        label_7->setText(QApplication::translate("Desktop", "Tic Tac Toe", nullptr));
        image_viewer->setText(QString());
        label_6->setText(QApplication::translate("Desktop", "Image Viewer", nullptr));
        calculator->setText(QString());
        label_5->setText(QApplication::translate("Desktop", "Calculator", nullptr));
        create_file->setText(QString());
        label_10->setText(QApplication::translate("Desktop", "Create File", nullptr));
        delete_file->setText(QString());
        label_11->setText(QApplication::translate("Desktop", "Delete File", nullptr));
        copy_file->setText(QString());
        label_13->setText(QApplication::translate("Desktop", "Copy File", nullptr));
        move_file->setText(QString());
        label_14->setText(QApplication::translate("Desktop", "Move File", nullptr));
        check_file_info->setText(QString());
        label_15->setText(QApplication::translate("Desktop", "File Info", nullptr));
        file_encryptor->setText(QString());
        label_16->setText(QApplication::translate("Desktop", "Encrypt File", nullptr));
        file_decryptor->setText(QString());
        label_17->setText(QApplication::translate("Desktop", "Decrypt File", nullptr));
        text_decryptor->setText(QString());
        label_18->setText(QApplication::translate("Desktop", "Encrypt Text", nullptr));
        text_encryptor->setText(QString());
        label_19->setText(QApplication::translate("Desktop", "Decrypt Text", nullptr));
        calender->setText(QString());
        label_20->setText(QApplication::translate("Desktop", "Calendar", nullptr));
        b_time->setText(QApplication::translate("Desktop", "11:56 AM\n"
"4/29/2023", nullptr));
        menuOptions->setTitle(QApplication::translate("Desktop", "Options", nullptr));
        menuFile->setTitle(QApplication::translate("Desktop", "File", nullptr));
        menuApp->setTitle(QApplication::translate("Desktop", "App", nullptr));
        menuEncode_Decoding->setTitle(QApplication::translate("Desktop", "Encode/Decoding", nullptr));
        toolBar->setWindowTitle(QApplication::translate("Desktop", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Desktop: public Ui_Desktop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOP_H
