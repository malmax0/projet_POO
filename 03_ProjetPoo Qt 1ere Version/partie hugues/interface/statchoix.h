
#pragma once
#include <QtWidgets/QWidget>
#include "ui_statChoix.h"


class statchoix : public QWidget
{
    Q_OBJECT

public:
    statchoix(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtStatVal_clicked();

private:
    Ui::statchoixClass ui;
};
