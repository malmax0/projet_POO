/********************************************************************************
** Form generated from reading UI file 'commandeModif.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDEMODIF_H
#define UI_COMMANDEMODIF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commandemodifClass
{
public:
    QPushButton *BtModif;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *commandemodifClass)
    {
        if (commandemodifClass->objectName().isEmpty())
            commandemodifClass->setObjectName(QString::fromUtf8("commandemodifClass"));
        commandemodifClass->resize(245, 157);
        BtModif = new QPushButton(commandemodifClass);
        BtModif->setObjectName(QString::fromUtf8("BtModif"));
        BtModif->setGeometry(QRect(70, 100, 81, 41));
        label = new QLabel(commandemodifClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 161, 31));
        layoutWidget = new QWidget(commandemodifClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(22, 42, 209, 52));
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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(commandemodifClass);

        QMetaObject::connectSlotsByName(commandemodifClass);
    } // setupUi

    void retranslateUi(QWidget *commandemodifClass)
    {
        commandemodifClass->setWindowTitle(QCoreApplication::translate("commandemodifClass", "Form", nullptr));
        BtModif->setText(QCoreApplication::translate("commandemodifClass", "Modifier", nullptr));
        label->setText(QCoreApplication::translate("commandemodifClass", "Mofication d'une commande", nullptr));
        label_2->setText(QCoreApplication::translate("commandemodifClass", "Id Commande", nullptr));
        label_4->setText(QCoreApplication::translate("commandemodifClass", "Prix pay\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commandemodifClass: public Ui_commandemodifClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDEMODIF_H
