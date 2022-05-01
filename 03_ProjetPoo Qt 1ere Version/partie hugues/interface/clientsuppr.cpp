#include "clientsuppr.h"

clientsuppr::clientsuppr(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void clientsuppr::on_BtClientSuppr_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


