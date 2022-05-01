#pragma once
#include <QtWidgets/QDialog>
#include <QtWidgets/QWidget>
#include "QtCore/qdebug.h"
#include "QtCore/qfileinfo.h"
#include "QtWidgets/qmainwindow.h"
#include "ui_login.h"

class login : public QWidget
{
    Q_OBJECT

    public:
        int* i;
        login(QWidget* parent = Q_NULLPTR);
 

    private slots:
        void on_BtCo_clicked();

    private:
        Ui::loginclass ui;
};



