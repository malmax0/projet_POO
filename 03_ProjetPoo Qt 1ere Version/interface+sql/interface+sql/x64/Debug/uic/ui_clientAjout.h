/********************************************************************************
** Form generated from reading UI file 'clientAjout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTAJOUT_H
#define UI_CLIENTAJOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientajoutClass
{
public:
    QLabel *label;
    QPushButton *BtClientAjout;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QPushButton *BtClientAjout_adresse;

    void setupUi(QWidget *clientajoutClass)
    {
        if (clientajoutClass->objectName().isEmpty())
            clientajoutClass->setObjectName(QString::fromUtf8("clientajoutClass"));
        clientajoutClass->resize(301, 252);
        label = new QLabel(clientajoutClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(69, 15, 91, 21));
        BtClientAjout = new QPushButton(clientajoutClass);
        BtClientAjout->setObjectName(QString::fromUtf8("BtClientAjout"));
        BtClientAjout->setGeometry(QRect(160, 180, 131, 31));
        layoutWidget = new QWidget(clientajoutClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 179, 80));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_3->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_4->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout);

        BtClientAjout_adresse = new QPushButton(clientajoutClass);
        BtClientAjout_adresse->setObjectName(QString::fromUtf8("BtClientAjout_adresse"));
        BtClientAjout_adresse->setGeometry(QRect(10, 180, 131, 31));

        retranslateUi(clientajoutClass);

        QMetaObject::connectSlotsByName(clientajoutClass);
    } // setupUi

    void retranslateUi(QWidget *clientajoutClass)
    {
        clientajoutClass->setWindowTitle(QCoreApplication::translate("clientajoutClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("clientajoutClass", "Ajouter un client", nullptr));
        BtClientAjout->setText(QCoreApplication::translate("clientajoutClass", "Valider", nullptr));
        label_3->setText(QCoreApplication::translate("clientajoutClass", "Nom", nullptr));
        label_4->setText(QCoreApplication::translate("clientajoutClass", "Prenom", nullptr));
        label_5->setText(QCoreApplication::translate("clientajoutClass", "Date de naissance", nullptr));
        BtClientAjout_adresse->setText(QCoreApplication::translate("clientajoutClass", "ajouter une adresse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientajoutClass: public Ui_clientajoutClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTAJOUT_H
