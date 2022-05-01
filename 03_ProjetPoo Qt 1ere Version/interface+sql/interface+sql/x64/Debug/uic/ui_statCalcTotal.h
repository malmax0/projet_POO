/********************************************************************************
** Form generated from reading UI file 'statCalcTotal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATCALCTOTAL_H
#define UI_STATCALCTOTAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statcalctotalClass
{
public:
    QPushButton *BtStatCalcTotal;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *statcalctotalClass)
    {
        if (statcalctotalClass->objectName().isEmpty())
            statcalctotalClass->setObjectName(QString::fromUtf8("statcalctotalClass"));
        statcalctotalClass->resize(305, 211);
        BtStatCalcTotal = new QPushButton(statcalctotalClass);
        BtStatCalcTotal->setObjectName(QString::fromUtf8("BtStatCalcTotal"));
        BtStatCalcTotal->setGeometry(QRect(80, 150, 121, 41));
        label = new QLabel(statcalctotalClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 251, 31));
        widget = new QWidget(statcalctotalClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 60, 188, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(statcalctotalClass);

        QMetaObject::connectSlotsByName(statcalctotalClass);
    } // setupUi

    void retranslateUi(QWidget *statcalctotalClass)
    {
        statcalctotalClass->setWindowTitle(QCoreApplication::translate("statcalctotalClass", "Form", nullptr));
        BtStatCalcTotal->setText(QCoreApplication::translate("statcalctotalClass", "Calculer", nullptr));
        label->setText(QCoreApplication::translate("statcalctotalClass", "Calculer le montant total des achats pour un client", nullptr));
        label_2->setText(QCoreApplication::translate("statcalctotalClass", "ID Client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statcalctotalClass: public Ui_statcalctotalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATCALCTOTAL_H
