#include "commandesuppr.h"

commandesuppr::commandesuppr(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);


}

void commandesuppr::on_BtSuppr_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}