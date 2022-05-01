
#pragma once
#include <QtWidgets/QWidget>
#include "ui_statAffi.h"


class stataffi : public QWidget
{
    Q_OBJECT

public:
    stataffi(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtStatAffi_clicked();

private:
    Ui::stataffiClass ui;
};
