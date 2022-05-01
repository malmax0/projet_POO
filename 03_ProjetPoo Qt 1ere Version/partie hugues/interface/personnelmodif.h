#pragma once

#include <QtWidgets/QWidget>
#include "ui_personnelModif.h"


class personnelmodif : public QWidget
{
    Q_OBJECT

public:
    personnelmodif(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtPersonnelModif_clicked();

private:
    Ui::personnelmodifClass ui;
};
