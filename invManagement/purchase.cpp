#include "purchase.h"
#include "ui_purchase.h"


//purchase class
purchase::purchase(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::purchase)
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

purchase::~purchase()
{
    delete ui;
}





class existanceChecker
{

private:
    QSqlDatabase& db_connection;
    Ui::purchase* ui;  ///pointer to ui object from purchase class

public:
    existanceChecker(QSqlDatabase& db, Ui::purchase* uiPtr) : db_connection(db), ui(uiPtr) {}


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

                ui->errorNumber->setText("Customer with number doesnt exists!");
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



    bool productChecker(QString code)
    {


        db_connection.open();
        QSqlDatabase::database().transaction();

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
                ui->errorCode->setText("Product with code doesnt exists!");

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

        return true;
    }




    bool quantityChecker(QString code,int quantity)
    {

        db_connection.open();
        QSqlDatabase::database().transaction();

        QSqlQuery checkQuantity(db_connection);

        checkQuantity.prepare("SELECT product_stock FROM Products WHERE product_code = :code");
        checkQuantity.bindValue(":code", code);


        if (checkQuantity.exec() && checkQuantity.next())
        {
            //product cha
            // abha aako value lai assign garni
            int stock = checkQuantity.value(0).toInt();

            //checking kati dekhako xa stock, potential error while retriving stock info
            qDebug() << stock;

            if (stock < quantity)
            {
                // Insufficient stock
                qDebug() << "Insufficient stock!";
                ui->errorQuantity->setText("Insufficient stock!");
                QSqlDatabase::database().rollback();
                db_connection.close();
                return false;
            }
        }
        else
        {
            // Handle error in the check query
            qDebug() << "Error checking quantity: " << checkQuantity.lastError().text();
            QSqlDatabase::database().rollback();
            db_connection.close();
            return false;
        }

        // Sufficient stock
        return true;


    }

private slots:
    void on_pushproduct_clicked();
    void on_getBill_clicked();
};




class retriveChange
{

private:
    QSqlDatabase& db_connection;
    Ui::purchase* ui;  ///pointer to ui object from purchase class

public:
    retriveChange(QSqlDatabase& db, Ui::purchase* uiPtr) : db_connection(db), ui(uiPtr) {}


    void changeStock(QString code, int quantity)
    {
        db_connection.open();
        QSqlDatabase::database().transaction();

        QSqlQuery changeStock(db_connection);

        changeStock.prepare("UPDATE Products SET product_stock = product_stock - :quantity WHERE product_code = :code");
        changeStock.bindValue(":quantity", quantity);
        changeStock.bindValue(":code", code);

        if (!changeStock.exec())
        {
            qDebug() << "Error updating product stock:" << changeStock.lastError().text();
            QSqlDatabase::database().rollback();
            db_connection.close();
            return;
        }


        QSqlDatabase::database().commit();
        db_connection.close();
        qDebug() << "Purchase successful!";


    }




    QString retriveProductName(QString code)
    {
        db_connection.open();
        QSqlDatabase::database().transaction();

        QSqlQuery retriveName(db_connection);

        retriveName.prepare("SELECT product_name FROM Products WHERE product_code = :code");
        retriveName.bindValue(":code", code);

        if(retriveName.exec() && retriveName.next())
        {
            QString name = retriveName.value(0).toString();
            qDebug() << "product ko name : "<< name;

            return name;
        }
        else
        {
            // yaha aayo bhane, name retrive garda error aayo mathi
            qDebug() << "Error retriving name: " << retriveName.lastError().text();
            QSqlDatabase::database().rollback();
            db_connection.close();
            return 0;
        }


    }


    double retriveProductUnitPrice(QString code)
    {
        db_connection.open();
        QSqlDatabase::database().transaction();

        QSqlQuery retriveUnitPrice(db_connection);


        retriveUnitPrice.prepare("SELECT product_unit_price     FROM Products   WHERE product_code = :code");
        retriveUnitPrice.bindValue(":code", code);


        if(retriveUnitPrice.exec() && retriveUnitPrice.next())
        {
            double unitprice = retriveUnitPrice.value(0).toDouble();
            // value is used to retrive value, and 0 indicated first column, to double obvv converts it into double


            qDebug() << "unit price is :" << unitprice;
            return unitprice;
        }
        else
        {
            qDebug() << "error retriving unit price: " << retriveUnitPrice.lastError().text();

            QSqlDatabase::database().rollback();
            db_connection.close();
            return 0 ;
        }

    }

};


