#pragma once

#include <QtWidgets/QWidget>
#include "ui_personnelSuppr.h"


class personnelsuppr : public QWidget
{
    Q_OBJECT

public:
    personnelsuppr(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtPersonnelSuppr_clicked();

private:
    Ui::personnelsupprClass ui;
};
