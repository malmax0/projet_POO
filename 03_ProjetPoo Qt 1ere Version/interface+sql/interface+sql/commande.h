
#pragma once
#include <QtWidgets/QWidget>
#include "ui_commandeaffi.h"
#include "ui_commandeAjout.h"
#include "ui_commandeAjoutArticle.h"
#include "ui_commandeModif.h"
#include "ui_commandeSuppr.h"

class commandeaffi : public QWidget
{
        Q_OBJECT

    public:
        commandeaffi(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtCommandeAffi_clicked();

    private:
        Ui::commandeaffiClass ui;
};

class commandeajout : public QWidget
{
        Q_OBJECT

    public:
        int* i;
        commandeajout(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtAjout_clicked();

    private:
        Ui::commandeajoutClass ui;
};

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

class commandemodif : public QWidget
{
        Q_OBJECT

    public:
        commandemodif(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtModif_clicked();

    private:
        Ui::commandemodifClass ui;
};

class commandesuppr : public QWidget
{
        Q_OBJECT

    public:
        commandesuppr(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtSuppr_clicked();

    private:
        Ui::commandesupprClass ui;
};
