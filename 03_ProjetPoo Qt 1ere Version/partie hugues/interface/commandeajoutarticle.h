

#pragma once

#include <QtWidgets/QWidget>
#include "ui_commandeAjoutArticle.h"


class commandeajoutarticle : public QWidget
{
    Q_OBJECT

public:
    commandeajoutarticle(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtCommandeAjoutArticle_clicked();

private:
    Ui::commandeajoutarticleClass ui;
};