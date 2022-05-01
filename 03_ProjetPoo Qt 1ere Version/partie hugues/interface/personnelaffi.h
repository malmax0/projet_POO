

#pragma once

#include <QtWidgets/QWidget>
#include "ui_personnelAffi.h"


class personnelaffi : public QWidget
{
    Q_OBJECT

public:
    personnelaffi(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtPersonnelAffi_clicked();

private:
    Ui::personnelaffiClass ui;
};
