/********************************************************************************
** Form generated from reading UI file 'statCalcMois.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATCALCMOIS_H
#define UI_STATCALCMOIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statcalcmoisClass
{
public:
    QLabel *label;
    QPushButton *BtStatCalcMois;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDateEdit *dateEdit;

    void setupUi(QWidget *statcalcmoisClass)
    {
        if (statcalcmoisClass->objectName().isEmpty())
            statcalcmoisClass->setObjectName(QString::fromUtf8("statcalcmoisClass"));
        statcalcmoisClass->resize(372, 209);
        label = new QLabel(statcalcmoisClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 251, 31));
        BtStatCalcMois = new QPushButton(statcalcmoisClass);
        BtStatCalcMois->setObjectName(QString::fromUtf8("BtStatCalcMois"));
        BtStatCalcMois->setGeometry(QRect(120, 150, 121, 41));
        widget = new QWidget(statcalcmoisClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 60, 108, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout->addWidget(dateEdit);


        retranslateUi(statcalcmoisClass);

        QMetaObject::connectSlotsByName(statcalcmoisClass);
    } // setupUi

    void retranslateUi(QWidget *statcalcmoisClass)
    {
        statcalcmoisClass->setWindowTitle(QCoreApplication::translate("statcalcmoisClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("statcalcmoisClass", "Calculer le chiffre d\342\200\231affaire sur un mois en particulier", nullptr));
        BtStatCalcMois->setText(QCoreApplication::translate("statcalcmoisClass", "Calculer", nullptr));
        label_2->setText(QCoreApplication::translate("statcalcmoisClass", "Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statcalcmoisClass: public Ui_statcalcmoisClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATCALCMOIS_H
