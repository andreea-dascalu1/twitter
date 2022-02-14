/********************************************************************************
** Form generated from reading UI file 'Retweet.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETWEET_H
#define UI_RETWEET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Retweet
{
public:
    QWidget *gridWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_dislike;
    QWidget *retweet;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *date_2;
    QLabel *username_2;
    QLabel *name_2;
    QLabel *tweet_2;
    QPushButton *pushButton_goToRef;
    QLabel *name;
    QLabel *profilePic;
    QLabel *username;
    QSpacerItem *horizontalSpacer_2;
    QLabel *tweet;
    QPushButton *pushButton_reply;
    QPushButton *pushButton_retweet;
    QPushButton *pushButton_like;
    QLabel *date;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_retweet;

    void setupUi(QWidget *Retweet)
    {
        if (Retweet->objectName().isEmpty())
            Retweet->setObjectName(QString::fromUtf8("Retweet"));
        Retweet->resize(604, 904);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Retweet->sizePolicy().hasHeightForWidth());
        Retweet->setSizePolicy(sizePolicy);
        Retweet->setMinimumSize(QSize(604, 302));
        Retweet->setMaximumSize(QSize(604, 1000));
        Retweet->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridWidget = new QWidget(Retweet);
        gridWidget->setObjectName(QString::fromUtf8("gridWidget"));
        gridWidget->setGeometry(QRect(0, 0, 601, 321));
        gridWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(gridWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 3, -1, -1);
        pushButton_dislike = new QPushButton(gridWidget);
        pushButton_dislike->setObjectName(QString::fromUtf8("pushButton_dislike"));
        pushButton_dislike->setMinimumSize(QSize(125, 30));
        pushButton_dislike->setMaximumSize(QSize(125, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_dislike->setFont(font);
        pushButton_dislike->setLayoutDirection(Qt::RightToLeft);
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

        gridLayout->addWidget(pushButton_dislike, 3, 4, 1, 1, Qt::AlignRight);

        retweet = new QWidget(gridWidget);
        retweet->setObjectName(QString::fromUtf8("retweet"));
        gridLayout_2 = new QGridLayout(retweet);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(8);
        gridLayout_2->setVerticalSpacing(10);
        label = new QLabel(retweet);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(30, 30));
        label->setMaximumSize(QSize(30, 30));
        label->setPixmap(QPixmap(QString::fromUtf8("default_profile_50X50.png")));
        label->setScaledContents(true);

        gridLayout_2->addWidget(label, 0, 0, 2, 1);

        date_2 = new QLabel(retweet);
        date_2->setObjectName(QString::fromUtf8("date_2"));
        QPalette palette;
        QBrush brush(QColor(93, 109, 121, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(142, 153, 161, 128));
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
        date_2->setPalette(palette);
        QFont font1;
        font1.setPointSize(10);
        date_2->setFont(font1);
        date_2->setStyleSheet(QString::fromUtf8("color: rgb(93, 109, 121);"));

        gridLayout_2->addWidget(date_2, 0, 3, 3, 1);

        username_2 = new QLabel(retweet);
        username_2->setObjectName(QString::fromUtf8("username_2"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush4(QColor(170, 178, 185, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        username_2->setPalette(palette1);
        username_2->setFont(font1);
        username_2->setStyleSheet(QString::fromUtf8("color: rgb(93, 109, 121);"));

        gridLayout_2->addWidget(username_2, 0, 2, 3, 1);

        name_2 = new QLabel(retweet);
        name_2->setObjectName(QString::fromUtf8("name_2"));
        QPalette palette2;
        QBrush brush5(QColor(59, 63, 67, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush6(QColor(170, 255, 255, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        name_2->setPalette(palette2);
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(63);
        name_2->setFont(font2);
        name_2->setStyleSheet(QString::fromUtf8("font-weight:500;\n"
"color:rgb(59, 63, 67);"));

        gridLayout_2->addWidget(name_2, 0, 1, 3, 1);

        tweet_2 = new QLabel(retweet);
        tweet_2->setObjectName(QString::fromUtf8("tweet_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tweet_2->sizePolicy().hasHeightForWidth());
        tweet_2->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(11);
        tweet_2->setFont(font3);
        tweet_2->setStyleSheet(QString::fromUtf8("padding:5px;"));
        tweet_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        tweet_2->setWordWrap(true);
        tweet_2->setMargin(0);

        gridLayout_2->addWidget(tweet_2, 3, 1, 2, 3);


        gridLayout->addWidget(retweet, 2, 1, 1, 4);

        pushButton_goToRef = new QPushButton(gridWidget);
        pushButton_goToRef->setObjectName(QString::fromUtf8("pushButton_goToRef"));
        pushButton_goToRef->setMinimumSize(QSize(150, 30));
        pushButton_goToRef->setMaximumSize(QSize(70, 30));
        pushButton_goToRef->setSizeIncrement(QSize(0, 0));
        QPalette palette3;
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        QBrush brush9(QColor(120, 120, 120, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        pushButton_goToRef->setPalette(palette3);
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_goToRef->setFont(font4);
        pushButton_goToRef->setFocusPolicy(Qt::StrongFocus);
        pushButton_goToRef->setLayoutDirection(Qt::LeftToRight);
        pushButton_goToRef->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_goToRef{\n"
"background-color: rgb(0, 0, 0);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton#pushButton_goToRef:hover {\n"
"    background-color:rgb(15, 20, 25);\n"
"    border-radius:15px;\n"
"}"));

        gridLayout->addWidget(pushButton_goToRef, 0, 4, 1, 1, Qt::AlignRight);

        name = new QLabel(gridWidget);
        name->setObjectName(QString::fromUtf8("name"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        name->setPalette(palette4);
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(63);
        name->setFont(font5);
        name->setStyleSheet(QString::fromUtf8("font-weight:500;\n"
"color:rgb(59, 63, 67);"));

        gridLayout->addWidget(name, 0, 1, 1, 1);

        profilePic = new QLabel(gridWidget);
        profilePic->setObjectName(QString::fromUtf8("profilePic"));
        profilePic->setMaximumSize(QSize(50, 50));
        profilePic->setStyleSheet(QString::fromUtf8("border-radius:20px;"));
        profilePic->setPixmap(QPixmap(QString::fromUtf8("default_profile_50X50.png")));
        profilePic->setScaledContents(true);
        profilePic->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(profilePic, 0, 0, 1, 1);

        username = new QLabel(gridWidget);
        username->setObjectName(QString::fromUtf8("username"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        username->setPalette(palette5);
        username->setFont(font1);
        username->setStyleSheet(QString::fromUtf8("color: rgb(93, 109, 121);"));

        gridLayout->addWidget(username, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 0, 1, 5);

        tweet = new QLabel(gridWidget);
        tweet->setObjectName(QString::fromUtf8("tweet"));
        sizePolicy1.setHeightForWidth(tweet->sizePolicy().hasHeightForWidth());
        tweet->setSizePolicy(sizePolicy1);
        QFont font6;
        font6.setPointSize(14);
        tweet->setFont(font6);
        tweet->setStyleSheet(QString::fromUtf8("padding:3px;"));
        tweet->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        tweet->setWordWrap(true);
        tweet->setMargin(0);

        gridLayout->addWidget(tweet, 1, 1, 1, 4);

        pushButton_reply = new QPushButton(gridWidget);
        pushButton_reply->setObjectName(QString::fromUtf8("pushButton_reply"));
        pushButton_reply->setMinimumSize(QSize(125, 30));
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

        gridLayout->addWidget(pushButton_reply, 3, 1, 1, 1);

        pushButton_retweet = new QPushButton(gridWidget);
        pushButton_retweet->setObjectName(QString::fromUtf8("pushButton_retweet"));
        pushButton_retweet->setMinimumSize(QSize(125, 30));
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

        gridLayout->addWidget(pushButton_retweet, 3, 2, 1, 1);

        pushButton_like = new QPushButton(gridWidget);
        pushButton_like->setObjectName(QString::fromUtf8("pushButton_like"));
        pushButton_like->setMinimumSize(QSize(125, 30));
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

        gridLayout->addWidget(pushButton_like, 3, 3, 1, 1);

        date = new QLabel(gridWidget);
        date->setObjectName(QString::fromUtf8("date"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        date->setPalette(palette6);
        date->setFont(font1);
        date->setStyleSheet(QString::fromUtf8("color: rgb(93, 109, 121);"));

        gridLayout->addWidget(date, 0, 3, 1, 1);

        verticalLayoutWidget = new QWidget(Retweet);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 329, 621, 1421));
        verticalLayout_retweet = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_retweet->setSpacing(6);
        verticalLayout_retweet->setContentsMargins(11, 11, 11, 11);
        verticalLayout_retweet->setObjectName(QString::fromUtf8("verticalLayout_retweet"));
        verticalLayout_retweet->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_retweet->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Retweet);

        QMetaObject::connectSlotsByName(Retweet);
    } // setupUi

    void retranslateUi(QWidget *Retweet)
    {
        Retweet->setWindowTitle(QApplication::translate("Retweet", "Retweet", nullptr));
        pushButton_dislike->setText(QApplication::translate("Retweet", "0", nullptr));
        label->setText(QString());
        date_2->setText(QApplication::translate("Retweet", "<html><head/><body><p><span style=\" color:#5d6d79;\">Month 25</span></p></body></html>", nullptr));
        username_2->setText(QApplication::translate("Retweet", "<html><head/><body><p><span style=\" color:#5d6d79;\">@refusername</span></p></body></html>", nullptr));
        name_2->setText(QApplication::translate("Retweet", "<html><head/><body><p><span style=\" color:#3b3f43;\">RefName</span></p></body></html>", nullptr));
        tweet_2->setText(QApplication::translate("Retweet", "RefTweet Text RefTweet Text \n"
"tweet text", nullptr));
        pushButton_goToRef->setText(QApplication::translate("Retweet", "Go to referenced tweet", nullptr));
        name->setText(QApplication::translate("Retweet", "<html><head/><body><p><span style=\" color:#3b3f43;\">Name</span></p></body></html>", nullptr));
        profilePic->setText(QString());
        username->setText(QApplication::translate("Retweet", "<html><head/><body><p><span style=\" color:#5d6d79;\">@username</span></p></body></html>", nullptr));
        tweet->setText(QApplication::translate("Retweet", "Tweet Text Tweet Text \n"
"tweet text", nullptr));
        pushButton_reply->setText(QApplication::translate("Retweet", "0", nullptr));
        pushButton_retweet->setText(QApplication::translate("Retweet", "0", nullptr));
        pushButton_like->setText(QApplication::translate("Retweet", "0", nullptr));
        date->setText(QApplication::translate("Retweet", "<html><head/><body><p><span style=\" color:#5d6d79;\">Month 25</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Retweet: public Ui_Retweet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETWEET_H
