#include "productadder.h"
#include "ui_productadder.h"

productadder::productadder(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::productadder)
{
    ui->setupUi(this);

    //connecting database
    db_connection =QSqlDatabase::addDatabase("QSQLITE");
    db_connection.setDatabaseName("/home/nothing/Projects/CPPProjects/InventoryManagement/Database/invmanagementDB");

    if(db_connection.open())
    {
        qDebug() << "Database is connected";
    }
    else
    {
        qDebug() << "database is not connected";
        qDebug() << "Error :" <<db_connection.lastError();
    }
}

productadder::~productadder()
{
    delete ui;
}



void productadder::on_addProduct_clicked()
{
    QString productname = ui->nameIn->text();
    QString productcode= ui->codeIn->text();
    int productstock= ui->stockIn->text().toInt();
    double productunitprice= ui->unitIn->text().toDouble();


    db_connection.open();
    QSqlDatabase::database().transaction();




    //checking if tyo code exist garxa ki nai
    QSqlQuery checkData(db_connection);
    checkData.prepare("SELECT COUNT(*) FROM Products WHERE product_code = :productcode");
    checkData.bindValue(":productcode", productcode);

    if (checkData.exec() && checkData.next()) {
        int count = checkData.value(0).toInt();
        if (count > 0) {
            // Product already exists
            qDebug() << "Product already exists!";
            ui->errorDisplay->setText("Product with code exists!");

            QSqlDatabase::database().rollback();
            db_connection.close();
            return;
        }
    } else {
        // Handle error in the check query
        qDebug() << "Error checking product existence:" << checkData.lastError().text();
        QSqlDatabase::database().rollback();
        db_connection.close();
        return;
    }


    // code exist gardaina, so data insert garne
    QSqlQuery InsertData(db_connection);
    InsertData.prepare("INSERT INTO Products (product_name,product_code,product_stock,product_unit_price)  VALUES(:name,:code,:stock,:unit_price)");

    InsertData.bindValue(":name", productname);
    InsertData.bindValue(":code", productcode);
    InsertData.bindValue(":stock", productstock);
    InsertData.bindValue(":unit_price", productunitprice);


    InsertData.exec();

    QSqlDatabase::database().commit();

    db_connection.close();


    ui->addedSucessfully->setText("Product was added sucessfully");


}



