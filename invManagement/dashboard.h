#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>
#include <QtSql>

// product ko header files
#include "productadder.h"
#include "productupdater.h"
#include "productdetail.h"


//customer ko header files
#include "customeradder.h"
#include "customerupdater.h"
#include "customerdetail.h"

//purchase ko header files
#include "purchase.h"
#include "purchasehistory.h"

namespace Ui {
class dashboard;
}

class dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    ~dashboard();

private slots:
    void on_addProduct_clicked();

    void on_updateProduct_clicked();

    void on_detailsProduct_clicked();

    void on_addCustomer_clicked();

    void on_updateCustomer_clicked();

    void on_detailsCustomer_clicked();

    void on_entryPurchase_clicked();

    void on_historyPurchase_clicked();

private:
    Ui::dashboard *ui;
    QSqlDatabase db_connection;

    //respective product class ko pointer(used in dashboard.cpp to create and open dialouge box)
    productadder *productadderinst;
    productupdater *productupdaterinst;
    productdetail *productdetailinst;

    //for customer classes
    customeradder *customeradderinst;
    customerupdater *customerupdaterinst;
    customerdetail *customerdetailinst;

    // for purchase classes
    purchase *purchaseinst;
    purchasehistory *purchasehistoryinst;
};

#endif // DASHBOARD_H
