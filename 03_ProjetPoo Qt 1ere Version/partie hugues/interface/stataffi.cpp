#include "stataffi.h"

stataffi::stataffi(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void stataffi::on_BtStatAffi_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


