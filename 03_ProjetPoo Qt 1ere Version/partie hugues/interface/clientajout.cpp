#include "clientajout.h"

clientajout::clientajout(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void clientajout::on_BtClientAjout_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


