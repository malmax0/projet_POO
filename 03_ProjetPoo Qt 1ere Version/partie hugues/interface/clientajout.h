
#pragma once

#include <QtWidgets/QWidget>
#include "ui_clientAjout.h"


class clientajout : public QWidget
{
    Q_OBJECT

public:
    clientajout(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtClientAjout_clicked();

private:
    Ui::clientajoutClass ui;
};

