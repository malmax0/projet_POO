/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#include "StatShow.h"
#include "SQL.h"

int POOv2::StatShow::getetat()
{
	return *etat;
}

void POOv2::StatShow::setetat(int *a)
{
	etat = a;
}

System::Void POOv2::StatShow::bt_button_Data_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->ds = gcnew Data::DataSet();
	this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
	if (this->getetat() == 1)
	{
		this->ds = this->processusPersonnes->Stat1("liste");
		this->dataGridView1->DataSource = this->ds;
		this->dataGridView1->DataMember = "liste";
	}
	else if (this->getetat() == 2)
	{
		this->ds = this->processusPersonnes->Stat3("liste");
		this->dataGridView1->DataSource = this->ds;
		this->dataGridView1->DataMember = "liste";
	}
	else if (this->getetat() == 3)
	{
		this->ds = this->processusPersonnes->Stat5("liste");
		this->dataGridView1->DataSource = this->ds;
		this->dataGridView1->DataMember = "liste";
	}
	else if (this->getetat() == 4)
	{
		this->ds = this->processusPersonnes->Stat6("liste");
		this->dataGridView1->DataSource = this->ds;
		this->dataGridView1->DataMember = "liste";
	}
	else if (this->getetat() == 5)
	{
		this->ds = this->processusPersonnes->Stat7("liste");
		this->dataGridView1->DataSource = this->ds;
		this->dataGridView1->DataMember = "liste";
	}
	else
	{
		this->ds = this->processusPersonnes->Stat8("liste");
		this->dataGridView1->DataSource = this->ds;
		this->dataGridView1->DataMember = "liste";
	}
	
	
	return System::Void();
}


