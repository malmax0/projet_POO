#pragma once

#include <QtWidgets/QWidget>
#include "ui_stockAffi.h"
#include "ui_stockSuppr.h"
#include "ui_stockModif.h"
#include "ui_stockAjout.h"


class stockaffi : public QWidget
{
    Q_OBJECT

    public:
        stockaffi(QWidget* parent = Q_NULLPTR);
           

    private slots:
        void on_BtStockAffi_clicked();

    private:
        Ui::stockaffiClass ui;
};

class stockajout : public QWidget
{
    Q_OBJECT

    public:
        stockajout(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtStockVal_clicked();

    private:
        Ui::stockajoutClass ui;
};

class stockmodif : public QWidget
{
    Q_OBJECT

    public:
        stockmodif(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtStockModif_clicked();

    private:
        Ui::stockmodifClass ui;
};

class stocksuppr : public QWidget
{
    Q_OBJECT

    public:
        stocksuppr(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtStockSuppr_clicked();

    private:
        Ui::stocksupprClass ui;
};