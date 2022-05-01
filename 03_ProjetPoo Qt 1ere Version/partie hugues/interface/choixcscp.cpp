#include "choixcscp.h"
// on aura acces a choixcscp que si on choisi commande stock client personnel dans interface si on choisi statistique on a acces a stat.ui
choixcscp::choixcscp(QDialog* parent)
    : QDialog(parent)
{
    ui.setupUi(this);


}

void choixcscp::on_BtCscpVal_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}