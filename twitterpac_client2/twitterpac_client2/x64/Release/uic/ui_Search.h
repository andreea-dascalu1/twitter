/********************************************************************************
** Form generated from reading UI file 'Search.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QFrame *frame;
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *pushButton_search;
    QTabWidget *tabWidget;
    QWidget *tweets;
    QScrollArea *scrollArea_tweets;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_4;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_tweets;
    QWidget *people;
    QScrollArea *scrollArea_people;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_3;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_people;

    void setupUi(QWidget *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QString::fromUtf8("Search"));
        Search->resize(725, 591);
        frame = new QFrame(Search);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 641, 45));
        frame->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(70, 10, 398, 30));
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
        textEdit->setStyleSheet(QString::fromUtf8("font: 75 11pt \"MS Shell Dlg 2\";\n"
"border-color:rgb(255, 255, 255);\n"
"border-radius:10px;"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 31, 31));
        label->setPixmap(QPixmap(QString::fromUtf8("searchIcon.png")));
        pushButton_search = new QPushButton(frame);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));
        pushButton_search->setGeometry(QRect(600, 8, 30, 30));
        pushButton_search->setMaximumSize(QSize(30, 30));
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
        pushButton_search->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft Tai Le"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        pushButton_search->setFont(font);
        pushButton_search->setFocusPolicy(Qt::StrongFocus);
        pushButton_search->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_search{\n"
"background-color:rgb(29,155,240);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton#pushButton_search:hover {\n"
"    background-color: rgb(26,140,216);\n"
"    border-radius:15px;\n"
"}\n"
""));
        tabWidget = new QTabWidget(Search);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(6, 59, 643, 531));
        tabWidget->setStyleSheet(QString::fromUtf8("font: 75 11pt \"MS Shell Dlg 2\";"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(50, 50));
        tabWidget->setElideMode(Qt::ElideNone);
        tweets = new QWidget();
        tweets->setObjectName(QString::fromUtf8("tweets"));
        tweets->setStyleSheet(QString::fromUtf8("font: 75 11pt \"MS Shell Dlg 2\";"));
        scrollArea_tweets = new QScrollArea(tweets);
        scrollArea_tweets->setObjectName(QString::fromUtf8("scrollArea_tweets"));
        scrollArea_tweets->setGeometry(QRect(0, 0, 637, 501));
        scrollArea_tweets->setStyleSheet(QString::fromUtf8("  QScrollBar:vertical {\n"
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
"QScrollBar::add-line:vert"
                        "ical:hover {\n"
"	background-color: rgb(193, 193, 193);\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical:pressed {	\n"
"	background-color: rgb(165, 165, 165);\n"
"}\n"
""));
        scrollArea_tweets->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 621, 1018));
        scrollAreaWidgetContents_4->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
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
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        frame_4 = new QFrame(scrollAreaWidgetContents_4);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(500, 1000));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_4 = new QWidget(frame_4);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(0, 0, 601, 971));
        verticalLayout_tweets = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_tweets->setSpacing(6);
        verticalLayout_tweets->setContentsMargins(11, 11, 11, 11);
        verticalLayout_tweets->setObjectName(QString::fromUtf8("verticalLayout_tweets"));
        verticalLayout_tweets->setContentsMargins(0, 0, 0, 0);

        verticalLayout_5->addWidget(frame_4);

        scrollArea_tweets->setWidget(scrollAreaWidgetContents_4);
        tabWidget->addTab(tweets, QString());
        people = new QWidget();
        people->setObjectName(QString::fromUtf8("people"));
        scrollArea_people = new QScrollArea(people);
        scrollArea_people->setObjectName(QString::fromUtf8("scrollArea_people"));
        scrollArea_people->setGeometry(QRect(0, 0, 637, 501));
        scrollArea_people->setStyleSheet(QString::fromUtf8("  QScrollBar:vertical {\n"
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
"QScrollBar::add-line:vert"
                        "ical:hover {\n"
"	background-color: rgb(193, 193, 193);\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical:pressed {	\n"
"	background-color: rgb(165, 165, 165);\n"
"}\n"
""));
        scrollArea_people->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 621, 1018));
        scrollAreaWidgetContents_3->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
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
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame_3 = new QFrame(scrollAreaWidgetContents_3);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(500, 1000));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_3 = new QWidget(frame_3);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 601, 681));
        verticalLayout_people = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_people->setSpacing(6);
        verticalLayout_people->setContentsMargins(11, 11, 11, 11);
        verticalLayout_people->setObjectName(QString::fromUtf8("verticalLayout_people"));
        verticalLayout_people->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_people->setContentsMargins(10, 0, 0, 0);

        verticalLayout_4->addWidget(frame_3);

        scrollArea_people->setWidget(scrollAreaWidgetContents_3);
        tabWidget->addTab(people, QString());

        retranslateUi(Search);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QWidget *Search)
    {
        Search->setWindowTitle(QApplication::translate("Search", "Search", nullptr));
        textEdit->setPlaceholderText(QApplication::translate("Search", "Search Twitter", nullptr));
        label->setText(QString());
        pushButton_search->setText(QApplication::translate("Search", ">", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tweets), QApplication::translate("Search", "Tweets", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(people), QApplication::translate("Search", "People", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
