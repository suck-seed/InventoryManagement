#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>

//header for dashboard
#include "dashboard.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class mainwindow;
}
QT_END_NAMESPACE

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

private slots:
    void on_signIn_clicked();

private:
    Ui::mainwindow *ui;
    QSqlDatabase db_connection;
    dashboard *dashinst;
};
#endif // MAINWINDOW_H
