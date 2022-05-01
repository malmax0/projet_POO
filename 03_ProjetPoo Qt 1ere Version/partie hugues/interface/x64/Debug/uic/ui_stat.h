/********************************************************************************
** Form generated from reading UI file 'stat.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAT_H
#define UI_STAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statClass
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *BtStatVal;

    void setupUi(QWidget *statClass)
    {
        if (statClass->objectName().isEmpty())
            statClass->setObjectName(QString::fromUtf8("statClass"));
        statClass->resize(330, 168);
        label = new QLabel(statClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 201, 51));
        comboBox = new QComboBox(statClass);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(40, 60, 241, 31));
        BtStatVal = new QPushButton(statClass);
        BtStatVal->setObjectName(QString::fromUtf8("BtStatVal"));
        BtStatVal->setGeometry(QRect(90, 110, 121, 41));

        retranslateUi(statClass);

        QMetaObject::connectSlotsByName(statClass);
    } // setupUi

    void retranslateUi(QWidget *statClass)
    {
        statClass->setWindowTitle(QCoreApplication::translate("statClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("statClass", "Selectionner ce que vous voulez afficher", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("statClass", "Calculer le panier moyen (apr\303\250s remise)", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("statClass", "Calculer le chiffre d\342\200\231affaire sur un mois en particulier", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("statClass", "Identifier les produits sous le seuil de r\303\251approvisionnement", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("statClass", "Calculer le montant total des achats pour un client", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("statClass", "Identifier les 10 articles les plus vendus ", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("statClass", "Identifier les 10 articles les moins vendus", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("statClass", "Calculer la valeur commerciale du stock", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("statClass", "Calculer la valeur d\342\200\231achat du stock ", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("statClass", "Simuler des variations de valeurs commerciales pour en d\303\251duire la valeur du stock", nullptr));

        BtStatVal->setText(QCoreApplication::translate("statClass", "Valider", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statClass: public Ui_statClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_H
