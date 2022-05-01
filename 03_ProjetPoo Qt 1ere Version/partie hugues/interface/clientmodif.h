
#pragma once

#include <QtWidgets/QWidget>
#include "ui_clientModif.h"


class clientmodif : public QWidget
{
    Q_OBJECT

public:
    clientmodif(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtClientModifVal_clicked();

private:
    Ui::clientmodifClass ui;
};
