/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLCDNumber *lcdNumber;
    QPushButton *pb10;
    QPushButton *pb50;
    QPushButton *pb100;
    QPushButton *pb500;
    QPushButton *a1;
    QPushButton *a2;
    QPushButton *a3;
    QPushButton *a4;
    QPushButton *refund;
    QLCDNumber *w10l;
    QLabel *w10;
    QLabel *w50;
    QLabel *w100;
    QLabel *w500;
    QLCDNumber *w50l;
    QLCDNumber *w100l;
    QLCDNumber *w500l;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 67, 17));
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(30, 30, 191, 41));
        pb10 = new QPushButton(Widget);
        pb10->setObjectName(QString::fromUtf8("pb10"));
        pb10->setGeometry(QRect(30, 80, 89, 25));
        pb50 = new QPushButton(Widget);
        pb50->setObjectName(QString::fromUtf8("pb50"));
        pb50->setGeometry(QRect(130, 80, 89, 25));
        pb100 = new QPushButton(Widget);
        pb100->setObjectName(QString::fromUtf8("pb100"));
        pb100->setGeometry(QRect(30, 110, 89, 25));
        pb500 = new QPushButton(Widget);
        pb500->setObjectName(QString::fromUtf8("pb500"));
        pb500->setGeometry(QRect(130, 110, 89, 25));
        a1 = new QPushButton(Widget);
        a1->setObjectName(QString::fromUtf8("a1"));
        a1->setGeometry(QRect(280, 30, 89, 25));
        a2 = new QPushButton(Widget);
        a2->setObjectName(QString::fromUtf8("a2"));
        a2->setGeometry(QRect(280, 70, 89, 21));
        a3 = new QPushButton(Widget);
        a3->setObjectName(QString::fromUtf8("a3"));
        a3->setGeometry(QRect(280, 110, 89, 25));
        a4 = new QPushButton(Widget);
        a4->setObjectName(QString::fromUtf8("a4"));
        a4->setGeometry(QRect(280, 150, 89, 25));
        refund = new QPushButton(Widget);
        refund->setObjectName(QString::fromUtf8("refund"));
        refund->setGeometry(QRect(20, 210, 89, 25));
        w10l = new QLCDNumber(Widget);
        w10l->setObjectName(QString::fromUtf8("w10l"));
        w10l->setGeometry(QRect(200, 160, 64, 23));
        w10 = new QLabel(Widget);
        w10->setObjectName(QString::fromUtf8("w10"));
        w10->setGeometry(QRect(120, 160, 67, 17));
        w50 = new QLabel(Widget);
        w50->setObjectName(QString::fromUtf8("w50"));
        w50->setGeometry(QRect(120, 190, 67, 17));
        w100 = new QLabel(Widget);
        w100->setObjectName(QString::fromUtf8("w100"));
        w100->setGeometry(QRect(120, 230, 67, 17));
        w500 = new QLabel(Widget);
        w500->setObjectName(QString::fromUtf8("w500"));
        w500->setGeometry(QRect(120, 270, 67, 17));
        w50l = new QLCDNumber(Widget);
        w50l->setObjectName(QString::fromUtf8("w50l"));
        w50l->setGeometry(QRect(200, 190, 64, 23));
        w100l = new QLCDNumber(Widget);
        w100l->setObjectName(QString::fromUtf8("w100l"));
        w100l->setGeometry(QRect(200, 230, 64, 23));
        w500l = new QLCDNumber(Widget);
        w500l->setObjectName(QString::fromUtf8("w500l"));
        w500l->setGeometry(QRect(200, 270, 64, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "gilgil", nullptr));
        pb10->setText(QCoreApplication::translate("Widget", "10w", nullptr));
        pb50->setText(QCoreApplication::translate("Widget", "50w", nullptr));
        pb100->setText(QCoreApplication::translate("Widget", "100w", nullptr));
        pb500->setText(QCoreApplication::translate("Widget", "500w", nullptr));
        a1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        a2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        a3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        a4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        refund->setText(QCoreApplication::translate("Widget", "refund", nullptr));
        w10->setText(QCoreApplication::translate("Widget", "10w n", nullptr));
        w50->setText(QCoreApplication::translate("Widget", "50w n", nullptr));
        w100->setText(QCoreApplication::translate("Widget", "100w n", nullptr));
        w500->setText(QCoreApplication::translate("Widget", "500w n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
