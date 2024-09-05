#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlQueryModel>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QSet>
#include <QSortFilterProxyModel>
#include <QTimer>
#include <QTableView>
#include <QStandardItemModel>
#include <algorithm>
#include <QVector>
#include <QProgressDialog>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_registration_onEntrance_clicked();

    void on_pushButton_BackToEntrance_clicked();

    void on_pushButton_CreateAcc_onRegistration_clicked();

    void on_pushButton_Entrance_onEntrance_clicked();

    void on_pushButton_createTask_onMain_clicked();

    void on_pushButton_backToMain_onNewTask_clicked();

    void on_pushButton_createTask_onNewTask_clicked();

    void on_tableView_allTasks_onMain_clicked(const QModelIndex &index);

    void on_pushButton_sendMessage_onMain_clicked();

    void on_pushButton_aboutTask_onMain_clicked();

    void on_pushButton_backToMain_onAboutTask_clicked();

    void on_pushButton_saveTaskDescription_onAboutTask_clicked();

    void on_checkBox_onlyUsersTasks_stateChanged(int currentState);

    void on_pushButton_addPerformers_onMain_clicked();

    void on_pushButton_backToMain_onAddPerformers_clicked();

    void on_checkBox_isTaskCompleted_onMain_stateChanged(int currentState);

    void on_pushButton_addNewTaskPerformers_onAddPerformers_clicked();

    void on_checkBox_onlyCompletedTasksFilter_onMain_stateChanged(int currentState);

    void on_checkBox_onlyNotCompletedTasksFilter_onMain_stateChanged(int currentState);

    void on_checkBox_onlyUsersTasks_clicked();

    void on_checkBox_onlyCompletedTasksFilter_onMain_clicked();

    void on_checkBox_onlyNotCompletedTasksFilter_onMain_clicked();

    void on_pushButton_findUserIDFilter_onNewTask_clicked();

    void on_pushButton_findUserIDFilter_onAddTaskPerformers_clicked();

    void on_pushButton_settings_onMain_clicked();

    void on_pushButton_backToMain_onSettings_clicked();

    void on_checkBox_completeTheTask_onAboutTask_clicked();

    void on_lineEdit_chatFilter_onMain_textChanged(const QString &filterText);

    void on_pushButton_changeUserName_onMain_clicked();

    void on_pushButton_changeUserPassword_onSettings_clicked();

    void on_pushButton_refreshChat_onMain_clicked();

    void on_pushButton_userCompletedTasks_onSettings_clicked();

    void on_tableView_allCompletedTasks_onAllCompletedUserTasks_clicked(const QModelIndex &index);

    void on_pushButton_backToMain_onCompletedTasks_clicked();

    void on_pushButton_setPersonalPerformerTask_onPersonalPerformersTasks_clicked();

    void on_pushButton_saveIntervalUdpate_onSettings_clicked();

    void TimerSlot();

private:
    Ui::MainWindow *ui;
    void setDatabase();
    void setTasks();
    void setTaskCompletedCheckBoxes(QString& query, int currentState);
    bool checkUsersID_addingIDNewPerformers(QString& stringID);
    bool checkIsNameAvailable(QString& userName);
    void setTableViewsLook(QTableView &tableView);
    QString findTaskBoss(QString& query);
    QString findTaskDescription(QString& query);
    void addingNewPerformers(bool& isAllUsersIDCorrect, QString& taskID, QString& taskTitle, bool isPerformerAlreadyExist);
    void setTableModelForCompletedTasks();
    void startChatUpdateByTime();
    void stopTimer();
    void restartTimer();
    void scrollDownForChatTableView();
    void findingUserIDOperation();
    void setUIOperations();
    QString getValueFromDB(QString& queryText);
    int getValueFromDBINT(QString& queryText);
    QString const intervalUdpateSettingComboboxHint = "Данная настройка определяет промежуток времени, который будет\nдлиться до отображения новых сообщений в чате.\n\nОбратите внимание: чем ниже значение данной настройки, тем ниже скорость работы программы.\nДля наиболее быстрой работы выберете 'Нет'";


    QSqlDatabase db;
    QSqlQueryModel *tableModel = new QSqlQueryModel(this);
    QSqlQueryModel *tableModelForChats = new QSqlQueryModel(this);
    QSortFilterProxyModel *filterTable = new QSortFilterProxyModel(this);
    QString global_userName, global_userID, global_currentTaskID, global_currentTaskName, global_previousTaskDescription, global_userPassword, taskTitle, taskDescription, taskID;
    QString currentIntervalUdpate = "0";
    QString const intervalUpdateColumnNameForDB = "interval_upd";
    QVector<QString>performersID;
    QVector<QString>performersTasks;
    int selectedRow_allTasks, currentCheckBoxState, currentCompletedTaskCheckBoxState, currentNotCompletedTaskCheckBoxState, currentUserTaskCheckBoxState ,time, currentUserIDPersonalTaskPage;
    bool isAnyTableViewActivated = false;
    bool isTimerActivated = false;
    bool isAllUsersIDCorrect= true;
    bool isCreateTaskCall = false;
    bool isChatFilterEmpty = true;
    bool isAnyChatSelected = false;
    QTimer *timer = new QTimer(this);


};
#endif // MAINWINDOW_H
