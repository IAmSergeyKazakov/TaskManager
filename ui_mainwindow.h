/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QLabel *label_35;
    QLabel *label_3;
    QLineEdit *lineEdit_name_onEntrance;
    QLabel *label;
    QPushButton *pushButton_Entrance_onEntrance;
    QLabel *label_2;
    QPushButton *pushButton_registration_onEntrance;
    QLineEdit *lineEdit_password_onEntrance;
    QWidget *page_2;
    QLabel *label_71;
    QLabel *label_72;
    QPushButton *pushButton_BackToEntrance;
    QLineEdit *lineEdit_Name_onRegistration;
    QLabel *label_73;
    QLineEdit *lineEdit_Password_onRegistration;
    QLineEdit *lineEdit_ConfirmPassword_onRegistration;
    QLabel *label_74;
    QLabel *label_75;
    QPushButton *pushButton_CreateAcc_onRegistration;
    QWidget *page_3;
    QTableView *tableView_allTasks_onMain;
    QLabel *label_9;
    QPushButton *pushButton_createTask_onMain;
    QPlainTextEdit *plainTextEdit_message_onMain;
    QTableView *tableView_messages;
    QPushButton *pushButton_sendMessage_onMain;
    QLabel *label_currentTask_onMain;
    QPushButton *pushButton_aboutTask_onMain;
    QPushButton *pushButton_addPerformers_onMain;
    QCheckBox *checkBox_isTaskCompleted_onMain;
    QPushButton *pushButton_settings_onMain;
    QLabel *label_currentTask_onMain_2;
    QLineEdit *lineEdit_chatFilter_onMain;
    QComboBox *comboBox_selectChatFilter_onMain;
    QPushButton *pushButton_refreshChat_onMain;
    QPushButton *pushButton_userCompletedTasks_onSettings;
    QLabel *label_34;
    QCheckBox *checkBox_onlyCompletedTasksFilter_onMain;
    QLabel *label_18;
    QCheckBox *checkBox_onlyNotCompletedTasksFilter_onMain;
    QCheckBox *checkBox_onlyUsersTasks;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_36;
    QLabel *label_selectChatHint_onMain;
    QWidget *page_4;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_findIDResult_onNewTask;
    QPushButton *pushButton_createTask_onNewTask;
    QLabel *label_19;
    QLineEdit *lineEdit_findUserIDFilter_onNewTask;
    QLineEdit *lineEdit_taskTitle_onNewTask;
    QPushButton *pushButton_backToMain_onNewTask;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_11;
    QPushButton *pushButton_findUserIDFilter_onNewTask;
    QPlainTextEdit *plainTextEdit_taskDescription_onNewTask;
    QLineEdit *lineEdit_performersID_onNewTask;
    QWidget *page_5;
    QLabel *label_6;
    QCheckBox *checkBox_completeTheTask_onAboutTask;
    QLabel *label_14;
    QTableView *tableView_completedTaskPerformers_onAboutTask;
    QPushButton *pushButton_saveTaskDescription_onAboutTask;
    QTableView *tableView_allTaskPerformers_onAboutTask;
    QLabel *label_8;
    QLabel *label_taskTitle_onAboutTask;
    QLabel *label_personalTask_onAboutTask;
    QPlainTextEdit *plainTextEdit_personalTask_onAboutTask;
    QLabel *label_bossName_onAboutTask;
    QPlainTextEdit *plainTextEdit_taskDescription_onAboutTask;
    QPushButton *pushButton_backToMain_onAboutTask;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *page_10;
    QLabel *label_17;
    QPushButton *pushButton_backToMain_onAddPerformers;
    QLineEdit *lineEdit_newTaskPerformers_onNewPerformers;
    QLabel *label_taskTitle_onAddPerformers;
    QLabel *label_20;
    QPushButton *pushButton_findUserIDFilter_onAddTaskPerformers;
    QLineEdit *lineEdit_findUserIDFilter_onAddTaskPerformers;
    QLabel *label_37;
    QPushButton *pushButton_addNewTaskPerformers_onAddPerformers;
    QLabel *label_findIDResult_onAddTaskPerformers;
    QWidget *page_7;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *lineEdit_newUserPassword_onSettings;
    QPushButton *pushButton_changeUserPassword_onSettings;
    QLabel *label_23;
    QPushButton *pushButton_changeUserName_onMain;
    QPushButton *pushButton_saveIntervalUdpate_onSettings;
    QLabel *label_25;
    QComboBox *comboBox_intervalUdpateList_onSettings;
    QLabel *label_24;
    QLineEdit *lineEdit_changeUserName_onSettings;
    QLineEdit *lineEdit_oldUserPassword_onSettings;
    QPushButton *pushButton_backToMain_onSettings;
    QLabel *label_41;
    QLabel *label_42;
    QWidget *page_8;
    QLabel *label_26;
    QPlainTextEdit *plainTextEdit_taskDescription_onCompletedTasks;
    QTableView *tableView_allCompletedTasks_onAllCompletedUserTasks;
    QTableView *tableView_completedTaskChat_onAllCompletedUserTasks;
    QLabel *label_30;
    QLabel *label_27;
    QLabel *label_31;
    QLabel *label_28;
    QLabel *label_32;
    QPushButton *pushButton_backToMain_onCompletedTasks;
    QLabel *label_29;
    QTableView *tableView_completedTaskPerformers_onAllCompletedUserTasks;
    QLabel *label_bossName_onCompletedUserTasks;
    QWidget *page_9;
    QLabel *label_33;
    QPlainTextEdit *plainTextEdit_personalTaskPerformerText_onPersonalPerformersTasks;
    QLabel *label_38;
    QPushButton *pushButton_setPersonalPerformerTask_onPersonalPerformersTasks;
    QLabel *label_currentPerformer_onPersonalPerformersTasks;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(752, 618);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(91, 91, 91);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 791, 611));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        label_35 = new QLabel(page_1);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(0, 0, 761, 581));
        label_35->setStyleSheet(QString::fromUtf8("background-image:url(:/img/backgroundPhotoSolarSystem_OnMain.png);\n"
"	border: 3px solid rgb(0, 0, 0);"));
        label_3 = new QLabel(page_1);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 220, 101, 31));
        label_3->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 12pt \"Simple Bold Jut Out\";"));
        lineEdit_name_onEntrance = new QLineEdit(page_1);
        lineEdit_name_onEntrance->setObjectName("lineEdit_name_onEntrance");
        lineEdit_name_onEntrance->setGeometry(QRect(290, 150, 181, 31));
        lineEdit_name_onEntrance->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 3px solid rgb(0, 0, 0);\n"
"	border-radius: 15px;\n"
"	font: 600 10pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}\n"
""));
        label = new QLabel(page_1);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 30, 91, 101));
        label->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"/*font: 25pt \"Simple Bold Jut Out\";*/\n"
"background-image: url(:/img/TMlogo.png);\n"
""));
        pushButton_Entrance_onEntrance = new QPushButton(page_1);
        pushButton_Entrance_onEntrance->setObjectName("pushButton_Entrance_onEntrance");
        pushButton_Entrance_onEntrance->setGeometry(QRect(320, 310, 121, 34));
        pushButton_Entrance_onEntrance->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        label_2 = new QLabel(page_1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 150, 81, 24));
        label_2->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 12pt \"Simple Bold Jut Out\";"));
        pushButton_registration_onEntrance = new QPushButton(page_1);
        pushButton_registration_onEntrance->setObjectName("pushButton_registration_onEntrance");
        pushButton_registration_onEntrance->setGeometry(QRect(320, 380, 121, 34));
        pushButton_registration_onEntrance->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(190, 192, 193)\n"
