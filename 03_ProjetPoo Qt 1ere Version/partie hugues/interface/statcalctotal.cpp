#include "statcalctotal.h"
statcalctotal::statcalctotal(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void statcalctotal::on_BtStatCalcTotal_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


