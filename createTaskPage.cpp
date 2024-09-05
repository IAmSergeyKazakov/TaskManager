#include "mainwindow.h"
#include "ui_mainwindow.h"


void MainWindow::on_pushButton_createTask_onNewTask_clicked()
{
    isCreateTaskCall = true;
    if (db.open()){

        isAllUsersIDCorrect = true;
        taskTitle = ui->lineEdit_taskTitle_onNewTask->text();
        taskDescription = ui->plainTextEdit_taskDescription_onNewTask->toPlainText();
        QString stringID;
        stringID = ui->lineEdit_performersID_onNewTask->text() + " ";
        performersID.clear();
        performersID.push_back(global_userID);
        isAllUsersIDCorrect = checkUsersID_addingIDNewPerformers(stringID);
        QSqlQuery addDataQuery(db);


        if (isAllUsersIDCorrect && taskTitle.size()>0 && taskDescription.size()>0 && stringID.size()>0){
            performersTasks.clear();
            currentUserIDPersonalTaskPage = 1;
            ui->stackedWidget->setCurrentIndex(8);

            QString query = "SELECT name FROM users WHERE id = " + performersID[currentUserIDPersonalTaskPage];
            QString currentUserNameByID = getValueFromDB(query);
            performersTasks.push_back("None");
            ui->label_currentPerformer_onPersonalPerformersTasks->setText(currentUserNameByID);
            currentUserIDPersonalTaskPage++;
        }
        else{
            ui->statusbar->showMessage("Некорректные данные");
        }
    }
    else{
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }

}


void MainWindow::on_pushButton_setPersonalPerformerTask_onPersonalPerformersTasks_clicked()
{
    QString currentUserNameByID, query,personalTaskText;
    bool isEnd = false;
    if (currentUserIDPersonalTaskPage == performersID.size()){
        isEnd = true;
        personalTaskText = ui->plainTextEdit_personalTaskPerformerText_onPersonalPerformersTasks->toPlainText();
        qDebug()<<personalTaskText;
        performersTasks.push_back(personalTaskText);

        if (isCreateTaskCall){
            QSqlQuery addDataQuery(db);
            addDataQuery.prepare("INSERT INTO tasks (title, creator_id,description) VALUES (?,?,?)");
            addDataQuery.addBindValue(taskTitle);
            addDataQuery.addBindValue(global_userID);
            addDataQuery.addBindValue(taskDescription);
            addDataQuery.exec();
            isCreateTaskCall = false;

            QString query = "SELECT id FROM tasks WHERE title = " + QString("\""+taskTitle+"\"");
            taskID = getValueFromDB(query);
            addingNewPerformers(isAllUsersIDCorrect, taskID, taskTitle, false);
            ui->stackedWidget->setCurrentIndex(2);
            ui->statusbar->showMessage(" ");
            setTasks();
        }
        else{
            addingNewPerformers(isAllUsersIDCorrect, global_currentTaskID, global_currentTaskName, false);
            ui->stackedWidget->setCurrentIndex(2);
            ui->statusbar->showMessage(" ");
        }

    }

    if (!isEnd){
        query = "SELECT name FROM users WHERE id = " + performersID[currentUserIDPersonalTaskPage];
        currentUserNameByID = getValueFromDB(query);
        ui->label_currentPerformer_onPersonalPerformersTasks->setText(currentUserNameByID);

        personalTaskText = ui->plainTextEdit_personalTaskPerformerText_onPersonalPerformersTasks->toPlainText();
        performersTasks.push_back(personalTaskText);
        ui->plainTextEdit_personalTaskPerformerText_onPersonalPerformersTasks->clear();
        currentUserIDPersonalTaskPage++;
        isEnd = false;
    }

}


void MainWindow::on_pushButton_backToMain_onNewTask_clicked()
{
    restartTimer();
    setTasks();
    ui->stackedWidget->setCurrentIndex(2);
}
