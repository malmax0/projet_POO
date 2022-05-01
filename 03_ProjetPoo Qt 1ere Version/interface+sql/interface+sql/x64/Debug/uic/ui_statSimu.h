/********************************************************************************
** Form generated from reading UI file 'statSimu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATSIMU_H
#define UI_STATSIMU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statsimuClass
{
public:
    QPushButton *BtStatSimu;
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *comboBox_3;

    void setupUi(QWidget *statsimuClass)
    {
        if (statsimuClass->objectName().isEmpty())
            statsimuClass->setObjectName(QString::fromUtf8("statsimuClass"));
        statsimuClass->resize(293, 264);
        BtStatSimu = new QPushButton(statsimuClass);
        BtStatSimu->setObjectName(QString::fromUtf8("BtStatSimu"));
        BtStatSimu->setGeometry(QRect(80, 200, 131, 41));
        label_5 = new QLabel(statsimuClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 241, 41));
        layoutWidget = new QWidget(statsimuClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 60, 162, 110));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        comboBox_3 = new QComboBox(layoutWidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_3->addWidget(comboBox_3);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(statsimuClass);

        QMetaObject::connectSlotsByName(statsimuClass);
    } // setupUi

    void retranslateUi(QWidget *statsimuClass)
    {
        statsimuClass->setWindowTitle(QCoreApplication::translate("statsimuClass", "Form", nullptr));
        BtStatSimu->setText(QCoreApplication::translate("statsimuClass", "Simuler", nullptr));
        label_5->setText(QCoreApplication::translate("statsimuClass", "Simulation des variations de valeurs commerciales ", nullptr));
        label_4->setText(QCoreApplication::translate("statsimuClass", "TVA", nullptr));
        label_3->setText(QCoreApplication::translate("statsimuClass", "Marge Commerciale", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("statsimuClass", "0", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("statsimuClass", "5", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("statsimuClass", "10", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("statsimuClass", "15", nullptr));

        label->setText(QCoreApplication::translate("statsimuClass", "D\303\251marche quelconque", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("statsimuClass", "0", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("statsimuClass", "2", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("statsimuClass", "3", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("statsimuClass", "5", nullptr));

        label_2->setText(QCoreApplication::translate("statsimuClass", "Remise Commerciale", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("statsimuClass", "0", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("statsimuClass", "5", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("statsimuClass", "6", nullptr));

    } // retranslateUi

};

namespace Ui {
    class statsimuClass: public Ui_statsimuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATSIMU_H
