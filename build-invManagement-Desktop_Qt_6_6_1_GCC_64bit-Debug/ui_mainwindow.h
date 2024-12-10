/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QWidget *centralwidget;
    QLabel *UsernameLabel;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QLabel *passwordLabel;
    QPushButton *signIn;
    QFrame *frame;
    QLabel *loginLabel;
    QFrame *line2_2;
    QFrame *line2_3;
    QMenuBar *menubar;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName("mainwindow");
        mainwindow->resize(510, 541);
        mainwindow->setMaximumSize(QSize(800, 16777215));
        mainwindow->setStyleSheet(QString::fromUtf8("QLabel \n"
"{	\n"
"	color: rgb(238, 238, 238);\n"
"	background-color:rgb(34, 40, 49);\n"
"	font: 10pt \"DejaVu Sans Mono\";\n"
"}\n"
"\n"
"\n"
"QLineEdit \n"
"{\n"
"	color:rgb(238, 238, 238);\n"
"	background-color: rgb(34, 40, 49);\n"
"	border-radius: 9px;\n"
"	font: 9pt \"DejaVu Sans\";\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton\n"
"{\n"
"	\n"
"	border-radius: 12px;\n"
"	color: rgb(57, 62, 70);\n"
"	background-color: rgb(255, 211, 105);\n"
"	font: 700 11pt \"DejaVu Sans Mono\";\n"
"}\n"
"\n"
"\n"
"QMainWindow\n"
"{ \n"
"\n"
"	background-color:rgb(238, 238, 238);\n"
"}\n"
"\n"
"\n"
"QFrame\n"
"{\n"
"background-color: rgb(34, 40, 49);\n"
"border-radius: 9px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(mainwindow);
        centralwidget->setObjectName("centralwidget");
        UsernameLabel = new QLabel(centralwidget);
        UsernameLabel->setObjectName("UsernameLabel");
        UsernameLabel->setGeometry(QRect(150, 190, 101, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        UsernameLabel->setFont(font);
        usernameInput = new QLineEdit(centralwidget);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(150, 230, 211, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("DejaVu Sans")});
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        usernameInput->setFont(font1);
        passwordInput = new QLineEdit(centralwidget);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(150, 300, 211, 25));
        passwordInput->setFont(font1);
        passwordInput->setEchoMode(QLineEdit::Password);
        passwordLabel = new QLabel(centralwidget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(150, 270, 101, 20));
        passwordLabel->setFont(font);
        signIn = new QPushButton(centralwidget);
        signIn->setObjectName("signIn");
        signIn->setGeometry(QRect(220, 340, 81, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(false);
        signIn->setFont(font2);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(110, 90, 291, 321));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        loginLabel = new QLabel(frame);
        loginLabel->setObjectName("loginLabel");
        loginLabel->setGeometry(QRect(50, 50, 201, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(false);
        loginLabel->setFont(font3);
        loginLabel->setStyleSheet(QString::fromUtf8("font: 700 12pt \"DejaVu Sans Mono\";"));
        line2_2 = new QFrame(frame);
        line2_2->setObjectName("line2_2");
        line2_2->setGeometry(QRect(40, 170, 220, 2));
        line2_2->setStyleSheet(QString::fromUtf8("background-color:rgb(57, 62, 70);"));
        line2_2->setFrameShape(QFrame::HLine);
        line2_2->setFrameShadow(QFrame::Sunken);
        line2_3 = new QFrame(frame);
        line2_3->setObjectName("line2_3");
        line2_3->setGeometry(QRect(40, 240, 220, 2));
        line2_3->setStyleSheet(QString::fromUtf8("background-color:rgb(57, 62, 70);"));
        line2_3->setFrameShape(QFrame::HLine);
        line2_3->setFrameShadow(QFrame::Sunken);
        mainwindow->setCentralWidget(centralwidget);
        frame->raise();
        usernameInput->raise();
        UsernameLabel->raise();
        passwordLabel->raise();
        passwordInput->raise();
        signIn->raise();
        menubar = new QMenuBar(mainwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 510, 22));
        mainwindow->setMenuBar(menubar);

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "mainwindow", nullptr));
        UsernameLabel->setText(QCoreApplication::translate("mainwindow", "Username ", nullptr));
        usernameInput->setText(QString());
        passwordInput->setText(QString());
        passwordLabel->setText(QCoreApplication::translate("mainwindow", "Password", nullptr));
        signIn->setText(QCoreApplication::translate("mainwindow", "Sign in", nullptr));
        loginLabel->setText(QCoreApplication::translate("mainwindow", "Sign in to continue ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
