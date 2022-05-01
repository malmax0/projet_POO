#pragma once
#include <QtWidgets/QWidget>
#include "ui_commandeModif.h"


class commandemodif : public QWidget
{
    Q_OBJECT

public:
    commandemodif(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtModif_clicked();

private:
    Ui::commandemodifClass ui; 
};
