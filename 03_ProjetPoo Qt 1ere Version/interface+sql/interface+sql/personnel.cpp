#include "personnel.h"
#include <qmessagebox.h>
#include <QtWidgets/QDateEdit>
#include <iostream>
#include <string>
#include "CLSQL.h"

personnelaffi::personnelaffi(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void personnelaffi::on_BtPersonnelAffi_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}


personnelajout::personnelajout(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void personnelajout::on_BtPersonnelAjout_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    int test;
    QString Nom = ui.lineEdit_6->text();
    std::string StrNom = Nom.toStdString();
    QString Prenom = ui.lineEdit_5->text();
    std::string StrPrenom = Prenom.toStdString();
    QString Id = ui.lineEdit_4->text();
    std::string StrId = Id.toStdString();
    QString adresse = ui.lineEdit_2->text();
    std::string Stradresse = adresse.toStdString();
    QString Cp = ui.lineEdit->text();
    std::string StrCp = Cp.toStdString();
    QString Ville = ui.lineEdit_7->text();
    std::string StrVille = Ville.toStdString();

    QDate date = ui.dateEdit->date();
    QString Stringdate = date.toString("yyyy-MM-dd");
    std::string Strdate = Stringdate.toStdString();
    SQL Requete;
    test = Requete.testVille(StrVille);
    if (test == 0)
    {
        std::string query = "INSERT INTO `personnel`(`Nom_Personnel`, `Prenom_Personnel`, `Superieur`, `Adresse_Personnel`, `CP_Personnel`, `Ville_Personnel`, `Date_Embauche`) VALUES ('" + StrNom + "','" + StrPrenom + "','" + StrId + "','" + Stradresse + "','" + StrCp + "','" + StrVille + "','" + Strdate + "')";
        Requete.INSERT(query);
    }
    else
    {
        QMessageBox::warning(this, "erreur", "La Ville n'est pas correct");
    }

    QMessageBox::warning(this, "erreur", "Allerte");

    close();
}

personnelchangementsuperieur::personnelchangementsuperieur(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void personnelchangementsuperieur::on_BtPersonnelChangerSuperieur_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}

personnelmodif::personnelmodif(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void personnelmodif::on_BtPersonnelModif_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    close();
}

personnelsuppr::personnelsuppr(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}


void personnelsuppr::on_BtPersonnelSuppr_clicked() //on_BtDeco_clicked, il faut l'ecrire avec cette syntaxe sinon ca ne capte pas le bouton placer dans les .ui
{
    if (ui.checkBox->isChecked())
    {
        close();
    }
    else {
        QMessageBox::warning(this, "erreur", "vous n'êtes pas sûr");  //affiche un popup disant, mdp faux
    }
}