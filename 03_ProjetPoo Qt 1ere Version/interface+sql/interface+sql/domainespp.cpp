#include "domainespp.h"
#include "login.h"
#include <QtWidgets/QMessageBox>
#include <QtCore/qstring.h>

domainespp::domainespp(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}
void domainespp::on_BtDeco_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    this->close();
}

void domainespp::on_BtInterfaceVal_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    QString Temp;
    Temp = ui.List1->currentText();
    if (Temp == "Commandes")
    {
        *etat = 1;
    }
    else if (Temp == "Stock")
    {
        *etat = 2;
    }
    else if (Temp == "Client")
    {
        *etat = 3;
    }
    else if (Temp == "Personnel")
    {
        *etat = 4;
    }
    else {
        *etat = 5;
    }
    // QMessageBox::warning(this,"", Temp);
    this->close();
}