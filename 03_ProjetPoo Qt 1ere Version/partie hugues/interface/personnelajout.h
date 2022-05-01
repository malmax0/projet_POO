

#pragma once

#include <QtWidgets/QWidget>
#include "ui_personnelAjout.h"


class personnelajout : public QWidget
{
    Q_OBJECT

public:
    personnelajout(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtPersonnelAjout_clicked();

private:
    Ui::personnelajoutClass ui;
};
