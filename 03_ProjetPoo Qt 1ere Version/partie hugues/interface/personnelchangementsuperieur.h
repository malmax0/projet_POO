
#pragma once

#include <QtWidgets/QWidget>
#include "ui_personnelChangementSuperieur.h"


class personnelchangementsuperieur : public QWidget
{
    Q_OBJECT

public:
    personnelchangementsuperieur(QWidget* parent = Q_NULLPTR);


private slots:
    void on_BtPersonnelChangerSuperieur_clicked();

private:
    Ui::personnelchangementsuperieurClass ui;
};
