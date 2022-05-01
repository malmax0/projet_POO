/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginclass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *LnUser;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *LnPass;
    QPushButton *BtCo;

    void setupUi(QWidget *loginclass)
    {
        if (loginclass->objectName().isEmpty())
            loginclass->setObjectName(QString::fromUtf8("loginclass"));
        loginclass->resize(218, 114);
        layoutWidget = new QWidget(loginclass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 20, 199, 83));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        LnUser = new QLineEdit(layoutWidget);
        LnUser->setObjectName(QString::fromUtf8("LnUser"));

        horizontalLayout_2->addWidget(LnUser);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        LnPass = new QLineEdit(layoutWidget);
        LnPass->setObjectName(QString::fromUtf8("LnPass"));

        horizontalLayout->addWidget(LnPass);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        BtCo = new QPushButton(layoutWidget);
        BtCo->setObjectName(QString::fromUtf8("BtCo"));

        verticalLayout_2->addWidget(BtCo);


        retranslateUi(loginclass);

        QMetaObject::connectSlotsByName(loginclass);
    } // setupUi

    void retranslateUi(QWidget *loginclass)
    {
        loginclass->setWindowTitle(QCoreApplication::translate("loginclass", "Form", nullptr));
        label->setText(QCoreApplication::translate("loginclass", "UserNames", nullptr));
        label_2->setText(QCoreApplication::translate("loginclass", "PassWord", nullptr));
        BtCo->setText(QCoreApplication::translate("loginclass", "Se Connecter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginclass: public Ui_loginclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
