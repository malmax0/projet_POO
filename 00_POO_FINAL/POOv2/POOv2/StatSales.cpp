/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#include "StatSales.h"
#include "SQL.h"

System::Void POOv2::StatSales::bt_StatSalesValidate_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->ds = gcnew Data::DataSet();
    this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
    this->ds = this->processusPersonnes->Stat4("liste", this->txt_IDclient->Text);
    this->textBox1->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[0]->ItemArray[0]);

    return System::Void();
}
