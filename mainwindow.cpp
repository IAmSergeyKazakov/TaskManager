#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    setDatabase();
    setUIOperations();
}


MainWindow::~MainWindow()
{
    delete ui;
    delete tableModel;
    delete tableModelForChats;
    delete timer;
    delete filterTable;
    tableModel = nullptr;
    tableModelForChats = nullptr;
    timer = nullptr;
    filterTable = nullptr;
    db.close();
}


void MainWindow::on_pushButton_registration_onEntrance_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_BackToEntrance_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::setTasks()
{
    if (db.open())
    {
        tableModel = new QSqlQueryModel(this);
        tableModel->setQuery("SELECT tasks.title, tasks.id FROM tasks INNER JOIN task_performers ON tasks.id = task_performers.task_id WHERE task_performers.user_id = "+global_userID +" AND tasks.is_completed = 0");
        ui->tableView_allTasks_onMain->horizontalHeader()->setVisible(false);
        ui->tableView_allTasks_onMain->verticalHeader()->setVisible(false);
        ui->tableView_allTasks_onMain->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        ui->tableView_allTasks_onMain->setModel(tableModel);
        ui->tableView_allTasks_onMain->hideColumn(1);
        ui->statusbar->showMessage("");
    }
    else{
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }
}


bool MainWindow::checkUsersID_addingIDNewPerformers(QString& stringID)
{

    bool isAllUsersIDCorrect = true;
    QString userID, nowStr;
    for (auto i : stringID)
    {
        if (i != ' ' && !(i.isDigit()))
        {
            qDebug()<<"activated";
            ui->statusbar->showMessage("ID записаны некорректно");
            return false;
        }
        if (i==' '){
            auto findDublicateID = std::find(performersID.begin(), performersID.end(), nowStr);
            if (findDublicateID != performersID.end()){
                isAllUsersIDCorrect = false;
                performersID.clear();
                break;
            }
            performersID.push_back(nowStr);
            nowStr.clear();
        }

        else{
            nowStr+=i;
        }
    }

    QSqlQuery addDataQuery(db);
    for (auto i : performersID)
    {
        addDataQuery.prepare("SELECT id FROM users WHERE id = " + i);
        addDataQuery.exec();
        userID = "";
        while (addDataQuery.next()){
            userID = addDataQuery.value(0).toString();
            ui->statusbar->clearMessage();
        }
        if (userID.size()==0){
            isAllUsersIDCorrect = false;
            ui->statusbar->showMessage("Пользователя с " + i + " ID не существует");
        }
    }
    return isAllUsersIDCorrect;

}


void MainWindow::addingNewPerformers(bool& isAllUsersIDCorrect, QString& taskID, QString& taskTitle, bool isPerformerAlreadyExist)
{
    QSqlQuery addDataQuery(db);
    if (isAllUsersIDCorrect && !isPerformerAlreadyExist)
    {
        for (int i = 0; i < performersID.size(); i++)
        {
            addDataQuery.prepare("INSERT INTO task_performers (task_id, user_id,personalTask) VALUES (?,?,?)");
            addDataQuery.addBindValue(taskID);
            addDataQuery.addBindValue(performersID[i]);
            addDataQuery.addBindValue(performersTasks[i]);
            addDataQuery.exec();
            ui->statusbar->showMessage("Исполнители добавлены");
        }
    }
}


void MainWindow::on_pushButton_findUserIDFilter_onNewTask_clicked()
{
    QString name = ui->lineEdit_findUserIDFilter_onNewTask->text();
    if (db.open()){

        QSqlQuery findIDQuery(db);
        QString foundID;

        QString query = "SELECT id FROM users WHERE name = "+QString("\""+name+"\"");

        foundID = getValueFromDB(query);

        if (foundID.size() != 0){
            ui->label_findIDResult_onNewTask->setText("Искомый ID: "+foundID);
        }
        else{
            ui->label_findIDResult_onNewTask->setText("Данный пользователь не найден");
        }
    }
    else{
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }
}


bool MainWindow::checkIsNameAvailable(QString& userName)
{
    QSqlQuery checkIsExistQuery(db);
    QString userNameFromDB;
    QString query = "SELECT name FROM users WHERE name = " + QString("\""+userName+"\"");
    bool isAvailableName = true;

    userNameFromDB = getValueFromDB(query);
    if (userNameFromDB.size() != 0)
        isAvailableName = false;

    return isAvailableName;
}


QString MainWindow::findTaskBoss(QString& query)
{
    QString bossName;
    bossName = getValueFromDB(query);
    return bossName;
}


void MainWindow::setTableModelForCompletedTasks()
{
    tableModel->setQuery("SELECT tasks.title,tasks.id FROM tasks INNER JOIN task_performers ON tasks.id = task_performers.task_id WHERE task_performers.user_id = " + global_userID + " AND tasks.is_completed = 1");
    ui->tableView_allCompletedTasks_onAllCompletedUserTasks->setModel(tableModel);
}


QString MainWindow::findTaskDescription(QString& query)
{
    QString taskDescription;
    taskDescription = getValueFromDB(query);
    return taskDescription;
}


QString MainWindow::getValueFromDB(QString& queryText)
{
    QSqlQuery query(db);
    QString stringResult;

    query.prepare(queryText);
    query.exec();
    while (query.next()){
        stringResult = query.value(0).toString();
    }
    return stringResult;
}


int MainWindow::getValueFromDBINT(QString& queryText)
{
    QSqlQuery query(db);
    int intResult;

    query.prepare(queryText);
    query.exec();
    while (query.next()){
        intResult = query.value(0).toInt();
    }
    return intResult;
}



