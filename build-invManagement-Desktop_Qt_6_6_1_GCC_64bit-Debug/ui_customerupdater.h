/********************************************************************************
** Form generated from reading UI file 'customerupdater.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERUPDATER_H
#define UI_CUSTOMERUPDATER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customerupdater
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *errorCurrentNumber;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *numberIn;
    QLineEdit *nameIn;
    QLineEdit *addressIn;
    QLineEdit *creditIn;
    QPushButton *updateCustomer;
    QPushButton *deleteCustomer;
    QPushButton *clearScreen;
    QLineEdit *currentnumberIn;
    QLabel *label_6;
    QCheckBox *checkNewNumber;
    QCheckBox *checkNewName;
    QCheckBox *checkNewAddress;
    QCheckBox *checkNewCredit;
    QLineEdit *errorNewNumber;
    QFrame *line2_2;
    QLineEdit *updatedSucessfully;

    void setupUi(QDialog *customerupdater)
    {
        if (customerupdater->objectName().isEmpty())
            customerupdater->setObjectName("customerupdater");
        customerupdater->resize(615, 800);
        customerupdater->setStyleSheet(QString::fromUtf8("QFrame\n"
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
        frame = new QFrame(customerupdater);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-60, 0, 700, 80));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 20, 221, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Ubuntu\";\n"
"background-color: rgb(34, 40, 49);\n"
"color:rgb(238, 238, 238);\n"
""));
        label_2 = new QLabel(customerupdater);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 290, 131, 17));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        label_2->setFont(font1);
        errorCurrentNumber = new QLineEdit(customerupdater);
        errorCurrentNumber->setObjectName("errorCurrentNumber");
        errorCurrentNumber->setGeometry(QRect(430, 150, 181, 26));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        errorCurrentNumber->setFont(font2);
        errorCurrentNumber->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);\n"
"font: 9pt \"DejaVu Sans Mono\";"));
        label_3 = new QLabel(customerupdater);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 370, 111, 17));
        label_3->setFont(font1);
        label_5 = new QLabel(customerupdater);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 530, 101, 17));
        label_5->setFont(font1);
        label_4 = new QLabel(customerupdater);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(210, 450, 111, 17));
        label_4->setFont(font1);
        numberIn = new QLineEdit(customerupdater);
        numberIn->setObjectName("numberIn");
        numberIn->setGeometry(QRect(210, 320, 211, 25));
        numberIn->setFont(font2);
        numberIn->setEchoMode(QLineEdit::Normal);
        nameIn = new QLineEdit(customerupdater);
        nameIn->setObjectName("nameIn");
        nameIn->setGeometry(QRect(210, 400, 211, 25));
        nameIn->setFont(font2);
        nameIn->setEchoMode(QLineEdit::Normal);
        addressIn = new QLineEdit(customerupdater);
        addressIn->setObjectName("addressIn");
        addressIn->setGeometry(QRect(210, 480, 211, 25));
        addressIn->setFont(font2);
        addressIn->setEchoMode(QLineEdit::Normal);
        creditIn = new QLineEdit(customerupdater);
        creditIn->setObjectName("creditIn");
        creditIn->setGeometry(QRect(210, 560, 211, 25));
        creditIn->setFont(font2);
        creditIn->setEchoMode(QLineEdit::Normal);
        updateCustomer = new QPushButton(customerupdater);
        updateCustomer->setObjectName("updateCustomer");
        updateCustomer->setGeometry(QRect(270, 640, 81, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setItalic(false);
        updateCustomer->setFont(font3);
        deleteCustomer = new QPushButton(customerupdater);
        deleteCustomer->setObjectName("deleteCustomer");
        deleteCustomer->setGeometry(QRect(270, 200, 81, 31));
        deleteCustomer->setFont(font3);
        clearScreen = new QPushButton(customerupdater);
        clearScreen->setObjectName("clearScreen");
        clearScreen->setGeometry(QRect(270, 690, 81, 31));
        clearScreen->setFont(font3);
        currentnumberIn = new QLineEdit(customerupdater);
        currentnumberIn->setObjectName("currentnumberIn");
        currentnumberIn->setGeometry(QRect(210, 150, 211, 25));
        currentnumberIn->setFont(font2);
        currentnumberIn->setEchoMode(QLineEdit::Normal);
        label_6 = new QLabel(customerupdater);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 120, 131, 17));
        label_6->setFont(font1);
        checkNewNumber = new QCheckBox(customerupdater);
        checkNewNumber->setObjectName("checkNewNumber");
        checkNewNumber->setGeometry(QRect(180, 290, 21, 23));
        checkNewName = new QCheckBox(customerupdater);
        checkNewName->setObjectName("checkNewName");
        checkNewName->setGeometry(QRect(180, 370, 21, 23));
        checkNewAddress = new QCheckBox(customerupdater);
        checkNewAddress->setObjectName("checkNewAddress");
        checkNewAddress->setGeometry(QRect(180, 450, 21, 23));
        checkNewCredit = new QCheckBox(customerupdater);
        checkNewCredit->setObjectName("checkNewCredit");
        checkNewCredit->setGeometry(QRect(180, 530, 16, 23));
        errorNewNumber = new QLineEdit(customerupdater);
        errorNewNumber->setObjectName("errorNewNumber");
        errorNewNumber->setGeometry(QRect(430, 320, 181, 26));
        errorNewNumber->setFont(font2);
        errorNewNumber->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);"));
        line2_2 = new QFrame(customerupdater);
        line2_2->setObjectName("line2_2");
        line2_2->setGeometry(QRect(-20, 260, 1300, 1));
        line2_2->setStyleSheet(QString::fromUtf8("background-color:rgb(57, 62, 70) ;"));
        line2_2->setFrameShape(QFrame::HLine);
        line2_2->setFrameShadow(QFrame::Sunken);
        updatedSucessfully = new QLineEdit(customerupdater);
        updatedSucessfully->setObjectName("updatedSucessfully");
        updatedSucessfully->setGeometry(QRect(200, 740, 221, 26));
        updatedSucessfully->setFont(font2);
        updatedSucessfully->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);\n"
"font: 9pt \"DejaVu Sans Mono\";\n"
""));

        retranslateUi(customerupdater);
        QObject::connect(clearScreen, &QPushButton::clicked, creditIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, addressIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, nameIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, numberIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, errorCurrentNumber, qOverload<>(&QLineEdit::clear));
        QObject::connect(numberIn, &QLineEdit::textChanged, errorCurrentNumber, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, currentnumberIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(currentnumberIn, &QLineEdit::textChanged, errorCurrentNumber, qOverload<>(&QLineEdit::clear));
        QObject::connect(numberIn, &QLineEdit::textChanged, errorNewNumber, qOverload<>(&QLineEdit::clear));
        QObject::connect(currentnumberIn, &QLineEdit::textChanged, updatedSucessfully, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, updatedSucessfully, qOverload<>(&QLineEdit::clear));

        QMetaObject::connectSlotsByName(customerupdater);
    } // setupUi

    void retranslateUi(QDialog *customerupdater)
    {
        customerupdater->setWindowTitle(QCoreApplication::translate("customerupdater", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("customerupdater", "Customer Update", nullptr));
        label_2->setText(QCoreApplication::translate("customerupdater", "New Number", nullptr));
        errorCurrentNumber->setText(QString());
        label_3->setText(QCoreApplication::translate("customerupdater", "New Name", nullptr));
        label_5->setText(QCoreApplication::translate("customerupdater", "New Credit", nullptr));
        label_4->setText(QCoreApplication::translate("customerupdater", "New Address", nullptr));
        numberIn->setText(QString());
        nameIn->setText(QString());
        addressIn->setText(QString());
        creditIn->setText(QString());
        updateCustomer->setText(QCoreApplication::translate("customerupdater", "Update", nullptr));
        deleteCustomer->setText(QCoreApplication::translate("customerupdater", "Delete", nullptr));
        clearScreen->setText(QCoreApplication::translate("customerupdater", "Clear", nullptr));
        currentnumberIn->setText(QString());
        label_6->setText(QCoreApplication::translate("customerupdater", "Current Number", nullptr));
        checkNewNumber->setText(QString());
        checkNewName->setText(QString());
        checkNewAddress->setText(QString());
        checkNewCredit->setText(QString());
        errorNewNumber->setText(QString());
        updatedSucessfully->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class customerupdater: public Ui_customerupdater {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERUPDATER_H
