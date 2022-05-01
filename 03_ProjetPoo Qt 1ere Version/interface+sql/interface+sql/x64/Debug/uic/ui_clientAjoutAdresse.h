/********************************************************************************
** Form generated from reading UI file 'clientAjoutAdresse.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTAJOUTADRESSE_H
#define UI_CLIENTAJOUTADRESSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientajoutadresseClass
{
public:
    QLabel *label_3;
    QPushButton *BtClientAjoutAdress;
    QPushButton *BtAjoutNewAdress;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *clientajoutadresseClass)
    {
        if (clientajoutadresseClass->objectName().isEmpty())
            clientajoutadresseClass->setObjectName(QString::fromUtf8("clientajoutadresseClass"));
        clientajoutadresseClass->resize(340, 256);
        label_3 = new QLabel(clientajoutadresseClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 30, 311, 16));
        BtClientAjoutAdress = new QPushButton(clientajoutadresseClass);
        BtClientAjoutAdress->setObjectName(QString::fromUtf8("BtClientAjoutAdress"));
        BtClientAjoutAdress->setGeometry(QRect(30, 190, 101, 41));
        BtAjoutNewAdress = new QPushButton(clientajoutadresseClass);
        BtAjoutNewAdress->setObjectName(QString::fromUtf8("BtAjoutNewAdress"));
        BtAjoutNewAdress->setGeometry(QRect(170, 190, 151, 41));
        layoutWidget = new QWidget(clientajoutadresseClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 60, 231, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(clientajoutadresseClass);

        QMetaObject::connectSlotsByName(clientajoutadresseClass);
    } // setupUi

    void retranslateUi(QWidget *clientajoutadresseClass)
    {
        clientajoutadresseClass->setWindowTitle(QCoreApplication::translate("clientajoutadresseClass", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("clientajoutadresseClass", "Vous etes en train d'ajouter une nouvelle adresse d'un client", nullptr));
        BtClientAjoutAdress->setText(QCoreApplication::translate("clientajoutadresseClass", "Valider", nullptr));
        BtAjoutNewAdress->setText(QCoreApplication::translate("clientajoutadresseClass", "Ajouter une autre adresse", nullptr));
        label_6->setText(QCoreApplication::translate("clientajoutadresseClass", "Adresse", nullptr));
        label_2->setText(QCoreApplication::translate("clientajoutadresseClass", "CP", nullptr));
        label->setText(QCoreApplication::translate("clientajoutadresseClass", "Ville", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientajoutadresseClass: public Ui_clientajoutadresseClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTAJOUTADRESSE_H
