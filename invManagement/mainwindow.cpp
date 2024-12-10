#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::mainwindow)
{
    ui->setupUi(this);

    // connecting database
    db_connection = QSqlDatabase::addDatabase("QSQLITE");
    db_connection.setDatabaseName("/home/nothing/Projects/CPPProjects/InventoryManagement/Database/invmanagementDB");

    if (db_connection.open())
    {
        qDebug() << "Database is connected";
    }
    else
    {
        qDebug() << "database is not connected";
        qDebug() << "Error :" << db_connection.lastError();
    }
}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::on_signIn_clicked()
{
    QString usernameIn = ui->usernameInput->text();
    QString passwordIn = ui->passwordInput->text();

    db_connection.open();
    QSqlDatabase::database().transaction();

    // giving the name of database
    QSqlQuery QueryPassword(db_connection);

    QueryPassword.prepare("SELECT admin_username, admin_password FROM Admin WHERE admin_username = :username");
    QueryPassword.bindValue(":username", usernameIn);

    if (QueryPassword.exec() && QueryPassword.next())
    {
        QString storedPassword = QueryPassword.value("admin_password").toString();

        if (passwordIn == storedPassword)
        {
            qDebug() << "Logged in";

            dashinst = new dashboard(this);
            dashinst->show();

            // hiding login window
            this->hide();
        }
        else
        {

            QMessageBox::warning(this, "Login Failed", "Incorrect username/password");
        }
    }
    else
    {
        // qDebug() << "Username not found";
        QMessageBox::warning(this, "Login Failed", "User not found. Please check your username.");
    }
}
