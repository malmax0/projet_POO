

#pragma once

#include <QtWidgets/QWidget>
#include "ui_personnelAffi.h"
#include "ui_personnelAjout.h"
#include "ui_personnelChangementSuperieur.h"
#include "ui_personnelModif.h"
#include "ui_personnelSuppr.h"


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

class personnelmodif : public QWidget
{
    Q_OBJECT

    public:
        personnelmodif(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtPersonnelModif_clicked();

    private:
        Ui::personnelmodifClass ui;
};

class personnelsuppr : public QWidget
{
    Q_OBJECT

    public:
        personnelsuppr(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtPersonnelSuppr_clicked();

    private:
        Ui::personnelsupprClass ui;
};

