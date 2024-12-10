#include "productupdater.h"
#include "ui_productupdater.h"

productupdater::productupdater(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::productupdater)
{
    ui->setupUi(this);

    //connecting database
    db_connection = QSqlDatabase::addDatabase("QSQLITE");
    db_connection.setDatabaseName(
        "/home/nothing/Projects/CPPProjects/InventoryManagement/Database/invmanagementDB");

    if (db_connection.open()) {
        qDebug() << "Database is connected";
    } else {
        qDebug() << "database is not connected";
        qDebug() << "Error :" << db_connection.lastError();
    }
}

productupdater::~productupdater()
{
    delete ui;
}


class existanceChecker
{

private:
    QSqlDatabase& db_connection;
    Ui::productupdater* ui;  ///pointer to ui object from purchase class

public:
    existanceChecker(QSqlDatabase& db, Ui::productupdater* uiPtr) : db_connection(db), ui(uiPtr) {}



    bool codeChecker(QString code)
    {
        db_connection.open();
        QSqlDatabase::database().transaction();



        // tyo code xa ki nai check gardai, for code xa
        QSqlQuery checkData(db_connection);
        checkData.prepare("SELECT COUNT(*) FROM Products WHERE product_code = :productcode");
        checkData.bindValue(":productcode", code);

        if (checkData.exec() && checkData.next())
        {
            int count = checkData.value(0).toInt();

            if (count == 0)
            {
                // product exists gardaina
                qDebug() << "Product doesnt exists!";
                ui->errorCurrentCode->setText("Product doesnt exists!");

                QSqlDatabase::database().rollback();
                db_connection.close();
                return false;
            }
        }
        else
        {
            // product check garda error aayo bhane
            qDebug() << "Error checking product existence:" << checkData.lastError().text();
            QSqlDatabase::database().rollback();
            db_connection.close();
            return false;
        }

        // customer exists garxa so we return true
        return true;

    }


    bool newcodeChecker(QString code)
    {


        db_connection.open();
        QSqlDatabase::database().transaction();



        // tyo code xa ki nai check gardai, for code xa
        QSqlQuery checkData(db_connection);
        checkData.prepare("SELECT COUNT(*) FROM Products WHERE product_code = :productcode");
        checkData.bindValue(":productcode", code);



        if (checkData.exec() && checkData.next())
        {
            int count = checkData.value(0).toInt();

            if (count > 0)
            {
                // Product already exists
                qDebug() << "Product already exists!";
                ui->errorNewCode->setText("Product exists already!");

                QSqlDatabase::database().rollback();
                db_connection.close();
                return true;
            }
        }
        else
        {
            // Handle error in the check query
            qDebug() << "Error checking product existence:" << checkData.lastError().text();
            QSqlDatabase::database().rollback();
            db_connection.close();
            return false;
        }

        return false;
    }


private slots:
    void on_updateProduct_clicked();
};





void productupdater::on_deleteProduct_clicked()
{
    QString productcode= ui->currentcodeIn->text();



    //MAKING OBJECT FOR CLASS existanceChecker
    existanceChecker check(db_connection , ui);



    if(!check.codeChecker(productcode))
    {
        qDebug() << "product exixts gardaina , so cant continue";
        return;
    }




    //product exists garxa so we delete the said product

    db_connection.open();
    QSqlDatabase::database().transaction();


    QSqlQuery DeleteData(db_connection);


    DeleteData.prepare("DELETE FROM Products WHERE product_code = :code");
    DeleteData.bindValue(":code", productcode);

    DeleteData.exec();
    QSqlDatabase::database().commit();
    db_connection.close();


    ui->updatedSucessfully->setText("Product deleted sucessfully");



}


void productupdater::on_updateProduct_clicked()
{


    QString currentcode= ui->currentcodeIn->text();
    QString newcode= ui->codeIn->text();
    QString newname = ui->nameIn->text();
    int newstock= ui->stockIn->text().toInt();
    double newunitprice= ui->unitIn->text().toDouble();

    qDebug() << newstock;


    // bool to store radio button ko status
    bool updatecode = ui->checkNewCode->isChecked();
    bool updatename = ui->checkNewName->isChecked();
    bool updatestock = ui->checkNewStock->isChecked();
    bool updateunitprice = ui->checkNewUnitPrice->isChecked();





    //MAKING OBJECT FOR CLASS existanceChecker
    existanceChecker check(db_connection , ui);



    if(!check.codeChecker(currentcode))
    {
        qDebug() << "product exixts gardaina , so cant continue";
        return;
    }

    //product exists garxa so we can update said product
    // now we check if new code exists or not


    if(check.newcodeChecker(newcode) == 1)
    {
        qDebug() << "product already exists";
        return;

    }



    // BOTH CODE AND NEWCODE DOESNT EXISTS SO WE CAN CONTINUE



    //selected button ko basis ma string banauni which we will load to prepare later
    QString updateQueryStr = "UPDATE Products SET ";


    if(updatename) { updateQueryStr += "product_name = :name, "; }
    if(updatecode) { updateQueryStr += "product_code = :code, "; }
    if(updatestock) { updateQueryStr += "product_stock = :stock, "; }
    if(updateunitprice) { updateQueryStr += "product_unit_price = :unitprice, "; }

    // last ko space ra comma hatauxa, literally chops off last 2 place or index of string
    updateQueryStr.chop(2);

    updateQueryStr += " WHERE product_code = :currentcode";





    // code exist garxa, so data insert garne

    db_connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery UpdateData(db_connection);
    UpdateData.prepare(updateQueryStr);


    // jun jun select xa testo value bind garne

    if(updatename) { UpdateData.bindValue(":name",newname); }
    if(updatecode) {  UpdateData.bindValue(":code",newcode); }
    if(updatestock) {  UpdateData.bindValue(":stock",newstock);  }
    if(updateunitprice) {  UpdateData.bindValue(":unitprice",newunitprice); }


    UpdateData.bindValue(":currentcode",currentcode);



    UpdateData.exec();
    QSqlDatabase::database().commit();
    db_connection.close();


    ui->updatedSucessfully->setText("Product updated sucessfully");



}

