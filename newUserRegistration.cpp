#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_pushButton_CreateAcc_onRegistration_clicked()
{
    QString name = ui->lineEdit_Name_onRegistration->text();
    QString password = ui->lineEdit_Password_onRegistration->text();
    QString confirmPassword = ui->lineEdit_ConfirmPassword_onRegistration->text();
    QSqlQuery addDataQuery(db);
    QString userID;
    bool isAvailableName;

    if (db.open())
    {
        isAvailableName = checkIsNameAvailable(name);
        if (isAvailableName == true && confirmPassword == password && confirmPassword.size()>0 && password.size()>0 && name.size()>0 && password.size()>=6)
        {
            addDataQuery.prepare("INSERT INTO users (name,password) VALUES (?, ?)");
            addDataQuery.addBindValue(name);addDataQuery.addBindValue(password);
            addDataQuery.exec();

            QString query = "SELECT id FROM users WHERE name = "+QString("\""+name+"\"");
            userID = getValueFromDB(query);

            addDataQuery.prepare("INSERT INTO users_settings (user_id, setting_type) VALUES (?, ?)");
            addDataQuery.addBindValue(userID);
            addDataQuery.addBindValue(intervalUpdateColumnNameForDB);
            addDataQuery.exec();
            ui->statusbar->showMessage("Успешно!");
            //tableModel->setQuery("SELECT * FROM users");
        }
        else if (isAvailableName == false)
            ui->statusbar->showMessage("Такое имя уже есть");
        else if (confirmPassword != password)
            ui->statusbar->showMessage("Пароли не совпадают");
        else if (password.size()<6)
            ui->statusbar->showMessage("Пароль должен состоять минимум из 6 символов");
        else
            ui->statusbar->showMessage("Некорректные данные");
    }
    else{
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }

}
