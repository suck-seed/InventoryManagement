#ifndef CUSTOMERADDER_H
#define CUSTOMERADDER_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class customeradder;
}

class customeradder : public QDialog
{
    Q_OBJECT

public:
    explicit customeradder(QWidget *parent = nullptr);
    ~customeradder();

private slots:
    void on_addCustomer_clicked();

private:
    Ui::customeradder *ui;
    QSqlDatabase db_connection;
};

#endif // CUSTOMERADDER_H
