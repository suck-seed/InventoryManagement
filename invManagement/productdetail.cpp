#include "productdetail.h"
#include "ui_productdetail.h"

productdetail::productdetail(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::productdetail)
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

productdetail::~productdetail()
{
    delete ui;
}

void productdetail::on_updateProduct_clicked()
{
    db_connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery DisplayData(db_connection);
    DisplayData.prepare("SELECT * from Products");
    int numberofrowstodisplay = 20;

    if(DisplayData.exec())
    {
        ui->tableWidget->setRowCount(numberofrowstodisplay);
        int rownumber = 0;

        while (DisplayData.next())
        {
            ui->tableWidget->setItem(rownumber, 0 ,new QTableWidgetItem(QString(DisplayData.value("product_id").toString())));
            ui->tableWidget->setItem(rownumber, 1 ,new QTableWidgetItem(QString(DisplayData.value("product_name").toString())));
            ui->tableWidget->setItem(rownumber, 2 ,new QTableWidgetItem(QString(DisplayData.value("product_code").toString())));
            ui->tableWidget->setItem(rownumber, 3 ,new QTableWidgetItem(QString(DisplayData.value("product_stock").toString())));
            ui->tableWidget->setItem(rownumber, 4 ,new QTableWidgetItem(QString(DisplayData.value("product_unit_price").toString())));
            rownumber++;
        }
    }

    QSqlDatabase::database().commit();
    db_connection.close();
}

