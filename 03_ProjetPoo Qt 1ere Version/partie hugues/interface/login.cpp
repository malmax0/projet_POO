#include "login.h"
#include "interface.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QMessageBox>
#include "ui_login.h"
#include "ui_interface.h"

login::login(QWidget* parent) : 
    QWidget(parent)
{
    ui.setupUi(this);


}


void login::on_BtCo_clicked()
{
    QString username = ui.LnUser->text();
    QString password = ui.LnPass->text();

    if (username == "test" && password == "test") //si mdp/user just n'affiche pas de popup et envoi directement a la prochaine interface
    {
        //this->hide();
        interface interface;
        interface.setWindowModality(Qt::WindowModal);
        interface.show();

        //ca cache login quand le btnfer et clicke, puis ca montre le interface qui etait cacher depuis le debut
    }

    else
    {
        QMessageBox::warning(this, "Login", "Username and password is not correct");  //affiche un popup disant, mdp faux
    }



}
