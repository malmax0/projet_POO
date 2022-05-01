#include "choixcscp.h"
// on aura acces a choixcscp que si on choisi commande stock client personnel dans interface si on choisi statistique on a acces a stat.ui
choixcscp::choixcscp(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);


}

void choixcscp::on_BtCscpVal_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    QString yolo = ui.ListAct->currentText();;
    if (yolo == "Ajouter")
    {
        *action = 1;
    }
    else if (yolo == "Modifier")
    {
        *action = 2;
    }
    else if (yolo == "Afficher")
    {
        *action = 3;
    }
    else if (yolo == "Supprimer")
    {
        *action = 4;
    }

    this->close();
}