"}"));
        lineEdit_password_onEntrance = new QLineEdit(page_1);
        lineEdit_password_onEntrance->setObjectName("lineEdit_password_onEntrance");
        lineEdit_password_onEntrance->setGeometry(QRect(290, 220, 181, 31));
        lineEdit_password_onEntrance->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 3px solid rgb(0, 0, 0);\n"
"	border-radius: 15px;\n"
"	font: 600 10pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}\n"
""));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_71 = new QLabel(page_2);
        label_71->setObjectName("label_71");
        label_71->setGeometry(QRect(0, 0, 751, 581));
        label_71->setStyleSheet(QString::fromUtf8("background-image:url(:/img/backgroundPhotoSolarSystem_OnRegistration.png);\n"
"	border: 3px solid rgb(0, 0, 0);"));
        label_72 = new QLabel(page_2);
        label_72->setObjectName("label_72");
        label_72->setGeometry(QRect(30, 213, 181, 61));
        label_72->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 16pt \"Simple Bold Jut Out\";"));
        pushButton_BackToEntrance = new QPushButton(page_2);
        pushButton_BackToEntrance->setObjectName("pushButton_BackToEntrance");
        pushButton_BackToEntrance->setGeometry(QRect(630, 530, 91, 31));
        pushButton_BackToEntrance->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        lineEdit_Name_onRegistration = new QLineEdit(page_2);
        lineEdit_Name_onRegistration->setObjectName("lineEdit_Name_onRegistration");
        lineEdit_Name_onRegistration->setGeometry(QRect(280, 160, 201, 31));
        lineEdit_Name_onRegistration->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 3px solid rgb(0, 0, 0);\n"
"	border-radius: 15px;\n"
"	font: 600 10pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}"));
        label_73 = new QLabel(page_2);
        label_73->setObjectName("label_73");
        label_73->setGeometry(QRect(30, 290, 241, 41));
        label_73->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 14pt \"Simple Bold Jut Out\";"));
        lineEdit_Password_onRegistration = new QLineEdit(page_2);
        lineEdit_Password_onRegistration->setObjectName("lineEdit_Password_onRegistration");
        lineEdit_Password_onRegistration->setGeometry(QRect(280, 230, 201, 31));
        lineEdit_Password_onRegistration->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 3px solid rgb(0, 0, 0);\n"
"	border-radius: 15px;\n"
"	font: 600 10pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}"));
        lineEdit_ConfirmPassword_onRegistration = new QLineEdit(page_2);
        lineEdit_ConfirmPassword_onRegistration->setObjectName("lineEdit_ConfirmPassword_onRegistration");
        lineEdit_ConfirmPassword_onRegistration->setGeometry(QRect(280, 290, 201, 31));
        lineEdit_ConfirmPassword_onRegistration->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 3px solid rgb(0, 0, 0);\n"
"	border-radius: 15px;\n"
"	font: 600 10pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}"));
        label_74 = new QLabel(page_2);
        label_74->setObjectName("label_74");
        label_74->setGeometry(QRect(300, 20, 341, 71));
        label_74->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 24pt \"Simple Bold Jut Out\";"));
        label_75 = new QLabel(page_2);
        label_75->setObjectName("label_75");
        label_75->setGeometry(QRect(30, 160, 131, 24));
        label_75->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 16pt \"Simple Bold Jut Out\";"));
        pushButton_CreateAcc_onRegistration = new QPushButton(page_2);
        pushButton_CreateAcc_onRegistration->setObjectName("pushButton_CreateAcc_onRegistration");
        pushButton_CreateAcc_onRegistration->setGeometry(QRect(330, 420, 111, 34));
        pushButton_CreateAcc_onRegistration->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        tableView_allTasks_onMain = new QTableView(page_3);
        tableView_allTasks_onMain->setObjectName("tableView_allTasks_onMain");
        tableView_allTasks_onMain->setGeometry(QRect(30, 30, 211, 421));
        tableView_allTasks_onMain->setStyleSheet(QString::fromUtf8("QTableView\n"
"{\n"
"\n"
"\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color: rgb(95, 98, 103);\n"
"	font-size:14px;\n"
"	outline:none;\n"
"}\n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	\n"
"	background-color: rgb(64, 64, 64);\n"
"   /* border: 5px solid #f6f7fa;*/\n"
"    border-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section {\n"
"   border: 2px solid rgb(0, 0, 0);\n"
"\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color: rgb(95, 98, 103);\n"
"	font-size:14px;\n"
"	outline:none;\n"
"} \n"
"\n"
"QScrollBar:vertical {\n"
"     border: none;\n"
"     background: rgb(87, 87, 87);\n"
"	 width:6px;\n"
"	 \n"
"\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"	 border-radius: 5px;\n"
"     background: rgb(134, 134, 134);\n"
"     min-height: 25px;\n"
" }\n"
" QScrollBar::add-line:vertical {\n"
"     background-color:none\n"
" }\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"      background-color:none\n"
" }\n"
"\n"
"\n"
" QScrollBar::add-page:vertical, QScrollBar:"
                        ":sub-page:vertical {\n"
"     background: none;\n"
" }\n"
"\n"
""));
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 0, 211, 31));
        label_9->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"	background-color: rgb(68, 73, 79);\n"
"	color: white;\n"
"	font: 600 11pt \"Segoe UI Semibold\";\n"
"\n"
"}"));
        pushButton_createTask_onMain = new QPushButton(page_3);
        pushButton_createTask_onMain->setObjectName("pushButton_createTask_onMain");
        pushButton_createTask_onMain->setGeometry(QRect(0, 30, 31, 31));
        pushButton_createTask_onMain->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"	background-color: rgb(95, 98, 103);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/plusChat.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_createTask_onMain->setIcon(icon);
        plainTextEdit_message_onMain = new QPlainTextEdit(page_3);
        plainTextEdit_message_onMain->setObjectName("plainTextEdit_message_onMain");
        plainTextEdit_message_onMain->setGeometry(QRect(240, 400, 471, 41));
        plainTextEdit_message_onMain->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 0, 0);\n"
"font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
""));
        tableView_messages = new QTableView(page_3);
        tableView_messages->setObjectName("tableView_messages");
        tableView_messages->setGeometry(QRect(240, 90, 511, 311));
        tableView_messages->setStyleSheet(QString::fromUtf8("QTableView\n"
"{\n"
"\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"	color: white;\n"
"\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"\n"
"	font-size:14px;\n"
"	outline:none;\n"
"	background-image: url(:/img/backgroundPhoto.png);\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"   border: 2px solid rgb(0, 0, 0);\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color: rgb(35, 31, 32);\n"
"	font-size:14px;\n"
"	outline:none;\n"
"} \n"
"\n"
"QScrollBar:vertical {\n"
"     border: none;\n"
"     background: rgb(87, 87, 87);\n"
"	 width:6px;\n"
"	 \n"
"\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"	 border-radius: 5px;\n"
"     background: rgb(134, 134, 134);\n"
"     min-height: 25px;\n"
" }\n"
" QScrollBar::add-line:vertical {\n"
"     background-color:none\n"
" }\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"      background-color:none\n"
" }\n"
"\n"
"\n"
" QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"     background: none;\n"
" }\n"
""));
        pushButton_sendMessage_onMain = new QPushButton(page_3);
        pushButton_sendMessage_onMain->setObjectName("pushButton_sendMessage_onMain");
        pushButton_sendMessage_onMain->setGeometry(QRect(710, 400, 41, 41));
        pushButton_sendMessage_onMain->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 0, 0);\n"
