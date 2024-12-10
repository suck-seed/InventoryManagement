/********************************************************************************
** Form generated from reading UI file 'productdetail.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTDETAIL_H
#define UI_PRODUCTDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_productdetail
{
public:
    QFrame *frame;
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *clearScreen;
    QPushButton *updateProduct;
    QFrame *line1;

    void setupUi(QDialog *productdetail)
    {
        if (productdetail->objectName().isEmpty())
            productdetail->setObjectName("productdetail");
        productdetail->resize(615, 800);
        productdetail->setStyleSheet(QString::fromUtf8("QDialog\n"
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
"\n"
"background-color: rgb(34, 40, 49);\n"
"\n"
"}\n"
"\n"
""));
        frame = new QFrame(productdetail);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-50, 0, 700, 80));
        frame->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Ubuntu\";\n"
"background-color: rgb(34, 40, 49);\n"
"color:rgb(238, 238, 238);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 20, 191, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tableWidget = new QTableWidget(productdetail);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        __qtablewidgetitem->setBackground(QColor(154, 153, 150));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        __qtablewidgetitem1->setBackground(QColor(154, 153, 150));
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        __qtablewidgetitem2->setBackground(QColor(154, 153, 150));
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        __qtablewidgetitem3->setBackground(QColor(154, 153, 150));
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        __qtablewidgetitem4->setBackground(QColor(154, 153, 150));
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(30, 170, 551, 611));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);\n"
"text-align: left;background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"text-align: left;\n"
"font: 11pt \"DejaVu Sans Mono\";"));
        clearScreen = new QPushButton(productdetail);
        clearScreen->setObjectName("clearScreen");
        clearScreen->setGeometry(QRect(490, 100, 81, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(false);
        clearScreen->setFont(font2);
        updateProduct = new QPushButton(productdetail);
        updateProduct->setObjectName("updateProduct");
        updateProduct->setGeometry(QRect(400, 100, 81, 31));
        updateProduct->setFont(font2);
        line1 = new QFrame(productdetail);
        line1->setObjectName("line1");
        line1->setGeometry(QRect(-30, 150, 1300, 1));
        line1->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        frame->raise();
        tableWidget->raise();
        updateProduct->raise();
        clearScreen->raise();
        line1->raise();

        retranslateUi(productdetail);
        QObject::connect(clearScreen, &QPushButton::clicked, tableWidget, qOverload<>(&QTableWidget::clearContents));

        QMetaObject::connectSlotsByName(productdetail);
    } // setupUi

    void retranslateUi(QDialog *productdetail)
    {
        productdetail->setWindowTitle(QCoreApplication::translate("productdetail", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("productdetail", "Products Details", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("productdetail", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("productdetail", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("productdetail", "Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("productdetail", "Stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("productdetail", "Unit Price", nullptr));
        clearScreen->setText(QCoreApplication::translate("productdetail", "Clear", nullptr));
        updateProduct->setText(QCoreApplication::translate("productdetail", "Display", nullptr));
    } // retranslateUi

};

namespace Ui {
    class productdetail: public Ui_productdetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTDETAIL_H
