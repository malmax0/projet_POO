/********************************************************************************
** Form generated from reading UI file 'clientAffi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTAFFI_H
#define UI_CLIENTAFFI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientaffiClass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *BtClientAffi;
    QTableView *tableView;
    QLabel *label;

    void setupUi(QWidget *clientaffiClass)
    {
        if (clientaffiClass->objectName().isEmpty())
            clientaffiClass->setObjectName(QString::fromUtf8("clientaffiClass"));
        clientaffiClass->resize(293, 510);
        layoutWidget = new QWidget(clientaffiClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 88, 181));
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

        BtClientAffi = new QPushButton(clientaffiClass);
        BtClientAffi->setObjectName(QString::fromUtf8("BtClientAffi"));
        BtClientAffi->setGeometry(QRect(80, 250, 111, 41));
        tableView = new QTableView(clientaffiClass);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 300, 256, 192));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        label = new QLabel(clientaffiClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 161, 31));

        retranslateUi(clientaffiClass);

        QMetaObject::connectSlotsByName(clientaffiClass);
    } // setupUi

    void retranslateUi(QWidget *clientaffiClass)
    {
        clientaffiClass->setWindowTitle(QCoreApplication::translate("clientaffiClass", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("clientaffiClass", "Id Client", nullptr));
        label_6->setText(QCoreApplication::translate("clientaffiClass", "Nom ", nullptr));
        label_4->setText(QCoreApplication::translate("clientaffiClass", "Prenom", nullptr));
        label_3->setText(QCoreApplication::translate("clientaffiClass", "Adresses", nullptr));
        BtClientAffi->setText(QCoreApplication::translate("clientaffiClass", "Afficher", nullptr));
        label->setText(QCoreApplication::translate("clientaffiClass", "afficher un client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientaffiClass: public Ui_clientaffiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTAFFI_H
