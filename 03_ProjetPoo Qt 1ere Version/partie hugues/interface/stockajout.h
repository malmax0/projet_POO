
#pragma once
#include <QtWidgets/QWidget>
#include "ui_stockAjout.h"


class stockajout : public QWidget
{
    Q_OBJECT

public:
    stockajout(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtStockVal_clicked();

private:
    Ui::stockajoutClass ui;
};
