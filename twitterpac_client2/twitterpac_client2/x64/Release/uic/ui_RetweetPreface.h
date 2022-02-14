/********************************************************************************
** Form generated from reading UI file 'RetweetPreface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETWEETPREFACE_H
#define UI_RETWEETPREFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RetweetPreface
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *profilePic;
    QTextEdit *textEdit;
    QPushButton *pushButton_retweetPref;

    void setupUi(QWidget *RetweetPreface)
    {
        if (RetweetPreface->objectName().isEmpty())
            RetweetPreface->setObjectName(QString::fromUtf8("RetweetPreface"));
        RetweetPreface->resize(601, 92);
        RetweetPreface->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayoutWidget = new QWidget(RetweetPreface);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 10, 601, 73));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(7, 0, 7, 0);
        profilePic = new QLabel(gridLayoutWidget);
        profilePic->setObjectName(QString::fromUtf8("profilePic"));
        profilePic->setPixmap(QPixmap(QString::fromUtf8("default_profile_50X50.png")));

        gridLayout->addWidget(profilePic, 0, 0, 1, 1);

        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush1(QColor(0, 120, 215, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        textEdit->setPalette(palette);
        textEdit->setStyleSheet(QString::fromUtf8("font: 80 11pt \"MS Shell Dlg 2\";\n"
"border-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(textEdit, 0, 1, 1, 1);

        pushButton_retweetPref = new QPushButton(gridLayoutWidget);
        pushButton_retweetPref->setObjectName(QString::fromUtf8("pushButton_retweetPref"));
        pushButton_retweetPref->setMinimumSize(QSize(70, 30));
        pushButton_retweetPref->setMaximumSize(QSize(70, 30));
        QPalette palette1;
        QBrush brush2(QColor(29, 155, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        pushButton_retweetPref->setPalette(palette1);
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        pushButton_retweetPref->setFont(font);
        pushButton_retweetPref->setFocusPolicy(Qt::StrongFocus);
        pushButton_retweetPref->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_retweetPref{\n"
"background-color:rgb(29,155,240);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton#pushButton_retweetPref:hover {\n"
"    background-color: rgb(26,140,216);\n"
"    border-radius:15px;\n"
"}"));

        gridLayout->addWidget(pushButton_retweetPref, 0, 2, 1, 1);


        retranslateUi(RetweetPreface);

        QMetaObject::connectSlotsByName(RetweetPreface);
    } // setupUi

    void retranslateUi(QWidget *RetweetPreface)
    {
        RetweetPreface->setWindowTitle(QApplication::translate("RetweetPreface", "RetweetPreface", nullptr));
        profilePic->setText(QString());
        textEdit->setPlaceholderText(QApplication::translate("RetweetPreface", "Add a preface to this tweet.", nullptr));
        pushButton_retweetPref->setText(QApplication::translate("RetweetPreface", "Retweet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RetweetPreface: public Ui_RetweetPreface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETWEETPREFACE_H
