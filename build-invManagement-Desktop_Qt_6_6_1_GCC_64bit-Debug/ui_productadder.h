/********************************************************************************
** Form generated from reading UI file 'productadder.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTADDER_H
#define UI_PRODUCTADDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_productadder
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *addProduct;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *clearScreen;
    QLineEdit *errorDisplay;
    QLineEdit *nameIn;
    QLineEdit *codeIn;
    QLineEdit *stockIn;
    QLineEdit *unitIn;
    QLineEdit *addedSucessfully;

    void setupUi(QDialog *productadder)
    {
        if (productadder->objectName().isEmpty())
            productadder->setObjectName("productadder");
        productadder->resize(615, 800);
        QFont font;
        font.setPointSize(9);
        productadder->setFont(font);
        productadder->setStyleSheet(QString::fromUtf8("QFrame\n"
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
""));
        frame = new QFrame(productadder);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-60, 0, 700, 80));
        frame->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Ubuntu\";\n"
"background-color: rgb(34, 40, 49);\n"
"color:rgb(238, 238, 238);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 20, 151, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        addProduct = new QPushButton(productadder);
        addProduct->setObjectName("addProduct");
        addProduct->setGeometry(QRect(260, 540, 81, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(false);
        addProduct->setFont(font2);
        label_2 = new QLabel(productadder);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 210, 66, 17));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setItalic(false);
        label_2->setFont(font3);
        label_3 = new QLabel(productadder);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 290, 66, 17));
        label_3->setFont(font3);
        label_4 = new QLabel(productadder);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 370, 66, 17));
        label_4->setFont(font3);
        label_5 = new QLabel(productadder);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 450, 111, 17));
        label_5->setFont(font3);
        clearScreen = new QPushButton(productadder);
        clearScreen->setObjectName("clearScreen");
        clearScreen->setGeometry(QRect(260, 580, 81, 31));
        clearScreen->setFont(font2);
        errorDisplay = new QLineEdit(productadder);
        errorDisplay->setObjectName("errorDisplay");
        errorDisplay->setGeometry(QRect(420, 320, 181, 26));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setItalic(false);
        errorDisplay->setFont(font4);
        errorDisplay->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);\n"
"font: 9pt \"DejaVu Sans Mono\";\n"
""));
        nameIn = new QLineEdit(productadder);
        nameIn->setObjectName("nameIn");
        nameIn->setGeometry(QRect(200, 240, 211, 25));
        nameIn->setFont(font4);
        nameIn->setEchoMode(QLineEdit::Normal);
        codeIn = new QLineEdit(productadder);
        codeIn->setObjectName("codeIn");
        codeIn->setGeometry(QRect(200, 320, 211, 25));
        codeIn->setFont(font4);
        codeIn->setEchoMode(QLineEdit::Normal);
        stockIn = new QLineEdit(productadder);
        stockIn->setObjectName("stockIn");
        stockIn->setGeometry(QRect(200, 400, 211, 25));
        stockIn->setFont(font4);
        stockIn->setEchoMode(QLineEdit::Normal);
        unitIn = new QLineEdit(productadder);
        unitIn->setObjectName("unitIn");
        unitIn->setGeometry(QRect(200, 480, 211, 25));
        unitIn->setFont(font4);
        unitIn->setEchoMode(QLineEdit::Normal);
        addedSucessfully = new QLineEdit(productadder);
        addedSucessfully->setObjectName("addedSucessfully");
        addedSucessfully->setGeometry(QRect(200, 650, 221, 26));
        addedSucessfully->setFont(font4);
        addedSucessfully->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);\n"
"font: 9pt \"DejaVu Sans Mono\";\n"
""));

        retranslateUi(productadder);
        QObject::connect(clearScreen, &QPushButton::clicked, unitIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, stockIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, codeIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, nameIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, errorDisplay, qOverload<>(&QLineEdit::clear));
        QObject::connect(codeIn, &QLineEdit::textEdited, errorDisplay, qOverload<>(&QLineEdit::clear));
        QObject::connect(codeIn, &QLineEdit::textChanged, errorDisplay, qOverload<>(&QLineEdit::clear));
        QObject::connect(nameIn, &QLineEdit::textChanged, addedSucessfully, qOverload<>(&QLineEdit::clear));
        QObject::connect(codeIn, &QLineEdit::textChanged, addedSucessfully, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, addedSucessfully, qOverload<>(&QLineEdit::clear));

        QMetaObject::connectSlotsByName(productadder);
    } // setupUi

    void retranslateUi(QDialog *productadder)
    {
        productadder->setWindowTitle(QCoreApplication::translate("productadder", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("productadder", "Products Add", nullptr));
        addProduct->setText(QCoreApplication::translate("productadder", "Add", nullptr));
        label_2->setText(QCoreApplication::translate("productadder", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("productadder", "Code", nullptr));
        label_4->setText(QCoreApplication::translate("productadder", "Stock", nullptr));
        label_5->setText(QCoreApplication::translate("productadder", "Unit Price", nullptr));
        clearScreen->setText(QCoreApplication::translate("productadder", "Clear", nullptr));
        errorDisplay->setText(QString());
        nameIn->setText(QString());
        codeIn->setText(QString());
        stockIn->setText(QString());
        unitIn->setText(QString());
        addedSucessfully->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class productadder: public Ui_productadder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTADDER_H
