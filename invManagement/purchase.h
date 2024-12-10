#ifndef PURCHASE_H
#define PURCHASE_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class purchase;
}

class purchase : public QDialog
{
    Q_OBJECT

public:
    explicit purchase(QWidget *parent = nullptr);
    ~purchase();

private slots:


    void on_pushproduct_clicked();
    void on_getBill_clicked();

private:
    Ui::purchase *ui;
    QSqlDatabase db_connection;
};

#endif // PURCHASE_H






