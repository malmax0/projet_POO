
#pragma once

#include <QtWidgets/QWidget>
#include "ui_clientAffi.h"
#include "ui_clientAjout.h"
#include "ui_clientAjoutAdresse.h"
#include "ui_clientModif.h"
#include "ui_clientModifAdressSuppr.h"
#include "ui_clientSuppr.h"


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


class clientajout : public QWidget
{
    Q_OBJECT

    public:
        int* i;
        clientajout(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtClientAjout_clicked();
        void on_BtClientAjout_adresse_clicked();


    private:
        Ui::clientajoutClass ui;
};

class clientajoutadress : public QWidget
{
    Q_OBJECT

    public:
        clientajoutadress(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtClientAjoutAdress_clicked();

    private:
        Ui::clientajoutadresseClass ui;
};


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


class clientmodifadresssuppr : public QWidget
{
    Q_OBJECT

    public:
        clientmodifadresssuppr(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtAdresseSuppr_clicked();

    private:
        Ui::clientsuppradressClass ui;
};

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