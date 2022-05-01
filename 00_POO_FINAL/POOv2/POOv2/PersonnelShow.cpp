/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#include "PersonnelShow.h"
#include "SQL.h"
using namespace System::Data;
using namespace System::Data::SqlClient;

System::Void POOv2::PersonnelShow::bt_button_Data_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	this->mode = "RIEN";
	this->ds = gcnew Data::DataSet();
	this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
	this->ds = this->processusPersonnes->liste_Personnel("liste");
	this->dataGridView1->DataSource = this->ds;
	this->dataGridView1->DataMember = "liste";
    return System::Void();
}
