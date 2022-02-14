/********************************************************************************
** Form generated from reading UI file 'UserInList.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINLIST_H
#define UI_USERINLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInList
{
public:
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QLabel *username;
    QLabel *profilePic;
    QLabel *name;
    QPushButton *pushButton_follow;

    void setupUi(QWidget *UserInList)
    {
        if (UserInList->objectName().isEmpty())
            UserInList->setObjectName(QString::fromUtf8("UserInList"));
        UserInList->resize(347, 79);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UserInList->sizePolicy().hasHeightForWidth());
        UserInList->setSizePolicy(sizePolicy);
        UserInList->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridFrame = new QFrame(UserInList);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        gridFrame->setGeometry(QRect(0, 10, 341, 61));
        gridFrame->setMinimumSize(QSize(341, 61));
        gridFrame->setMaximumSize(QSize(341, 61));
        gridFrame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 0, 0);"));
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(7, 3, 10, 2);
        username = new QLabel(gridFrame);
        username->setObjectName(QString::fromUtf8("username"));
        QFont font;
        font.setPointSize(9);
        username->setFont(font);
        username->setStyleSheet(QString::fromUtf8("color: rgb(93, 109, 121);"));
        username->setLineWidth(0);
        username->setMidLineWidth(0);
        username->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(username, 1, 1, 1, 1);

        profilePic = new QLabel(gridFrame);
        profilePic->setObjectName(QString::fromUtf8("profilePic"));
        profilePic->setMaximumSize(QSize(50, 50));
        profilePic->setStyleSheet(QString::fromUtf8("border-radius:15px;"));
        profilePic->setPixmap(QPixmap(QString::fromUtf8("default_profile_50X50.png")));

        gridLayout->addWidget(profilePic, 0, 0, 2, 1);

        name = new QLabel(gridFrame);
        name->setObjectName(QString::fromUtf8("name"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        name->setFont(font1);
        name->setStyleSheet(QString::fromUtf8("color:rgb(59, 63, 67);"));
        name->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(name, 0, 1, 1, 1);

        pushButton_follow = new QPushButton(gridFrame);
        pushButton_follow->setObjectName(QString::fromUtf8("pushButton_follow"));
        pushButton_follow->setMaximumSize(QSize(70, 30));
        pushButton_follow->setSizeIncrement(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
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
        pushButton_follow->setPalette(palette);
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_follow->setFont(font2);
        pushButton_follow->setFocusPolicy(Qt::StrongFocus);
        pushButton_follow->setLayoutDirection(Qt::LeftToRight);
        pushButton_follow->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_follow{\n"
"background-color: rgb(0, 0, 0);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton#pushButton_follow:hover {\n"
"    background-color:rgb(15, 20, 25);\n"
"    border-radius:15px;\n"
"}"));

        gridLayout->addWidget(pushButton_follow, 0, 2, 2, 1);


        retranslateUi(UserInList);

        QMetaObject::connectSlotsByName(UserInList);
    } // setupUi

    void retranslateUi(QWidget *UserInList)
    {
        UserInList->setWindowTitle(QApplication::translate("UserInList", "UserInList", nullptr));
        username->setText(QApplication::translate("UserInList", "@username", nullptr));
        profilePic->setText(QString());
        name->setText(QApplication::translate("UserInList", "User", nullptr));
        pushButton_follow->setText(QApplication::translate("UserInList", "Follow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInList: public Ui_UserInList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINLIST_H
