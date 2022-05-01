/********************************************************************************
** Form generated from reading UI file 'statAffi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATAFFI_H
#define UI_STATAFFI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stataffiClass
{
public:
    QLabel *label;
    QPushButton *BtStatAffi;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTableView *tableView;

    void setupUi(QWidget *stataffiClass)
    {
        if (stataffiClass->objectName().isEmpty())
            stataffiClass->setObjectName(QString::fromUtf8("stataffiClass"));
        stataffiClass->resize(507, 354);
        label = new QLabel(stataffiClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 30, 111, 21));
        BtStatAffi = new QPushButton(stataffiClass);
        BtStatAffi->setObjectName(QString::fromUtf8("BtStatAffi"));
        BtStatAffi->setGeometry(QRect(200, 290, 131, 41));
        widget = new QWidget(stataffiClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 70, 461, 194));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout);

        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout->addWidget(tableView);


        retranslateUi(stataffiClass);

        QMetaObject::connectSlotsByName(stataffiClass);
    } // setupUi

    void retranslateUi(QWidget *stataffiClass)
    {
        stataffiClass->setWindowTitle(QCoreApplication::translate("stataffiClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("stataffiClass", "Statistique en Tableau", nullptr));
        BtStatAffi->setText(QCoreApplication::translate("stataffiClass", "Afficher", nullptr));
        label_7->setText(QCoreApplication::translate("stataffiClass", "Calculer le panier moyen (apr\303\250s remise)", nullptr));
        label_2->setText(QCoreApplication::translate("stataffiClass", "Identifier les produits sous le seuil de r\303\251approvisionnement", nullptr));
        label_3->setText(QCoreApplication::translate("stataffiClass", "Identifier les 10 articles les plus vendus ", nullptr));
        label_4->setText(QCoreApplication::translate("stataffiClass", "Identifier les 10 articles les moins vendus", nullptr));
        label_5->setText(QCoreApplication::translate("stataffiClass", "Calculer la valeur commerciale du stock", nullptr));
        label_6->setText(QCoreApplication::translate("stataffiClass", "Calculer la valeur d\342\200\231achat du stock ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stataffiClass: public Ui_stataffiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATAFFI_H
