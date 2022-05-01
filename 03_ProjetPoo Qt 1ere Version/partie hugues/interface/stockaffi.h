#pragma once

#include <QtWidgets/QWidget>
#include "ui_stockAffi.h"


class stockaffi : public QWidget
{
    Q_OBJECT

public:
    stockaffi(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtStockAffi_clicked();

private:
    Ui::stockaffiClass ui;
};