/********************************************************************************
** Form generated from reading UI file 'SeeComments.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEECOMMENTS_H
#define UI_SEECOMMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeeComments
{
public:
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *pushButton_Send;

    void setupUi(QWidget *SeeComments)
    {
        if (SeeComments->objectName().isEmpty())
            SeeComments->setObjectName(QString::fromUtf8("SeeComments"));
        SeeComments->resize(611, 329);
        scrollArea_2 = new QScrollArea(SeeComments);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(10, 10, 591, 311));
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
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 575, 1018));
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
        verticalLayoutWidget_2->setGeometry(QRect(0, 70, 551, 341));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 55, 51));
        label->setPixmap(QPixmap(QString::fromUtf8("default_profile_50X50.png")));
        textEdit = new QTextEdit(frame_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(70, 20, 401, 31));
        textEdit->setStyleSheet(QString::fromUtf8(""));
        pushButton_Send = new QPushButton(frame_2);
        pushButton_Send->setObjectName(QString::fromUtf8("pushButton_Send"));
        pushButton_Send->setGeometry(QRect(480, 20, 71, 31));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        pushButton_Send->setFont(font);
        pushButton_Send->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_Send{\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(29,155,240);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton#pushButton_Send:hover {\n"
"	color: rgb(255, 255, 255);\n"
"    background-color: rgb(26,140,216);\n"
"    border-radius:15px;\n"
"}"));

        verticalLayout_2->addWidget(frame_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        retranslateUi(SeeComments);

        QMetaObject::connectSlotsByName(SeeComments);
    } // setupUi

    void retranslateUi(QWidget *SeeComments)
    {
        SeeComments->setWindowTitle(QApplication::translate("SeeComments", "SeeComments", nullptr));
        label->setText(QString());
        textEdit->setPlaceholderText(QApplication::translate("SeeComments", "Leave a comment.", nullptr));
        pushButton_Send->setText(QApplication::translate("SeeComments", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeeComments: public Ui_SeeComments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEECOMMENTS_H
