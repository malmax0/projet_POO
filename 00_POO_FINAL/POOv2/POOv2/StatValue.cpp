/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#include "StatValue.h"
#include "SQL.h"

System::Void POOv2::StatValue::bt_StatValueValidate_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->ds = gcnew Data::DataSet();
    this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
    this->ds = this->processusPersonnes->Stat9("liste", this->txt_VAT->Text, Convert::ToString(this->cb_SalesMargin->SelectedItem), Convert::ToString(this->comboBox1->SelectedItem), Convert::ToString(this->comboBox2->SelectedItem));
    this->txt_StockValue->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[0]->ItemArray[0]);
    
    return System::Void();
}
