/********************************************************************************
** Form generated from reading UI file 'stockAffi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCKAFFI_H
#define UI_STOCKAFFI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stockaffiClass
{
public:
    QTableView *tableView;
    QPushButton *BtStockAffi;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_3;

    void setupUi(QWidget *stockaffiClass)
    {
        if (stockaffiClass->objectName().isEmpty())
            stockaffiClass->setObjectName(QString::fromUtf8("stockaffiClass"));
        stockaffiClass->resize(315, 511);
        tableView = new QTableView(stockaffiClass);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 300, 256, 192));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        BtStockAffi = new QPushButton(stockaffiClass);
        BtStockAffi->setObjectName(QString::fromUtf8("BtStockAffi"));
        BtStockAffi->setGeometry(QRect(90, 250, 111, 41));
        label = new QLabel(stockaffiClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 161, 31));
        layoutWidget = new QWidget(stockaffiClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 88, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        retranslateUi(stockaffiClass);

        QMetaObject::connectSlotsByName(stockaffiClass);
    } // setupUi

    void retranslateUi(QWidget *stockaffiClass)
    {
        stockaffiClass->setWindowTitle(QCoreApplication::translate("stockaffiClass", "Form", nullptr));
        BtStockAffi->setText(QCoreApplication::translate("stockaffiClass", "Afficher", nullptr));
        label->setText(QCoreApplication::translate("stockaffiClass", "afficher un produit", nullptr));
        label_2->setText(QCoreApplication::translate("stockaffiClass", "Id Produit", nullptr));
        label_6->setText(QCoreApplication::translate("stockaffiClass", "Nom de l'article", nullptr));
        label_4->setText(QCoreApplication::translate("stockaffiClass", "Prix HT", nullptr));
        label_3->setText(QCoreApplication::translate("stockaffiClass", "Quantit\303\251 en Stock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stockaffiClass: public Ui_stockaffiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCKAFFI_H
