
#pragma once

#include <QtWidgets/QWidget>
#include "ui_clientAffi.h"


class clientaffi : public QWidget
{
    Q_OBJECT

public:
    clientaffi(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtClientAffi_clicked();

private:
    Ui::clientaffiClass ui;
};
