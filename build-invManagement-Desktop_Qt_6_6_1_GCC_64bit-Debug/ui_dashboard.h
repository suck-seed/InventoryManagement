/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QFrame *frame;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line1;
    QLabel *welcomelabel;
    QFrame *line2;
    QPushButton *addProduct;
    QPushButton *updateProduct;
    QPushButton *detailsProduct;
    QFrame *line2_2;
    QPushButton *addCustomer;
    QPushButton *updateCustomer;
    QPushButton *detailsCustomer;
    QLabel *label_5;
    QPushButton *entryPurchase;
    QPushButton *historyPurchase;
    QFrame *line2_3;
    QFrame *line1_2;

    void setupUi(QDialog *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(615, 586);
        QFont font;
        font.setBold(false);
        dashboard->setFont(font);
        dashboard->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background-color: rgb(34, 40, 49);\n"
"	\n"
"}\n"
"\n"
"\n"
"QDialog\n"
"{\n"
"	background-color: rgb(238, 238, 238);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"\n"
"	color: rgb(57, 62, 70);\n"
"	font-weight: bold;\n"
"	border-radius: 8px;\n"
"	background-color: rgb(255, 211, 105);\n"
"	font: 700 11pt \"DejaVu Sans Mono\";\n"
"}\n"
"\n"
"\n"
"QLabel\n"
"{\n"
"	\n"
"	color: rgb(238, 238, 238);\n"
"	\n"
"}\n"
"\n"
"\n"
"Line\n"
"{\n"
"	color: rgb(57, 62, 70);\n"
"\n"
"}"));
        frame = new QFrame(dashboard);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, -30, 191, 1011));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 50, 151, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Z003")});
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setItalic(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);\n"
"font: 700 italic 17pt \"Z003\";"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 140, 81, 41));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        label_3->setFont(font2);
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 240, 101, 41));
        label_4->setFont(font2);
        line1 = new QFrame(dashboard);
        line1->setObjectName("line1");
        line1->setGeometry(QRect(0, 80, 1300, 1));
        line1->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        welcomelabel = new QLabel(dashboard);
        welcomelabel->setObjectName("welcomelabel");
        welcomelabel->setGeometry(QRect(210, 20, 261, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ubuntu")});
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setItalic(false);
        welcomelabel->setFont(font3);
        welcomelabel->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Ubuntu\";\n"
"background-color: rgb(238, 238, 238);\n"
"color:rgb(34, 40, 49);\n"
"\n"
""));
        line2 = new QFrame(dashboard);
        line2->setObjectName("line2");
        line2->setGeometry(QRect(0, 180, 1300, 1));
        line2->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);"));
        line2->setFrameShape(QFrame::HLine);
        line2->setFrameShadow(QFrame::Sunken);
        addProduct = new QPushButton(dashboard);
        addProduct->setObjectName("addProduct");
        addProduct->setGeometry(QRect(220, 100, 91, 61));
        updateProduct = new QPushButton(dashboard);
        updateProduct->setObjectName("updateProduct");
        updateProduct->setGeometry(QRect(350, 100, 91, 61));
        detailsProduct = new QPushButton(dashboard);
        detailsProduct->setObjectName("detailsProduct");
        detailsProduct->setGeometry(QRect(480, 100, 91, 61));
        line2_2 = new QFrame(dashboard);
        line2_2->setObjectName("line2_2");
        line2_2->setGeometry(QRect(-130, 280, 1300, 1));
        line2_2->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);"));
        line2_2->setFrameShape(QFrame::HLine);
        line2_2->setFrameShadow(QFrame::Sunken);
        addCustomer = new QPushButton(dashboard);
        addCustomer->setObjectName("addCustomer");
        addCustomer->setGeometry(QRect(220, 200, 91, 61));
        updateCustomer = new QPushButton(dashboard);
        updateCustomer->setObjectName("updateCustomer");
        updateCustomer->setGeometry(QRect(350, 200, 91, 61));
        detailsCustomer = new QPushButton(dashboard);
        detailsCustomer->setObjectName("detailsCustomer");
        detailsCustomer->setGeometry(QRect(480, 200, 91, 61));
        label_5 = new QLabel(dashboard);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 310, 101, 41));
        label_5->setFont(font2);
        entryPurchase = new QPushButton(dashboard);
        entryPurchase->setObjectName("entryPurchase");
        entryPurchase->setGeometry(QRect(220, 300, 91, 61));
        historyPurchase = new QPushButton(dashboard);
        historyPurchase->setObjectName("historyPurchase");
        historyPurchase->setGeometry(QRect(350, 300, 91, 61));
        line2_3 = new QFrame(dashboard);
        line2_3->setObjectName("line2_3");
        line2_3->setGeometry(QRect(150, 180, 1300, 1));
        line2_3->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);"));
        line2_3->setFrameShape(QFrame::HLine);
        line2_3->setFrameShadow(QFrame::Sunken);
        line1_2 = new QFrame(dashboard);
        line1_2->setObjectName("line1_2");
        line1_2->setGeometry(QRect(-40, 380, 1300, 1));
        line1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);"));
        line1_2->setFrameShape(QFrame::HLine);
        line1_2->setFrameShadow(QFrame::Sunken);
        frame->raise();
        welcomelabel->raise();
        line1->raise();
        line2->raise();
        addProduct->raise();
        updateProduct->raise();
        detailsProduct->raise();
        line2_2->raise();
        addCustomer->raise();
        updateCustomer->raise();
        detailsCustomer->raise();
        label_5->raise();
        entryPurchase->raise();
        historyPurchase->raise();
        line2_3->raise();
        line1_2->raise();

        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QDialog *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("dashboard", "InvManagement", nullptr));
        label_3->setText(QCoreApplication::translate("dashboard", "Products", nullptr));
        label_4->setText(QCoreApplication::translate("dashboard", "Customers", nullptr));
        welcomelabel->setText(QCoreApplication::translate("dashboard", "Welcome to Dashboard", nullptr));
        addProduct->setText(QCoreApplication::translate("dashboard", "ADD", nullptr));
        updateProduct->setText(QCoreApplication::translate("dashboard", "UPDATE", nullptr));
        detailsProduct->setText(QCoreApplication::translate("dashboard", "DETAILS", nullptr));
        addCustomer->setText(QCoreApplication::translate("dashboard", "ADD", nullptr));
        updateCustomer->setText(QCoreApplication::translate("dashboard", "UPDATE", nullptr));
        detailsCustomer->setText(QCoreApplication::translate("dashboard", "DETAILS", nullptr));
        label_5->setText(QCoreApplication::translate("dashboard", "Purchase", nullptr));
        entryPurchase->setText(QCoreApplication::translate("dashboard", "ENTRY", nullptr));
        historyPurchase->setText(QCoreApplication::translate("dashboard", "HISTORY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
