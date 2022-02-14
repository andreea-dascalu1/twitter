/********************************************************************************
** Form generated from reading UI file 'twitterpac_client2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWITTERPAC_CLIENT2_H
#define UI_TWITTERPAC_CLIENT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_twitterpac_client2Class
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QPushButton *pushButton_login;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_register;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_submit_registration;
    QPushButton *pushButton_returnTo_login;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *twitterpac_client2Class)
    {
        if (twitterpac_client2Class->objectName().isEmpty())
            twitterpac_client2Class->setObjectName(QString::fromUtf8("twitterpac_client2Class"));
        twitterpac_client2Class->resize(1402, 867);
        stackedWidget = new QStackedWidget(twitterpac_client2Class);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1421, 861));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(580, 290, 271, 201));
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(40, 150, 81, 31));
        pushButton_login->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_login {\n"
"	font: 75 11pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(29,155,240);\n"
"border-radius: 15px;\n"
"color:#ffffff;\n"
"}\n"
"\n"
"\n"
""));
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(40, 50, 161, 21));
        lineEdit_username->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-bottom: 3px solid rgb(29,155,240);"));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(40, 100, 161, 21));
        lineEdit_password->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom: 3px solid rgb(29,155,240);"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 91, 16));
        label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 80, 91, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));
        pushButton_register = new QPushButton(groupBox);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));
        pushButton_register->setGeometry(QRect(140, 150, 81, 31));
        pushButton_register->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_register {\n"
"	font: 75 11pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(29,155,240);\n"
"border-radius: 15px;\n"
"color:#ffffff;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(440, 130, 271, 361));
        pushButton_submit_registration = new QPushButton(groupBox_2);
        pushButton_submit_registration->setObjectName(QString::fromUtf8("pushButton_submit_registration"));
        pushButton_submit_registration->setGeometry(QRect(100, 252, 75, 31));
        pushButton_submit_registration->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_submit_registration {\n"
"	font: 75 11pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(29,155,240);\n"
"border-radius: 15px;\n"
"color:#ffffff;\n"
"}\n"
"\n"
"\n"
""));
        pushButton_returnTo_login = new QPushButton(groupBox_2);
        pushButton_returnTo_login->setObjectName(QString::fromUtf8("pushButton_returnTo_login"));
        pushButton_returnTo_login->setGeometry(QRect(100, 312, 75, 31));
        pushButton_returnTo_login->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_returnTo_login {\n"
"	font: 75 11pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(29,155,240);\n"
"border-radius: 15px;\n"
"color:#ffffff;\n"
"}\n"
"\n"
"\n"
""));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 290, 141, 16));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(72, 70, 131, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom: 3px solid rgb(29,155,240);"));
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(72, 120, 131, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom: 3px solid rgb(29,155,240);"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(72, 170, 131, 20));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom: 3px solid rgb(29,155,240);"));
        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(72, 220, 131, 20));
        lineEdit_4->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom: 3px solid rgb(29,155,240);"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 50, 81, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 100, 81, 16));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 150, 91, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 200, 81, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MS Shell Dlg 2\";"));
        stackedWidget->addWidget(page_2);

        retranslateUi(twitterpac_client2Class);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(twitterpac_client2Class);
    } // setupUi

    void retranslateUi(QWidget *twitterpac_client2Class)
    {
        twitterpac_client2Class->setWindowTitle(QApplication::translate("twitterpac_client2Class", "twitterpac_client2", nullptr));
        groupBox->setTitle(QApplication::translate("twitterpac_client2Class", "Sign in", nullptr));
        pushButton_login->setText(QApplication::translate("twitterpac_client2Class", "Log in", nullptr));
        label->setText(QApplication::translate("twitterpac_client2Class", "Username", nullptr));
        label_2->setText(QApplication::translate("twitterpac_client2Class", "Password", nullptr));
        pushButton_register->setText(QApplication::translate("twitterpac_client2Class", "Register", nullptr));
        groupBox_2->setTitle(QApplication::translate("twitterpac_client2Class", "Register", nullptr));
        pushButton_submit_registration->setText(QApplication::translate("twitterpac_client2Class", "Register", nullptr));
        pushButton_returnTo_login->setText(QApplication::translate("twitterpac_client2Class", "Login", nullptr));
        label_3->setText(QApplication::translate("twitterpac_client2Class", "Aleady have an account?", nullptr));
        label_4->setText(QApplication::translate("twitterpac_client2Class", "Username", nullptr));
        label_5->setText(QApplication::translate("twitterpac_client2Class", "Password", nullptr));
        label_6->setText(QApplication::translate("twitterpac_client2Class", "First Name", nullptr));
        label_7->setText(QApplication::translate("twitterpac_client2Class", "Surname", nullptr));
    } // retranslateUi

};

namespace Ui {
    class twitterpac_client2Class: public Ui_twitterpac_client2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWITTERPAC_CLIENT2_H
