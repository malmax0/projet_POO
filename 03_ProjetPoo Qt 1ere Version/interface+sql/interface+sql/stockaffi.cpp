#include "stock.h"

stockaffi::stockaffi(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void stockaffi::on_BtStockAffi_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


stockajout::stockajout(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void stockajout::on_BtStockVal_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}

stockmodif::stockmodif(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void stockmodif::on_BtStockModif_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}

stocksuppr::stocksuppr(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void stocksuppr::on_BtStockSuppr_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}