/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#include "login.h"

void POOv2::login::seti(int* a)
{
	i = a;
}

int POOv2::login::geti()
{
	return *i;
}

System::Void POOv2::login::bt_connect_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (txt_username->Text == "admin" && txt_mdp->Text == "nimda")
	{
		*i = 3;
		this->Close();
	}else if (txt_username->Text == "RH" && txt_mdp->Text == "HR")
	{
		*i = 2;
		this->Close();
	}else if (txt_username->Text == "comercial" && txt_mdp->Text == "laicremoc")
	{
		*i = 1;
		this->Close();
	}
	else {
		this->labelLogin->Text = L"Username or password invalid";
	}
}
