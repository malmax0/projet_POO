
#pragma once
#include <QtWidgets/QWidget>
#include "ui_commandeaffi.h"


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
