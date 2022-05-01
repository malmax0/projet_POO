#include "statsimu.h"

statsimu::statsimu(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void statsimu::on_BtStatSimu_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


