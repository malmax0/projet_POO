/********************************************************************************
** Form generated from reading UI file 'domainesPP.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOMAINESPP_H
#define UI_DOMAINESPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_domainesppClass
{
public:
    QPushButton *BtDeco;
    QPushButton *BtDomainesppVal;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *List1;

    void setupUi(QWidget *domainesppClass)
    {
        if (domainesppClass->objectName().isEmpty())
            domainesppClass->setObjectName(QString::fromUtf8("domainesppClass"));
        domainesppClass->resize(178, 182);
        BtDeco = new QPushButton(domainesppClass);
        BtDeco->setObjectName(QString::fromUtf8("BtDeco"));
        BtDeco->setGeometry(QRect(40, 130, 83, 23));
        BtDomainesppVal = new QPushButton(domainesppClass);
        BtDomainesppVal->setObjectName(QString::fromUtf8("BtDomainesppVal"));
        BtDomainesppVal->setGeometry(QRect(30, 80, 111, 31));
        layoutWidget = new QWidget(domainesppClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(19, 9, 141, 51));
        verticalLayout = new QVBoxLayout(layoutWidget);
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


        retranslateUi(domainesppClass);

        QMetaObject::connectSlotsByName(domainesppClass);
    } // setupUi

    void retranslateUi(QWidget *domainesppClass)
    {
        domainesppClass->setWindowTitle(QCoreApplication::translate("domainesppClass", "Form", nullptr));
        BtDeco->setText(QCoreApplication::translate("domainesppClass", "Se deconnecter", nullptr));
        BtDomainesppVal->setText(QCoreApplication::translate("domainesppClass", "Valider", nullptr));
        label->setText(QCoreApplication::translate("domainesppClass", "Choissiser", nullptr));
        List1->setItemText(0, QCoreApplication::translate("domainesppClass", "Commandes", nullptr));
        List1->setItemText(1, QCoreApplication::translate("domainesppClass", "Stock", nullptr));
        List1->setItemText(2, QCoreApplication::translate("domainesppClass", "Client", nullptr));
        List1->setItemText(3, QCoreApplication::translate("domainesppClass", "Personnel", nullptr));
        List1->setItemText(4, QCoreApplication::translate("domainesppClass", "Statistique", nullptr));

    } // retranslateUi

};

namespace Ui {
    class domainesppClass: public Ui_domainesppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOMAINESPP_H
