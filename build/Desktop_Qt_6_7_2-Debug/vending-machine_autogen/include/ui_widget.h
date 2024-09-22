/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *pbReset;
    QPushButton *pb10;
    QPushButton *pb50;
    QPushButton *pb100;
    QPushButton *pb500;
    QPushButton *pbWater;
    QPushButton *pbCoke;
    QPushButton *pbTea;
    QPushButton *pbCoffe;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(437, 339);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(30, 20, 251, 101));
        pbReset = new QPushButton(Widget);
        pbReset->setObjectName("pbReset");
        pbReset->setGeometry(QRect(310, 30, 81, 81));
        pb10 = new QPushButton(Widget);
        pb10->setObjectName("pb10");
        pb10->setGeometry(QRect(40, 140, 71, 71));
        pb50 = new QPushButton(Widget);
        pb50->setObjectName("pb50");
        pb50->setGeometry(QRect(130, 140, 71, 71));
        pb100 = new QPushButton(Widget);
        pb100->setObjectName("pb100");
        pb100->setGeometry(QRect(220, 140, 71, 71));
        pb500 = new QPushButton(Widget);
        pb500->setObjectName("pb500");
        pb500->setGeometry(QRect(310, 140, 71, 71));
        pbWater = new QPushButton(Widget);
        pbWater->setObjectName("pbWater");
        pbWater->setGeometry(QRect(40, 230, 71, 71));
        pbCoke = new QPushButton(Widget);
        pbCoke->setObjectName("pbCoke");
        pbCoke->setGeometry(QRect(130, 230, 71, 71));
        pbTea = new QPushButton(Widget);
        pbTea->setObjectName("pbTea");
        pbTea->setGeometry(QRect(220, 230, 71, 71));
        pbCoffe = new QPushButton(Widget);
        pbCoffe->setObjectName("pbCoffe");
        pbCoffe->setGeometry(QRect(310, 230, 71, 71));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pbReset->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
        pb10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        pb50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        pb100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pb500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        pbWater->setText(QCoreApplication::translate("Widget", "Water", nullptr));
        pbCoke->setText(QCoreApplication::translate("Widget", "Coke", nullptr));
        pbTea->setText(QCoreApplication::translate("Widget", "Tea", nullptr));
        pbCoffe->setText(QCoreApplication::translate("Widget", "Coffe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
