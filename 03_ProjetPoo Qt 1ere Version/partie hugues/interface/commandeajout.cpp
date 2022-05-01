#include "commandeajout.h"

commandeajout::commandeajout(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);


}

void commandeajout::on_BtAjout_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}