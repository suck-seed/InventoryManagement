/********************************************************************************
** Form generated from reading UI file 'customerdetail.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERDETAIL_H
#define UI_CUSTOMERDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_customerdetail
{
public:
    QPushButton *updateProduct;
    QPushButton *clearScreen;
    QFrame *frame;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QFrame *line1;

    void setupUi(QDialog *customerdetail)
    {
        if (customerdetail->objectName().isEmpty())
            customerdetail->setObjectName("customerdetail");
        customerdetail->resize(615, 800);
        customerdetail->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	background-color: rgb(238, 238, 238);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton\n"
"{\n"
"	border-radius: 12px;\n"
"	background-color: rgb(255, 211, 105);\n"
"	color: rgb(34, 40, 49);\n"
"	font: 700 11pt \"DejaVu Sans Mono\";\n"
"	\n"
"}\n"
"\n"
"QTableWidget\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"	padding: 5px;\n"
"	text-align: left;\n"
"	\n"
"}\n"
"\n"
"\n"
"QFrame\n"
"{\n"
"background-color: rgb(34, 40, 49);\n"
"\n"
"}\n"
"\n"
""));
        updateProduct = new QPushButton(customerdetail);
        updateProduct->setObjectName("updateProduct");
        updateProduct->setGeometry(QRect(400, 100, 81, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(false);
        updateProduct->setFont(font);
        clearScreen = new QPushButton(customerdetail);
        clearScreen->setObjectName("clearScreen");
        clearScreen->setGeometry(QRect(500, 100, 81, 31));
        clearScreen->setFont(font);
        frame = new QFrame(customerdetail);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-50, 0, 700, 80));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 20, 211, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Ubuntu\";\n"
"background-color: rgb(34, 40, 49);\n"
"color:rgb(238, 238, 238);"));
        tableWidget = new QTableWidget(customerdetail);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font2);
        __qtablewidgetitem->setBackground(QColor(154, 153, 150));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font2);
        __qtablewidgetitem1->setBackground(QColor(154, 153, 150));
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font2);
        __qtablewidgetitem2->setBackground(QColor(154, 153, 150));
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        __qtablewidgetitem3->setBackground(QColor(154, 153, 150));
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font2);
        __qtablewidgetitem4->setBackground(QColor(154, 153, 150));
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(30, 170, 561, 611));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"text-align: left;\n"
"font: 11pt \"DejaVu Sans Mono\";"));
        line1 = new QFrame(customerdetail);
        line1->setObjectName("line1");
        line1->setGeometry(QRect(-20, 150, 1300, 1));
        line1->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);

        retranslateUi(customerdetail);
        QObject::connect(clearScreen, &QPushButton::clicked, tableWidget, qOverload<>(&QTableWidget::clearContents));

        QMetaObject::connectSlotsByName(customerdetail);
    } // setupUi

    void retranslateUi(QDialog *customerdetail)
    {
        customerdetail->setWindowTitle(QCoreApplication::translate("customerdetail", "Dialog", nullptr));
        updateProduct->setText(QCoreApplication::translate("customerdetail", "Display", nullptr));
        clearScreen->setText(QCoreApplication::translate("customerdetail", "Clear", nullptr));
        label_2->setText(QCoreApplication::translate("customerdetail", "Customer Details", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("customerdetail", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("customerdetail", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("customerdetail", "Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("customerdetail", "Stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("customerdetail", "Unit Price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customerdetail: public Ui_customerdetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERDETAIL_H