"font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color:white;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/sendMessageIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sendMessage_onMain->setIcon(icon1);
        label_currentTask_onMain = new QLabel(page_3);
        label_currentTask_onMain->setObjectName("label_currentTask_onMain");
        label_currentTask_onMain->setGeometry(QRect(240, 0, 511, 31));
        label_currentTask_onMain->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"	background-color:rgb(96, 96, 96);\n"
"	font: 600 11pt \"Segoe UI Semibold\";\n"
"	color: white;\n"
"}"));
        pushButton_aboutTask_onMain = new QPushButton(page_3);
        pushButton_aboutTask_onMain->setObjectName("pushButton_aboutTask_onMain");
        pushButton_aboutTask_onMain->setGeometry(QRect(0, 60, 31, 31));
        pushButton_aboutTask_onMain->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"	background-color: rgb(95, 98, 103);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/infoIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_aboutTask_onMain->setIcon(icon2);
        pushButton_addPerformers_onMain = new QPushButton(page_3);
        pushButton_addPerformers_onMain->setObjectName("pushButton_addPerformers_onMain");
        pushButton_addPerformers_onMain->setGeometry(QRect(0, 90, 31, 31));
        pushButton_addPerformers_onMain->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"	background-color: rgb(95, 98, 103);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/addPerformerIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_addPerformers_onMain->setIcon(icon3);
        checkBox_isTaskCompleted_onMain = new QCheckBox(page_3);
        checkBox_isTaskCompleted_onMain->setObjectName("checkBox_isTaskCompleted_onMain");
        checkBox_isTaskCompleted_onMain->setGeometry(QRect(550, 0, 241, 31));
        checkBox_isTaskCompleted_onMain->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"	border-radius: 20px;	\n"
"	font: 600 11pt \"Segoe UI Semibold\";\n"
"	color:white;\n"
"	background-color:none;\n"
"}"));
        pushButton_settings_onMain = new QPushButton(page_3);
        pushButton_settings_onMain->setObjectName("pushButton_settings_onMain");
        pushButton_settings_onMain->setGeometry(QRect(0, 0, 31, 31));
        pushButton_settings_onMain->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"	background-color: rgb(68, 73, 79);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/settingsIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_settings_onMain->setIcon(icon4);
        label_currentTask_onMain_2 = new QLabel(page_3);
        label_currentTask_onMain_2->setObjectName("label_currentTask_onMain_2");
        label_currentTask_onMain_2->setGeometry(QRect(240, 30, 511, 31));
        label_currentTask_onMain_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"	background-color: rgb(130, 133, 136);\n"
"}"));
        lineEdit_chatFilter_onMain = new QLineEdit(page_3);
        lineEdit_chatFilter_onMain->setObjectName("lineEdit_chatFilter_onMain");
        lineEdit_chatFilter_onMain->setGeometry(QRect(510, 30, 241, 31));
        lineEdit_chatFilter_onMain->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"	border-radius: 15px;\n"
"	font: 600 10pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}"));
        comboBox_selectChatFilter_onMain = new QComboBox(page_3);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/chatIconForCombobox.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_selectChatFilter_onMain->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/userIconForCombobox.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_selectChatFilter_onMain->addItem(icon6, QString());
        comboBox_selectChatFilter_onMain->setObjectName("comboBox_selectChatFilter_onMain");
        comboBox_selectChatFilter_onMain->setGeometry(QRect(240, 30, 271, 31));
        comboBox_selectChatFilter_onMain->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"	background-color:rgb(130, 133, 136);\n"
"	font: 600 12pt \"Segoe UI Semibold\";\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"	\n"
"    subcontrol-origin: padding;\n"
"    width: 28px;\n"
"	margin: 5px;\n"
"\n"
"	subcontrol-position:right;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"	image: url(:/img/arrowComboBoxIcon.png);\n"
"\n"
"}\n"
"\n"
"\n"
""));
        pushButton_refreshChat_onMain = new QPushButton(page_3);
        pushButton_refreshChat_onMain->setObjectName("pushButton_refreshChat_onMain");
        pushButton_refreshChat_onMain->setGeometry(QRect(720, 0, 31, 31));
        pushButton_refreshChat_onMain->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:rgb(96, 96, 96);\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(87, 87, 87);\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/refreshChatIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_refreshChat_onMain->setIcon(icon7);
        pushButton_userCompletedTasks_onSettings = new QPushButton(page_3);
        pushButton_userCompletedTasks_onSettings->setObjectName("pushButton_userCompletedTasks_onSettings");
        pushButton_userCompletedTasks_onSettings->setGeometry(QRect(0, 120, 31, 31));
        pushButton_userCompletedTasks_onSettings->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"	background-color: rgb(95, 98, 103);\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/completedTaskIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_userCompletedTasks_onSettings->setIcon(icon8);
        label_34 = new QLabel(page_3);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(0, 440, 751, 151));
        label_34->setStyleSheet(QString::fromUtf8("background-image: url(:/img/backgroundPhotoOnlyForMain.png);\n"
"\n"
"	border: 2px solid rgb(0, 0, 0);"));
        checkBox_onlyCompletedTasksFilter_onMain = new QCheckBox(page_3);
        checkBox_onlyCompletedTasksFilter_onMain->setObjectName("checkBox_onlyCompletedTasksFilter_onMain");
        checkBox_onlyCompletedTasksFilter_onMain->setGeometry(QRect(10, 513, 441, 28));
        checkBox_onlyCompletedTasksFilter_onMain->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"	font: 600 11pt \"Segoe UI Semibold\";\n"
"QCheckBox::::indicator\n"
"{\n"
"height: 30px; width: 30px;\n"
"\n"
"}\n"
""));
        label_18 = new QLabel(page_3);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(10, 450, 141, 24));
        label_18->setStyleSheet(QString::fromUtf8("	font: 600 11pt \"Segoe UI Semibold\";\n"
"background-color:none;\n"
""));
        checkBox_onlyNotCompletedTasksFilter_onMain = new QCheckBox(page_3);
        checkBox_onlyNotCompletedTasksFilter_onMain->setObjectName("checkBox_onlyNotCompletedTasksFilter_onMain");
        checkBox_onlyNotCompletedTasksFilter_onMain->setGeometry(QRect(10, 553, 611, 21));
        checkBox_onlyNotCompletedTasksFilter_onMain->setStyleSheet(QString::fromUtf8("background-color:none;\n"
"	font: 600 11pt \"Segoe UI Semibold\";\n"
"QCheckBox::::indicator\n"
"{\n"
"height: 30px; width: 30px;\n"
"\n"
"}\n"
""));
        checkBox_onlyUsersTasks = new QCheckBox(page_3);
        checkBox_onlyUsersTasks->setObjectName("checkBox_onlyUsersTasks");
        checkBox_onlyUsersTasks->setGeometry(QRect(10, 480, 241, 28));
        checkBox_onlyUsersTasks->setStyleSheet(QString::fromUtf8("\n"
"background-color:none;\n"
"	font: 600 11pt \"Segoe UI Semibold\";\n"
"QCheckBox::::indicator\n"
"{\n"
"height: 30px; width: 30px;\n"
"\n"
"}\n"
""));
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 150, 31, 291));
        label_4->setStyleSheet(QString::fromUtf8("	border: 2px solid rgb(0, 0, 0);\n"
"\n"
"	background-color: rgb(35, 31, 32);"));
        label_7 = new QLabel(page_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(240, 60, 161, 31));
        label_7->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"	border: 1px solid rgb(154, 151, 151);\n"
