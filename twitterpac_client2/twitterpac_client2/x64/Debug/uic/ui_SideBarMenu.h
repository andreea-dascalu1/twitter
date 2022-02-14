/********************************************************************************
** Form generated from reading UI file 'SideBarMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDEBARMENU_H
#define UI_SIDEBARMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SideBarMenu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_9;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QLabel *home;
    QPushButton *next;
    QPushButton *prev;
    QStackedWidget *stackedWidget_feed;
    QWidget *page_2;
    QWidget *page_3;
    QWidget *page_4;

    void setupUi(QWidget *SideBarMenu)
    {
        if (SideBarMenu->objectName().isEmpty())
            SideBarMenu->setObjectName(QString::fromUtf8("SideBarMenu"));
        SideBarMenu->resize(1302, 828);
        stackedWidget = new QStackedWidget(SideBarMenu);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 20, 91, 591));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        pushButton_8 = new QPushButton(page_5);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 190, 91, 31));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_8 {\n"
"    background-color: rgb(29,155,240);\n"
"	border-radius:10px;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton#pushButton_8:hover {\n"
"    background-color: rgb(26,140,216);\n"
"}"));
        pushButton_3 = new QPushButton(page_5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 130, 91, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_3 {\n"
"   	background-color: rgb(29,155,240);\n"
"	border-radius: 10px;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton#pushButton_3:hover {\n"
"    background-color: rgb(26,140,216);\n"
"}"));
        pushButton_2 = new QPushButton(page_5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 70, 91, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2 {\n"
"    background-color: rgb(29,155,240);\n"
"	border-radius:10px;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover {\n"
"    background-color: rgb(26,140,216);\n"
"}"));
        pushButton = new QPushButton(page_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 10, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton {\n"
"    background-color: rgb(29,155,240);\n"
"	border-radius:10px;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton#pushButton:hover {\n"
"    background-color: rgb(26,140,216);\n"
"}"));
        label = new QLabel(page_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 70, 55, 16));
        pushButton_9 = new QPushButton(page_5);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(0, 250, 91, 31));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_9 {\n"
"    background-color: rgb(29,155,240);\n"
"	border-radius:10px;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton#pushButton_9:hover {\n"
"    background-color: rgb(26,140,216);\n"
"}"));
        stackedWidget->addWidget(page_5);
        stackedWidget_2 = new QStackedWidget(SideBarMenu);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(130, 10, 1171, 811));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        home = new QLabel(page);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(10, 10, 671, 49));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        home->setFont(font);
        home->setLayoutDirection(Qt::LeftToRight);
        home->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"padding-left:15px;\n"
"align:center;"));
        home->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        next = new QPushButton(page);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(620, 600, 30, 30));
        next->setMaximumSize(QSize(30, 30));
        QPalette palette;
        QBrush brush(QColor(29, 155, 240, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        next->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft Tai Le"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        next->setFont(font1);
        next->setFocusPolicy(Qt::StrongFocus);
        next->setStyleSheet(QString::fromUtf8("QPushButton#next{\n"
"background-color:rgb(29,155,240);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton#next:hover {\n"
"    background-color: rgb(26,140,216);\n"
"    border-radius:15px;\n"
"}\n"
""));
        prev = new QPushButton(page);
        prev->setObjectName(QString::fromUtf8("prev"));
        prev->setGeometry(QRect(590, 600, 30, 30));
        prev->setMaximumSize(QSize(30, 30));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        prev->setPalette(palette1);
        prev->setFont(font1);
        prev->setFocusPolicy(Qt::StrongFocus);
        prev->setStyleSheet(QString::fromUtf8("QPushButton#prev{\n"
"background-color:rgb(29,155,240);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton#prev:hover {\n"
"    background-color: rgb(26,140,216);\n"
"    border-radius:15px;\n"
"}\n"
""));
        stackedWidget_feed = new QStackedWidget(page);
        stackedWidget_feed->setObjectName(QString::fromUtf8("stackedWidget_feed"));
        stackedWidget_feed->setGeometry(QRect(10, 70, 671, 521));
        stackedWidget_feed->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget_2->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget_2->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget_2->addWidget(page_4);

        retranslateUi(SideBarMenu);

        stackedWidget_feed->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SideBarMenu);
    } // setupUi

    void retranslateUi(QWidget *SideBarMenu)
    {
        SideBarMenu->setWindowTitle(QApplication::translate("SideBarMenu", "SideBarMenu", nullptr));
        pushButton_8->setText(QApplication::translate("SideBarMenu", "Search", nullptr));
        pushButton_3->setText(QApplication::translate("SideBarMenu", "Profile", nullptr));
        pushButton_2->setText(QApplication::translate("SideBarMenu", "Tweet", nullptr));
        pushButton->setText(QApplication::translate("SideBarMenu", "Home", nullptr));
        label->setText(QString());
        pushButton_9->setText(QApplication::translate("SideBarMenu", "Log Out", nullptr));
        home->setText(QApplication::translate("SideBarMenu", "Home", nullptr));
        next->setText(QApplication::translate("SideBarMenu", ">", nullptr));
        prev->setText(QApplication::translate("SideBarMenu", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SideBarMenu: public Ui_SideBarMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEBARMENU_H
