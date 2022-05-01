#include "stockajout.h"

stockajout::stockajout(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void stockajout::on_BtStockVal_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


