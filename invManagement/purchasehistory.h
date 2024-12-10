#ifndef PURCHASEHISTORY_H
#define PURCHASEHISTORY_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class purchasehistory;
}

class purchasehistory : public QDialog
{
    Q_OBJECT

public:
    explicit purchasehistory(QWidget *parent = nullptr);
    ~purchasehistory();

private slots:
    void on_displayHistory_clicked();

private:
    Ui::purchasehistory *ui;
    QSqlDatabase db_connection;
};

#endif // PURCHASEHISTORY_H
