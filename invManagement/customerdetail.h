#ifndef CUSTOMERDETAIL_H
#define CUSTOMERDETAIL_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class customerdetail;
}

class customerdetail : public QDialog
{
    Q_OBJECT

public:
    explicit customerdetail(QWidget *parent = nullptr);
    ~customerdetail();

private slots:
    void on_updateProduct_clicked();

private:
    Ui::customerdetail *ui;
    QSqlDatabase db_connection;
};

#endif // CUSTOMERDETAIL_H
