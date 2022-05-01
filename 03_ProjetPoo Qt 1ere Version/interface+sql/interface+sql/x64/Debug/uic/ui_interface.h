/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interfaceClass
{
public:
    QPushButton *BtInterfaceVal;
    QPushButton *BtDeco;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *List1;

    void setupUi(QWidget *interfaceClass)
    {
        if (interfaceClass->objectName().isEmpty())
            interfaceClass->setObjectName(QString::fromUtf8("interfaceClass"));
        interfaceClass->resize(162, 175);
        BtInterfaceVal = new QPushButton(interfaceClass);
        BtInterfaceVal->setObjectName(QString::fromUtf8("BtInterfaceVal"));
        BtInterfaceVal->setGeometry(QRect(20, 80, 111, 31));
        BtDeco = new QPushButton(interfaceClass);
        BtDeco->setObjectName(QString::fromUtf8("BtDeco"));
        BtDeco->setGeometry(QRect(30, 130, 83, 23));
        layoutWidget = new QWidget(interfaceClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 141, 51));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        List1 = new QComboBox(layoutWidget);
        List1->addItem(QString());
        List1->addItem(QString());
        List1->addItem(QString());
        List1->addItem(QString());
        List1->addItem(QString());
        List1->setObjectName(QString::fromUtf8("List1"));

        verticalLayout->addWidget(List1);


        retranslateUi(interfaceClass);

        QMetaObject::connectSlotsByName(interfaceClass);
    } // setupUi

    void retranslateUi(QWidget *interfaceClass)
    {
        interfaceClass->setWindowTitle(QCoreApplication::translate("interfaceClass", "interface", nullptr));
        BtInterfaceVal->setText(QCoreApplication::translate("interfaceClass", "Valider", nullptr));
        BtDeco->setText(QCoreApplication::translate("interfaceClass", "Se deconnecter", nullptr));
        label->setText(QCoreApplication::translate("interfaceClass", "Choissiser", nullptr));
        List1->setItemText(0, QCoreApplication::translate("interfaceClass", "Commandes", nullptr));
        List1->setItemText(1, QCoreApplication::translate("interfaceClass", "Stock", nullptr));
        List1->setItemText(2, QCoreApplication::translate("interfaceClass", "Client", nullptr));
        List1->setItemText(3, QCoreApplication::translate("interfaceClass", "Personnel", nullptr));
        List1->setItemText(4, QCoreApplication::translate("interfaceClass", "Statistique", nullptr));

    } // retranslateUi

};

namespace Ui {
    class interfaceClass: public Ui_interfaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
