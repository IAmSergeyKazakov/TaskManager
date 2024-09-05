#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_pushButton_sendMessage_onMain_clicked()
{
    QString messageText = ui->plainTextEdit_message_onMain->toPlainText();
    QString finalMessageText;


    if (db.open() && messageText.size()>0 && messageText[0]!= ' '){

        QSqlQuery insertNewMessageQuery(db);
        insertNewMessageQuery.prepare("INSERT INTO chats (task_id, creator_id, message) VALUES (?,?,?)");
        insertNewMessageQuery.addBindValue(global_currentTaskID);insertNewMessageQuery.addBindValue(global_userID);
        insertNewMessageQuery.addBindValue(messageText);
        insertNewMessageQuery.exec();

        tableModelForChats->setQuery("SELECT users.name, chats.message FROM chats INNER JOIN users ON users.id = chats.creator_id WHERE chats.task_id = " + global_currentTaskID);
        ui->tableView_messages->setModel(tableModelForChats);
        ui->plainTextEdit_message_onMain->clear();

        ui->tableView_messages->resizeRowsToContents();
        ui->tableView_messages->setWordWrap(true);
    }


    else if(!db.open()){
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }
    ui->tableView_messages->scrollToBottom();

}


void MainWindow::on_checkBox_onlyCompletedTasksFilter_onMain_stateChanged(int currentState){currentCompletedTaskCheckBoxState = currentState;}
void MainWindow::on_checkBox_onlyNotCompletedTasksFilter_onMain_stateChanged(int currentState){currentNotCompletedTaskCheckBoxState = currentState;}
void MainWindow::on_checkBox_onlyUsersTasks_stateChanged(int currentState){currentUserTaskCheckBoxState = currentState;}


void MainWindow::setTaskCompletedCheckBoxes(QString& query, int currentState)
{
    if (db.open())
    {
        if (currentState == Qt::Checked)
        {
            tableModel->setQuery(query);
            ui->tableView_allTasks_onMain->setModel(tableModel);
            ui->tableView_allTasks_onMain->hideColumn(1);
        }
        else
        {
            qDebug()<<"not";
            setTasks();
        }
    }
    else{
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }
}


void MainWindow::on_checkBox_onlyUsersTasks_clicked()
{
    ui->checkBox_onlyCompletedTasksFilter_onMain->setChecked(false);
    ui->checkBox_onlyNotCompletedTasksFilter_onMain->setChecked(false);
    QString query = "SELECT tasks.title, tasks.id FROM tasks WHERE creator_id = " + global_userID + " AND is_completed = 0";
    setTaskCompletedCheckBoxes(query, currentUserTaskCheckBoxState);
}


void MainWindow::on_checkBox_onlyCompletedTasksFilter_onMain_clicked()
{
    ui->checkBox_onlyNotCompletedTasksFilter_onMain->setChecked(false);
    ui->checkBox_onlyUsersTasks->setChecked(false);
    QString query = "SELECT tasks.title, tasks.id FROM tasks INNER JOIN task_performers ON tasks.id = task_performers.task_id WHERE task_performers.user_id = +"+ global_userID +" AND tasks.is_completed = 0 AND task_performers.isTaskCompleted = 1";
    qDebug()<<query;
    setTaskCompletedCheckBoxes(query, currentCompletedTaskCheckBoxState);
}


void MainWindow::on_checkBox_onlyNotCompletedTasksFilter_onMain_clicked()
{
    ui->checkBox_onlyCompletedTasksFilter_onMain->setChecked(false);
    ui->checkBox_onlyUsersTasks->setChecked(false);
    QString query = "SELECT tasks.title, tasks.id FROM tasks INNER JOIN task_performers ON tasks.id = task_performers.task_id WHERE task_performers.user_id = +"+ global_userID +" AND tasks.is_completed = 0 AND task_performers.isTaskCompleted = 0";
    setTaskCompletedCheckBoxes(query, currentNotCompletedTaskCheckBoxState);
}


void MainWindow::on_lineEdit_chatFilter_onMain_textChanged(const QString &filterText)
{

    filterTable->setSourceModel(tableModelForChats);
    if (ui->comboBox_selectChatFilter_onMain->currentIndex() == 0)
        filterTable->setFilterKeyColumn(1);
    else
        filterTable->setFilterKeyColumn(0);
    ui->tableView_messages->setModel(filterTable);
    filterTable->setFilterFixedString(filterText);
    ui->tableView_messages->resizeRowsToContents();

    if (ui->lineEdit_chatFilter_onMain->text().size()==0)
        isChatFilterEmpty = true;
    else
        isChatFilterEmpty = false;

    if (isChatFilterEmpty)
        restartTimer();
    else
        stopTimer();
}


void MainWindow::on_pushButton_refreshChat_onMain_clicked()
{
    if(db.open())
    {
        tableModelForChats->setQuery("SELECT users.name, chats.message FROM chats INNER JOIN users ON users.id = chats.creator_id WHERE chats.task_id = " + global_currentTaskID);
        ui->tableView_messages->setModel(tableModelForChats);
        setTasks();
        ui->tableView_messages->resizeRowsToContents();
        ui->tableView_messages->scrollToBottom();
    }
    else
    {
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }
}

