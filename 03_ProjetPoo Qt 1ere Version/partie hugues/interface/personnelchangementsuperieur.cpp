#include "personnelchangementsuperieur.h"


personnelchangementsuperieur::personnelchangementsuperieur(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void personnelchangementsuperieur::on_BtPersonnelChangerSuperieur_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


