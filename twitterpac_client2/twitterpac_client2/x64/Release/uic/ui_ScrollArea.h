/********************************************************************************
** Form generated from reading UI file 'ScrollArea.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCROLLAREA_H
#define UI_SCROLLAREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScrollArea
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *ScrollArea)
    {
        if (ScrollArea->objectName().isEmpty())
            ScrollArea->setObjectName(QString::fromUtf8("ScrollArea"));
        ScrollArea->resize(684, 889);
        scrollArea = new QScrollArea(ScrollArea);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 671, 521));
        scrollArea->setStyleSheet(QString::fromUtf8("  QScrollBar:vertical {\n"
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
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 655, 1018));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
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
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(500, 1000));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_2 = new QWidget(frame_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 631, 361));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(frame_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(ScrollArea);

        QMetaObject::connectSlotsByName(ScrollArea);
    } // setupUi

    void retranslateUi(QWidget *ScrollArea)
    {
        ScrollArea->setWindowTitle(QApplication::translate("ScrollArea", "ScrollArea", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScrollArea: public Ui_ScrollArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCROLLAREA_H
