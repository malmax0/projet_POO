
#pragma once
#include <QtWidgets/QWidget>
#include "ui_stockModif.h"


class stockmodif : public QWidget
{
    Q_OBJECT

public:
    stockmodif(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtStockModif_clicked();

private:
    Ui::stockmodifClass ui;
};
