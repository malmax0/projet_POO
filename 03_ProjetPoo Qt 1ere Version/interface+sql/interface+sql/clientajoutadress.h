

#pragma once

#include <QtWidgets/QWidget>
#include "ui_clientAjoutAdresse.h"


class clientajoutadress : public QWidget
{
    Q_OBJECT

public:
    clientajoutadress(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtClientAjoutAdress_clicked();

private:
    Ui::clientajoutadresseClass ui;
};