﻿/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#include "CommandShow.h"
#include "SQL.h"

System::Void POOv2::CommandShow::bt_button_Data_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->ds = gcnew Data::DataSet();
	this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
	this->ds = this->processusPersonnes->liste_Commande("liste");
	this->dataGridView1->DataSource = this->ds;
	this->dataGridView1->DataMember = "liste";
	return System::Void();
}
