#include "stockaffi.h"

stockaffi::stockaffi(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void stockaffi::on_BtStockAffi_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


