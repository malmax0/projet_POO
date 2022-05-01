#include "clientmodifadresssuppr.h"

clientmodifadresssuppr::clientmodifadresssuppr(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void clientmodifadresssuppr::on_BtAdresseSuppr_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


