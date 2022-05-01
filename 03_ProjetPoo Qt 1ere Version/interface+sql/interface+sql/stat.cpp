#include "stat.h"
#include <QMessageBox>

stataffi::stataffi(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void stataffi::on_BtStatAffi_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}

statcalcmois::statcalcmois(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void statcalcmois::on_BtStatCalcMois_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}

statcalctotal::statcalctotal(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void statcalctotal::on_BtStatCalcTotal_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}

statchoix::statchoix(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void statchoix::on_BtStatVal_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    QString Temp;
    Temp = ui.comboBox->currentText();
    //QMessageBox::warning(this, "", Temp);
    if (Temp == "Simuler des variations de valeurs commerciales pour en d\303\251duire la valeur du stock")
    {
        *choix = 9;
    }
    if (Temp == "Calculer le panier moyen (apr\303\250s remise)")
    {
        *choix = 1;
    }
    if (Temp == "Calculer le chiffre d\342\200\231affaire sur un mois en particulier")
    {
        *choix = 2;
    }
    if (Temp == "Identifier les produits sous le seuil de r\303\251approvisionnement")
    {
        *choix = 3;
    }
    if (Temp == "Calculer le montant total des achats pour un client")
    {
        *choix = 4;
    }
    if (Temp == "Identifier les 10 articles les plus vendus")
    {
        *choix = 5;
    }
    if (Temp == "Identifier les 10 articles les moins vendus")
    {
        *choix = 6;
    }
    if (Temp == "Calculer la valeur d\342\200\231achat du stock ")
    {
        *choix = 7;
    }
    if (Temp == "Calculer la valeur d’achat du stock")
    {
        *choix = 8;
    }
    close();
}

statsimu::statsimu(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void statsimu::on_BtStatSimu_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}
