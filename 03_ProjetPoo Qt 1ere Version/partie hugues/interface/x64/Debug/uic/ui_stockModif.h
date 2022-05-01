/********************************************************************************
** Form generated from reading UI file 'stockModif.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCKMODIF_H
#define UI_STOCKMODIF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stockmodifClass
{
public:
    QLabel *label_5;
    QPushButton *BtStockModif;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *stockmodifClass)
    {
        if (stockmodifClass->objectName().isEmpty())
            stockmodifClass->setObjectName(QString::fromUtf8("stockmodifClass"));
        stockmodifClass->resize(231, 235);
        label_5 = new QLabel(stockmodifClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 20, 101, 21));
        BtStockModif = new QPushButton(stockmodifClass);
        BtStockModif->setObjectName(QString::fromUtf8("BtStockModif"));
        BtStockModif->setGeometry(QRect(50, 180, 121, 41));
        widget = new QWidget(stockmodifClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 50, 190, 114));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_4->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(stockmodifClass);

        QMetaObject::connectSlotsByName(stockmodifClass);
    } // setupUi

    void retranslateUi(QWidget *stockmodifClass)
    {
        stockmodifClass->setWindowTitle(QCoreApplication::translate("stockmodifClass", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("stockmodifClass", "modifier un stock", nullptr));
        BtStockModif->setText(QCoreApplication::translate("stockmodifClass", "modifier", nullptr));
        label->setText(QCoreApplication::translate("stockmodifClass", "Nom de l\342\200\231article", nullptr));
        label_2->setText(QCoreApplication::translate("stockmodifClass", "Prix HT", nullptr));
        label_3->setText(QCoreApplication::translate("stockmodifClass", "Quantit\303\251 en stock", nullptr));
        label_4->setText(QCoreApplication::translate("stockmodifClass", "TVA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stockmodifClass: public Ui_stockmodifClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCKMODIF_H
