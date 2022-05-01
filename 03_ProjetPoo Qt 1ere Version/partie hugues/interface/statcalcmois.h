

#pragma once
#include <QtWidgets/QWidget>
#include "ui_statCalcMois.h"


class statcalcmois : public QWidget
{
    Q_OBJECT

public:
    statcalcmois(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtStatCalcMois_clicked();

private:
    Ui::statcalcmoisClass ui;
};
