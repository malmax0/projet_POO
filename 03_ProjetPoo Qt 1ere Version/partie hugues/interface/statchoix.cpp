#include "statchoix.h"

statchoix::statchoix(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void statchoix::on_BtStatVal_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


