/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#include "CommandeEdit.h"
#include "SQL.h"

int tab_billing[100];
int tab_delivery[100];
System::Void POOv2::CommandeEdit::btn_save_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->ds = gcnew Data::DataSet();
    this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
    if (this->mode == "add")
    {
        this->txt_idorder->Text = this->processusPersonnes->ajouter_Commande(this->txt_dateyear->Text, this->txt_datemonth->Text, this->txt_dateday->Text, Convert::ToString(this->cb_meansofpayment->SelectedItem), this->txt_clientpc->Text, Convert::ToString(tab_billing[this->cb_billingaddress->SelectedIndex]), Convert::ToString(tab_delivery[this->cb_deliveryaddress->SelectedIndex]), this->txt_percentagediscount->Text, this->txt_idclientorder->Text);
    }
    else if (this->mode == "edit")
    {
        this->processusPersonnes->modifier_Commande(Convert::ToInt32(this->txt_idorder->Text), this->txt_dateyear->Text, this->txt_datemonth->Text, this->txt_dateday->Text, Convert::ToString(this->cb_meansofpayment->SelectedItem), this->txt_clientpc->Text, Convert::ToString(tab_billing[this->cb_billingaddress->SelectedIndex]), Convert::ToString(tab_delivery[this->cb_deliveryaddress->SelectedIndex]), this->txt_percentagediscount->Text);
    }
    else if (this->mode == "del")
    {
        this->processusPersonnes->supprimer_Article(Convert::ToInt32(this->txt_idorder->Text));
        this->processusPersonnes->supprimer_Commande(Convert::ToInt32(this->txt_idorder->Text));
    }
    return System::Void();
}




System::Void POOv2::CommandeEdit::btn_edit_Click(System::Object^ sender, System::EventArgs^ e)
{

    this->txt_idorder->Clear();
    this->txt_idclientorder->Clear();
    this->txt_clientpc->Clear();
    this->txt_datemonth->Clear();
    this->txt_dateyear->Clear();
    this->txt_dateday->Clear();
    this->txt_percentagediscount->Clear();
    this->txt_quantityorder->Clear();
    this->txt_iditemorder->Clear();
    this->txt_clientpc->Clear();
    this->mode = "edit";
    return System::Void();
}

System::Void POOv2::CommandeEdit::btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->txt_idorder->Clear();
    this->txt_idclientorder->Clear();
    this->txt_clientpc->Clear();
    this->txt_datemonth->Clear();
    this->txt_dateyear->Clear();
    this->txt_dateday->Clear();
    this->txt_percentagediscount->Clear();
    this->txt_quantityorder->Clear();
    this->txt_iditemorder->Clear();
    this->txt_clientpc->Clear();
    this->mode = "del";
    return System::Void();
}

System::Void POOv2::CommandeEdit::btn_add_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->txt_idorder->Clear();
    this->txt_idclientorder->Clear();
    this->txt_clientpc->Clear();
    this->txt_datemonth->Clear();
    this->txt_dateyear->Clear();
    this->txt_dateday->Clear();
    this->txt_percentagediscount->Clear();
    this->txt_iditemorder->Clear();
    this->txt_clientpc->Clear();
    this->mode = "add";
    return System::Void();
}

System::Void POOv2::CommandeEdit::btn_Id_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->cb_billingaddress->Items->Clear();
    this->cb_deliveryaddress->Items->Clear();
    this->ds = gcnew Data::DataSet();
    this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
    this->ds = this->processusPersonnes->liste_Adresse("liste", this->txt_idclientorder->Text);
    for (int i = 0; i < this->ds->Tables["liste"]->Rows->Count ; i++)
    {
        this->cb_billingaddress->Items->Add(Convert::ToString(this->ds->Tables["liste"]->Rows[i]->ItemArray[0]));
        tab_billing[i] = Convert::ToInt32(this->ds->Tables["liste"]->Rows[i]->ItemArray[1]);
        this->cb_deliveryaddress->Items->Add(Convert::ToString(this->ds->Tables["liste"]->Rows[i]->ItemArray[0]));
        tab_delivery[i] = Convert::ToInt32(this->ds->Tables["liste"]->Rows[i]->ItemArray[1]);
    }
    return System::Void();
    
}


System::Void POOv2::CommandeEdit::btn_Save_Article_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
    this->processusPersonnes->ajouter_Article(this->txt_iditemorder->Text, this->txt_quantityorder->Text, this->txt_idorder->Text);
    
    this->txt_iditemorder->Clear();
    this->txt_quantityorder->Clear();
    return System::Void();
}
