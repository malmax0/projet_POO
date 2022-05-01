#include "personnelajout.h"


personnelajout::personnelajout(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void personnelajout::on_BtPersonnelAjout_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


