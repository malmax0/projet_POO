#include "commandeaffi.h"
#include <QTableView>

commandeaffi::commandeaffi(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void commandeaffi::on_BtCommandeAffi_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


