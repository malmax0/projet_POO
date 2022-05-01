
#pragma once

#include <QtWidgets/QWidget>
#include "ui_clientSuppr.h"


class clientsuppr : public QWidget
{
    Q_OBJECT

public:
    clientsuppr(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtClientSuppr_clicked();

private:
    Ui::clientsupprClass ui;
};