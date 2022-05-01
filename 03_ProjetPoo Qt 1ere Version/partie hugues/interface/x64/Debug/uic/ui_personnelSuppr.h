/********************************************************************************
** Form generated from reading UI file 'personnelSuppr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONNELSUPPR_H
#define UI_PERSONNELSUPPR_H

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

class Ui_personnelsupprClass
{
public:
    QPushButton *BtPersonnelSuppr;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QLabel *label;

    void setupUi(QWidget *personnelsupprClass)
    {
        if (personnelsupprClass->objectName().isEmpty())
            personnelsupprClass->setObjectName(QString::fromUtf8("personnelsupprClass"));
        personnelsupprClass->resize(262, 194);
        BtPersonnelSuppr = new QPushButton(personnelsupprClass);
        BtPersonnelSuppr->setObjectName(QString::fromUtf8("BtPersonnelSuppr"));
        BtPersonnelSuppr->setGeometry(QRect(80, 130, 91, 51));
        layoutWidget = new QWidget(personnelsupprClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 43, 224, 71));
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

        label = new QLabel(personnelsupprClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 161, 31));

        retranslateUi(personnelsupprClass);

        QMetaObject::connectSlotsByName(personnelsupprClass);
    } // setupUi

    void retranslateUi(QWidget *personnelsupprClass)
    {
        personnelsupprClass->setWindowTitle(QCoreApplication::translate("personnelsupprClass", "Form", nullptr));
        BtPersonnelSuppr->setText(QCoreApplication::translate("personnelsupprClass", "Supprimer", nullptr));
        label_2->setText(QCoreApplication::translate("personnelsupprClass", "ID Personnel", nullptr));
        checkBox->setText(QCoreApplication::translate("personnelsupprClass", "Etes vous sur de supprimer le personnel ?", nullptr));
        label->setText(QCoreApplication::translate("personnelsupprClass", "Suppresion d'un personnel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class personnelsupprClass: public Ui_personnelsupprClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONNELSUPPR_H
