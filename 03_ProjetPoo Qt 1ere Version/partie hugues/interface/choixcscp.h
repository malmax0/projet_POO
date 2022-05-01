#pragma once
#include <QtWidgets/QWidget>
#include "ui_cscp.h"

class choixcscp : public QDialog
{
    Q_OBJECT

public:
    choixcscp(QDialog* parent = Q_NULLPTR);


private slots:
    void on_BtCscpVal_clicked();

private:
    Ui::choixcscpClass ui;
};
