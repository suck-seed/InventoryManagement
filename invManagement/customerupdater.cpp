#include "customerupdater.h"
#include "ui_customerupdater.h"

customerupdater::customerupdater(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::customerupdater)
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

customerupdater::~customerupdater()
{
    delete ui;
}



// CLASS TO CHECK IF NUMBERS EXISTS OR NOT
class existanceChecker
{

private:
    QSqlDatabase& db_connection;
    Ui::customerupdater* ui;  ///pointer to ui object from purchase class

public:
    existanceChecker(QSqlDatabase& db, Ui::customerupdater* uiPtr) : db_connection(db), ui(uiPtr) {}


    bool customerChecker(QString number)
    {

        db_connection.open();
        QSqlDatabase::database().transaction();


        QSqlQuery checkData(db_connection);
        checkData.prepare("SELECT COUNT(*) FROM Customer WHERE customer_number = :number");
        checkData.bindValue(":number", number);



        if (checkData.exec() && checkData.next())
        {
            int count = checkData.value(0).toInt();

            if (count == 0)
            {
                // Customer chaina
                qDebug() << "Customer chaina!";

                ui->errorCurrentNumber->setText("Customer doesnt exists!");
                QSqlDatabase::database().rollback();
                db_connection.close();
                return false;
            }
        }
        else
        {
            // Handle error in the check query
            qDebug() << "Error checking customer :" << checkData.lastError().text();
            QSqlDatabase::database().rollback();
            db_connection.close();
            return false;
        }
        return true;
    }



    bool newnumberChecker(QString number)
    {

        db_connection.open();
        QSqlDatabase::database().transaction();


        QSqlQuery checkData(db_connection);
        checkData.prepare("SELECT COUNT(*) FROM Customer WHERE customer_number = :number");
        checkData.bindValue(":number", number);



        if (checkData.exec() && checkData.next())
        {
            int count = checkData.value(0).toInt();
            if (count > 0)
            {
                // Customer already xa
                qDebug() << "Customer already xa!";

                ui->errorNewNumber->setText("Customer exists already!");
                QSqlDatabase::database().rollback();
                db_connection.close();
                return true;
            }
        }
        else
        {
            // Handle error in the check query
            qDebug() << "Error checking customer :" << checkData.lastError().text();
            QSqlDatabase::database().rollback();
            db_connection.close();
            return false;
        }

        return false;
    }


};



void customerupdater::on_deleteCustomer_clicked()
{

    QString customernumber = ui->currentnumberIn->text() ;




    //MAKING OBJECT FOR CLASS existanceChecker
    existanceChecker check(db_connection , ui);


    if(check.customerChecker(customernumber) == 0)
    {
        qDebug() << "cant continue with purchase";
        return;
    }


    //CUSTOMER EXISTS, SO WE CAN DELETE SAID CUSTOMER



    db_connection.open();
    QSqlDatabase::database().transaction();


    QSqlQuery DeleteData(db_connection);

    DeleteData.prepare("DELETE FROM Customer WHERE customer_number = :number");
    DeleteData.bindValue(":number", customernumber);


    DeleteData.exec();
    QSqlDatabase::database().commit();
    db_connection.close();

    ui->updatedSucessfully->setText("Customer deleted sucessfully");


}


void customerupdater::on_updateCustomer_clicked()
{
    QString currentnumber = ui->currentnumberIn->text();
    QString newnumber = ui->numberIn->text();
    QString newname = ui->nameIn->text();
    QString newaddress = ui->addressIn->text();
    double newcredit = ui->creditIn->text().toDouble();


    //BOOL VARIABLES TO STORE CHECK BOX KO STATUS

    bool updatenumber = ui->checkNewNumber->isChecked();
    bool updatename = ui->checkNewName->isChecked();
    bool updateaddress = ui->checkNewAddress->isChecked();
    bool updatecredit = ui->checkNewCredit->isChecked();


    //MAKING OBJECT FOR CLASS existanceChecker
    existanceChecker check(db_connection , ui);


    if(check.customerChecker(currentnumber) == 0)
    {
        // 0 = return falsee, means customer chaina
        qDebug() << "customer doesnt exists";
        return;
    }



    //CUSTOMER EXISTS , SO WE CAN PROCEED TO UPDATE THEM
    //NAYA CUSTOMER EXISTS GARXA KI NAI CHECKER

    if(check.newnumberChecker(newnumber) == 1)
    {
        qDebug() << "customer already exists";
        return;

    }



    //PREPARING THE SQL QUERY BASED ON WHICH OF THE INFORMATION IS SELECTED TO BE UPDATED
    db_connection.open();
    QSqlDatabase::database().transaction();

    QString updateQueryStr = "UPDATE Customer SET ";



    if(updatename) { updateQueryStr += "customer_name = :name, "; }
    if(updatenumber) { updateQueryStr += "customer_number = :number, "; }
    if(updateaddress) { updateQueryStr += "customer_address = :address, "; }
    if(updatecredit) { updateQueryStr += "customer_credit = :credit, "; }


    updateQueryStr.chop(2);

    updateQueryStr += " WHERE customer_number = :currentnumber";



    //BINDING AND EXECUTING THE QUERY

    QSqlQuery UpdateData(db_connection);
    UpdateData.prepare(updateQueryStr);


    if(updatename){ UpdateData.bindValue(":name",newname );}
    if(updatenumber){ UpdateData.bindValue(":number", newnumber );}
    if(updateaddress){ UpdateData.bindValue(":address",newaddress );}
    if(updatecredit){ UpdateData.bindValue(":credit", newcredit );}

    UpdateData.bindValue(":currentnumber", currentnumber );




    UpdateData.exec();
    QSqlDatabase::database().commit();
    db_connection.close();


    ui->updatedSucessfully->setText("Customer updated sucessfully");



}

