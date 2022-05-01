/********************************************************************************
** Form generated from reading UI file 'personnelChangementSuperieur.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONNELCHANGEMENTSUPERIEUR_H
#define UI_PERSONNELCHANGEMENTSUPERIEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_personnelchangementsuperieurClass
{
public:
    QPushButton *BtPersonnelChangerSuperieur;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *personnelchangementsuperieurClass)
    {
        if (personnelchangementsuperieurClass->objectName().isEmpty())
            personnelchangementsuperieurClass->setObjectName(QString::fromUtf8("personnelchangementsuperieurClass"));
        personnelchangementsuperieurClass->resize(271, 169);
        BtPersonnelChangerSuperieur = new QPushButton(personnelchangementsuperieurClass);
        BtPersonnelChangerSuperieur->setObjectName(QString::fromUtf8("BtPersonnelChangerSuperieur"));
        BtPersonnelChangerSuperieur->setGeometry(QRect(60, 100, 131, 51));
        label_2 = new QLabel(personnelchangementsuperieurClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 20, 151, 31));
        layoutWidget = new QWidget(personnelchangementsuperieurClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 232, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(personnelchangementsuperieurClass);

        QMetaObject::connectSlotsByName(personnelchangementsuperieurClass);
    } // setupUi

    void retranslateUi(QWidget *personnelchangementsuperieurClass)
    {
        personnelchangementsuperieurClass->setWindowTitle(QCoreApplication::translate("personnelchangementsuperieurClass", "Form", nullptr));
        BtPersonnelChangerSuperieur->setText(QCoreApplication::translate("personnelchangementsuperieurClass", "Changer le sup\303\251rieur", nullptr));
        label_2->setText(QCoreApplication::translate("personnelchangementsuperieurClass", "Modifier le nouveau sup\303\251rieur", nullptr));
        label->setText(QCoreApplication::translate("personnelchangementsuperieurClass", "ID Nouveau sup\303\251rieur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class personnelchangementsuperieurClass: public Ui_personnelchangementsuperieurClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONNELCHANGEMENTSUPERIEUR_H
