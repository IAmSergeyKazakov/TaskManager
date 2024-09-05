#include "mainwindow.h"


void MainWindow::setDatabase()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("*ip*");
    db.setPort(*port*);
    db.setUserName("*userName*");
    db.setPassword("*password*");
    db.setDatabaseName("*dbName*");
}
