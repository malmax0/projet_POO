
#pragma once
#include <QtWidgets/QWidget>
#include "ui_statSimu.h"


class statsimu : public QWidget
{
    Q_OBJECT

public:
    statsimu(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtStatSimu_clicked();

private:
    Ui::statsimuClass ui;
};
