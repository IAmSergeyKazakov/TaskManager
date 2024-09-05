#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::stopTimer()
{
    if (isTimerActivated == true)
        timer->stop();
}


void MainWindow::restartTimer()
{
    if (isTimerActivated == true)
        timer->stop();
    startChatUpdateByTime();
}


void MainWindow::TimerSlot()
{
    if (db.open()){
        int userIntervalUpdateSetting;
        QString query = "SELECT value FROM users_settings WHERE user_id = "+global_userID +" AND setting_type = "+QString("\""+intervalUpdateColumnNameForDB+"\"");

        userIntervalUpdateSetting = getValueFromDBINT(query);

        if (userIntervalUpdateSetting != 0)
        {
            if (time == userIntervalUpdateSetting)
            {
                qDebug()<<userIntervalUpdateSetting;
                time = 0;
                tableModelForChats->setQuery("SELECT users.name, chats.message FROM chats INNER JOIN users ON users.id = chats.creator_id WHERE chats.task_id = " + global_currentTaskID);
                ui->tableView_messages->setModel(tableModelForChats);
                ui->tableView_messages->resizeRowsToContents();
            }
        }
        else{
            timer->stop();
        }
        time++;
    }
}


void MainWindow::startChatUpdateByTime()
{
    delete timer;
    isTimerActivated = true;
    timer = new QTimer(this);
    time = 0;
    timer->start(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(TimerSlot()));
}
