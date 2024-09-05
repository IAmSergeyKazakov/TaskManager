#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_pushButton_settings_onMain_clicked()
{
    if(db.open()){
        ui->statusbar->clearMessage();
        stopTimer();
        ui->stackedWidget->setCurrentIndex(6);
        QString userIntervalUpdateSetting;
        QString query = "SELECT value FROM users_settings WHERE user_id = "+global_userID + " AND setting_type = " + QString("\""+intervalUpdateColumnNameForDB+"\"");
        qDebug()<<query;
        userIntervalUpdateSetting = getValueFromDB(query);
        if (userIntervalUpdateSetting == "0")
            userIntervalUpdateSetting = "Нет";

        ui->comboBox_intervalUdpateList_onSettings->setCurrentText(userIntervalUpdateSetting);
    }
    else
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
}

void MainWindow::on_pushButton_changeUserName_onMain_clicked()
{
    if (db.open()){
        QSqlQuery updateUserNameQuery(db);
        QString newUserName = ui->lineEdit_changeUserName_onSettings->text();
        bool isNameAvailable = checkIsNameAvailable(newUserName);
        if (isNameAvailable)
        {
            updateUserNameQuery.prepare("UPDATE users SET name = "+ QString("\""+newUserName+"\"")+ " WHERE id =" + global_userID);
            qDebug()<<"UPDATE users SET name = "+ QString("\""+newUserName+"\"")+ " WHERE user_id =" + global_userID;
            updateUserNameQuery.exec();
            global_userName = newUserName;
            ui->statusbar->showMessage("Имя изменено на " + global_userName);
        }
        else{
            ui->statusbar->showMessage("Такое имя уже занято");
        }
    }
    else{
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }
}


void MainWindow::on_pushButton_changeUserPassword_onSettings_clicked()
{
    if(db.open())
    {
        QSqlQuery updateUserPasswordQuery(db);
        QString oldUserPassword = ui->lineEdit_oldUserPassword_onSettings->text();
        QString newUserPassword = ui->lineEdit_newUserPassword_onSettings->text();
        if (global_userPassword == oldUserPassword)
        {
            updateUserPasswordQuery.prepare("UPDATE users SET password = "+ QString("\""+newUserPassword+"\"") + " WHERE id = "+global_userID);
            updateUserPasswordQuery.exec();
            global_userPassword = newUserPassword;
            ui->statusbar->showMessage("Успешно!");
        }
        else{
            ui->statusbar->showMessage("На данном аккаунте другой пароль. Изменения не выполнены");
        }
    }
    else
    {
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }
}

void MainWindow::on_pushButton_saveIntervalUdpate_onSettings_clicked()
{
    QString currentIntervalUpdateValue = ui->comboBox_intervalUdpateList_onSettings->currentText();
    QSqlQuery udpateIntervalSettingQuery(db);
    if (currentIntervalUpdateValue == "Нет")
        currentIntervalUpdateValue = "0";
    udpateIntervalSettingQuery.prepare("UPDATE users_settings SET value = "+currentIntervalUpdateValue +" WHERE user_id = "+global_userID+ " AND setting_type = "+ QString("\""+intervalUpdateColumnNameForDB+"\""));
    udpateIntervalSettingQuery.exec();
    ui->statusbar->showMessage("Настройки сохранены");
}


void MainWindow::on_pushButton_backToMain_onSettings_clicked()
{
    restartTimer();
    setTasks();
    ui->stackedWidget->setCurrentIndex(2);
    ui->statusbar->clearMessage();
}

