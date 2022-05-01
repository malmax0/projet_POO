#include "interface.h"
#include "login.h"

interface::interface(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);


}

void interface::on_BtDeco_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}