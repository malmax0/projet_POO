#include "commande.h"
#include "QtWidgets/QTableView"
#include "QtWidgets/QMessageBox"

commandeaffi::commandeaffi(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void commandeaffi::on_BtCommandeAffi_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


commandeajout::commandeajout(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);


}

void commandeajout::on_BtAjout_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    *i = 1;
    close();
}

commandeajoutarticle::commandeajoutarticle(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void commandeajoutarticle::on_BtCommandeAjoutArticle_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}

commandemodif::commandemodif(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);


}

void commandemodif::on_BtModif_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}

commandesuppr::commandesuppr(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);


}

void commandesuppr::on_BtSuppr_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    if (ui.checkBox->isChecked())
    {
        close();
    }
    else {
        QMessageBox::warning(this, "erreur", "vous n'ete pas sur");  //affiche un popup disant, mdp faux
    }
}


