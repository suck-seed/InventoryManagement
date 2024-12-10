#ifndef PRODUCTUPDATER_H
#define PRODUCTUPDATER_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class productupdater;
}

class productupdater : public QDialog
{
    Q_OBJECT

public:
    explicit productupdater(QWidget *parent = nullptr);
    ~productupdater();

private slots:
    void on_updateProduct_clicked();

    void on_deleteProduct_clicked();

private:
    Ui::productupdater *ui;
    QSqlDatabase db_connection;
};

#endif // PRODUCTUPDATER_H




