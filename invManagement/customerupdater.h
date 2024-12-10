#ifndef CUSTOMERUPDATER_H
#define CUSTOMERUPDATER_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class customerupdater;
}

class customerupdater : public QDialog
{
    Q_OBJECT

public:
    explicit customerupdater(QWidget *parent = nullptr);
    ~customerupdater();

private slots:
    void on_deleteCustomer_clicked();

    void on_updateCustomer_clicked();

private:
    Ui::customerupdater *ui;
    QSqlDatabase db_connection;
};

#endif // CUSTOMERUPDATER_H
