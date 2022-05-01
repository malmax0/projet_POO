/********************************************************************************
** Form generated from reading UI file 'personnelAffi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONNELAFFI_H
#define UI_PERSONNELAFFI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_personnelaffiClass
{
public:
    QPushButton *BtPersonnelAffi;
    QLabel *label;
    QTableView *tableView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;

    void setupUi(QWidget *personnelaffiClass)
    {
        if (personnelaffiClass->objectName().isEmpty())
            personnelaffiClass->setObjectName(QString::fromUtf8("personnelaffiClass"));
        personnelaffiClass->resize(299, 526);
        BtPersonnelAffi = new QPushButton(personnelaffiClass);
        BtPersonnelAffi->setObjectName(QString::fromUtf8("BtPersonnelAffi"));
        BtPersonnelAffi->setGeometry(QRect(88, 254, 111, 41));
        label = new QLabel(personnelaffiClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 111, 31));
        tableView = new QTableView(personnelaffiClass);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 300, 256, 192));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        layoutWidget = new QWidget(personnelaffiClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 50, 190, 198));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_7->addWidget(label_9);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(personnelaffiClass);

        QMetaObject::connectSlotsByName(personnelaffiClass);
    } // setupUi

    void retranslateUi(QWidget *personnelaffiClass)
    {
        personnelaffiClass->setWindowTitle(QCoreApplication::translate("personnelaffiClass", "Form", nullptr));
        BtPersonnelAffi->setText(QCoreApplication::translate("personnelaffiClass", "Afficher", nullptr));
        label->setText(QCoreApplication::translate("personnelaffiClass", "affichage le personnel", nullptr));
        label_3->setText(QCoreApplication::translate("personnelaffiClass", "Nom", nullptr));
        label_4->setText(QCoreApplication::translate("personnelaffiClass", "Pr\303\251nom", nullptr));
        label_6->setText(QCoreApplication::translate("personnelaffiClass", "ID Sup\303\251rieur", nullptr));
        label_5->setText(QCoreApplication::translate("personnelaffiClass", "Date d\342\200\231embauche", nullptr));
        label_7->setText(QCoreApplication::translate("personnelaffiClass", "Adresse", nullptr));
        label_8->setText(QCoreApplication::translate("personnelaffiClass", "CP", nullptr));
        label_9->setText(QCoreApplication::translate("personnelaffiClass", "Ville", nullptr));
    } // retranslateUi

};

namespace Ui {
    class personnelaffiClass: public Ui_personnelaffiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONNELAFFI_H
