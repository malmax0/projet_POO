#include "personnelsuppr.h"


personnelsuppr::personnelsuppr(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void personnelsuppr::on_BtPersonnelSuppr_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


