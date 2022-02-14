/********************************************************************************
** Form generated from reading UI file 'CommentPost.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTPOST_H
#define UI_COMMENTPOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommentPost
{
public:
    QWidget *gridWidget;
    QGridLayout *gridLayout;
    QLabel *profilePic;
    QLabel *comment;
    QLabel *name;
    QLabel *username;
    QLabel *date;

    void setupUi(QWidget *CommentPost)
    {
        if (CommentPost->objectName().isEmpty())
            CommentPost->setObjectName(QString::fromUtf8("CommentPost"));
        CommentPost->resize(699, 292);
        gridWidget = new QWidget(CommentPost);
        gridWidget->setObjectName(QString::fromUtf8("gridWidget"));
        gridWidget->setGeometry(QRect(20, 30, 601, 191));
        gridWidget->setStyleSheet(QString::fromUtf8("border-color: rgb(208, 208, 208);\n"
"border:2 px solid;"));
        gridLayout = new QGridLayout(gridWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        profilePic = new QLabel(gridWidget);
        profilePic->setObjectName(QString::fromUtf8("profilePic"));
        profilePic->setMaximumSize(QSize(50, 50));
        profilePic->setStyleSheet(QString::fromUtf8("border-radius:20px;"));
        profilePic->setPixmap(QPixmap(QString::fromUtf8("default_profile_50X50.png")));
        profilePic->setScaledContents(true);
        profilePic->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(profilePic, 1, 1, 1, 1);

        comment = new QLabel(gridWidget);
        comment->setObjectName(QString::fromUtf8("comment"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comment->sizePolicy().hasHeightForWidth());
        comment->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        comment->setFont(font);
        comment->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        comment->setWordWrap(true);
        comment->setMargin(0);

        gridLayout->addWidget(comment, 2, 2, 2, 4);

        name = new QLabel(gridWidget);
        name->setObjectName(QString::fromUtf8("name"));
        QPalette palette;
        QBrush brush(QColor(59, 63, 67, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(170, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        name->setPalette(palette);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(63);
        name->setFont(font1);
        name->setStyleSheet(QString::fromUtf8("font-weight:500;\n"
"color:rgb(59, 63, 67);"));

        gridLayout->addWidget(name, 1, 2, 1, 1);

        username = new QLabel(gridWidget);
        username->setObjectName(QString::fromUtf8("username"));
        QPalette palette1;
        QBrush brush4(QColor(93, 109, 121, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush5(QColor(170, 178, 185, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        username->setPalette(palette1);
        QFont font2;
        font2.setPointSize(10);
        username->setFont(font2);
        username->setStyleSheet(QString::fromUtf8("color: rgb(93, 109, 121);"));

        gridLayout->addWidget(username, 1, 3, 1, 1);

        date = new QLabel(gridWidget);
        date->setObjectName(QString::fromUtf8("date"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush6(QColor(142, 153, 161, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        date->setPalette(palette2);
        date->setFont(font2);
        date->setStyleSheet(QString::fromUtf8("color: rgb(93, 109, 121);"));

        gridLayout->addWidget(date, 1, 4, 1, 1);


        retranslateUi(CommentPost);

        QMetaObject::connectSlotsByName(CommentPost);
    } // setupUi

    void retranslateUi(QWidget *CommentPost)
    {
        CommentPost->setWindowTitle(QApplication::translate("CommentPost", "CommentPost", nullptr));
        profilePic->setText(QString());
        comment->setText(QApplication::translate("CommentPost", "comment text comment text  \n"
"comment text", nullptr));
        name->setText(QApplication::translate("CommentPost", "<html><head/><body><p><span style=\" color:#3b3f43;\">Name</span></p></body></html>", nullptr));
        username->setText(QApplication::translate("CommentPost", "<html><head/><body><p><span style=\" color:#5d6d79;\">@username</span></p></body></html>", nullptr));
        date->setText(QApplication::translate("CommentPost", "<html><head/><body><p><span style=\" color:#5d6d79;\">Month 25</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommentPost: public Ui_CommentPost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTPOST_H
