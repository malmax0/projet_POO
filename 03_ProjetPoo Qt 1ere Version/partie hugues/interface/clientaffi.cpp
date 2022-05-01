#include "clientaffi.h"

clientaffi::clientaffi(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void clientaffi::on_BtClientAffi_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


