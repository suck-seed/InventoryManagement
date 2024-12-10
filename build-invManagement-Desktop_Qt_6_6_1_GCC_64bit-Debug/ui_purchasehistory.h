/********************************************************************************
** Form generated from reading UI file 'purchasehistory.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASEHISTORY_H
#define UI_PURCHASEHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_purchasehistory
{
public:
    QPushButton *displayHistory;
    QFrame *frame;
    QLabel *label;
    QPushButton *clearScreen;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QLineEdit *numberIn;
    QFrame *line2_2;
    QLineEdit *errorNumber;

    void setupUi(QDialog *purchasehistory)
    {
        if (purchasehistory->objectName().isEmpty())
            purchasehistory->setObjectName("purchasehistory");
        purchasehistory->resize(615, 833);
        purchasehistory->setStyleSheet(QString::fromUtf8("QDialog\n"
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
"QLabel\n"
"{\n"
"	background-color:rgb(238, 238, 238);\n"
"	color: rgb(34, 40, 49);\n"
"	font: 11pt \"DejaVu Sans Mono\";\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"\n"
"	color:rgb(238, 238, 238);\n"
"	background-color: rgb(34, 40, 49);\n"
"	border-radius: 9px;\n"
"	font: 9pt \"DejaVu Sans Mono\";\n"
"\n"
"}\n"
""));
        displayHistory = new QPushButton(purchasehistory);
        displayHistory->setObjectName("displayHistory");
        displayHistory->setGeometry(QRect(390, 90, 81, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(false);
        displayHistory->setFont(font);
        frame = new QFrame(purchasehistory);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-30, -10, 700, 80));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 20, 201, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Ubuntu\";\n"
"background-color: rgb(34, 40, 49);\n"
"color:rgb(238, 238, 238);\n"
"\n"
""));
        clearScreen = new QPushButton(purchasehistory);
        clearScreen->setObjectName("clearScreen");
        clearScreen->setGeometry(QRect(490, 90, 81, 31));
        clearScreen->setFont(font);
        tableWidget = new QTableWidget(purchasehistory);
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
        tableWidget->setGeometry(QRect(40, 190, 531, 611));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"text-align: left;\n"
"font: 11pt \"DejaVu Sans Mono\";"));
        label_2 = new QLabel(purchasehistory);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 90, 81, 21));
        numberIn = new QLineEdit(purchasehistory);
        numberIn->setObjectName("numberIn");
        numberIn->setGeometry(QRect(120, 90, 161, 25));
        line2_2 = new QFrame(purchasehistory);
        line2_2->setObjectName("line2_2");
        line2_2->setGeometry(QRect(-50, 170, 1300, 1));
        line2_2->setStyleSheet(QString::fromUtf8("background-color:rgb(57, 62, 70);"));
        line2_2->setFrameShape(QFrame::HLine);
        line2_2->setFrameShadow(QFrame::Sunken);
        errorNumber = new QLineEdit(purchasehistory);
        errorNumber->setObjectName("errorNumber");
        errorNumber->setGeometry(QRect(120, 130, 211, 26));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        errorNumber->setFont(font3);
        errorNumber->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);\n"
"font: 9pt \"DejaVu Sans Mono\";\n"
""));

        retranslateUi(purchasehistory);
        QObject::connect(clearScreen, &QPushButton::clicked, tableWidget, qOverload<>(&QTableWidget::clearContents));
        QObject::connect(numberIn, &QLineEdit::textChanged, errorNumber, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, numberIn, qOverload<>(&QLineEdit::clear));

        QMetaObject::connectSlotsByName(purchasehistory);
    } // setupUi

    void retranslateUi(QDialog *purchasehistory)
    {
        purchasehistory->setWindowTitle(QCoreApplication::translate("purchasehistory", "Dialog", nullptr));
        displayHistory->setText(QCoreApplication::translate("purchasehistory", "Display", nullptr));
        label->setText(QCoreApplication::translate("purchasehistory", "Purchase History", nullptr));
        clearScreen->setText(QCoreApplication::translate("purchasehistory", "Clear", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("purchasehistory", "Product Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("purchasehistory", "Product Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("purchasehistory", "Unit Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("purchasehistory", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("purchasehistory", "Total", nullptr));
        label_2->setText(QCoreApplication::translate("purchasehistory", "Number", nullptr));
        errorNumber->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class purchasehistory: public Ui_purchasehistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASEHISTORY_H
