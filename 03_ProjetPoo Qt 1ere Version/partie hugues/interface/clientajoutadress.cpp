#include "clientajoutadress.h"

clientajoutadress::clientajoutadress(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void clientajoutadress::on_BtClientAjoutAdress_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


