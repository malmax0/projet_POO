/********************************************************************************
** Form generated from reading UI file 'cscp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSCP_H
#define UI_CSCP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choixcscpClass
{
public:
    QPushButton *BtCscpVal;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *ListAct;

    void setupUi(QDialog *choixcscpClass)
    {
        if (choixcscpClass->objectName().isEmpty())
            choixcscpClass->setObjectName(QString::fromUtf8("choixcscpClass"));
        choixcscpClass->resize(132, 160);
        BtCscpVal = new QPushButton(choixcscpClass);
        BtCscpVal->setObjectName(QString::fromUtf8("BtCscpVal"));
        BtCscpVal->setGeometry(QRect(10, 90, 111, 41));
        layoutWidget = new QWidget(choixcscpClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 11, 112, 41));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        ListAct = new QComboBox(layoutWidget);
        ListAct->addItem(QString());
        ListAct->addItem(QString());
        ListAct->addItem(QString());
        ListAct->addItem(QString());
        ListAct->setObjectName(QString::fromUtf8("ListAct"));
        ListAct->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(ListAct);


        retranslateUi(choixcscpClass);

        QMetaObject::connectSlotsByName(choixcscpClass);
    } // setupUi

    void retranslateUi(QDialog *choixcscpClass)
    {
        choixcscpClass->setWindowTitle(QCoreApplication::translate("choixcscpClass", "Dialog", nullptr));
        BtCscpVal->setText(QCoreApplication::translate("choixcscpClass", "Valider", nullptr));
        label_2->setText(QCoreApplication::translate("choixcscpClass", "Choissisez votre action", nullptr));
        ListAct->setItemText(0, QCoreApplication::translate("choixcscpClass", "Ajouter", nullptr));
        ListAct->setItemText(1, QCoreApplication::translate("choixcscpClass", "Modifier", nullptr));
        ListAct->setItemText(2, QCoreApplication::translate("choixcscpClass", "Afficher", nullptr));
        ListAct->setItemText(3, QCoreApplication::translate("choixcscpClass", "Supprimer", nullptr));

    } // retranslateUi

};

namespace Ui {
    class choixcscpClass: public Ui_choixcscpClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSCP_H
