/********************************************************************************
** Form generated from reading UI file 'personnelAjout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONNELAJOUT_H
#define UI_PERSONNELAJOUT_H

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

class Ui_personnelajoutClass
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *lineEdit_7;
    QPushButton *BtPersonnelAjout;

    void setupUi(QWidget *personnelajoutClass)
    {
        if (personnelajoutClass->objectName().isEmpty())
            personnelajoutClass->setObjectName(QString::fromUtf8("personnelajoutClass"));
        personnelajoutClass->resize(234, 348);
        label = new QLabel(personnelajoutClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 111, 31));
        layoutWidget = new QWidget(personnelajoutClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 70, 202, 226));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_2->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_3->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_4->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_5->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_6->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_7->addWidget(label_9);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_7->addWidget(lineEdit_7);


        verticalLayout->addLayout(horizontalLayout_7);

        BtPersonnelAjout = new QPushButton(personnelajoutClass);
        BtPersonnelAjout->setObjectName(QString::fromUtf8("BtPersonnelAjout"));
        BtPersonnelAjout->setGeometry(QRect(70, 290, 91, 51));

        retranslateUi(personnelajoutClass);

        QMetaObject::connectSlotsByName(personnelajoutClass);
    } // setupUi

    void retranslateUi(QWidget *personnelajoutClass)
    {
        personnelajoutClass->setWindowTitle(QCoreApplication::translate("personnelajoutClass", "Form", nullptr));
        label->setText(QCoreApplication::translate("personnelajoutClass", "Ajouter un personnel", nullptr));
        label_3->setText(QCoreApplication::translate("personnelajoutClass", "Nom", nullptr));
        label_4->setText(QCoreApplication::translate("personnelajoutClass", "Pr\303\251nom", nullptr));
        label_6->setText(QCoreApplication::translate("personnelajoutClass", "ID Sup\303\251rieur", nullptr));
        label_5->setText(QCoreApplication::translate("personnelajoutClass", "Date d\342\200\231embauche", nullptr));
        label_7->setText(QCoreApplication::translate("personnelajoutClass", "Adresse", nullptr));
        label_8->setText(QCoreApplication::translate("personnelajoutClass", "CP", nullptr));
        label_9->setText(QCoreApplication::translate("personnelajoutClass", "Ville", nullptr));
        BtPersonnelAjout->setText(QCoreApplication::translate("personnelajoutClass", "Ajouter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class personnelajoutClass: public Ui_personnelajoutClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONNELAJOUT_H
