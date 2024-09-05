#include "mainwindow.h"
#include "ui_mainwindow.h"


void MainWindow::setUIOperations()
{
    ui->pushButton_aboutTask_onMain->setToolTip("О задаче");
    ui->pushButton_addPerformers_onMain->setToolTip("Добавить исполнителя");
    ui->pushButton_createTask_onMain->setToolTip("Создать задачу");
    ui->pushButton_refreshChat_onMain->setToolTip("Обновить чат и список задач");
    ui->pushButton_userCompletedTasks_onSettings->setToolTip("Ваши завершенные задачи");
    ui->comboBox_intervalUdpateList_onSettings->setToolTip(intervalUdpateSettingComboboxHint);
    ui->centralwidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    setTableViewsLook(*ui->tableView_allTasks_onMain);
    setTableViewsLook(*ui->tableView_allCompletedTasks_onAllCompletedUserTasks);
    setTableViewsLook(*ui->tableView_allTaskPerformers_onAboutTask);
    setTableViewsLook(*ui->tableView_completedTaskChat_onAllCompletedUserTasks);
    setTableViewsLook(*ui->tableView_completedTaskPerformers_onAboutTask);
    setTableViewsLook(*ui->tableView_completedTaskPerformers_onAllCompletedUserTasks);
    setTableViewsLook(*ui->tableView_messages);

    ui->comboBox_intervalUdpateList_onSettings->setItemData(0, QColor(35, 31, 32), Qt::BackgroundRole);
    ui->comboBox_intervalUdpateList_onSettings->setItemData(1, QColor(64, 64, 64), Qt::BackgroundRole);
    ui->comboBox_intervalUdpateList_onSettings->setItemData(2, QColor(87, 87, 89), Qt::BackgroundRole);
    ui->comboBox_intervalUdpateList_onSettings->setItemData(3, QColor(109, 110, 114), Qt::BackgroundRole);
    ui->comboBox_intervalUdpateList_onSettings->setItemData(4, QColor(128, 129, 133), Qt::BackgroundRole);
    ui->comboBox_intervalUdpateList_onSettings->setItemData(5, QColor(148, 149, 153), Qt::BackgroundRole);
    ui->comboBox_intervalUdpateList_onSettings->setItemData(6, QColor(168, 169, 173), Qt::BackgroundRole);

    ui->pushButton_sendMessage_onMain->setVisible(false);
    ui->plainTextEdit_message_onMain->setVisible(false);
}


void MainWindow::setTableViewsLook(QTableView &tableView)
{
    tableView.horizontalHeader()->setVisible(false);
    tableView.verticalHeader()->setVisible(false);
    tableView.horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    tableView.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
}
