/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#include "StockEdit.h"
#include "SQL.h"

System::Void POOv2::StockEdit::btn_save_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->ds = gcnew Data::DataSet();
    this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
    if (this->mode == "add")
    {
        this->processusPersonnes->ajouter_Catalogue(this->txt_itemname->Text, this->txt_exclusivetaxes->Text, this->txt_stockquantity->Text, this->txt_vat->Text);
    }
    else if (this->mode == "edit")
    {
        this->processusPersonnes->modifier_Catalogue(Convert::ToInt32(this->txt_iditemstock->Text), this->txt_itemname->Text, this->txt_exclusivetaxes->Text, this->txt_stockquantity->Text, this->txt_vat->Text);
    }
    else if (this->mode == "del")
    {
        this->processusPersonnes->supprimer_Catalogue(Convert::ToInt32(this->txt_iditemstock->Text));
    }
    return System::Void();
}

System::Void POOv2::StockEdit::btn_edit_Click(System::Object^ sender, System::EventArgs^ e)
{

    this->txt_itemname->Clear();
    this->txt_exclusivetaxes->Clear();
    this->txt_stockquantity->Clear();
    this->txt_vat->Clear();
    this->mode = "edit";
    return System::Void();
}

System::Void POOv2::StockEdit::btn_del_Click(System::Object^ sender, System::EventArgs^ e)
{
    
    this->txt_itemname->Clear();
    this->txt_exclusivetaxes->Clear();
    this->txt_stockquantity->Clear();
    this->txt_vat->Clear();
    this->mode = "del";
    return System::Void();
}

System::Void POOv2::StockEdit::btn_add_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->txt_iditemstock->Clear();
    this->txt_itemname->Clear();
    this->txt_exclusivetaxes->Clear();
    this->txt_stockquantity->Clear();
    this->txt_vat->Clear();
    this->mode = "add";
    return System::Void();
}
