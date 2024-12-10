/********************************************************************************
** Form generated from reading UI file 'productupdater.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTUPDATER_H
#define UI_PRODUCTUPDATER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_productupdater
{
public:
    QLabel *label_4;
    QFrame *frame;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *errorCurrentCode;
    QLabel *label_3;
    QLineEdit *codeIn;
    QLineEdit *nameIn;
    QLineEdit *stockIn;
    QLineEdit *unitIn;
    QPushButton *updateProduct;
    QPushButton *deleteProduct;
    QPushButton *clearScreen;
    QLabel *label_6;
    QLineEdit *currentcodeIn;
    QCheckBox *checkNewCode;
    QCheckBox *checkNewName;
    QCheckBox *checkNewStock;
    QCheckBox *checkNewUnitPrice;
    QFrame *line2_2;
    QLineEdit *errorNewCode;
    QLineEdit *updatedSucessfully;

    void setupUi(QDialog *productupdater)
    {
        if (productupdater->objectName().isEmpty())
            productupdater->setObjectName("productupdater");
        productupdater->resize(615, 800);
        productupdater->setStyleSheet(QString::fromUtf8("QFrame\n"
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
        label_4 = new QLabel(productupdater);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 460, 111, 17));
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        label_4->setFont(font);
        frame = new QFrame(productupdater);
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
        label->setGeometry(QRect(270, 20, 191, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(productupdater);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 540, 131, 17));
        label_5->setFont(font);
        label_2 = new QLabel(productupdater);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 300, 81, 17));
        label_2->setFont(font);
        errorCurrentCode = new QLineEdit(productupdater);
        errorCurrentCode->setObjectName("errorCurrentCode");
        errorCurrentCode->setGeometry(QRect(430, 170, 161, 26));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        errorCurrentCode->setFont(font2);
        errorCurrentCode->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);\n"
"font: 9pt \"DejaVu Sans Mono\";"));
        label_3 = new QLabel(productupdater);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 380, 91, 17));
        label_3->setFont(font);
        codeIn = new QLineEdit(productupdater);
        codeIn->setObjectName("codeIn");
        codeIn->setGeometry(QRect(200, 330, 211, 25));
        codeIn->setFont(font2);
        codeIn->setEchoMode(QLineEdit::Normal);
        nameIn = new QLineEdit(productupdater);
        nameIn->setObjectName("nameIn");
        nameIn->setGeometry(QRect(200, 410, 211, 25));
        nameIn->setFont(font2);
        nameIn->setEchoMode(QLineEdit::Normal);
        stockIn = new QLineEdit(productupdater);
        stockIn->setObjectName("stockIn");
        stockIn->setGeometry(QRect(200, 490, 211, 25));
        stockIn->setFont(font2);
        stockIn->setEchoMode(QLineEdit::Normal);
        unitIn = new QLineEdit(productupdater);
        unitIn->setObjectName("unitIn");
        unitIn->setGeometry(QRect(200, 570, 211, 25));
        unitIn->setFont(font2);
        unitIn->setEchoMode(QLineEdit::Normal);
        updateProduct = new QPushButton(productupdater);
        updateProduct->setObjectName("updateProduct");
        updateProduct->setGeometry(QRect(260, 630, 81, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setItalic(false);
        updateProduct->setFont(font3);
        deleteProduct = new QPushButton(productupdater);
        deleteProduct->setObjectName("deleteProduct");
        deleteProduct->setGeometry(QRect(260, 220, 81, 31));
        deleteProduct->setFont(font3);
        clearScreen = new QPushButton(productupdater);
        clearScreen->setObjectName("clearScreen");
        clearScreen->setGeometry(QRect(260, 680, 81, 31));
        clearScreen->setFont(font3);
        label_6 = new QLabel(productupdater);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(200, 140, 111, 17));
        label_6->setFont(font);
        currentcodeIn = new QLineEdit(productupdater);
        currentcodeIn->setObjectName("currentcodeIn");
        currentcodeIn->setGeometry(QRect(200, 170, 211, 25));
        currentcodeIn->setFont(font2);
        currentcodeIn->setEchoMode(QLineEdit::Normal);
        checkNewCode = new QCheckBox(productupdater);
        checkNewCode->setObjectName("checkNewCode");
        checkNewCode->setGeometry(QRect(170, 330, 21, 23));
        checkNewName = new QCheckBox(productupdater);
        checkNewName->setObjectName("checkNewName");
        checkNewName->setGeometry(QRect(170, 410, 21, 23));
        checkNewStock = new QCheckBox(productupdater);
        checkNewStock->setObjectName("checkNewStock");
        checkNewStock->setGeometry(QRect(170, 490, 21, 23));
        checkNewUnitPrice = new QCheckBox(productupdater);
        checkNewUnitPrice->setObjectName("checkNewUnitPrice");
        checkNewUnitPrice->setGeometry(QRect(170, 570, 21, 23));
        line2_2 = new QFrame(productupdater);
        line2_2->setObjectName("line2_2");
        line2_2->setGeometry(QRect(-60, 270, 1300, 1));
        line2_2->setStyleSheet(QString::fromUtf8("background-color:rgb(57, 62, 70);"));
        line2_2->setFrameShape(QFrame::HLine);
        line2_2->setFrameShadow(QFrame::Sunken);
        errorNewCode = new QLineEdit(productupdater);
        errorNewCode->setObjectName("errorNewCode");
        errorNewCode->setGeometry(QRect(430, 330, 151, 26));
        errorNewCode->setFont(font2);
        errorNewCode->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);\n"
"font: 9pt \"DejaVu Sans Mono\";"));
        updatedSucessfully = new QLineEdit(productupdater);
        updatedSucessfully->setObjectName("updatedSucessfully");
        updatedSucessfully->setGeometry(QRect(190, 740, 221, 26));
        updatedSucessfully->setFont(font2);
        updatedSucessfully->setStyleSheet(QString::fromUtf8("background-color:rgb(238, 238, 238) ;\n"
"color: rgb(192, 28, 40);\n"
"font: 9pt \"DejaVu Sans Mono\";\n"
""));

        retranslateUi(productupdater);
        QObject::connect(clearScreen, &QPushButton::clicked, unitIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, stockIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, nameIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, codeIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, errorCurrentCode, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, currentcodeIn, qOverload<>(&QLineEdit::clear));
        QObject::connect(currentcodeIn, &QLineEdit::textChanged, errorCurrentCode, qOverload<>(&QLineEdit::clear));
        QObject::connect(codeIn, &QLineEdit::textChanged, errorCurrentCode, qOverload<>(&QLineEdit::clear));
        QObject::connect(codeIn, &QLineEdit::textChanged, errorNewCode, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, errorNewCode, qOverload<>(&QLineEdit::clear));
        QObject::connect(clearScreen, &QPushButton::clicked, updatedSucessfully, qOverload<>(&QLineEdit::clear));
        QObject::connect(currentcodeIn, &QLineEdit::textChanged, updatedSucessfully, qOverload<>(&QLineEdit::clear));
        QObject::connect(codeIn, &QLineEdit::textChanged, updatedSucessfully, qOverload<>(&QLineEdit::clear));

        QMetaObject::connectSlotsByName(productupdater);
    } // setupUi

    void retranslateUi(QDialog *productupdater)
    {
        productupdater->setWindowTitle(QCoreApplication::translate("productupdater", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("productupdater", "New Stock", nullptr));
        label->setText(QCoreApplication::translate("productupdater", "Products Update", nullptr));
        label_5->setText(QCoreApplication::translate("productupdater", "New Unit Price", nullptr));
        label_2->setText(QCoreApplication::translate("productupdater", "New Code", nullptr));
        errorCurrentCode->setText(QString());
        label_3->setText(QCoreApplication::translate("productupdater", "New Name", nullptr));
        codeIn->setText(QString());
        nameIn->setText(QString());
        stockIn->setText(QString());
        unitIn->setText(QString());
        updateProduct->setText(QCoreApplication::translate("productupdater", "Update", nullptr));
        deleteProduct->setText(QCoreApplication::translate("productupdater", "Delete", nullptr));
        clearScreen->setText(QCoreApplication::translate("productupdater", "Clear", nullptr));
        label_6->setText(QCoreApplication::translate("productupdater", "Current Code", nullptr));
        currentcodeIn->setText(QString());
        checkNewCode->setText(QString());
        checkNewName->setText(QString());
        checkNewStock->setText(QString());
        checkNewUnitPrice->setText(QString());
        errorNewCode->setText(QString());
        updatedSucessfully->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class productupdater: public Ui_productupdater {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTUPDATER_H
