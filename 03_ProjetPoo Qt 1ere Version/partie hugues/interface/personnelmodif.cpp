#include "personnelmodif.h"


personnelmodif::personnelmodif(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void personnelmodif::on_BtPersonnelModif_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