class addPurchase
{


private:
    QSqlDatabase& db_connection;
    Ui::purchase* ui;  ///pointer to ui object from purchase class

public:
    addPurchase(QSqlDatabase& db, Ui::purchase* uiPtr) : db_connection(db), ui(uiPtr) {}


    void adder(QString customernumber, QString productcode, QString productname, double productunitprice, int purchasedquantity)
    {
        db_connection.open();
        QSqlDatabase::database().transaction();

        QSqlQuery enterPurchase(db_connection);

        enterPurchase.prepare("INSERT INTO Purchases (customer_number, product_code, product_name, product_unit_price, purchased_unit, total_price) VALUES (:customernumber,:productcode, :productname, :productunitprice, :purchasedquantity, :total)");

        enterPurchase.bindValue(":customernumber", customernumber);
        enterPurchase.bindValue(":productcode", productcode);
        enterPurchase.bindValue(":productname",productname);
        enterPurchase.bindValue(":productunitprice",productunitprice);
        enterPurchase.bindValue(":purchasedquantity", purchasedquantity);
        enterPurchase.bindValue(":total", productunitprice*purchasedquantity);


        enterPurchase.exec();

        QSqlDatabase::database().commit();

        db_connection.close();

    }

};



void purchase::on_pushproduct_clicked()
{

    //getting infromation from page
    QString customernumber = ui->numberIn->text();
    QString productcode = ui->codeIn->text();
    int purchasedquantity = ui->quantityIn->text().toInt();




    //variable to get from Table
    QString productname;
    double productunitprice;




    // making object for existanceChecker class
    existanceChecker check(db_connection , ui);




    //check garxa if customer, product ra sufficient product exists garxa ki nai
    if( !check.customerChecker(customernumber) ||  !check.productChecker(productcode) ||  !check.quantityChecker(productcode,purchasedquantity) )
    {
        qDebug() << "cant proceed with purchase";
        return;
    }

    qDebug() << "can proceed with purchase";




    //now we make object for retruveChange class and decrease value of stock with quantity
    retriveChange change(db_connection, ui);
    change.changeStock(productcode,purchasedquantity);





    //abha retriving name and unit price
    retriveChange retrive(db_connection, ui);

    productname = retrive.retriveProductName(productcode);
    productunitprice = retrive.retriveProductUnitPrice(productcode);



    //abha we put these value into purchase table

    addPurchase purchase(db_connection, ui);
    purchase.adder(customernumber,productcode,productname, productunitprice,purchasedquantity);



    // to show addes products in ui table.

    QTableWidgetItem *itemCode = new QTableWidgetItem(productcode);
    QTableWidgetItem *itemName = new QTableWidgetItem(productname);
    QTableWidgetItem *itemUnitPrice = new QTableWidgetItem(QString::number(productunitprice));
    QTableWidgetItem *itemQuantity = new QTableWidgetItem(QString::number(purchasedquantity));
    QTableWidgetItem *itemTotalPrice = new QTableWidgetItem(QString::number(productunitprice * purchasedquantity));

    int rowCount = ui->purchaseInfo->rowCount();
    ui->purchaseInfo->insertRow(rowCount);


    // Set data for each cell in the new row
    ui->purchaseInfo->setItem(rowCount, 0, itemCode);      // Product Code
    ui->purchaseInfo->setItem(rowCount, 1, itemName);      // Product Name
    ui->purchaseInfo->setItem(rowCount, 2, itemUnitPrice); // Unit Price
    ui->purchaseInfo->setItem(rowCount, 3, itemQuantity);  // Quantity
    ui->purchaseInfo->setItem(rowCount, 4, itemTotalPrice); // Total Price


}


void purchase::on_getBill_clicked()
{

    qDebug() << "getBill button clicked!";


    double grandTotal =0.0;
    double taxAddition = 0.0;
    double netTotal = 0.0;

    //going through table ani 4th index row ko value lai grandTotal ma sum garne



    for (int row = 0; row < ui->purchaseInfo->rowCount(); ++row)
    {

        QTableWidgetItem* totalItem = ui->purchaseInfo->item(row, 4);

        // Check if the item exists
        if (totalItem) {
            // Add the value to the grand total
            grandTotal += totalItem->text().toDouble();
        }
    }

    qDebug() << "grand total is "<< grandTotal;

    ui->grandtotalOut->setText(QString::number(grandTotal));

    taxAddition = 0.13* grandTotal;
    ui->taxOut->setText(QString::number(taxAddition));

    netTotal = grandTotal+taxAddition;
    ui->nettotalOut->setText(QString::number(netTotal));



    ui->purchaseSucessful->setText("Purchase Sucessful");
}













