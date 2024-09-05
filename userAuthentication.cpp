#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_pushButton_Entrance_onEntrance_clicked()
{
    QProgressDialog progressDialog("Выполняется запрос к базе данных...", "Отмена", 0, 0, this);
    progressDialog.setWindowModality(Qt::WindowModal);
    progressDialog.setCancelButton(nullptr);
    QString name = ui->lineEdit_name_onEntrance->text();
    QString password = ui->lineEdit_password_onEntrance->text();
    QString realPassword;
    QString userID;

    if (db.open())
    {
        QString query = "SELECT password FROM users WHERE name = " + QString("\""+name+"\"");
        realPassword = getValueFromDB(query);

        query = "SELECT id FROM users WHERE name = " + QString("\""+name+"\"");
        userID = getValueFromDB(query);
        global_userID = userID;

        if (password == realPassword && password.size()!=0 && name.size()!=0){
            global_userName = name;
            global_userPassword = password;
            setTasks();
            ui->stackedWidget->setCurrentIndex(2);
        }
        else if (password != realPassword){
            ui->statusbar->showMessage("Неверный пароль или имя пользователя");
        }
        else{
            ui->statusbar->showMessage("Некорректные данные");
        }



    }
    else{
        ui->statusbar->showMessage("Ошибка. База данных не подключена");
    }

}
