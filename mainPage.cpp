#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_tableView_allTasks_onMain_clicked(const QModelIndex &index)
{
    ui->pushButton_sendMessage_onMain->setVisible(true);
    ui->plainTextEdit_message_onMain->setVisible(true);
    ui->label_selectChatHint_onMain->setVisible(false);

    isAnyTableViewActivated = true;
    selectedRow_allTasks = index.row();
    QString taskID;
    int isCompletedStatus;
    QString query;
    if (db.open()){

        QString taskName = ui->tableView_allTasks_onMain->model()->data(ui->tableView_allTasks_onMain->currentIndex()).toString(); global_currentTaskName = taskName;
        qDebug()<<taskName;
        //QString query = "SELECT id FROM tasks WHERE title = " + QString("\""+global_currentTaskName+"\"")
        QModelIndex taskIDIndex = tableModel->index(selectedRow_allTasks, 1, QModelIndex());
        taskID = ui->tableView_allTasks_onMain->model()->data(taskIDIndex).toString();
        qDebug()<<taskID;
        global_currentTaskID = taskID;
        qDebug()<<global_currentTaskID;

        query = "SELECT isTaskCompleted FROM task_performers WHERE user_id = "+ global_userID+ " AND task_id = "+ global_currentTaskID;
        isCompletedStatus = getValueFromDBINT(query);

        if (isCompletedStatus == 1)
            ui->checkBox_isTaskCompleted_onMain->setChecked(true);
        else
            ui->checkBox_isTaskCompleted_onMain->setChecked(false);

        tableModelForChats->setQuery("SELECT users.name, chats.message FROM chats INNER JOIN users ON users.id = chats.creator_id WHERE chats.task_id = " + global_currentTaskID);

        ui->tableView_messages->verticalHeader()->setVisible(false);
        ui->tableView_messages->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableView_messages->setModel(tableModelForChats);
        ui->label_currentTask_onMain->setText(taskName);
        ui->statusbar->showMessage("");
        ui->tableView_messages->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Interactive);

        ui->tableView_messages->horizontalHeader()->resizeSection(0, 159);


        if (isTimerActivated == true)
            timer->stop();
        startChatUpdateByTime();
        isAnyChatSelected = true;

        ui->tableView_messages->resizeRowsToContents();
        ui->tableView_messages->scrollToBottom();
    }
    else{
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }

}


void MainWindow::on_pushButton_createTask_onMain_clicked()
{
    stopTimer();
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_checkBox_isTaskCompleted_onMain_stateChanged(int currentState)
{
    if (db.open()){
        currentCompletedTaskCheckBoxState = currentState;
        QSqlQuery setCompletedTaskStatus;
        if (currentState == Qt::Checked){
            setCompletedTaskStatus.prepare("UPDATE task_performers SET isTaskCompleted = 1 WHERE task_id ="+ global_currentTaskID +" AND user_id = " + global_userID);
            setCompletedTaskStatus.exec();
        }
        else{
            setCompletedTaskStatus.prepare("UPDATE task_performers SET isTaskCompleted = 0 WHERE task_id ="+ global_currentTaskID +" AND user_id = " + global_userID);
            setCompletedTaskStatus.exec();
        }
    }
    else{
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }
}
