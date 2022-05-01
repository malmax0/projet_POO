/********************************************************************************
** Form generated from reading UI file 'clientModifAdresse.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTMODIFADRESSE_H
#define UI_CLIENTMODIFADRESSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientajoutadressClass
{
public:
    QLabel *label;
    QLabel *label_4;
    QPushButton *BtClientAdresseVal;
    QPushButton *BtClientAdresseModif;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit;

    void setupUi(QWidget *clientajoutadressClass)
    {
        if (clientajoutadressClass->objectName().isEmpty())
            clientajoutadressClass->setObjectName(QString::fromUtf8("clientajoutadressClass"));
        clientajoutadressClass->resize(368, 242);
        label = new QLabel(clientajoutadressClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(22, 62, 16, 16));
        label_4 = new QLabel(clientajoutadressClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 20, 281, 41));
        BtClientAdresseVal = new QPushButton(clientajoutadressClass);
        BtClientAdresseVal->setObjectName(QString::fromUtf8("BtClientAdresseVal"));
        BtClientAdresseVal->setGeometry(QRect(50, 190, 91, 31));
        BtClientAdresseModif = new QPushButton(clientajoutadressClass);
        BtClientAdresseModif->setObjectName(QString::fromUtf8("BtClientAdresseModif"));
        BtClientAdresseModif->setGeometry(QRect(200, 190, 141, 31));
        widget = new QWidget(clientajoutadressClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 70, 182, 80));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(clientajoutadressClass);

        QMetaObject::connectSlotsByName(clientajoutadressClass);
    } // setupUi

    void retranslateUi(QWidget *clientajoutadressClass)
    {
        clientajoutadressClass->setWindowTitle(QCoreApplication::translate("clientajoutadressClass", "Form", nullptr));
        label->setText(QString());
        label_4->setText(QCoreApplication::translate("clientajoutadressClass", "Vous en train de ajouter une nouvelle adresse d'un client", nullptr));
        BtClientAdresseVal->setText(QCoreApplication::translate("clientajoutadressClass", "Valider", nullptr));
        BtClientAdresseModif->setText(QCoreApplication::translate("clientajoutadressClass", "Modifier une autre adresse", nullptr));
        label_2->setText(QCoreApplication::translate("clientajoutadressClass", "Adresse", nullptr));
        label_3->setText(QCoreApplication::translate("clientajoutadressClass", "CP", nullptr));
        label_5->setText(QCoreApplication::translate("clientajoutadressClass", "Ville", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientajoutadressClass: public Ui_clientajoutadressClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTMODIFADRESSE_H
