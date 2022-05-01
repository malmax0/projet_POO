/********************************************************************************
** Form generated from reading UI file 'clientModifAdressSuppr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTMODIFADRESSSUPPR_H
#define UI_CLIENTMODIFADRESSSUPPR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientsuppradressClass
{
public:
    QLabel *label;
    QCheckBox *checkBox;
    QPushButton *BtAdresseSuppr;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *clientsuppradressClass)
    {
        if (clientsuppradressClass->objectName().isEmpty())
            clientsuppradressClass->setObjectName(QString::fromUtf8("clientsuppradressClass"));
        clientsuppradressClass->resize(246, 207);
        label = new QLabel(clientsuppradressClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 131, 20));
        checkBox = new QCheckBox(clientsuppradressClass);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(30, 100, 191, 17));
        BtAdresseSuppr = new QPushButton(clientsuppradressClass);
        BtAdresseSuppr->setObjectName(QString::fromUtf8("BtAdresseSuppr"));
        BtAdresseSuppr->setGeometry(QRect(70, 140, 101, 41));
        layoutWidget = new QWidget(clientsuppradressClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 60, 194, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);


        retranslateUi(clientsuppradressClass);

        QMetaObject::connectSlotsByName(clientsuppradressClass);
    } // setupUi

    void retranslateUi(QWidget *clientsuppradressClass)
    {
        clientsuppradressClass->setWindowTitle(QCoreApplication::translate("clientsuppradressClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("clientsuppradressClass", "Supprimer une adresse", nullptr));
        checkBox->setText(QCoreApplication::translate("clientsuppradressClass", "Voulez vous vraiment la supprimer", nullptr));
        BtAdresseSuppr->setText(QCoreApplication::translate("clientsuppradressClass", "Valider", nullptr));
        label_2->setText(QCoreApplication::translate("clientsuppradressClass", "ID Adresse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientsuppradressClass: public Ui_clientsuppradressClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTMODIFADRESSSUPPR_H
