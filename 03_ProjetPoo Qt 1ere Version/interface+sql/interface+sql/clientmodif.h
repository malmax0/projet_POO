
#pragma once

#include <QtWidgets/QWidget>
#include "ui_clientModif.h"


class clientmodif : public QWidget
{
    Q_OBJECT

public:
    int* i;
    clientmodif(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtClientModifVal_clicked();
    void on_BtClientSupprAdresse_clicked();
    void on_BtClientAjoutAdresse_clicked();
private:
    Ui::clientmodifClass ui;
};
