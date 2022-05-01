
#pragma once
#include <QtWidgets/QWidget>
#include "ui_statAffi.h"
#include "ui_statCalcMois.h"
#include "ui_statCalcTotal.h"
#include "ui_statChoix.h"
#include "ui_statSimu.h"


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

class statcalcmois : public QWidget
{
    Q_OBJECT

    public:
        statcalcmois(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtStatCalcMois_clicked();

    private:
        Ui::statcalcmoisClass ui;
};

class statcalctotal : public QWidget
{
    Q_OBJECT

    public:
        statcalctotal(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtStatCalcTotal_clicked();

    private:
        Ui::statcalctotalClass ui;
};

class statchoix : public QWidget
{
    Q_OBJECT

    public:
        int* choix;
        statchoix(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtStatVal_clicked();

    private:
        Ui::statchoixClass ui;
};

class statsimu : public QWidget
{
    Q_OBJECT

    public:
        statsimu(QWidget* parent = Q_NULLPTR);


    private slots:
        void on_BtStatSimu_clicked();

    private:
        Ui::statsimuClass ui;
};
