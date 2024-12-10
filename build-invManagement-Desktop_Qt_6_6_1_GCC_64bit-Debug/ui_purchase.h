/********************************************************************************
** Form generated from reading UI file 'purchase.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASE_H
#define UI_PURCHASE_H

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

class Ui_purchase
{
public:
    QFrame *frame;
    QLabel *label;
    QFrame *line2_2;
    QLineEdit *errorNumber;
    QLabel *label_2;
    QLineEdit *numberIn;
    QLineEdit *quantityIn;
    QLabel *label_4;
    QLineEdit *codeIn;
    QLineEdit *errorCode;
    QLabel *label_3;
    QPushButton *pushproduct;
    QFrame *line2_3;
    QLineEdit *errorQuantity;
    QTableWidget *purchaseInfo;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *grandtotalOut;
    QLineEdit *taxOut;
    QLineEdit *nettotalOut;
    QPushButton *getBill;
    QFrame *line2_4;
    QLineEdit *purchaseSucessful;

    void setupUi(QDialog *purchase)
    {
        if (purchase->objectName().isEmpty())
            purchase->setObjectName("purchase");
        purchase->resize(615, 837);
        purchase->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background-color: rgb(34, 40, 49);\n"
"	\n"
"}\n"
"\n"
"\n"
"\n"
"QDialog\n"
"{\n"
"	background-color: rgb(238, 238, 238);\n"
"}\n"
"\n"
"\n"
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
"\n"
"\n"
"QPushButton\n"
"{\n"
"	border-radius: 12px;\n"
"	background-color: rgb(255, 211, 105);\n"
"	color: rgb(34, 40, 49);\n"
"	font: 700 11pt \"DejaVu Sans Mono\";\n"
"	\n"
"	\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        frame = new QFrame(purchase);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-30, 0, 841, 80));
        frame->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Ubuntu\";\n"
"background-color: rgb(34, 40, 49);\n"
"color:rgb(238, 238, 238);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 20, 191, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line2_2 = new QFrame(purchase);
        line2_2->setObjectName("line2_2");
        line2_2->setGeometry(QRect(-250, 170, 1300, 1));
        line2_2->setStyleSheet(QString::fromUtf8("background-color:rgb(57, 62, 70);"));
        line2_2->setFrameShape(QFrame::HLine);
        line2_2->setFrameShadow(QFrame::Sunken);
        errorNumber = new QLineEdit(purchase);
        errorNumber->setObjectName("errorNumber");
        errorNumber->setGeometry(QRect(150, 140, 211, 26));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        errorNumber->setFont(font1);
        errorNumber->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);\n"
"font: 9pt \"DejaVu Sans Mono\";\n"
""));
        label_2 = new QLabel(purchase);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 110, 91, 17));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        label_2->setFont(font2);
        numberIn = new QLineEdit(purchase);
        numberIn->setObjectName("numberIn");
        numberIn->setGeometry(QRect(150, 110, 211, 25));
        numberIn->setFont(font1);
        numberIn->setEchoMode(QLineEdit::Normal);
        quantityIn = new QLineEdit(purchase);
        quantityIn->setObjectName("quantityIn");
        quantityIn->setGeometry(QRect(150, 250, 211, 25));
        quantityIn->setFont(font1);
        quantityIn->setEchoMode(QLineEdit::Normal);
        label_4 = new QLabel(purchase);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 250, 71, 17));
        label_4->setFont(font2);
        codeIn = new QLineEdit(purchase);
        codeIn->setObjectName("codeIn");
        codeIn->setGeometry(QRect(150, 190, 211, 25));
        codeIn->setFont(font1);
        codeIn->setEchoMode(QLineEdit::Normal);
        errorCode = new QLineEdit(purchase);
        errorCode->setObjectName("errorCode");
        errorCode->setGeometry(QRect(150, 220, 221, 26));
        errorCode->setFont(font1);
        errorCode->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);\n"
"font: 9pt \"DejaVu Sans Mono\";\n"
""));
        label_3 = new QLabel(purchase);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 190, 51, 17));
        label_3->setFont(font2);
        pushproduct = new QPushButton(purchase);
        pushproduct->setObjectName("pushproduct");
        pushproduct->setGeometry(QRect(470, 250, 81, 31));
        line2_3 = new QFrame(purchase);
        line2_3->setObjectName("line2_3");
        line2_3->setGeometry(QRect(-310, 320, 1300, 1));
        line2_3->setStyleSheet(QString::fromUtf8("background-color:rgb(57, 62, 70);"));
        line2_3->setFrameShape(QFrame::HLine);
        line2_3->setFrameShadow(QFrame::Sunken);
        errorQuantity = new QLineEdit(purchase);
        errorQuantity->setObjectName("errorQuantity");
        errorQuantity->setGeometry(QRect(150, 280, 221, 26));
        errorQuantity->setFont(font1);
        errorQuantity->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);\n"
"font: 9pt \"DejaVu Sans Mono\";\n"
""));
        purchaseInfo = new QTableWidget(purchase);
        if (purchaseInfo->columnCount() < 5)
            purchaseInfo->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        purchaseInfo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        purchaseInfo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        purchaseInfo->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        purchaseInfo->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        purchaseInfo->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        purchaseInfo->setObjectName("purchaseInfo");
        purchaseInfo->setGeometry(QRect(30, 340, 551, 231));
        purchaseInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 500 11pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);\n"
"text-align: left;"));
        label_5 = new QLabel(purchase);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 670, 131, 17));
        label_5->setFont(font2);
        label_6 = new QLabel(purchase);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 710, 121, 17));
        label_6->setFont(font2);
        label_7 = new QLabel(purchase);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 750, 141, 17));
        label_7->setFont(font2);
        grandtotalOut = new QLineEdit(purchase);
        grandtotalOut->setObjectName("grandtotalOut");
        grandtotalOut->setGeometry(QRect(150, 670, 211, 25));
        grandtotalOut->setFont(font1);
        grandtotalOut->setEchoMode(QLineEdit::Normal);
        taxOut = new QLineEdit(purchase);
        taxOut->setObjectName("taxOut");
        taxOut->setGeometry(QRect(150, 710, 211, 25));
        taxOut->setFont(font1);
        taxOut->setEchoMode(QLineEdit::Normal);
        nettotalOut = new QLineEdit(purchase);
        nettotalOut->setObjectName("nettotalOut");
        nettotalOut->setGeometry(QRect(150, 750, 211, 25));
        nettotalOut->setFont(font1);
        nettotalOut->setEchoMode(QLineEdit::Normal);
        getBill = new QPushButton(purchase);
        getBill->setObjectName("getBill");
        getBill->setGeometry(QRect(460, 590, 91, 31));
        line2_4 = new QFrame(purchase);
        line2_4->setObjectName("line2_4");
        line2_4->setGeometry(QRect(-170, 640, 1300, 1));
        line2_4->setStyleSheet(QString::fromUtf8("background-color:rgb(57, 62, 70);"));
        line2_4->setFrameShape(QFrame::HLine);
        line2_4->setFrameShadow(QFrame::Sunken);
        purchaseSucessful = new QLineEdit(purchase);
        purchaseSucessful->setObjectName("purchaseSucessful");
        purchaseSucessful->setGeometry(QRect(180, 790, 141, 26));
        purchaseSucessful->setFont(font1);
        purchaseSucessful->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);\n"
"font: 9pt \"DejaVu Sans Mono\";\n"
""));

        retranslateUi(purchase);
        QObject::connect(numberIn, &QLineEdit::textChanged, errorNumber, qOverload<>(&QLineEdit::clear));
        QObject::connect(codeIn, &QLineEdit::textChanged, errorCode, qOverload<>(&QLineEdit::clear));
        QObject::connect(quantityIn, &QLineEdit::textChanged, errorQuantity, qOverload<>(&QLineEdit::clear));
        QObject::connect(numberIn, &QLineEdit::textChanged, purchaseSucessful, qOverload<>(&QLineEdit::clear));

        QMetaObject::connectSlotsByName(purchase);
    } // setupUi

    void retranslateUi(QDialog *purchase)
    {
        purchase->setWindowTitle(QCoreApplication::translate("purchase", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("purchase", "Purchase", nullptr));
        errorNumber->setText(QString());
        label_2->setText(QCoreApplication::translate("purchase", "Number", nullptr));
        numberIn->setText(QString());
        quantityIn->setText(QString());
        label_4->setText(QCoreApplication::translate("purchase", "Quantity", nullptr));
        codeIn->setText(QString());
        errorCode->setText(QString());
        label_3->setText(QCoreApplication::translate("purchase", "Code", nullptr));
        pushproduct->setText(QCoreApplication::translate("purchase", "Add", nullptr));
        errorQuantity->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = purchaseInfo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("purchase", "Product Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = purchaseInfo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("purchase", "Product Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = purchaseInfo->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("purchase", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = purchaseInfo->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("purchase", "Unit Price (Rs.)", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = purchaseInfo->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("purchase", "Total", nullptr));
        label_5->setText(QCoreApplication::translate("purchase", "Grand Total ", nullptr));
        label_6->setText(QCoreApplication::translate("purchase", "Tax (13%) ", nullptr));
        label_7->setText(QCoreApplication::translate("purchase", "Net-Total (Rs.)", nullptr));
        grandtotalOut->setText(QString());
        taxOut->setText(QString());
        nettotalOut->setText(QString());
        getBill->setText(QCoreApplication::translate("purchase", "Get Bill", nullptr));
        purchaseSucessful->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class purchase: public Ui_purchase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASE_H
