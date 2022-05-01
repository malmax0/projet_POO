/********************************************************************************
** Form generated from reading UI file 'commandeAjoutArticle.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDEAJOUTARTICLE_H
#define UI_COMMANDEAJOUTARTICLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commandeajoutarticleClass
{
public:
    QPushButton *BtAjoutNewArticle;
    QLabel *label_3;
    QPushButton *BtCommandeAjoutArticle;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *commandeajoutarticleClass)
    {
        if (commandeajoutarticleClass->objectName().isEmpty())
            commandeajoutarticleClass->setObjectName(QString::fromUtf8("commandeajoutarticleClass"));
        commandeajoutarticleClass->resize(303, 186);
        BtAjoutNewArticle = new QPushButton(commandeajoutarticleClass);
        BtAjoutNewArticle->setObjectName(QString::fromUtf8("BtAjoutNewArticle"));
        BtAjoutNewArticle->setGeometry(QRect(140, 130, 151, 41));
        label_3 = new QLabel(commandeajoutarticleClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 20, 111, 16));
        BtCommandeAjoutArticle = new QPushButton(commandeajoutarticleClass);
        BtCommandeAjoutArticle->setObjectName(QString::fromUtf8("BtCommandeAjoutArticle"));
        BtCommandeAjoutArticle->setGeometry(QRect(10, 130, 101, 41));
        widget = new QWidget(commandeajoutarticleClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 50, 182, 52));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(commandeajoutarticleClass);

        QMetaObject::connectSlotsByName(commandeajoutarticleClass);
    } // setupUi

    void retranslateUi(QWidget *commandeajoutarticleClass)
    {
        commandeajoutarticleClass->setWindowTitle(QCoreApplication::translate("commandeajoutarticleClass", "Form", nullptr));
        BtAjoutNewArticle->setText(QCoreApplication::translate("commandeajoutarticleClass", "Ajouter un autre article", nullptr));
        label_3->setText(QCoreApplication::translate("commandeajoutarticleClass", "Ajouter un article", nullptr));
        BtCommandeAjoutArticle->setText(QCoreApplication::translate("commandeajoutarticleClass", "Finir", nullptr));
        label_6->setText(QCoreApplication::translate("commandeajoutarticleClass", "Id Article", nullptr));
        label_2->setText(QCoreApplication::translate("commandeajoutarticleClass", "Quantit\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commandeajoutarticleClass: public Ui_commandeajoutarticleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDEAJOUTARTICLE_H
