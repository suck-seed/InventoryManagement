#include "purchasehistory.h"
#include "ui_purchasehistory.h"

purchasehistory::purchasehistory(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::purchasehistory)
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

purchasehistory::~purchasehistory()
{
    delete ui;
}

void purchasehistory::on_displayHistory_clicked()
{

    QString customernumber = ui->numberIn->text();


    // CONNECTING TO DATABASE
    db_connection.open();
    QSqlDatabase::database().transaction();



    //CHECKING IF CUSTOMER WITH SAID NUMBER EXISTS OR NOT
    QSqlQuery checkData(db_connection);
    checkData.prepare("SELECT COUNT(*) FROM Customer WHERE customer_number = :number");
    checkData.bindValue(":number", customernumber);



    if (checkData.exec() && checkData.next())
    {
        int count = checkData.value(0).toInt();
        if (count == 0)
        {
            // Customer chaina
            qDebug() << "Customer chaina!";

            ui->errorNumber->setText("Customer with number doesnt exists!");
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



    // CUSTOMER EXISTS, SO USING THIS QUERY TO RETRIVE AND DISPLAY INFO FROM PURCHASE TABLE

    QSqlQuery DisplayData(db_connection);
    DisplayData.prepare("SELECT product_code, product_name, product_unit_price, purchased_unit, total_price FROM Purchases WHERE customer_number = :number");
    DisplayData.bindValue(":number", customernumber);
    int numberofrowstodisplay = 20;

    if(DisplayData.exec())
    {
        ui->tableWidget->setRowCount(numberofrowstodisplay);
        int rownumber = 0;

        while (DisplayData.next())
        {
            ui->tableWidget->setItem(rownumber, 0 ,new QTableWidgetItem(QString(DisplayData.value("product_code").toString())));
            ui->tableWidget->setItem(rownumber, 1 ,new QTableWidgetItem(QString(DisplayData.value("product_name").toString())));
            ui->tableWidget->setItem(rownumber, 2 ,new QTableWidgetItem(QString(DisplayData.value("product_unit_price").toString())));
            ui->tableWidget->setItem(rownumber, 3 ,new QTableWidgetItem(QString(DisplayData.value("purchased_unit").toString())));
            ui->tableWidget->setItem(rownumber, 4 ,new QTableWidgetItem(QString(DisplayData.value("total_price").toString())));
            rownumber++;
        }
    }

    QSqlDatabase::database().commit();
    db_connection.close();
}

