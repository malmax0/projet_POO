#pragma once
#include <QtWidgets/QWidget>
#include "ui_commandeSuppr.h"


class commandesuppr : public QWidget
{
    Q_OBJECT

public:
    commandesuppr(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtSuppr_clicked();

private:
    Ui::commandesupprClass ui;
};