"	background-color:rgb(6, 7, 7);\n"
"	font: 600 10pt \"Segoe UI Semibold\";\n"
"	color: white;\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));
        label_36 = new QLabel(page_3);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(400, 60, 351, 31));
        label_36->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border: 1px solid rgb(154, 151, 151);\n"
"	background-color:rgb(6, 7, 7);\n"
"	font: 600 10pt \"Segoe UI Semibold\";\n"
"	color: white;\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));
        label_selectChatHint_onMain = new QLabel(page_3);
        label_selectChatHint_onMain->setObjectName("label_selectChatHint_onMain");
        label_selectChatHint_onMain->setGeometry(QRect(240, 183, 511, 111));
        label_selectChatHint_onMain->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: none;\n"
"background-color: none;\n"
"color:white;\n"
"font: 16pt \"Simple Bold Jut Out\";\n"
"qproperty-alignment: AlignCenter;\n"
"}"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_5 = new QLabel(page_4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 0, 751, 581));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/img/backgroundPhotoSolarSystem_withoutSun.png);\n"
"	border: 3px solid rgb(0, 0, 0);"));
        label_10 = new QLabel(page_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 0, 741, 71));
        label_10->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: none;\n"
"background-color: none;\n"
"color:white;\n"
"font: 22pt \"Simple Bold Jut Out\";\n"
"qproperty-alignment: AlignCenter;\n"
"}"));
        label_findIDResult_onNewTask = new QLabel(page_4);
        label_findIDResult_onNewTask->setObjectName("label_findIDResult_onNewTask");
        label_findIDResult_onNewTask->setGeometry(QRect(490, 190, 291, 41));
        label_findIDResult_onNewTask->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 12pt \"Simple Bold Jut Out\";"));
        pushButton_createTask_onNewTask = new QPushButton(page_4);
        pushButton_createTask_onNewTask->setObjectName("pushButton_createTask_onNewTask");
        pushButton_createTask_onNewTask->setGeometry(QRect(310, 470, 211, 41));
        pushButton_createTask_onNewTask->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        label_19 = new QLabel(page_4);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(30, 190, 161, 24));
        label_19->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 11pt \"Simple Bold Jut Out\";"));
        lineEdit_findUserIDFilter_onNewTask = new QLineEdit(page_4);
        lineEdit_findUserIDFilter_onNewTask->setObjectName("lineEdit_findUserIDFilter_onNewTask");
        lineEdit_findUserIDFilter_onNewTask->setGeometry(QRect(210, 190, 113, 29));
        lineEdit_findUserIDFilter_onNewTask->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"\n"
"	font: 600 10pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}"));
        lineEdit_taskTitle_onNewTask = new QLineEdit(page_4);
        lineEdit_taskTitle_onNewTask->setObjectName("lineEdit_taskTitle_onNewTask");
        lineEdit_taskTitle_onNewTask->setGeometry(QRect(250, 90, 231, 31));
        lineEdit_taskTitle_onNewTask->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"	font: 600 10pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}"));
        pushButton_backToMain_onNewTask = new QPushButton(page_4);
        pushButton_backToMain_onNewTask->setObjectName("pushButton_backToMain_onNewTask");
        pushButton_backToMain_onNewTask->setGeometry(QRect(620, 530, 111, 34));
        pushButton_backToMain_onNewTask->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        label_12 = new QLabel(page_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(30, 240, 131, 41));
        label_12->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 11pt \"Simple Bold Jut Out\";"));
        label_13 = new QLabel(page_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 140, 431, 24));
        label_13->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 11pt \"Simple Bold Jut Out\";"));
        label_11 = new QLabel(page_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(30, 80, 211, 51));
        label_11->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 11pt \"Simple Bold Jut Out\";"));
        pushButton_findUserIDFilter_onNewTask = new QPushButton(page_4);
        pushButton_findUserIDFilter_onNewTask->setObjectName("pushButton_findUserIDFilter_onNewTask");
        pushButton_findUserIDFilter_onNewTask->setGeometry(QRect(360, 190, 111, 34));
        pushButton_findUserIDFilter_onNewTask->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        plainTextEdit_taskDescription_onNewTask = new QPlainTextEdit(page_4);
        plainTextEdit_taskDescription_onNewTask->setObjectName("plainTextEdit_taskDescription_onNewTask");
        plainTextEdit_taskDescription_onNewTask->setGeometry(QRect(30, 280, 461, 161));
        plainTextEdit_taskDescription_onNewTask->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(0, 0, 0);\n"
"background-color: none;\n"
"font: 11pt \"Segoe UI Symbol\";\n"
""));
        lineEdit_performersID_onNewTask = new QLineEdit(page_4);
        lineEdit_performersID_onNewTask->setObjectName("lineEdit_performersID_onNewTask");
        lineEdit_performersID_onNewTask->setGeometry(QRect(470, 140, 271, 31));
        lineEdit_performersID_onNewTask->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"\n"
"	font: 600 10pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}"));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_6 = new QLabel(page_5);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 0, 791, 581));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/img/backgroundPhotoSolarSystem_withoutSun.png);\n"
"	border: 3px solid rgb(0, 0, 0);"));
        checkBox_completeTheTask_onAboutTask = new QCheckBox(page_5);
        checkBox_completeTheTask_onAboutTask->setObjectName("checkBox_completeTheTask_onAboutTask");
        checkBox_completeTheTask_onAboutTask->setGeometry(QRect(10, 60, 401, 51));
        checkBox_completeTheTask_onAboutTask->setStyleSheet(QString::fromUtf8("\n"
"background-color:none;\n"
"	font: 600 13pt \"Segoe UI Semibold\";\n"
"color: white;\n"
"QCheckBox::::indicator\n"
"{\n"
"height: 30px; width: 30px;\n"
"\n"
"}"));
        label_14 = new QLabel(page_5);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 300, 211, 31));
        label_14->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 14pt \"Simple Bold Jut Out\";"));
        tableView_completedTaskPerformers_onAboutTask = new QTableView(page_5);
        tableView_completedTaskPerformers_onAboutTask->setObjectName("tableView_completedTaskPerformers_onAboutTask");
        tableView_completedTaskPerformers_onAboutTask->setGeometry(QRect(430, 150, 271, 121));
        tableView_completedTaskPerformers_onAboutTask->setStyleSheet(QString::fromUtf8("QTableView\n"
"{\n"
"\n"
"\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color: rgb(110, 109, 114);\n"
"	font-size:14px;\n"
"	outline:none;\n"
"}\n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	\n"
"	background-color: rgb(64, 64, 64);\n"
"   /* border: 5px solid #f6f7fa;*/\n"
"    border-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section {\n"
"   border: 2px solid rgb(0, 0, 0);\n"
"\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color: rgb(95, 98, 103);\n"
"	font-size:14px;\n"
"	outline:none;\n"
"} \n"
"\n"
"QScrollBar:vertical {\n"
"     border: none;\n"
"     background: rgb(87, 87, 87);\n"
"	 width:6px;\n"
"	 \n"
"\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"	 border-radius: 5px;\n"
"     background: rgb(134, 134, 134);\n"
"     min-height: 25px;\n"
" }\n"
" QScrollBar::add-line:vertical {\n"
"     background-color:none\n"
" }\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"      background-color:none\n"
" }\n"
"\n"
"\n"
" QScrollBar::add-page:vertical, QScrollBa"
                        "r::sub-page:vertical {\n"
"     background: none;\n"
" }"));
        pushButton_saveTaskDescription_onAboutTask = new QPushButton(page_5);
        pushButton_saveTaskDescription_onAboutTask->setObjectName("pushButton_saveTaskDescription_onAboutTask");
        pushButton_saveTaskDescription_onAboutTask->setGeometry(QRect(100, 540, 121, 34));
        pushButton_saveTaskDescription_onAboutTask->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        tableView_allTaskPerformers_onAboutTask = new QTableView(page_5);
        tableView_allTaskPerformers_onAboutTask->setObjectName("tableView_allTaskPerformers_onAboutTask");
        tableView_allTaskPerformers_onAboutTask->setGeometry(QRect(10, 150, 261, 121));
        tableView_allTaskPerformers_onAboutTask->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"QTableView\n"
