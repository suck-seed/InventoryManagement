#include "customeradder.h"
#include "ui_customeradder.h"

customeradder::customeradder(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::customeradder)
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

customeradder::~customeradder()
{
    delete ui;
}

void customeradder::on_addCustomer_clicked()
{
    QString customernumber = ui->numberIn->text();
    QString customername = ui->nameIn->text();
    QString customeraddress = ui->addressIn->text();

    db_connection.open();
    QSqlDatabase::database().transaction();


    QSqlQuery checkData(db_connection);
    checkData.prepare("SELECT COUNT(*) FROM Customer WHERE customer_number = :number");
    checkData.bindValue(":number", customernumber);



    if (checkData.exec() && checkData.next())
    {
        int count = checkData.value(0).toInt();
        if (count > 0)
        {
            // Customer already xa
            qDebug() << "Customer already xa!";

            ui->errorDisplay->setText("Customer with number exists!");
            QSqlDatabase::database().rollback();
            db_connection.close();
            return;
        }
    }
    else
    {
        // Handle error in the check query
        qDebug() << "Error checking customer :" << checkData.lastError().text();
        QSqlDatabase::database().rollback();
        db_connection.close();
        return;
    }


    //customer chaina, so we adding it below

    QSqlQuery AddData(db_connection);
    AddData.prepare("INSERT INTO Customer (customer_name,customer_number,customer_address)  VALUES (:name,:number,:address)");
    AddData.bindValue(":name",customername);
    AddData.bindValue(":number",customernumber);
    AddData.bindValue(":address",customeraddress);

    AddData.exec();

    QSqlDatabase::database().commit();

    db_connection.close();

    ui->addedSucessfully->setText("Customer was added sucessfully");


}

























