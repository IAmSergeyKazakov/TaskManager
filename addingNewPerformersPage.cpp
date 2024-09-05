#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_pushButton_addPerformers_onMain_clicked()
{
    if (isAnyChatSelected){
        stopTimer();
        ui->label_taskTitle_onAddPerformers->setText(global_currentTaskName);
        ui->stackedWidget->setCurrentIndex(5);
    }
    else if (isAnyChatSelected){
        ui->statusbar->showMessage("Выберите задачу");
    }
    else{
        ui->statusbar->showMessage("Выберите задачу");
    }
}


void MainWindow::on_pushButton_findUserIDFilter_onAddTaskPerformers_clicked()
{
    QString name = ui->lineEdit_findUserIDFilter_onAddTaskPerformers->text();
    if (db.open()){
        QSqlQuery findIDQuery(db);
        QString foundID;
        QString query = "SELECT id FROM users WHERE name = "+QString("\""+name+"\"");

        foundID = getValueFromDB(query);

        if (foundID.size() != 0){
            ui->label_findIDResult_onAddTaskPerformers->setText("Искомый ID: "+foundID);
        }
        else{
            ui->label_findIDResult_onAddTaskPerformers->setText("Данный пользователь не найден");
        }
    }
    else{
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }
}


void MainWindow::on_pushButton_addNewTaskPerformers_onAddPerformers_clicked()
{
    isCreateTaskCall = false;
    bool isPerformerAlreadyExist = true;
    if (db.open()){
        bool isAllUsersIDCorrect= true;
        QString stringID, userName;
        stringID = ui->lineEdit_newTaskPerformers_onNewPerformers->text() + " ";
        performersID.clear();
        if (stringID.size()>0)
        {
            QString query;
            isAllUsersIDCorrect = checkUsersID_addingIDNewPerformers(stringID);
            for (auto i : performersID)
            {
                query = "SELECT id FROM task_performers WHERE user_id = "+ i + " AND task_id = "+ global_currentTaskID;
                userName = getValueFromDB(query);

                if(userName.size()==0)
                {
                    isPerformerAlreadyExist = false;
                }

                if(isPerformerAlreadyExist == true)
                {
                    ui->statusbar->showMessage("Для этой задачи уже есть исполнитель c ID "+ i);
                    break;
                }
            }


            if (isAllUsersIDCorrect && !isPerformerAlreadyExist){
                performersTasks.clear();
                currentUserIDPersonalTaskPage = 0;

                ui->stackedWidget->setCurrentIndex(8);

                QString query = "SELECT name FROM users WHERE id = " + performersID[currentUserIDPersonalTaskPage];
                QString currentUserNameByID = getValueFromDB(query);
                ui->label_currentPerformer_onPersonalPerformersTasks->setText(currentUserNameByID);
                currentUserIDPersonalTaskPage++;
            }
            else if (!isAllUsersIDCorrect)
            {
                ui->statusbar->showMessage("Некорректные ID");
            }
        }
        else{
            ui->statusbar->showMessage("Некорректные данные");
        }

    }
    else{
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }
}


void MainWindow::on_pushButton_backToMain_onAddPerformers_clicked()
{
    restartTimer();
    ui->stackedWidget->setCurrentIndex(2);
    setTasks();
    ui->statusbar->clearMessage();
}