"{\n"
"\n"
"\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color: rgb(110, 109, 114);\n"
"	font-size:14px;\n"
"	outline:none;\n"
"}\n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	\n"
"	background-color: rgb(64, 64, 64);\n"
"   /* border: 5px solid #f6f7fa;*/\n"
"    border-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section {\n"
"   border: 2px solid rgb(0, 0, 0);\n"
"\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color: rgb(95, 98, 103);\n"
"	font-size:14px;\n"
"	outline:none;\n"
"} \n"
"\n"
"QScrollBar:vertical {\n"
"     border: none;\n"
"     background: rgb(87, 87, 87);\n"
"	 width:6px;\n"
"	 \n"
"\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"	 border-radius: 5px;\n"
"     background: rgb(134, 134, 134);\n"
"     min-height: 25px;\n"
" }\n"
" QScrollBar::add-line:vertical {\n"
"     background-color:none\n"
" }\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"      background-color:none\n"
" }\n"
"\n"
"\n"
" QScrollBar::add-page"
                        ":vertical, QScrollBar::sub-page:vertical {\n"
"     background: none;\n"
" }"));
        label_8 = new QLabel(page_5);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(430, 100, 381, 61));
        label_8->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 13pt \"Simple Bold Jut Out\";"));
        label_taskTitle_onAboutTask = new QLabel(page_5);
        label_taskTitle_onAboutTask->setObjectName("label_taskTitle_onAboutTask");
        label_taskTitle_onAboutTask->setGeometry(QRect(0, 0, 781, 41));
        label_taskTitle_onAboutTask->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: none;\n"
"background-color: none;\n"
"color:white;\n"
"font: 22pt \"Simple Bold Jut Out\";\n"
"qproperty-alignment: AlignCenter;\n"
"}"));
        label_personalTask_onAboutTask = new QLabel(page_5);
        label_personalTask_onAboutTask->setObjectName("label_personalTask_onAboutTask");
        label_personalTask_onAboutTask->setGeometry(QRect(430, 300, 151, 24));
        label_personalTask_onAboutTask->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 14pt \"Simple Bold Jut Out\";"));
        plainTextEdit_personalTask_onAboutTask = new QPlainTextEdit(page_5);
        plainTextEdit_personalTask_onAboutTask->setObjectName("plainTextEdit_personalTask_onAboutTask");
        plainTextEdit_personalTask_onAboutTask->setGeometry(QRect(430, 340, 311, 191));
        plainTextEdit_personalTask_onAboutTask->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 149, 153);"));
        label_bossName_onAboutTask = new QLabel(page_5);
        label_bossName_onAboutTask->setObjectName("label_bossName_onAboutTask");
        label_bossName_onAboutTask->setGeometry(QRect(140, 50, 151, 24));
        label_bossName_onAboutTask->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 13pt \"Simple Bold Jut Out\";"));
        plainTextEdit_taskDescription_onAboutTask = new QPlainTextEdit(page_5);
        plainTextEdit_taskDescription_onAboutTask->setObjectName("plainTextEdit_taskDescription_onAboutTask");
        plainTextEdit_taskDescription_onAboutTask->setGeometry(QRect(10, 340, 311, 191));
        plainTextEdit_taskDescription_onAboutTask->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 149, 153);\n"
"font: 11pt \"Segoe UI Symbol\";"));
        pushButton_backToMain_onAboutTask = new QPushButton(page_5);
        pushButton_backToMain_onAboutTask->setObjectName("pushButton_backToMain_onAboutTask");
        pushButton_backToMain_onAboutTask->setGeometry(QRect(630, 540, 111, 34));
        pushButton_backToMain_onAboutTask->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        label_15 = new QLabel(page_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 110, 181, 41));
        label_15->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 14pt \"Simple Bold Jut Out\";"));
        label_16 = new QLabel(page_5);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 50, 161, 24));
        label_16->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 13pt \"Simple Bold Jut Out\";"));
        stackedWidget->addWidget(page_5);
        page_10 = new QWidget();
        page_10->setObjectName("page_10");
        label_17 = new QLabel(page_10);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(0, 0, 751, 581));
        label_17->setStyleSheet(QString::fromUtf8("background-image:url(:/img/backgroundPhotoSolarSystem_withoutSun.png);\n"
"	border: 3px solid rgb(0, 0, 0);\n"
""));
        pushButton_backToMain_onAddPerformers = new QPushButton(page_10);
        pushButton_backToMain_onAddPerformers->setObjectName("pushButton_backToMain_onAddPerformers");
        pushButton_backToMain_onAddPerformers->setGeometry(QRect(630, 530, 111, 34));
        pushButton_backToMain_onAddPerformers->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        lineEdit_newTaskPerformers_onNewPerformers = new QLineEdit(page_10);
        lineEdit_newTaskPerformers_onNewPerformers->setObjectName("lineEdit_newTaskPerformers_onNewPerformers");
        lineEdit_newTaskPerformers_onNewPerformers->setGeometry(QRect(170, 160, 431, 41));
        lineEdit_newTaskPerformers_onNewPerformers->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"\n"
"	font: 600 13pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}"));
        label_taskTitle_onAddPerformers = new QLabel(page_10);
        label_taskTitle_onAddPerformers->setObjectName("label_taskTitle_onAddPerformers");
        label_taskTitle_onAddPerformers->setGeometry(QRect(0, 0, 781, 41));
        label_taskTitle_onAddPerformers->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: none;\n"
"background-color: none;\n"
"color:white;\n"
"font: 22pt \"Simple Bold Jut Out\";\n"
"qproperty-alignment: AlignCenter;\n"
"}"));
        label_20 = new QLabel(page_10);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(140, 290, 231, 51));
        label_20->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 12pt \"Simple Bold Jut Out\";"));
        pushButton_findUserIDFilter_onAddTaskPerformers = new QPushButton(page_10);
        pushButton_findUserIDFilter_onAddTaskPerformers->setObjectName("pushButton_findUserIDFilter_onAddTaskPerformers");
        pushButton_findUserIDFilter_onAddTaskPerformers->setGeometry(QRect(300, 380, 171, 41));
        pushButton_findUserIDFilter_onAddTaskPerformers->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 20px;\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        lineEdit_findUserIDFilter_onAddTaskPerformers = new QLineEdit(page_10);
        lineEdit_findUserIDFilter_onAddTaskPerformers->setObjectName("lineEdit_findUserIDFilter_onAddTaskPerformers");
        lineEdit_findUserIDFilter_onAddTaskPerformers->setGeometry(QRect(340, 300, 261, 31));
        lineEdit_findUserIDFilter_onAddTaskPerformers->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"\n"
"	font: 600 12pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}"));
        label_37 = new QLabel(page_10);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(120, 80, 601, 41));
        label_37->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 17pt \"Simple Bold Jut Out\";"));
        pushButton_addNewTaskPerformers_onAddPerformers = new QPushButton(page_10);
        pushButton_addNewTaskPerformers_onAddPerformers->setObjectName("pushButton_addNewTaskPerformers_onAddPerformers");
        pushButton_addNewTaskPerformers_onAddPerformers->setGeometry(QRect(310, 223, 151, 41));
        pushButton_addNewTaskPerformers_onAddPerformers->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 20px;\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        label_findIDResult_onAddTaskPerformers = new QLabel(page_10);
        label_findIDResult_onAddTaskPerformers->setObjectName("label_findIDResult_onAddTaskPerformers");
        label_findIDResult_onAddTaskPerformers->setGeometry(QRect(120, 350, 531, 21));
        label_findIDResult_onAddTaskPerformers->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 12pt \"Simple Bold Jut Out\";\n"
