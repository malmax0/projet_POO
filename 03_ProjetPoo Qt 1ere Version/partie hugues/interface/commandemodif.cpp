#include "commandemodif.h"

commandemodif::commandemodif(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);


}

void commandemodif::on_BtModif_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}