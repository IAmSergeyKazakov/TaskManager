#include "mainwindow.h"
#include "ui_mainwindow.h"


void MainWindow::on_pushButton_aboutTask_onMain_clicked()
{


    stopTimer();
    ui->checkBox_completeTheTask_onAboutTask->setChecked(false);
    if (db.open() && isAnyChatSelected)
    {
        qDebug()<<"ABOUTTASK";
        qDebug()<<global_currentTaskID;
        ui->checkBox_completeTheTask_onAboutTask->setVisible(false);
        ui->plainTextEdit_taskDescription_onAboutTask->clear();
        ui->label_taskTitle_onAboutTask->setText(global_currentTaskName);
        QString taskDescription, bossName, queryForTaskDescription;

        queryForTaskDescription = "SELECT description FROM tasks WHERE id = " + global_currentTaskID;
        taskDescription = findTaskDescription(queryForTaskDescription);
        ui->plainTextEdit_taskDescription_onAboutTask->insertPlainText(taskDescription);

        tableModel = new QSqlQueryModel(this);
        tableModel->setQuery("SELECT users.name FROM users INNER JOIN task_performers ON users.id = task_performers.user_id WHERE task_performers.task_id = " + global_currentTaskID);
        ui->tableView_allTaskPerformers_onAboutTask->setModel(tableModel);

        QString queryForFindBoss = "SELECT users.name FROM users INNER JOIN tasks ON users.id = tasks.creator_id WHERE tasks.id = " + global_currentTaskID;
        bossName = findTaskBoss(queryForFindBoss);
        ui->label_bossName_onAboutTask->setText(bossName);

        tableModel = new QSqlQueryModel(this);
        tableModel->setQuery("SELECT users.name FROM users INNER JOIN task_performers ON users.id = task_performers.user_id WHERE task_performers.isTaskCompleted = 1 AND task_performers.task_id = "+global_currentTaskID);
        ui->tableView_completedTaskPerformers_onAboutTask->setModel(tableModel);

        tableModel = new QSqlQueryModel(this);
        tableModel->setQuery("SELECT users.name FROM users INNER JOIN task_performers ON users.id = task_performers.user_id WHERE task_performers.isTaskCompleted = 1 AND task_performers.task_id = "+global_currentTaskID);
        ui->tableView_completedTaskPerformers_onAboutTask->setModel(tableModel);

        if (bossName != global_userName){
            ui->plainTextEdit_personalTask_onAboutTask->setVisible(true);
            ui->label_personalTask_onAboutTask->setVisible(true);
            QString query = "SELECT personalTask FROM task_performers WHERE user_id = "+ global_userID +" AND task_id = " + global_currentTaskID;
            QString personalTask = getValueFromDB(query);
            ui->plainTextEdit_personalTask_onAboutTask->setPlainText(personalTask);
        }
        else{
            ui->plainTextEdit_personalTask_onAboutTask->setVisible(false);
            ui->label_personalTask_onAboutTask->setVisible(false);
        }
        if(bossName == global_userName){
            ui->checkBox_completeTheTask_onAboutTask->setVisible(true);
        }
        ui->stackedWidget->setCurrentIndex(4);


    }
    else if(!isAnyChatSelected)
        ui->statusbar->showMessage("Выберите задачу");
    else{
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }
    global_previousTaskDescription = ui->plainTextEdit_taskDescription_onAboutTask->toPlainText();
}


void MainWindow::on_pushButton_saveTaskDescription_onAboutTask_clicked()
{
    if(db.open()){
        QString currentTaskDescription = ui->plainTextEdit_taskDescription_onAboutTask->toPlainText();
        QSqlQuery saveTaskDescriptionQuery(db);
        if (currentTaskDescription == global_previousTaskDescription){
            ui->statusbar->showMessage("Изменений в описании задачи не было найдено");
        }
        else{
            if(currentTaskDescription.size()>0){
                saveTaskDescriptionQuery.prepare("UPDATE tasks SET description = "+ QString("\""+currentTaskDescription+"\"") +" WHERE id = "+global_currentTaskID);
                saveTaskDescriptionQuery.exec();
                ui->plainTextEdit_taskDescription_onAboutTask->clear();
                ui->plainTextEdit_taskDescription_onAboutTask->insertPlainText(currentTaskDescription);
                ui->statusbar->showMessage("Описание сохранено");
            }
            else{
                ui->statusbar->showMessage("Некорректные данные. Описание не сохранено");
            }
        }
    }
    else {
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }
}


void MainWindow::on_checkBox_completeTheTask_onAboutTask_clicked()
{
    qDebug()<<"CHECKBOX";
    QSqlQuery checkTaskCompleteStatusQuery(db);
    checkTaskCompleteStatusQuery.prepare("UPDATE tasks SET is_completed = 1 WHERE id = "+ global_currentTaskID);
    checkTaskCompleteStatusQuery.exec();

    tableModel->clear();
    ui->tableView_messages->setModel(tableModel);
    ui->label_currentTask_onMain->clear();
    global_currentTaskID = NULL;
    setTasks();
    ui->stackedWidget->setCurrentIndex(2);
    ui->checkBox_completeTheTask_onAboutTask->setChecked(false);
}


void MainWindow::on_pushButton_backToMain_onAboutTask_clicked()
{
    restartTimer();
    setTasks();
    ui->stackedWidget->setCurrentIndex(2);

}



