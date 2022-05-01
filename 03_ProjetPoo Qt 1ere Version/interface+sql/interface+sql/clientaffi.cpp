#include "client.h"
#include "QtWidgets/QMessageBox"




clientaffi::clientaffi(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void clientaffi::on_BtClientAffi_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}

clientajout::clientajout(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

void clientajout::on_BtClientAjout_adresse_clicked()
{
    *i = 1;
    close();
}


void clientajout::on_BtClientAjout_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    *i = 0;
    close();
}

clientajoutadress::clientajoutadress(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void clientajoutadress::on_BtClientAjoutAdress_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}

clientmodif::clientmodif(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void clientmodif::on_BtClientModifVal_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}

void clientmodif::on_BtClientSupprAdresse_clicked()
{
    *i = 1;
    close();

}

void clientmodif::on_BtClientAjoutAdresse_clicked()
{
    *i = 2;
    close();
}

clientmodifadresssuppr::clientmodifadresssuppr(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void clientmodifadresssuppr::on_BtAdresseSuppr_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    if (ui.checkBox->isChecked())
    {
        close();
    }
    else {
        QMessageBox::warning(this, "ereur", "vous n'ete pas sur");  //affiche un popup disant, mdp faux
    }
}

clientsuppr::clientsuppr(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void clientsuppr::on_BtClientSuppr_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    if (ui.checkBox->isChecked())
    {
        close();
    }
    else {
        QMessageBox::warning(this, "ereur", "vous n'ete pas sur");  //affiche un popup disant, mdp faux
    }
}


