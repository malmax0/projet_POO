/********************************************************************************
** Form generated from reading UI file 'stockAjout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCKAJOUT_H
#define UI_STOCKAJOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stockajoutClass
{
public:
    QLabel *label_4;
    QPushButton *BtStockVal;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *stockajoutClass)
    {
        if (stockajoutClass->objectName().isEmpty())
            stockajoutClass->setObjectName(QString::fromUtf8("stockajoutClass"));
        stockajoutClass->resize(253, 215);
        label_4 = new QLabel(stockajoutClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 20, 101, 31));
        BtStockVal = new QPushButton(stockajoutClass);
        BtStockVal->setObjectName(QString::fromUtf8("BtStockVal"));
        BtStockVal->setGeometry(QRect(70, 160, 101, 41));
        layoutWidget = new QWidget(stockajoutClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 234, 86));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(stockajoutClass);

        QMetaObject::connectSlotsByName(stockajoutClass);
    } // setupUi

    void retranslateUi(QWidget *stockajoutClass)
    {
        stockajoutClass->setWindowTitle(QCoreApplication::translate("stockajoutClass", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("stockajoutClass", "ajouter un stock", nullptr));
        BtStockVal->setText(QCoreApplication::translate("stockajoutClass", "valider", nullptr));
        label->setText(QCoreApplication::translate("stockajoutClass", "Nom de l\342\200\231article", nullptr));
        label_2->setText(QCoreApplication::translate("stockajoutClass", "Prix HT", nullptr));
        label_3->setText(QCoreApplication::translate("stockajoutClass", "Quantit\303\251 en stock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stockajoutClass: public Ui_stockajoutClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCKAJOUT_H
