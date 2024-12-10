#include "dashboard.h"
#include "ui_dashboard.h"
#include <QMessageBox>

dashboard::dashboard(QWidget *parent)
    : QDialog(parent), ui(new Ui::dashboard)
{
    ui->setupUi(this);

    // connecting database
    //  db_connection =QSqlDatabase::addDatabase("QSQLITE");
    //  db_connection.setDatabaseName("/home/nothing/Projects/CPPProjects/InventoryManagement/Database/invmanagementDB");

    // if(db_connection.open())
    // {
    //     qDebug() << "Database is connected";
    // }
    // else
    // {
    //     qDebug() << "database is not connected";
    //     qDebug() << "Error :" <<db_connection.lastError();
    // }
}

dashboard::~dashboard()
{
    delete ui;
}

void dashboard::on_addProduct_clicked()
{
    productadderinst = new productadder(this);
    productadderinst->show();

}

void dashboard::on_updateProduct_clicked()
{
    productupdaterinst = new productupdater(this);
    productupdaterinst->show();
}

void dashboard::on_detailsProduct_clicked()
{
    productdetailinst = new productdetail(this);
    productdetailinst->show();
}

void dashboard::on_addCustomer_clicked()
{
    customeradderinst = new customeradder(this);
    customeradderinst->show();

}


void dashboard::on_updateCustomer_clicked()
{
    customerupdaterinst = new customerupdater(this);
    customerupdaterinst->show();

}


void dashboard::on_detailsCustomer_clicked()
{
    customerdetailinst = new customerdetail(this);
    customerdetailinst->show();

}


void dashboard::on_entryPurchase_clicked()
{
    purchaseinst = new purchase(this);
    purchaseinst->show();
}


void dashboard::on_historyPurchase_clicked()
{
    purchasehistoryinst = new purchasehistory(this);
    purchasehistoryinst->show();

}

