/********************************************************************************
** Form generated from reading UI file 'statChoix.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATCHOIX_H
#define UI_STATCHOIX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statchoixClass
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *BtStatVal;

    void setupUi(QWidget *statchoixClass)
    {
        if (statchoixClass->objectName().isEmpty())
            statchoixClass->setObjectName(QString::fromUtf8("statchoixClass"));
        statchoixClass->resize(443, 155);
        label = new QLabel(statchoixClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 0, 201, 51));
        comboBox = new QComboBox(statchoixClass);
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
        comboBox->setGeometry(QRect(10, 50, 421, 31));
        BtStatVal = new QPushButton(statchoixClass);
        BtStatVal->setObjectName(QString::fromUtf8("BtStatVal"));
        BtStatVal->setGeometry(QRect(160, 100, 121, 41));

        retranslateUi(statchoixClass);

        QMetaObject::connectSlotsByName(statchoixClass);
    } // setupUi

    void retranslateUi(QWidget *statchoixClass)
    {
        statchoixClass->setWindowTitle(QCoreApplication::translate("statchoixClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("statchoixClass", "Selectionner ce que vous voulez afficher", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("statchoixClass", "Calculer le panier moyen (apr\303\250s remise)", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("statchoixClass", "Calculer le chiffre d\342\200\231affaire sur un mois en particulier", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("statchoixClass", "Identifier les produits sous le seuil de r\303\251approvisionnement", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("statchoixClass", "Calculer le montant total des achats pour un client", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("statchoixClass", "Identifier les 10 articles les plus vendus ", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("statchoixClass", "Identifier les 10 articles les moins vendus", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("statchoixClass", "Calculer la valeur commerciale du stock", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("statchoixClass", "Calculer la valeur d\342\200\231achat du stock ", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("statchoixClass", "Simuler des variations de valeurs commerciales pour en d\303\251duire la valeur du stock", nullptr));

        BtStatVal->setText(QCoreApplication::translate("statchoixClass", "Valider", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statchoixClass: public Ui_statchoixClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATCHOIX_H
