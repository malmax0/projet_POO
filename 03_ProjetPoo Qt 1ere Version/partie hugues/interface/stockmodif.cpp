#include "stockmodif.h"

stockmodif::stockmodif(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void stockmodif::on_BtStockModif_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


