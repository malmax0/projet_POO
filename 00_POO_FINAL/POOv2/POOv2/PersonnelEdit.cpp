/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#include "PersonnelEdit.h"
#include "SQL.h"

System::Void POOv2::PersonnelEdit::btn_save_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->ds = gcnew Data::DataSet();
    this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
    String^ date;
    if (this->mode == "add")
    {
        date = this->txt_dateyear->Text + "-" + this->txt_datemonth->Text + "-" + this->txt_dateday->Text;
        this->processusPersonnes->ajouter_Personnel(this->txt_stafflastname->Text, this->txt_stafffirstname->Text, this->txt_staffadress->Text, this->txt_staffpc->Text, this->txt_staffcity->Text, date, this->txt_superior->Text);
    }
    else if (this->mode == "edit")
    {
        date = this->txt_dateyear->Text + "-" + this->txt_datemonth->Text + "-" + this->txt_dateday->Text;
        this->processusPersonnes->modifier_Personnel(Convert::ToInt32(this->txt_idstaff->Text), this->txt_stafflastname->Text, this->txt_stafffirstname->Text, this->txt_staffadress->Text, this->txt_staffpc->Text, this->txt_staffcity->Text, date, this->txt_superior->Text);
    }
    else if (this->mode == "del")
    {
        this->processusPersonnes->supprimer_Personnel(Convert::ToInt32(this->txt_idstaff->Text));
    }
    return System::Void();
}


    

System::Void POOv2::PersonnelEdit::btn_edit_Click(System::Object^ sender, System::EventArgs^ e)
{
    
    this->txt_idstaff->Clear();
    this->txt_stafffirstname->Clear();
    this->txt_stafflastname->Clear();
    this->txt_dateday->Clear();
    this->txt_datemonth->Clear();
    this->txt_dateyear->Clear();
    this->txt_superior->Clear();
    this->txt_staffadress->Clear();
    this->txt_staffpc->Clear();
    this->txt_staffcity->Clear();
    this->mode = "edit";
    return System::Void();
}

System::Void POOv2::PersonnelEdit::btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->txt_idstaff->Clear();
    this->txt_stafffirstname->Clear();
    this->txt_stafflastname->Clear();
    this->txt_dateday->Clear();
    this->txt_datemonth->Clear();
    this->txt_dateyear->Clear();
    this->txt_superior->Clear();
    this->txt_staffadress->Clear();
    this->txt_staffpc->Clear();
    this->txt_staffcity->Clear();
    this->mode = "del";
    return System::Void();
}

System::Void POOv2::PersonnelEdit::btn_add_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->txt_idstaff->Clear();
    this->txt_stafffirstname->Clear();
    this->txt_stafflastname->Clear();
    this->txt_dateday->Clear();
    this->txt_datemonth->Clear();
    this->txt_dateyear->Clear();
    this->txt_superior->Clear();
    this->txt_staffadress->Clear();
    this->txt_staffpc->Clear();
    this->txt_staffcity->Clear();
    this->mode = "add";
    return System::Void();
}
