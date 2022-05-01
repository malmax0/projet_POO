#include "statcalcmois.h"

statcalcmois::statcalcmois(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void statcalcmois::on_BtStatCalcMois_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


