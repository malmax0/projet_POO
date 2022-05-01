#include "commandeajoutarticle.h"

commandeajoutarticle::commandeajoutarticle(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void commandeajoutarticle::on_BtCommandeAjoutArticle_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


