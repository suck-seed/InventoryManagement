#ifndef PRODUCTDETAIL_H
#define PRODUCTDETAIL_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class productdetail;
}

class productdetail : public QDialog
{
    Q_OBJECT

public:
    explicit productdetail(QWidget *parent = nullptr);
    ~productdetail();

private slots:
    void on_updateProduct_clicked();

private:
    Ui::productdetail *ui;
    QSqlDatabase db_connection;
};

#endif // PRODUCTDETAIL_H
