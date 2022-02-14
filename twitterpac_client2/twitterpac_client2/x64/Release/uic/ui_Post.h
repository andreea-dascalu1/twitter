/********************************************************************************
** Form generated from reading UI file 'Post.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POST_H
#define UI_POST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Post
{
public:
    QWidget *gridWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_reply;
    QLabel *tweet;
    QPushButton *pushButton_like;
    QLabel *name;
    QLabel *username;
    QPushButton *pushButton_retweet;
    QPushButton *pushButton_dislike;
    QLabel *date;
    QLabel *profilePic;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *Post)
    {
        if (Post->objectName().isEmpty())
            Post->setObjectName(QString::fromUtf8("Post"));
        Post->resize(615, 1600);
        Post->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        gridWidget = new QWidget(Post);
        gridWidget->setObjectName(QString::fromUtf8("gridWidget"));
        gridWidget->setGeometry(QRect(10, 0, 601, 191));
        gridWidget->setStyleSheet(QString::fromUtf8("border-color: rgb(208, 208, 208);\n"
"border:2 px solid;"));
        gridLayout = new QGridLayout(gridWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_reply = new QPushButton(gridWidget);
        pushButton_reply->setObjectName(QString::fromUtf8("pushButton_reply"));
        pushButton_reply->setMinimumSize(QSize(100, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_reply->setFont(font);
        pushButton_reply->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_reply {\n"
"	image: url(:/twitterpac_client2/reply.jpg);\n"
"    image-position:left;\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius:10px;\n"
"	color: rgb(0, 0, 0);\n"
"   padding:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_reply:hover {\n"
"    image: url(:/twitterpac_client2/reply1.jpg);\n"
"    image-position:left;\n"
"	background-color: rgb(213, 229, 255);\n"
"    border-radius:10px;\n"
"	color: rgb(30, 158, 255);\n"
"}"));

        gridLayout->addWidget(pushButton_reply, 4, 1, 1, 1);

        tweet = new QLabel(gridWidget);
        tweet->setObjectName(QString::fromUtf8("tweet"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tweet->sizePolicy().hasHeightForWidth());
        tweet->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        tweet->setFont(font1);
        tweet->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        tweet->setWordWrap(true);
        tweet->setMargin(0);

        gridLayout->addWidget(tweet, 2, 1, 2, 4);

        pushButton_like = new QPushButton(gridWidget);
        pushButton_like->setObjectName(QString::fromUtf8("pushButton_like"));
        pushButton_like->setMinimumSize(QSize(100, 30));
        pushButton_like->setFont(font);
        pushButton_like->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_like {\n"
"	image: url(:/twitterpac_client2/like.jpg);\n"
"    image-position:left;\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius:10px;\n"
"	color: rgb(0, 0, 0);\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_like:hover {\n"
"    image: url(:/twitterpac_client2/like1.jpg);\n"
"    image-position:left;\n"
"	background-color: rgb(213, 229, 255);\n"
"    border-radius:10px;\n"
"	color: rgb(30, 158, 255);\n"
"}"));

        gridLayout->addWidget(pushButton_like, 4, 3, 1, 1);

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
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(63);
        name->setFont(font2);
        name->setStyleSheet(QString::fromUtf8("font-weight:500;\n"
"color:rgb(59, 63, 67);"));

        gridLayout->addWidget(name, 1, 1, 1, 1);

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
        QFont font3;
        font3.setPointSize(10);
        username->setFont(font3);
        username->setStyleSheet(QString::fromUtf8("color: rgb(93, 109, 121);"));

        gridLayout->addWidget(username, 1, 2, 1, 1);

        pushButton_retweet = new QPushButton(gridWidget);
        pushButton_retweet->setObjectName(QString::fromUtf8("pushButton_retweet"));
        pushButton_retweet->setMinimumSize(QSize(100, 30));
        pushButton_retweet->setFont(font);
        pushButton_retweet->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_retweet {\n"
"	image: url(:/twitterpac_client2/retweet.jpg);\n"
"    image-position:left;\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius:10px;\n"
"	color: rgb(0, 0, 0);\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_retweet:hover {\n"
"    image: url(:/twitterpac_client2/retweet1.jpg);\n"
"    image-position:left;\n"
"	background-color: rgb(213, 229, 255);\n"
"    border-radius:10px;\n"
"	color: rgb(30, 158, 255);\n"
"}"));

        gridLayout->addWidget(pushButton_retweet, 4, 2, 1, 1);

        pushButton_dislike = new QPushButton(gridWidget);
        pushButton_dislike->setObjectName(QString::fromUtf8("pushButton_dislike"));
        pushButton_dislike->setMinimumSize(QSize(100, 30));
        pushButton_dislike->setFont(font);
        pushButton_dislike->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_dislike {\n"
"	image: url(:/twitterpac_client2/dislike.jpg);\n"
"    image-position:left;\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius:10px;\n"
"	color: rgb(0, 0, 0);\n"
"padding:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_dislike:hover {\n"
"   \n"
"	image: url(:/twitterpac_client2/dislike1.jpg);\n"
"    image-position:left;\n"
"	background-color: rgb(213, 229, 255);\n"
"    border-radius:10px;\n"
"	color: rgb(30, 158, 255);\n"
"}"));

        gridLayout->addWidget(pushButton_dislike, 4, 4, 1, 1);

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
        date->setFont(font3);
        date->setStyleSheet(QString::fromUtf8("color: rgb(93, 109, 121);"));

        gridLayout->addWidget(date, 1, 3, 1, 1);

        profilePic = new QLabel(gridWidget);
        profilePic->setObjectName(QString::fromUtf8("profilePic"));
        profilePic->setMaximumSize(QSize(50, 50));
        profilePic->setStyleSheet(QString::fromUtf8("border-radius:20px;"));
        profilePic->setPixmap(QPixmap(QString::fromUtf8("default_profile_50X50.png")));
        profilePic->setScaledContents(true);
        profilePic->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(profilePic, 1, 0, 2, 1);

        verticalLayoutWidget = new QWidget(Post);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 200, 601, 601));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Post);

        QMetaObject::connectSlotsByName(Post);
    } // setupUi

    void retranslateUi(QWidget *Post)
    {
        Post->setWindowTitle(QApplication::translate("Post", "Post", nullptr));
        pushButton_reply->setText(QApplication::translate("Post", "0", nullptr));
        tweet->setText(QApplication::translate("Post", "Tweet Text Tweet Text \n"
"tweet text", nullptr));
        pushButton_like->setText(QApplication::translate("Post", "0", nullptr));
        name->setText(QApplication::translate("Post", "<html><head/><body><p><span style=\" color:#3b3f43;\">Name</span></p></body></html>", nullptr));
        username->setText(QApplication::translate("Post", "<html><head/><body><p><span style=\" color:#5d6d79;\">@username</span></p></body></html>", nullptr));
        pushButton_retweet->setText(QApplication::translate("Post", "0", nullptr));
        pushButton_dislike->setText(QApplication::translate("Post", "0", nullptr));
        date->setText(QApplication::translate("Post", "<html><head/><body><p><span style=\" color:#5d6d79;\">Month 25</span></p></body></html>", nullptr));
        profilePic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Post: public Ui_Post {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POST_H
