/********************************************************************************
** Form generated from reading UI file 'commandeAjout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDEAJOUT_H
#define UI_COMMANDEAJOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commandeajoutClass
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QPushButton *BtAjout;

    void setupUi(QWidget *commandeajoutClass)
    {
        if (commandeajoutClass->objectName().isEmpty())
            commandeajoutClass->setObjectName(QString::fromUtf8("commandeajoutClass"));
        commandeajoutClass->resize(316, 328);
        label = new QLabel(commandeajoutClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 161, 31));
        layoutWidget = new QWidget(commandeajoutClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 253, 192));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_3->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_7->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_5->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_4->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_6->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_6);

        BtAjout = new QPushButton(commandeajoutClass);
        BtAjout->setObjectName(QString::fromUtf8("BtAjout"));
        BtAjout->setGeometry(QRect(100, 260, 111, 41));

        retranslateUi(commandeajoutClass);

        QMetaObject::connectSlotsByName(commandeajoutClass);
    } // setupUi

    void retranslateUi(QWidget *commandeajoutClass)
    {
        commandeajoutClass->setWindowTitle(QCoreApplication::translate("commandeajoutClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("commandeajoutClass", "Ajout d'une nouvelle commande", nullptr));
        label_2->setText(QCoreApplication::translate("commandeajoutClass", "Id Client", nullptr));
        label_3->setText(QCoreApplication::translate("commandeajoutClass", "Moyen de paiement", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("commandeajoutClass", "Carte Bancaire", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("commandeajoutClass", "Esp\303\250ce", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("commandeajoutClass", "Ch\303\250que", nullptr));

        label_6->setText(QCoreApplication::translate("commandeajoutClass", "Date de paiement", nullptr));
        label_5->setText(QCoreApplication::translate("commandeajoutClass", "Pourcentage de remise", nullptr));
        label_4->setText(QCoreApplication::translate("commandeajoutClass", "Prix pay\303\251", nullptr));
        label_7->setText(QCoreApplication::translate("commandeajoutClass", "Adresse de livraisonn", nullptr));
        label_8->setText(QCoreApplication::translate("commandeajoutClass", "Adresse de facturation", nullptr));
        BtAjout->setText(QCoreApplication::translate("commandeajoutClass", "Ajouter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commandeajoutClass: public Ui_commandeajoutClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDEAJOUT_H