"	qproperty-alignment: AlignCenter;"));
        stackedWidget->addWidget(page_10);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        label_21 = new QLabel(page_7);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(0, 0, 751, 581));
        label_21->setStyleSheet(QString::fromUtf8("background-image: url(:/img/backgroundPhotoSolarSystem_withoutSun.png);\n"
"	border: 3px solid rgb(0, 0, 0);"));
        label_22 = new QLabel(page_7);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(20, 370, 721, 24));
        label_22->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 14pt \"Simple Bold Jut Out\";"));
        lineEdit_newUserPassword_onSettings = new QLineEdit(page_7);
        lineEdit_newUserPassword_onSettings->setObjectName("lineEdit_newUserPassword_onSettings");
        lineEdit_newUserPassword_onSettings->setGeometry(QRect(320, 240, 241, 31));
        lineEdit_newUserPassword_onSettings->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"\n"
"	font: 600 13pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}"));
        pushButton_changeUserPassword_onSettings = new QPushButton(page_7);
        pushButton_changeUserPassword_onSettings->setObjectName("pushButton_changeUserPassword_onSettings");
        pushButton_changeUserPassword_onSettings->setGeometry(QRect(280, 290, 231, 41));
        pushButton_changeUserPassword_onSettings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 20px;\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        label_23 = new QLabel(page_7);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(20, 90, 261, 31));
        label_23->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 15pt \"Simple Bold Jut Out\";"));
        pushButton_changeUserName_onMain = new QPushButton(page_7);
        pushButton_changeUserName_onMain->setObjectName("pushButton_changeUserName_onMain");
        pushButton_changeUserName_onMain->setGeometry(QRect(490, 90, 261, 31));
        pushButton_changeUserName_onMain->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 19px;\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        pushButton_saveIntervalUdpate_onSettings = new QPushButton(page_7);
        pushButton_saveIntervalUdpate_onSettings->setObjectName("pushButton_saveIntervalUdpate_onSettings");
        pushButton_saveIntervalUdpate_onSettings->setGeometry(QRect(160, 400, 151, 31));
        pushButton_saveIntervalUdpate_onSettings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 19px;\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        label_25 = new QLabel(page_7);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(20, 233, 291, 41));
        label_25->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 15pt \"Simple Bold Jut Out\";"));
        comboBox_intervalUdpateList_onSettings = new QComboBox(page_7);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/lightningIconForComboBox.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_intervalUdpateList_onSettings->addItem(icon9, QString());
        comboBox_intervalUdpateList_onSettings->addItem(QString());
        comboBox_intervalUdpateList_onSettings->addItem(QString());
        comboBox_intervalUdpateList_onSettings->addItem(QString());
        comboBox_intervalUdpateList_onSettings->addItem(QString());
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/turtleIconForComboBox.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_intervalUdpateList_onSettings->addItem(icon10, QString());
        comboBox_intervalUdpateList_onSettings->addItem(QString());
        comboBox_intervalUdpateList_onSettings->setObjectName("comboBox_intervalUdpateList_onSettings");
        comboBox_intervalUdpateList_onSettings->setGeometry(QRect(20, 400, 121, 31));
        comboBox_intervalUdpateList_onSettings->setStyleSheet(QString::fromUtf8("QComboBox QAbstractItemView {\n"
" /* color: rgb(85, 170, 255);	*/\n"
"  /*background-color: #373e4e;\n"
"  padding: 10px;\n"
"  selection-background-color: rgb(39, 44, 54);*/\n"
"border: 1px solid black;\n"
"  font: 600 16pt \"Yu Gothic UI Semibold\";\n"
"color:white;\n"
"}\n"
"QComboBox::drop-down {\n"
"	\n"
"    subcontrol-origin: padding;\n"
"    width: 28px;\n"
"	margin: 5px;\n"
"\n"
"	subcontrol-position:right;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"	image: url(:/img/arrowComboBoxIcon.png);\n"
"\n"
"}\n"
"QComboBox{\n"
"border: 2px solid black;\n"
"	background-color: white;\n"
"font: 600 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"}\n"
"\n"
"\n"
""));
        label_24 = new QLabel(page_7);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(0, 0, 751, 71));
        label_24->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: none;\n"
"background-color: none;\n"
"color:white;\n"
"font: 28pt \"Simple Bold Jut Out\";\n"
"qproperty-alignment: AlignCenter;\n"
"}"));
        lineEdit_changeUserName_onSettings = new QLineEdit(page_7);
        lineEdit_changeUserName_onSettings->setObjectName("lineEdit_changeUserName_onSettings");
        lineEdit_changeUserName_onSettings->setGeometry(QRect(290, 90, 191, 31));
        lineEdit_changeUserName_onSettings->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"\n"
"	font: 600 13pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}"));
        lineEdit_oldUserPassword_onSettings = new QLineEdit(page_7);
        lineEdit_oldUserPassword_onSettings->setObjectName("lineEdit_oldUserPassword_onSettings");
        lineEdit_oldUserPassword_onSettings->setGeometry(QRect(320, 190, 241, 31));
        lineEdit_oldUserPassword_onSettings->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"\n"
"\n"
"	font: 600 13pt \"Segoe UI Semibold\";\n"
"	background-color:none;\n"
"}"));
        pushButton_backToMain_onSettings = new QPushButton(page_7);
        pushButton_backToMain_onSettings->setObjectName("pushButton_backToMain_onSettings");
        pushButton_backToMain_onSettings->setGeometry(QRect(630, 530, 111, 34));
        pushButton_backToMain_onSettings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 20px;\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        label_41 = new QLabel(page_7);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(20, 183, 301, 41));
        label_41->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 15pt \"Simple Bold Jut Out\";"));
        label_42 = new QLabel(page_7);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(300, 140, 231, 31));
        label_42->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 15pt \"Simple Bold Jut Out\";"));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        label_26 = new QLabel(page_8);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(0, 0, 751, 581));
        label_26->setStyleSheet(QString::fromUtf8("background-image: url(:/img/backgroundPhotoSolarSystem_withoutSun.png);\n"
"	border: 3px solid rgb(0, 0, 0);"));
        plainTextEdit_taskDescription_onCompletedTasks = new QPlainTextEdit(page_8);
        plainTextEdit_taskDescription_onCompletedTasks->setObjectName("plainTextEdit_taskDescription_onCompletedTasks");
        plainTextEdit_taskDescription_onCompletedTasks->setGeometry(QRect(20, 390, 251, 141));
        plainTextEdit_taskDescription_onCompletedTasks->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 149, 153);\n"
"font: 11pt \"Segoe UI Symbol\";"));
        tableView_allCompletedTasks_onAllCompletedUserTasks = new QTableView(page_8);
        tableView_allCompletedTasks_onAllCompletedUserTasks->setObjectName("tableView_allCompletedTasks_onAllCompletedUserTasks");
        tableView_allCompletedTasks_onAllCompletedUserTasks->setGeometry(QRect(20, 100, 251, 241));
        tableView_allCompletedTasks_onAllCompletedUserTasks->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"QTableView\n"
