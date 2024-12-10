#ifndef PRODUCTADDER_H
#define PRODUCTADDER_H

#include <QDialog>
#include <QtSql>





namespace Ui {
class productadder;
}

class productadder : public QDialog
{
    Q_OBJECT

public:
    explicit productadder(QWidget *parent = nullptr);
    ~productadder();

private slots:
    void on_addProduct_clicked();

private:
    Ui::productadder *ui;
    QSqlDatabase db_connection;

};

#endif // PRODUCTADDER_H
