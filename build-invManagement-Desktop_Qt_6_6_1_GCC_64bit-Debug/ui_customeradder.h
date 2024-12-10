/********************************************************************************
** Form generated from reading UI file 'customeradder.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERADDER_H
#define UI_CUSTOMERADDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customeradder
{
public:
    QLabel *label_4;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *errorDisplay;
    QLabel *label_3;
    QLineEdit *numberIn;
    QLineEdit *nameIn;
    QLineEdit *addressIn;
    QPushButton *addCustomer;
    QPushButton *clearScreen;
    QLineEdit *addedSucessfully;

    void setupUi(QDialog *customeradder)
    {
        if (customeradder->objectName().isEmpty())
            customeradder->setObjectName("customeradder");
        customeradder->resize(615, 800);
        customeradder->setStyleSheet(QString::fromUtf8("QFrame\n"
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
        label_4 = new QLabel(customeradder);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 400, 81, 17));
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        label_4->setFont(font);
        frame = new QFrame(customeradder);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-60, 0, 700, 80));
        frame->setStyleSheet(QString::fromUtf8("/*background-color: rgb(0, 0, 86);*/"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 20, 171, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);\n"
"background-color:rgb(34, 40, 49);\n"
"font: 700 18pt \"Ubuntu\";"));
        label_2 = new QLabel(customeradder);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 240, 91, 17));
        label_2->setFont(font);
        errorDisplay = new QLineEdit(customeradder);
        errorDisplay->setObjectName("errorDisplay");
        errorDisplay->setGeometry(QRect(430, 270, 171, 26));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        errorDisplay->setFont(font2);
        errorDisplay->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"color: rgb(224, 27, 36);"));
        label_3 = new QLabel(customeradder);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 320, 66, 17));
        label_3->setFont(font);
        numberIn = new QLineEdit(customeradder);
        numberIn->setObjectName("numberIn");
        numberIn->setGeometry(QRect(200, 270, 211, 25));
        numberIn->setFont(font2);
        numberIn->setEchoMode(QLineEdit::Normal);
        nameIn = new QLineEdit(customeradder);
        nameIn->setObjectName("nameIn");
        nameIn->setGeometry(QRect(200, 350, 211, 25));
        nameIn->setFont(font2);
        nameIn->setEchoMode(QLineEdit::Normal);
        addressIn = new QLineEdit(customeradder);
        addressIn->setObjectName("addressIn");
        addressIn->setGeometry(QRect(200, 430, 211, 25));
        addressIn->setFont(font2);
        addressIn->setEchoMode(QLineEdit::Normal);
        addCustomer = new QPushButton(customeradder);
        addCustomer->setObjectName("addCustomer");
        addCustomer->setGeometry(QRect(260, 490, 81, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setItalic(false);
        addCustomer->setFont(font3);
        clearScreen = new QPushButton(customeradder);
        clearScreen->setObjectName("clearScreen");
        clearScreen->setGeometry(QRect(260, 540, 81, 31));
        clearScreen->setFont(font3);
        addedSucessfully = new QLineEdit(customeradder);
        addedSucessfully->setObjectName("addedSucessfully");
        addedSucessfully->setGeometry(QRect(190, 600, 221, 26));
        addedSucessfully->setFont(font2);
        addedSucessfully->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);\n"
"font: 9pt \"DejaVu Sans Mono\";\n"
""));

        retranslateUi(customeradder);
        QObject::connect(clearScreen, &QPushButton::clicked, addressIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, nameIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, numberIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, errorDisplay, qOverload<>(&QLineEdit::clear));
        QObject::connect(numberIn, &QLineEdit::textChanged, errorDisplay, qOverload<>(&QLineEdit::clear));
        QObject::connect(numberIn, &QLineEdit::textChanged, addedSucessfully, qOverload<>(&QLineEdit::clear));

        QMetaObject::connectSlotsByName(customeradder);
    } // setupUi

    void retranslateUi(QDialog *customeradder)
    {
        customeradder->setWindowTitle(QCoreApplication::translate("customeradder", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("customeradder", "Address", nullptr));
        label->setText(QCoreApplication::translate("customeradder", "Customer Add", nullptr));
        label_2->setText(QCoreApplication::translate("customeradder", "Number", nullptr));
        errorDisplay->setText(QString());
        label_3->setText(QCoreApplication::translate("customeradder", "Name", nullptr));
        numberIn->setText(QString());
        nameIn->setText(QString());
        addressIn->setText(QString());
        addCustomer->setText(QCoreApplication::translate("customeradder", "Add", nullptr));
        clearScreen->setText(QCoreApplication::translate("customeradder", "Clear", nullptr));
        addedSucessfully->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class customeradder: public Ui_customeradder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERADDER_H
