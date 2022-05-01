#pragma once
#include <QtWidgets/QWidget>
#include"ui_cscp.h"
#include <QtCore/qstring.h>

class choixcscp : public QWidget
{
    Q_OBJECT

    public:
        int *action;
        choixcscp(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtCscpVal_clicked();

    private:
        Ui::choixcscpClass ui;
};
