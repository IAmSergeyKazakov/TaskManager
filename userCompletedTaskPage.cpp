#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_pushButton_userCompletedTasks_onSettings_clicked()
{
    if (db.open()){
        stopTimer();
        ui->plainTextEdit_taskDescription_onCompletedTasks->clear();
        setTableModelForCompletedTasks();
        ui->tableView_allCompletedTasks_onAllCompletedUserTasks->hideColumn(1);
        ui->stackedWidget->setCurrentIndex(7);
    }
    else
    {
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }
}


void MainWindow::on_tableView_allCompletedTasks_onAllCompletedUserTasks_clicked(const QModelIndex &index)
{
    if (db.open()){
        ui->plainTextEdit_taskDescription_onCompletedTasks->clear();
        setTableModelForCompletedTasks();
        int currentTableModelIndex = index.row();
        QString bossName, queryForTaskDescription, taskDescription;
        QModelIndex taskIDIndex = tableModel->index(currentTableModelIndex, 1, QModelIndex());
        QString taskID = ui->tableView_allCompletedTasks_onAllCompletedUserTasks->model()->data(taskIDIndex).toString();
        qDebug()<<taskID;

        tableModel = new QSqlQueryModel(this);
        tableModel->setQuery("SELECT users.name FROM users INNER JOIN task_performers ON users.id = task_performers.user_id WHERE task_performers.task_id = " + taskID);
        ui->tableView_completedTaskPerformers_onAllCompletedUserTasks->setModel(tableModel);

        QString queryForFindBoss = "SELECT users.name FROM users INNER JOIN tasks ON users.id = tasks.creator_id WHERE tasks.id = " + taskID;
        bossName = findTaskBoss(queryForFindBoss);
        ui->label_bossName_onCompletedUserTasks->setText(bossName);

        tableModel = new QSqlQueryModel(this);
        tableModel->setQuery("SELECT users.name FROM users INNER JOIN task_performers ON users.id = task_performers.user_id WHERE task_performers.task_id = " + taskID);
        ui->tableView_completedTaskPerformers_onAllCompletedUserTasks->setModel(tableModel);

        tableModel = new QSqlQueryModel(this);
        tableModel->setQuery("SELECT users.name, chats.message FROM chats INNER JOIN users ON users.id = chats.creator_id WHERE chats.task_id = " + taskID);
        ui->tableView_completedTaskChat_onAllCompletedUserTasks->setModel(tableModel);

        queryForTaskDescription = "SELECT description FROM tasks WHERE id = " + taskID;
        taskDescription = findTaskDescription(queryForTaskDescription);
        ui->plainTextEdit_taskDescription_onCompletedTasks->insertPlainText(taskDescription);
        ui->tableView_completedTaskChat_onAllCompletedUserTasks->resizeRowsToContents();
    }
    else
    {
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }

}


void MainWindow::on_pushButton_backToMain_onCompletedTasks_clicked()
{
    restartTimer();
    setTasks();
    ui->stackedWidget->setCurrentIndex(2);
}
