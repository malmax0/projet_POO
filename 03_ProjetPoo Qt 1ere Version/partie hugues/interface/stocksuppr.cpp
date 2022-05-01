#include "stocksuppr.h"
stocksuppr::stocksuppr(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void stocksuppr::on_BtStockSuppr_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


