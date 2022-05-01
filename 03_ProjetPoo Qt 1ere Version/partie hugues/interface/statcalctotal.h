

#pragma once
#include <QtWidgets/QWidget>
#include "ui_statCalcTotal.h"


class statcalctotal : public QWidget
{
    Q_OBJECT

public:
    statcalctotal(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtStatCalcTotal_clicked();

private:
    Ui::statcalctotalClass ui;
};
