/********************************************************************************
** Form generated from reading UI file 'clientModif.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTMODIF_H
#define UI_CLIENTMODIF_H

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

class Ui_clientmodifClass
{
public:
    QLabel *label;
    QPushButton *BtClientModifVal;
    QPushButton *BtClientAjoutAdresse;
    QPushButton *BtClientSupprAdresse;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QDateEdit *dateEdit;

    void setupUi(QWidget *clientmodifClass)
    {
        if (clientmodifClass->objectName().isEmpty())
            clientmodifClass->setObjectName(QString::fromUtf8("clientmodifClass"));
        clientmodifClass->resize(401, 241);
        label = new QLabel(clientmodifClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 101, 20));
        BtClientModifVal = new QPushButton(clientmodifClass);
        BtClientModifVal->setObjectName(QString::fromUtf8("BtClientModifVal"));
        BtClientModifVal->setGeometry(QRect(16, 180, 101, 41));
        BtClientAjoutAdresse = new QPushButton(clientmodifClass);
        BtClientAjoutAdresse->setObjectName(QString::fromUtf8("BtClientAjoutAdresse"));
        BtClientAjoutAdresse->setGeometry(QRect(140, 180, 111, 41));
        BtClientSupprAdresse = new QPushButton(clientmodifClass);
        BtClientSupprAdresse->setObjectName(QString::fromUtf8("BtClientSupprAdresse"));
        BtClientSupprAdresse->setGeometry(QRect(270, 180, 121, 41));
        widget = new QWidget(clientmodifClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(105, 51, 184, 108));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_4->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(clientmodifClass);

        QMetaObject::connectSlotsByName(clientmodifClass);
    } // setupUi

    void retranslateUi(QWidget *clientmodifClass)
    {
        clientmodifClass->setWindowTitle(QCoreApplication::translate("clientmodifClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("clientmodifClass", "Modifier un client", nullptr));
        BtClientModifVal->setText(QCoreApplication::translate("clientmodifClass", "Valider", nullptr));
        BtClientAjoutAdresse->setText(QCoreApplication::translate("clientmodifClass", "Ajouter une adresse", nullptr));
        BtClientSupprAdresse->setText(QCoreApplication::translate("clientmodifClass", "Supprimer une adresse", nullptr));
        label_3->setText(QCoreApplication::translate("clientmodifClass", "ID Client", nullptr));
        label_4->setText(QCoreApplication::translate("clientmodifClass", "Nom", nullptr));
        label_2->setText(QCoreApplication::translate("clientmodifClass", "Prenom", nullptr));
        label_5->setText(QCoreApplication::translate("clientmodifClass", "Date de naissance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientmodifClass: public Ui_clientmodifClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTMODIF_H
