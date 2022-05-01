/********************************************************************************
** Form generated from reading UI file 'commandeaffi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDEAFFI_H
#define UI_COMMANDEAFFI_H

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

class Ui_commandeaffiClass
{
public:
    QLabel *label;
    QPushButton *BtCommandeAffi;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QTableView *tableView;

    void setupUi(QWidget *commandeaffiClass)
    {
        if (commandeaffiClass->objectName().isEmpty())
            commandeaffiClass->setObjectName(QString::fromUtf8("commandeaffiClass"));
        commandeaffiClass->resize(410, 340);
        label = new QLabel(commandeaffiClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 10, 161, 31));
        BtCommandeAffi = new QPushButton(commandeaffiClass);
        BtCommandeAffi->setObjectName(QString::fromUtf8("BtCommandeAffi"));
        BtCommandeAffi->setGeometry(QRect(140, 270, 111, 41));
        widget = new QWidget(commandeaffiClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(12, 50, 376, 194));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout);

        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(tableView);


        retranslateUi(commandeaffiClass);

        QMetaObject::connectSlotsByName(commandeaffiClass);
    } // setupUi

    void retranslateUi(QWidget *commandeaffiClass)
    {
        commandeaffiClass->setWindowTitle(QCoreApplication::translate("commandeaffiClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("commandeaffiClass", "affichage  des commande", nullptr));
        BtCommandeAffi->setText(QCoreApplication::translate("commandeaffiClass", "Afficher", nullptr));
        label_2->setText(QCoreApplication::translate("commandeaffiClass", "Id commande", nullptr));
        label_3->setText(QCoreApplication::translate("commandeaffiClass", "Moyen de paiement", nullptr));
        label_6->setText(QCoreApplication::translate("commandeaffiClass", "Date de paiement", nullptr));
        label_5->setText(QCoreApplication::translate("commandeaffiClass", "Pourcentage de remise", nullptr));
        label_4->setText(QCoreApplication::translate("commandeaffiClass", "Prix pay\303\251", nullptr));
        label_7->setText(QCoreApplication::translate("commandeaffiClass", "Adresse de livraisonn", nullptr));
        label_8->setText(QCoreApplication::translate("commandeaffiClass", "Adresse de facturation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commandeaffiClass: public Ui_commandeaffiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDEAFFI_H
