/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#include "StatCA.h"
#include "SQL.h"

System::Void POOv2::StatCA::bt_StatCAValidate_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->ds = gcnew Data::DataSet();
    this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
    this->ds = this->processusPersonnes->Stat2("liste", this->txt_fisrtyear->Text, this->txt_firstmonth->Text, this->txt_firstday->Text, this->txt_lastyear->Text, this->txt_lastmonth->Text, this->txt_lastday->Text);

    this->txt_revenue->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[0]->ItemArray[0]);

    return System::Void();
}
