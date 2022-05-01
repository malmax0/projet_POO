/********************************************************************************
** Form generated from reading UI file 'stockSuppr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCKSUPPR_H
#define UI_STOCKSUPPR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stocksupprClass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QLabel *label;
    QPushButton *BtStockSuppr;

    void setupUi(QWidget *stocksupprClass)
    {
        if (stocksupprClass->objectName().isEmpty())
            stocksupprClass->setObjectName(QString::fromUtf8("stocksupprClass"));
        stocksupprClass->resize(245, 174);
        layoutWidget = new QWidget(stocksupprClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 33, 222, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        label = new QLabel(stocksupprClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 0, 161, 31));
        BtStockSuppr = new QPushButton(stocksupprClass);
        BtStockSuppr->setObjectName(QString::fromUtf8("BtStockSuppr"));
        BtStockSuppr->setGeometry(QRect(80, 120, 81, 41));

        retranslateUi(stocksupprClass);

        QMetaObject::connectSlotsByName(stocksupprClass);
    } // setupUi

    void retranslateUi(QWidget *stocksupprClass)
    {
        stocksupprClass->setWindowTitle(QCoreApplication::translate("stocksupprClass", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("stocksupprClass", "reference du produit", nullptr));
        checkBox->setText(QCoreApplication::translate("stocksupprClass", "Etes vous sur de supprimer le produit", nullptr));
        label->setText(QCoreApplication::translate("stocksupprClass", "Suppresion du produit", nullptr));
        BtStockSuppr->setText(QCoreApplication::translate("stocksupprClass", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stocksupprClass: public Ui_stocksupprClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCKSUPPR_H
