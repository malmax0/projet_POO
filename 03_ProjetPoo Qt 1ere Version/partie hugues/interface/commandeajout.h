
#pragma once
#include <QtWidgets/QWidget>
#include "ui_commandeAjout.h"

class commandeajout : public QWidget
{
    Q_OBJECT

public:
    commandeajout(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtAjout_clicked();

private:
    Ui::commandeajoutClass ui;
};
