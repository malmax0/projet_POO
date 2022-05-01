
#pragma once
#include <QtWidgets/QWidget>
#include "ui_stockSuppr.h"


    class stocksuppr : public QWidget
{
    Q_OBJECT

public:
    stocksuppr(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtStockSuppr_clicked();

private:
    Ui::stocksupprClass ui;
}; 