"{\n"
"\n"
"\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color: rgb(110, 109, 114);\n"
"	font-size:14px;\n"
"	outline:none;\n"
"}\n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	\n"
"	background-color: rgb(64, 64, 64);\n"
"   /* border: 5px solid #f6f7fa;*/\n"
"    border-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section {\n"
"   border: 2px solid rgb(0, 0, 0);\n"
"\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color: rgb(95, 98, 103);\n"
"	font-size:14px;\n"
"	outline:none;\n"
"} \n"
"\n"
"QScrollBar:vertical {\n"
"     border: none;\n"
"     background: rgb(87, 87, 87);\n"
"	 width:6px;\n"
"	 \n"
"\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"	 border-radius: 5px;\n"
"     background: rgb(134, 134, 134);\n"
"     min-height: 25px;\n"
" }\n"
" QScrollBar::add-line:vertical {\n"
"     background-color:none\n"
" }\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"      background-color:none\n"
" }\n"
"\n"
"\n"
" QScrollBar::add-page"
                        ":vertical, QScrollBar::sub-page:vertical {\n"
"     background: none;\n"
" }"));
        tableView_completedTaskChat_onAllCompletedUserTasks = new QTableView(page_8);
        tableView_completedTaskChat_onAllCompletedUserTasks->setObjectName("tableView_completedTaskChat_onAllCompletedUserTasks");
        tableView_completedTaskChat_onAllCompletedUserTasks->setGeometry(QRect(290, 390, 431, 141));
        tableView_completedTaskChat_onAllCompletedUserTasks->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"QTableView\n"
"{\n"
"\n"
"\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color: rgb(148, 149, 153);\n"
"	font-size:14px;\n"
"	outline:none;\n"
"}\n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	\n"
"	background-color: rgb(64, 64, 64);\n"
"   /* border: 5px solid #f6f7fa;*/\n"
"    border-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section {\n"
"   border: 2px solid rgb(0, 0, 0);\n"
"\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color: rgb(95, 98, 103);\n"
"	font-size:14px;\n"
"	outline:none;\n"
"} \n"
"\n"
"QScrollBar:vertical {\n"
"     border: none;\n"
"     background: rgb(87, 87, 87);\n"
"	 width:6px;\n"
"	 \n"
"\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"	 border-radius: 5px;\n"
"     background: rgb(134, 134, 134);\n"
"     min-height: 25px;\n"
" }\n"
" QScrollBar::add-line:vertical {\n"
"     background-color:none\n"
" }\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"      background-color:none\n"
" }\n"
"\n"
"\n"
" QScrollBar::add-page"
                        ":vertical, QScrollBar::sub-page:vertical {\n"
"     background: none;\n"
" }"));
        label_30 = new QLabel(page_8);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(290, 360, 261, 24));
        label_30->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: none;\n"
"background-color: none;\n"
"color:white;\n"
"font: 14pt \"Simple Bold Jut Out\";\n"
"\n"
"}"));
        label_27 = new QLabel(page_8);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(20, 60, 621, 24));
        label_27->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: none;\n"
"background-color: none;\n"
"color:white;\n"
"font: 12pt \"Simple Bold Jut Out\";\n"
"\n"
"}"));
        label_31 = new QLabel(page_8);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(290, 100, 111, 24));
        label_31->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: none;\n"
"background-color: none;\n"
"color:white;\n"
"font: 12pt \"Simple Bold Jut Out\";\n"
"}"));
        label_28 = new QLabel(page_8);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(10, 0, 741, 51));
        label_28->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: none;\n"
"background-color: none;\n"
"color:white;\n"
"font: 20pt \"Simple Bold Jut Out\";\n"
"qproperty-alignment: AlignCenter;\n"
"}"));
        label_32 = new QLabel(page_8);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(20, 350, 131, 41));
        label_32->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: none;\n"
"background-color: none;\n"
"color:white;\n"
"font: 14pt \"Simple Bold Jut Out\";\n"
"\n"
"}"));
        pushButton_backToMain_onCompletedTasks = new QPushButton(page_8);
        pushButton_backToMain_onCompletedTasks->setObjectName("pushButton_backToMain_onCompletedTasks");
        pushButton_backToMain_onCompletedTasks->setGeometry(QRect(630, 540, 111, 34));
        pushButton_backToMain_onCompletedTasks->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 20px;\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        label_29 = new QLabel(page_8);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(290, 140, 311, 24));
        label_29->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: none;\n"
"background-color: none;\n"
"color:white;\n"
"font: 12pt \"Simple Bold Jut Out\";\n"
"\n"
"}"));
        tableView_completedTaskPerformers_onAllCompletedUserTasks = new QTableView(page_8);
        tableView_completedTaskPerformers_onAllCompletedUserTasks->setObjectName("tableView_completedTaskPerformers_onAllCompletedUserTasks");
        tableView_completedTaskPerformers_onAllCompletedUserTasks->setGeometry(QRect(290, 170, 421, 171));
        tableView_completedTaskPerformers_onAllCompletedUserTasks->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"QTableView\n"
"{\n"
"\n"
"\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color: rgb(110, 109, 114);\n"
"	font-size:14px;\n"
"	outline:none;\n"
"}\n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	\n"
"	background-color: rgb(64, 64, 64);\n"
"   /* border: 5px solid #f6f7fa;*/\n"
"    border-color: rgb(64, 64, 64);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section {\n"
"   border: 2px solid rgb(0, 0, 0);\n"
"\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	background-color: rgb(95, 98, 103);\n"
"	font-size:14px;\n"
"	outline:none;\n"
"} \n"
"\n"
"QScrollBar:vertical {\n"
"     border: none;\n"
"     background: rgb(87, 87, 87);\n"
"	 width:6px;\n"
"	 \n"
"\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"	 border-radius: 5px;\n"
"     background: rgb(134, 134, 134);\n"
"     min-height: 25px;\n"
" }\n"
" QScrollBar::add-line:vertical {\n"
"     background-color:none\n"
" }\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"      background-color:none\n"
" }\n"
"\n"
"\n"
" QScrollBar::add-page"
                        ":vertical, QScrollBar::sub-page:vertical {\n"
"     background: none;\n"
" }"));
        label_bossName_onCompletedUserTasks = new QLabel(page_8);
        label_bossName_onCompletedUserTasks->setObjectName("label_bossName_onCompletedUserTasks");
        label_bossName_onCompletedUserTasks->setGeometry(QRect(410, 100, 191, 24));
        label_bossName_onCompletedUserTasks->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: none;\n"
"background-color: none;\n"
"color:white;\n"
"font: 12pt \"Simple Bold Jut Out\";\n"
"}"));
        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName("page_9");
        label_33 = new QLabel(page_9);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(0, 0, 751, 571));
        label_33->setStyleSheet(QString::fromUtf8("background-image: url(:/img/backgroundPhotoSolarSystem_withoutSun.png);\n"
"	border: 3px solid rgb(0, 0, 0);"));
        plainTextEdit_personalTaskPerformerText_onPersonalPerformersTasks = new QPlainTextEdit(page_9);
        plainTextEdit_personalTaskPerformerText_onPersonalPerformersTasks->setObjectName("plainTextEdit_personalTaskPerformerText_onPersonalPerformersTasks");
        plainTextEdit_personalTaskPerformerText_onPersonalPerformersTasks->setGeometry(QRect(10, 100, 731, 271));
        plainTextEdit_personalTaskPerformerText_onPersonalPerformersTasks->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 149, 153);\n"
