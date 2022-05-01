/********************************************************************************
** Form generated from reading UI file 'commandeSuppr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDESUPPR_H
#define UI_COMMANDESUPPR_H

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

class Ui_commandesupprClass
{
public:
    QLabel *label;
    QPushButton *BtSuppr;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;

    void setupUi(QWidget *commandesupprClass)
    {
        if (commandesupprClass->objectName().isEmpty())
            commandesupprClass->setObjectName(QString::fromUtf8("commandesupprClass"));
        commandesupprClass->resize(256, 187);
        label = new QLabel(commandesupprClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 161, 31));
        BtSuppr = new QPushButton(commandesupprClass);
        BtSuppr->setObjectName(QString::fromUtf8("BtSuppr"));
        BtSuppr->setGeometry(QRect(90, 130, 81, 41));
        layoutWidget = new QWidget(commandesupprClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 43, 222, 71));
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


        retranslateUi(commandesupprClass);

        QMetaObject::connectSlotsByName(commandesupprClass);
    } // setupUi

    void retranslateUi(QWidget *commandesupprClass)
    {
        commandesupprClass->setWindowTitle(QCoreApplication::translate("commandesupprClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("commandesupprClass", "Suppresion d'une commande", nullptr));
        BtSuppr->setText(QCoreApplication::translate("commandesupprClass", "Supprimer", nullptr));
        label_2->setText(QCoreApplication::translate("commandesupprClass", "Id Commande", nullptr));
        checkBox->setText(QCoreApplication::translate("commandesupprClass", "Etes vous sur de supprimer la Commande", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commandesupprClass: public Ui_commandesupprClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDESUPPR_H
