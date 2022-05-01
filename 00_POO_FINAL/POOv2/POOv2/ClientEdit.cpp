/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#include "ClientEdit.h"
#include "SQL.h"

System::Void POOv2::ClientEdit::btn_save_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ Date;
    this->ds = gcnew Data::DataSet();
    this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
    if (this->mode == "add")
    {
        Date = this->txt_dateyear->Text + "-" + this->txt_datemonth->Text + "-" + this->txt_dateday->Text;
        this->txt_idclient->Text = this->processusPersonnes->ajouter_Client(this->txt_clientlastname->Text, this->txt_clientfirstname->Text, Date);
    }
    else if (this->mode == "edit")
    {
        Date = this->txt_dateyear->Text + "-" + this->txt_datemonth->Text + "-" + this->txt_dateday->Text;
        this->processusPersonnes->modifier_Client(Convert::ToInt32(this->txt_idclient->Text), this->txt_clientlastname->Text, this->txt_clientfirstname->Text, Date);
    }
    else if (this->mode == "del")
    {
        this->processusPersonnes->supprimer_Client(Convert::ToInt32(this->txt_idclient->Text));
    }
    return System::Void();
}

System::Void POOv2::ClientEdit::btn_edit_Click(System::Object^ sender, System::EventArgs^ e)
{

    this->txt_idclient->Clear();
    this->txt_clientfirstname->Clear();
    this->txt_clientlastname->Clear();
    this->txt_datemonth->Clear();
    this->txt_dateyear->Clear();
    this->txt_dateday->Clear();
    this->txt_clientadress->Clear();
    this->txt_clientpc->Clear();
    this->txt_clientcity->Clear();
    this->mode = "edit";
    return System::Void();
}

System::Void POOv2::ClientEdit::btn_del_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->txt_idclient->Clear();
    this->txt_clientfirstname->Clear();
    this->txt_clientlastname->Clear();
    this->txt_datemonth->Clear();
    this->txt_dateyear->Clear();
    this->txt_dateday->Clear();
    this->txt_clientadress->Clear();
    this->txt_clientpc->Clear();
    this->txt_clientcity->Clear();
    this->mode = "del";
    return System::Void();
}

System::Void POOv2::ClientEdit::btn_add_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->txt_idclient->Clear();
    this->txt_clientfirstname->Clear();
    this->txt_clientlastname->Clear();
    this->txt_datemonth->Clear();
    this->txt_dateyear->Clear();
    this->txt_dateday->Clear();
    this->txt_clientadress->Clear();
    this->txt_clientpc->Clear();
    this->txt_clientcity->Clear();
    this->mode = "add";
    return System::Void();
}


System::Void POOv2::ClientEdit::btn_Save_Adresse_Click(System::Object^ sender, System::EventArgs^ e)
{   
    this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
    this->ds = this->processusPersonnes->Ville("liste", this->txt_clientcity->Text);
    if (Convert::ToString(this->ds->Tables["liste"]->Rows[0]->ItemArray[0]) != "false")
    {
        this->processusPersonnes->ajouter_Client_Adresse(this->txt_clientadress->Text, this->txt_clientpc->Text, this->txt_clientcity->Text, Convert::ToInt32(this->txt_idclient->Text));
    }
    else
    {
        this->label1->Text = "Wrong city";
    }
    

    this->txt_clientadress->Clear();
    this->txt_clientpc->Clear();
    this->txt_clientcity->Clear();
    return System::Void();
}