"font: 11pt \"Segoe UI Symbol\";"));
        label_38 = new QLabel(page_9);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(10, 10, 281, 24));
        label_38->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 14pt \"Simple Bold Jut Out\";"));
        pushButton_setPersonalPerformerTask_onPersonalPerformersTasks = new QPushButton(page_9);
        pushButton_setPersonalPerformerTask_onPersonalPerformersTasks->setObjectName("pushButton_setPersonalPerformerTask_onPersonalPerformersTasks");
        pushButton_setPersonalPerformerTask_onPersonalPerformersTasks->setGeometry(QRect(270, 410, 221, 41));
        pushButton_setPersonalPerformerTask_onPersonalPerformersTasks->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 20px;\n"
"	border:3px solid black;\n"
"	background-color: white;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(222, 222, 222)\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(151, 151, 151);\n"
"}"));
        label_currentPerformer_onPersonalPerformersTasks = new QLabel(page_9);
        label_currentPerformer_onPersonalPerformersTasks->setObjectName("label_currentPerformer_onPersonalPerformersTasks");
        label_currentPerformer_onPersonalPerformersTasks->setGeometry(QRect(250, 10, 281, 24));
        label_currentPerformer_onPersonalPerformersTasks->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"color:white;\n"
"font: 14pt \"Simple Bold Jut Out\";"));
        stackedWidget->addWidget(page_9);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setStyleSheet(QString::fromUtf8("font-size:19px;"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label->setText(QString());
        pushButton_Entrance_onEntrance->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        pushButton_registration_onEntrance->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label_71->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_72->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton_BackToEntrance->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_73->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_74->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label_75->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        pushButton_CreateAcc_onRegistration->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\270 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        pushButton_createTask_onMain->setText(QString());
        pushButton_sendMessage_onMain->setText(QString());
        label_currentTask_onMain->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\265\321\202\320\265 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        pushButton_aboutTask_onMain->setText(QString());
        pushButton_addPerformers_onMain->setText(QString());
        checkBox_isTaskCompleted_onMain->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\321\203 \320\267\320\260\320\262\320\265\321\200\321\210\320\270\320\273(\320\260)", nullptr));
        pushButton_settings_onMain->setText(QString());
        label_currentTask_onMain_2->setText(QString());
        comboBox_selectChatFilter_onMain->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217\320\274", nullptr));
        comboBox_selectChatFilter_onMain->setItemText(1, QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\276\321\202\320\277\321\200\320\260\320\262\320\270\321\202\320\265\320\273\321\216", nullptr));

        pushButton_refreshChat_onMain->setText(QString());
        pushButton_userCompletedTasks_onSettings->setText(QString());
        label_34->setText(QString());
        checkBox_onlyCompletedTasksFilter_onMain->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\273\321\214\320\272\320\276 \320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\275\321\213\320\265 \320\274\320\275\320\276\321\216 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200\321\213", nullptr));
        checkBox_onlyNotCompletedTasksFilter_onMain->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\273\321\214\320\272\320\276 \320\275\320\265\320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\275\321\213\320\265 \320\274\320\275\320\276\321\216 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        checkBox_onlyUsersTasks->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\273\321\214\320\272\320\276 \320\274\320\276\320\270 \320\267\320\260\320\272\320\260\320\267\321\213", nullptr));
        label_4->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\320\265\320\273\321\214", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265", nullptr));
        label_selectChatHint_onMain->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\207\320\260\321\202", nullptr));
        label_5->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\264\320\260\321\207\320\260", nullptr));
        label_findIDResult_onNewTask->setText(QString());
        pushButton_createTask_onNewTask->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 ID \320\277\320\276 \320\270\320\274\320\265\320\275\320\270:", nullptr));
        pushButton_backToMain_onNewTask->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 id \320\270\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\320\265\320\271 \321\207\320\265\321\200\320\265\320\267 \320\277\321\200\320\276\320\261\320\265\320\273:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\267\320\260\320\264\320\260\321\207\320\270:", nullptr));
        pushButton_findUserIDFilter_onNewTask->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        plainTextEdit_taskDescription_onNewTask->setPlainText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        checkBox_completeTheTask_onAboutTask->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        pushButton_saveTaskDescription_onAboutTask->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\320\273\320\270 \321\201\320\262\320\276\321\216 \321\207\320\260\321\201\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_taskTitle_onAboutTask->setText(QString());
        label_personalTask_onAboutTask->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\321\217 \320\267\320\260\320\264\320\260\321\207\320\260", nullptr));
        label_bossName_onAboutTask->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        plainTextEdit_taskDescription_onAboutTask->setPlainText(QString());
        pushButton_backToMain_onAboutTask->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\320\270", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\267\320\260\320\272\320\260\320\267\321\207\320\270\320\272\320\260:", nullptr));
        label_17->setText(QString());
        pushButton_backToMain_onAddPerformers->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_taskTitle_onAddPerformers->setText(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 ID \320\277\320\276 \320\270\320\274\320\265\320\275\320\270:", nullptr));
        pushButton_findUserIDFilter_onAddTaskPerformers->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "\320\247\321\202\320\276\320\261\321\213 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\321\205 \320\270\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\320\265\320\271 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\321\205 ID", nullptr));
        pushButton_addNewTaskPerformers_onAddPerformers->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_findIDResult_onAddTaskPerformers->setText(QString());
        label_21->setText(QString());
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\321\200\320\262\320\260\320\273 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\263\320\276 \320\276\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\321\217 \321\207\320\260\321\202\320\276\320\262:", nullptr));
        pushButton_changeUserPassword_onSettings->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\260\321\210\320\265 \320\275\320\276\320\262\320\276\320\265 \320\270\320\274\321\217", nullptr));
        pushButton_changeUserName_onMain->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\270\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        pushButton_saveIntervalUdpate_onSettings->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\260\321\210 \320\275\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        comboBox_intervalUdpateList_onSettings->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_intervalUdpateList_onSettings->setItemText(1, QCoreApplication::translate("MainWindow", "5", nullptr));
        comboBox_intervalUdpateList_onSettings->setItemText(2, QCoreApplication::translate("MainWindow", "10", nullptr));
        comboBox_intervalUdpateList_onSettings->setItemText(3, QCoreApplication::translate("MainWindow", "15", nullptr));
        comboBox_intervalUdpateList_onSettings->setItemText(4, QCoreApplication::translate("MainWindow", "20", nullptr));
        comboBox_intervalUdpateList_onSettings->setItemText(5, QCoreApplication::translate("MainWindow", "30", nullptr));
        comboBox_intervalUdpateList_onSettings->setItemText(6, QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202", nullptr));

        label_24->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        pushButton_backToMain_onSettings->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\260\321\210 \321\201\321\202\320\260\321\200\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\265\320\275\320\260 \320\277\320\260\321\200\320\276\320\273\321\217", nullptr));
        label_26->setText(QString());
        label_30->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\271", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "\320\247\321\202\320\276\320\261\321\213 \320\277\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \320\267\320\260\320\264\320\260\321\207\320\265 \320\262\321\213\320\264\320\265\320\273\320\270\321\202\320\265 \320\265\321\221", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\320\260\320\267\321\207\320\270\320\272:", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "\320\222\320\260\321\210\320\270 \320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\275\321\213\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        pushButton_backToMain_onCompletedTasks->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\320\270 \320\264\320\260\320\275\320\275\320\276\320\271 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_bossName_onCompletedUserTasks->setText(QString());
        label_33->setText(QString());
        label_38->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\270\321\210\320\270\321\202\320\265 \320\267\320\260\320\264\320\260\321\207\321\203 \320\264\320\273\321\217 ", nullptr));
        pushButton_setPersonalPerformerTask_onPersonalPerformersTasks->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\272\321\200\320\265\320\277\320\270\321\202\321\214", nullptr));
        label_currentPerformer_onPersonalPerformersTasks->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
