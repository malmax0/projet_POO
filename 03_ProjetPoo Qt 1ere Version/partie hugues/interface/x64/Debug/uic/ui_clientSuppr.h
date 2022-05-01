/********************************************************************************
** Form generated from reading UI file 'clientSuppr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTSUPPR_H
#define UI_CLIENTSUPPR_H

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

class Ui_clientsupprClass
{
public:
    QLabel *label;
    QPushButton *BtClientSuppr;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;

    void setupUi(QWidget *clientsupprClass)
    {
        if (clientsupprClass->objectName().isEmpty())
            clientsupprClass->setObjectName(QString::fromUtf8("clientsupprClass"));
        clientsupprClass->resize(245, 184);
        label = new QLabel(clientsupprClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 111, 31));
        BtClientSuppr = new QPushButton(clientsupprClass);
        BtClientSuppr->setObjectName(QString::fromUtf8("BtClientSuppr"));
        BtClientSuppr->setGeometry(QRect(80, 127, 81, 41));
        layoutWidget = new QWidget(clientsupprClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 222, 71));
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


        retranslateUi(clientsupprClass);

        QMetaObject::connectSlotsByName(clientsupprClass);
    } // setupUi

    void retranslateUi(QWidget *clientsupprClass)
    {
        clientsupprClass->setWindowTitle(QCoreApplication::translate("clientsupprClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("clientsupprClass", "Suppresion d'un client", nullptr));
        BtClientSuppr->setText(QCoreApplication::translate("clientsupprClass", "Supprimer", nullptr));
        label_2->setText(QCoreApplication::translate("clientsupprClass", "Id Client", nullptr));
        checkBox->setText(QCoreApplication::translate("clientsupprClass", "Etes vous sur de supprimer le client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientsupprClass: public Ui_clientsupprClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTSUPPR_H
