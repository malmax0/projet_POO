
#pragma once

#include <QtWidgets/QWidget>
#include "ui_clientModifAdressSuppr.h"


class clientmodifadresssuppr : public QWidget
{
    Q_OBJECT

public:
    clientmodifadresssuppr(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtAdresseSuppr_clicked();

private:
    Ui::clientsuppradressClass ui;
};
