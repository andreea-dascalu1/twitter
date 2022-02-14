/********************************************************************************
** Form generated from reading UI file 'TweetPost.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWEETPOST_H
#define UI_TWEETPOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TweetPost
{
public:
    QFrame *frame;
    QLabel *profilePic;
    QTextEdit *textEdit;
    QPushButton *tweet;

    void setupUi(QWidget *TweetPost)
    {
        if (TweetPost->objectName().isEmpty())
            TweetPost->setObjectName(QString::fromUtf8("TweetPost"));
        TweetPost->resize(610, 170);
        TweetPost->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(TweetPost);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 591, 151));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        profilePic = new QLabel(frame);
        profilePic->setObjectName(QString::fromUtf8("profilePic"));
        profilePic->setGeometry(QRect(10, 10, 51, 51));
        profilePic->setStyleSheet(QString::fromUtf8("border-radius:24px;"));
        profilePic->setPixmap(QPixmap(QString::fromUtf8("default_profile_50X50.png")));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(70, 10, 511, 91));
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
        tweet = new QPushButton(frame);
        tweet->setObjectName(QString::fromUtf8("tweet"));
        tweet->setGeometry(QRect(510, 110, 70, 30));
        tweet->setMaximumSize(QSize(70, 30));
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
        tweet->setPalette(palette1);
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        tweet->setFont(font);
        tweet->setFocusPolicy(Qt::StrongFocus);
        tweet->setStyleSheet(QString::fromUtf8("QPushButton#tweet{\n"
"background-color:rgb(29,155,240);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton#tweet:hover {\n"
"    background-color: rgb(26,140,216);\n"
"    border-radius:15px;\n"
"}"));

        retranslateUi(TweetPost);

        QMetaObject::connectSlotsByName(TweetPost);
    } // setupUi

    void retranslateUi(QWidget *TweetPost)
    {
        TweetPost->setWindowTitle(QApplication::translate("TweetPost", "TweetPost", nullptr));
        profilePic->setText(QString());
        textEdit->setPlaceholderText(QApplication::translate("TweetPost", "What's happening?", nullptr));
        tweet->setText(QApplication::translate("TweetPost", "Tweet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TweetPost: public Ui_TweetPost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWEETPOST_H
