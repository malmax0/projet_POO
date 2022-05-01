/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#include "DomainePP.h"

void POOv2::DomainePP::setselect(String^* a)
{
    DomaineSelected = a;
}

void POOv2::DomainePP::setstop(int* b)
{
    stop = b;
}

void POOv2::DomainePP::setaction(String^* c)
{
    action = c;
}

System::Void POOv2::DomainePP::bt_DomainePPValidate2_Click(System::Object^ sender, System::EventArgs^ e)
{
    
    *DomaineSelected = Convert::ToString(cb_domaine->SelectedItem);
    *action = Convert::ToString(cb_actions->SelectedItem);
    this->Close();
   
}

System::Void POOv2::DomainePP::bt_Disconnect_Click(System::Object^ sender, System::EventArgs^ e)
{
    *stop = 1;
    this->Close();
}
