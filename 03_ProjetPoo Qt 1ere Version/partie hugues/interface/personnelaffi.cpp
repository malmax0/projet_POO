#include "personnelaffi.h"

personnelaffi::personnelaffi(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void personnelaffi::on_BtPersonnelAffi_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


