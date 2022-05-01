#include "clientmodif.h"

clientmodif::clientmodif(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void clientmodif::on_BtClientModifVal_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


