/********************************************************************************
** Form generated from reading UI file 'UserProfile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPROFILE_H
#define UI_USERPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserProfile
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *Friends;
    QLabel *label_no_of_friends;
    QTabWidget *tabWidget;
    QWidget *tab;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *tab_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_friends;
    QLabel *name;
    QLabel *username;

    void setupUi(QWidget *UserProfile)
    {
        if (UserProfile->objectName().isEmpty())
            UserProfile->setObjectName(QString::fromUtf8("UserProfile"));
        UserProfile->resize(1082, 770);
        UserProfile->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(UserProfile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1131, 191));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 179, 179);"));
        label = new QLabel(UserProfile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 120, 131, 131));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("border-radius:65px;"));
        label->setFrameShape(QFrame::NoFrame);
        label->setLineWidth(1);
        label->setPixmap(QPixmap(QString::fromUtf8("11.png")));
        label->setMargin(0);
        pushButton = new QPushButton(UserProfile);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(960, 210, 120, 40));
        pushButton->setMaximumSize(QSize(120, 50));
        QFont font;
        font.setPointSize(10);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"border-color: rgb(0, 0, 0);\n"
"font-color:rgb(154, 154, 154);\n"
"border-width:7px;"));
        Friends = new QLabel(UserProfile);
        Friends->setObjectName(QString::fromUtf8("Friends"));
        Friends->setGeometry(QRect(180, 320, 61, 21));
        Friends->setStyleSheet(QString::fromUtf8("color: rgb(93, 109, 121);"));
        label_no_of_friends = new QLabel(UserProfile);
        label_no_of_friends->setObjectName(QString::fromUtf8("label_no_of_friends"));
        label_no_of_friends->setGeometry(QRect(90, 320, 81, 21));
        label_no_of_friends->setStyleSheet(QString::fromUtf8("color:rgb(59, 63, 67);"));
        tabWidget = new QTabWidget(UserProfile);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(130, 350, 791, 421));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        tabWidget->setFont(font1);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget->setUsesScrollButtons(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 761, 381));
        scrollArea->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
"	background-color: rgb(206, 206, 206);\n"
"    width: 14px;\n"
"    margin: 15px 0 15px 0;\n"
" }\n"
"\n"
"QScrollBar::handle:vertical {	\n"
"	background-color: rgb(206, 206, 206);\n"
"	min-height: 30px;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover{	\n"
"	background-color: rgb(193, 193, 193);\n"
"}\n"
"QScrollBar::handle:vertical:pressed {	\n"
"	background-color: rgb(165, 165, 165);\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"	background-color: rgb(206, 206, 206);\n"
"	height: 15px;\n"
"	subcontrol-position: top;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical:hover {\n"
"	background-color: rgb(193, 193, 193);\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical:pressed {	\n"
"	background-color: rgb(165, 165, 165);\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"	background-color: rgb(206, 206, 206);\n"
"	height: 15px;\n"
"	subcontrol-position: bottom;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:verti"
                        "cal:hover {\n"
"	background-color: rgb(193, 193, 193);\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical:pressed {	\n"
"	background-color: rgb(165, 165, 165);\n"
"}\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 745, 1022));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(500, 1000));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 691, 541));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        scrollArea_2 = new QScrollArea(tab_2);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(10, 10, 761, 381));
        scrollArea_2->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
"	background-color: rgb(206, 206, 206);\n"
"    width: 14px;\n"
"    margin: 15px 0 15px 0;\n"
" }\n"
"\n"
"QScrollBar::handle:vertical {	\n"
"	background-color: rgb(206, 206, 206);\n"
"	min-height: 30px;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover{	\n"
"	background-color: rgb(193, 193, 193);\n"
"}\n"
"QScrollBar::handle:vertical:pressed {	\n"
"	background-color: rgb(165, 165, 165);\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"	background-color: rgb(206, 206, 206);\n"
"	height: 15px;\n"
"	subcontrol-position: top;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical:hover {\n"
"	background-color: rgb(193, 193, 193);\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical:pressed {	\n"
"	background-color: rgb(165, 165, 165);\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"	background-color: rgb(206, 206, 206);\n"
"	height: 15px;\n"
"	subcontrol-position: bottom;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:verti"
                        "cal:hover {\n"
"	background-color: rgb(193, 193, 193);\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical:pressed {	\n"
"	background-color: rgb(165, 165, 165);\n"
"}\n"
""));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 745, 1022));
        scrollAreaWidgetContents_2->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
"	background-color: rgb(206, 206, 206);\n"
"    width: 14px;\n"
"    margin: 15px 0 15px 0;\n"
" }\n"
"\n"
"QScrollBar::handle:vertical {	\n"
"	background-color: rgb(206, 206, 206);\n"
"	min-height: 30px;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover{	\n"
"	background-color: rgb(193, 193, 193);\n"
"}\n"
"QScrollBar::handle:vertical:pressed {	\n"
"	background-color: rgb(165, 165, 165);\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"	background-color: rgb(206, 206, 206);\n"
"	height: 15px;\n"
"	subcontrol-position: top;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical:hover {\n"
"	background-color: rgb(193, 193, 193);\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical:pressed {	\n"
"	background-color: rgb(165, 165, 165);\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"	background-color: rgb(206, 206, 206);\n"
"	height: 15px;\n"
"	subcontrol-position: bottom;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:verti"
                        "cal:hover {\n"
"	background-color: rgb(193, 193, 193);\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical:pressed {	\n"
"	background-color: rgb(165, 165, 165);\n"
"}\n"
""));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(scrollAreaWidgetContents_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(500, 1000));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_2 = new QWidget(frame_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 711, 261));
        verticalLayout_friends = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_friends->setSpacing(6);
        verticalLayout_friends->setContentsMargins(11, 11, 11, 11);
        verticalLayout_friends->setObjectName(QString::fromUtf8("verticalLayout_friends"));
        verticalLayout_friends->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(frame_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        tabWidget->addTab(tab_2, QString());
        name = new QLabel(UserProfile);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(130, 260, 125, 21));
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
        username = new QLabel(UserProfile);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(130, 290, 126, 21));
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
        username->setFont(font);
        username->setStyleSheet(QString::fromUtf8("color: rgb(93, 109, 121);"));

        retranslateUi(UserProfile);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserProfile);
    } // setupUi

    void retranslateUi(QWidget *UserProfile)
    {
        UserProfile->setWindowTitle(QApplication::translate("UserProfile", "UserProfile", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        pushButton->setText(QApplication::translate("UserProfile", "Set up profile", nullptr));
        Friends->setText(QApplication::translate("UserProfile", "<html><head/><body><p><span style=\" font-size:10pt;\">Friends</span></p></body></html>", nullptr));
        label_no_of_friends->setText(QApplication::translate("UserProfile", "<html><head/><body><p><span style=\" font-size:10pt;\">TextLabel</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("UserProfile", "Tweets", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("UserProfile", "Friends", nullptr));
        name->setText(QApplication::translate("UserProfile", "<html><head/><body><p><span style=\" color:#3b3f43;\">Name</span></p></body></html>", nullptr));
        username->setText(QApplication::translate("UserProfile", "<html><head/><body><p><span style=\" color:#5d6d79;\">@username</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserProfile: public Ui_UserProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPROFILE_H
