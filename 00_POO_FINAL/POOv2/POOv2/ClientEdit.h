/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#pragma once
#include "SQL.h"

namespace POOv2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ClientEdit
	/// </summary>
	public ref class ClientEdit : public System::Windows::Forms::Form
	{
	public:
		ClientEdit(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ClientEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_idclient;
	private: System::Windows::Forms::Label^ lbl_firstname;
	private: System::Windows::Forms::Label^ lbl_lastname;
	protected:

	protected:



	protected:

	protected:

	protected:

	protected:


	private: System::Windows::Forms::Button^ bt_clientadd;
	private: System::Windows::Forms::Button^ bt_clientedit;
	private: System::Windows::Forms::Button^ bt_clientdelete;
	private: System::Windows::Forms::Button^ bt_clientsave;
	private: System::Windows::Forms::TextBox^ txt_clientlastname;









	private: System::Windows::Forms::TextBox^ txt_idclient;
	private: System::Windows::Forms::TextBox^ txt_clientfirstname;






	private: System::Windows::Forms::Label^ lbl_birthdate;

	private: System::Windows::Forms::Label^ lbl_adress;
	private: System::Windows::Forms::TextBox^ txt_clientcity;

	private: System::Windows::Forms::Label^ lbl_city;
	private: System::Windows::Forms::TextBox^ txt_clientpc;



	private: System::Windows::Forms::Label^ lbl_pc;



	private: System::Windows::Forms::TextBox^ txt_clientadress;


	private: NS_Svc::CL_svc_gestionPersonnes^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: String^ mode;
	private: System::Windows::Forms::Button^ bt_Save_Adresse;
	private: System::Windows::Forms::TextBox^ txt_dateday;
	private: System::Windows::Forms::TextBox^ txt_dateyear;
	private: System::Windows::Forms::TextBox^ txt_datemonth;
	private: System::Windows::Forms::Label^ label1;







	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_idclient = (gcnew System::Windows::Forms::Label());
			this->lbl_firstname = (gcnew System::Windows::Forms::Label());
			this->lbl_lastname = (gcnew System::Windows::Forms::Label());
			this->bt_clientadd = (gcnew System::Windows::Forms::Button());
			this->bt_clientedit = (gcnew System::Windows::Forms::Button());
			this->bt_clientdelete = (gcnew System::Windows::Forms::Button());
			this->bt_clientsave = (gcnew System::Windows::Forms::Button());
			this->txt_clientlastname = (gcnew System::Windows::Forms::TextBox());
			this->txt_idclient = (gcnew System::Windows::Forms::TextBox());
			this->txt_clientfirstname = (gcnew System::Windows::Forms::TextBox());
			this->lbl_birthdate = (gcnew System::Windows::Forms::Label());
			this->lbl_adress = (gcnew System::Windows::Forms::Label());
			this->txt_clientcity = (gcnew System::Windows::Forms::TextBox());
			this->lbl_city = (gcnew System::Windows::Forms::Label());
			this->txt_clientpc = (gcnew System::Windows::Forms::TextBox());
			this->lbl_pc = (gcnew System::Windows::Forms::Label());
			this->txt_clientadress = (gcnew System::Windows::Forms::TextBox());
			this->bt_Save_Adresse = (gcnew System::Windows::Forms::Button());
			this->txt_dateday = (gcnew System::Windows::Forms::TextBox());
			this->txt_dateyear = (gcnew System::Windows::Forms::TextBox());
			this->txt_datemonth = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_idclient
			// 
			this->lbl_idclient->AutoSize = true;
			this->lbl_idclient->Location = System::Drawing::Point(25, 23);
			this->lbl_idclient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_idclient->Name = L"lbl_idclient";
			this->lbl_idclient->Size = System::Drawing::Size(60, 17);
			this->lbl_idclient->TabIndex = 0;
			this->lbl_idclient->Text = L"ID Client";
			// 
			// lbl_firstname
			// 
			this->lbl_firstname->AutoSize = true;
			this->lbl_firstname->Location = System::Drawing::Point(24, 91);
			this->lbl_firstname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_firstname->Name = L"lbl_firstname";
			this->lbl_firstname->Size = System::Drawing::Size(76, 17);
			this->lbl_firstname->TabIndex = 1;
			this->lbl_firstname->Text = L"First Name";
			// 
			// lbl_lastname
			// 
			this->lbl_lastname->AutoSize = true;
			this->lbl_lastname->Location = System::Drawing::Point(24, 159);
			this->lbl_lastname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_lastname->Name = L"lbl_lastname";
			this->lbl_lastname->Size = System::Drawing::Size(76, 17);
			this->lbl_lastname->TabIndex = 2;
			this->lbl_lastname->Text = L"Last Name";
			// 
			// bt_clientadd
			// 
			this->bt_clientadd->Location = System::Drawing::Point(528, 44);
			this->bt_clientadd->Margin = System::Windows::Forms::Padding(4);
			this->bt_clientadd->Name = L"bt_clientadd";
			this->bt_clientadd->Size = System::Drawing::Size(100, 53);
			this->bt_clientadd->TabIndex = 6;
			this->bt_clientadd->Text = L"Add";
			this->bt_clientadd->UseVisualStyleBackColor = true;
			this->bt_clientadd->Click += gcnew System::EventHandler(this, &ClientEdit::btn_add_Click);
			// 
			// bt_clientedit
			// 
			this->bt_clientedit->Location = System::Drawing::Point(528, 132);
			this->bt_clientedit->Margin = System::Windows::Forms::Padding(4);
			this->bt_clientedit->Name = L"bt_clientedit";
			this->bt_clientedit->Size = System::Drawing::Size(100, 53);
			this->bt_clientedit->TabIndex = 7;
			this->bt_clientedit->Text = L"Edit";
			this->bt_clientedit->UseVisualStyleBackColor = true;
			this->bt_clientedit->Click += gcnew System::EventHandler(this, &ClientEdit::btn_edit_Click);
			// 
			// bt_clientdelete
			// 
			this->bt_clientdelete->Location = System::Drawing::Point(528, 218);
			this->bt_clientdelete->Margin = System::Windows::Forms::Padding(4);
			this->bt_clientdelete->Name = L"bt_clientdelete";
			this->bt_clientdelete->Size = System::Drawing::Size(100, 53);
			this->bt_clientdelete->TabIndex = 8;
			this->bt_clientdelete->Text = L"Delete";
			this->bt_clientdelete->UseVisualStyleBackColor = true;
			this->bt_clientdelete->Click += gcnew System::EventHandler(this, &ClientEdit::btn_del_Click);
			// 
			// bt_clientsave
			// 
			this->bt_clientsave->Location = System::Drawing::Point(685, 44);
			this->bt_clientsave->Margin = System::Windows::Forms::Padding(4);
			this->bt_clientsave->Name = L"bt_clientsave";
			this->bt_clientsave->Size = System::Drawing::Size(119, 226);
			this->bt_clientsave->TabIndex = 9;
			this->bt_clientsave->Text = L"Save";
			this->bt_clientsave->UseVisualStyleBackColor = true;
			this->bt_clientsave->Click += gcnew System::EventHandler(this, &ClientEdit::btn_save_Click);
			// 
			// txt_clientlastname
			// 
			this->txt_clientlastname->Location = System::Drawing::Point(28, 178);
			this->txt_clientlastname->Margin = System::Windows::Forms::Padding(4);
			this->txt_clientlastname->Name = L"txt_clientlastname";
			this->txt_clientlastname->Size = System::Drawing::Size(132, 22);
			this->txt_clientlastname->TabIndex = 10;
			// 
			// txt_idclient
			// 
			this->txt_idclient->Location = System::Drawing::Point(28, 44);
			this->txt_idclient->Margin = System::Windows::Forms::Padding(4);
			this->txt_idclient->Name = L"txt_idclient";
			this->txt_idclient->Size = System::Drawing::Size(132, 22);
			this->txt_idclient->TabIndex = 11;
			// 
			// txt_clientfirstname
			// 
			this->txt_clientfirstname->Location = System::Drawing::Point(28, 111);
			this->txt_clientfirstname->Margin = System::Windows::Forms::Padding(4);
			this->txt_clientfirstname->Name = L"txt_clientfirstname";
			this->txt_clientfirstname->Size = System::Drawing::Size(132, 22);
			this->txt_clientfirstname->TabIndex = 12;
			// 
			// lbl_birthdate
			// 
			this->lbl_birthdate->AutoSize = true;
			this->lbl_birthdate->Location = System::Drawing::Point(25, 226);
			this->lbl_birthdate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_birthdate->Name = L"lbl_birthdate";
			this->lbl_birthdate->Size = System::Drawing::Size(171, 17);
			this->lbl_birthdate->TabIndex = 13;
			this->lbl_birthdate->Text = L"Birth Date (DD/MM/YYYY)";
			this->lbl_birthdate->Click += gcnew System::EventHandler(this, &ClientEdit::lbl_birthdate_Click);
			// 
			// lbl_adress
			// 
			this->lbl_adress->AutoSize = true;
			this->lbl_adress->Location = System::Drawing::Point(253, 25);
			this->lbl_adress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_adress->Name = L"lbl_adress";
			this->lbl_adress->Size = System::Drawing::Size(52, 17);
			this->lbl_adress->TabIndex = 15;
			this->lbl_adress->Text = L"Adress";
			// 
			// txt_clientcity
			// 
			this->txt_clientcity->Location = System::Drawing::Point(256, 249);
			this->txt_clientcity->Margin = System::Windows::Forms::Padding(4);
			this->txt_clientcity->Name = L"txt_clientcity";
			this->txt_clientcity->Size = System::Drawing::Size(132, 22);
			this->txt_clientcity->TabIndex = 18;
			// 
			// lbl_city
			// 
			this->lbl_city->AutoSize = true;
			this->lbl_city->Location = System::Drawing::Point(252, 229);
			this->lbl_city->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_city->Name = L"lbl_city";
			this->lbl_city->Size = System::Drawing::Size(31, 17);
			this->lbl_city->TabIndex = 17;
			this->lbl_city->Text = L"City";
			// 
			// txt_clientpc
			// 
			this->txt_clientpc->Location = System::Drawing::Point(257, 150);
			this->txt_clientpc->Margin = System::Windows::Forms::Padding(4);
			this->txt_clientpc->Name = L"txt_clientpc";
			this->txt_clientpc->Size = System::Drawing::Size(132, 22);
			this->txt_clientpc->TabIndex = 20;
			// 
			// lbl_pc
			// 
			this->lbl_pc->AutoSize = true;
			this->lbl_pc->Location = System::Drawing::Point(253, 130);
			this->lbl_pc->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_pc->Name = L"lbl_pc";
			this->lbl_pc->Size = System::Drawing::Size(84, 17);
			this->lbl_pc->TabIndex = 19;
			this->lbl_pc->Text = L"Postal Code";
			// 
			// txt_clientadress
			// 
			this->txt_clientadress->Location = System::Drawing::Point(257, 44);
			this->txt_clientadress->Margin = System::Windows::Forms::Padding(4);
			this->txt_clientadress->Name = L"txt_clientadress";
			this->txt_clientadress->Size = System::Drawing::Size(132, 22);
			this->txt_clientadress->TabIndex = 16;
			// 
			// bt_Save_Adresse
			// 
			this->bt_Save_Adresse->Location = System::Drawing::Point(413, 148);
			this->bt_Save_Adresse->Name = L"bt_Save_Adresse";
			this->bt_Save_Adresse->Size = System::Drawing::Size(75, 23);
			this->bt_Save_Adresse->TabIndex = 21;
			this->bt_Save_Adresse->Text = L"Adress";
			this->bt_Save_Adresse->UseVisualStyleBackColor = true;
			this->bt_Save_Adresse->Click += gcnew System::EventHandler(this, &ClientEdit::btn_Save_Adresse_Click);
			// 
			// txt_dateday
			// 
			this->txt_dateday->Location = System::Drawing::Point(28, 249);
			this->txt_dateday->Margin = System::Windows::Forms::Padding(4);
			this->txt_dateday->Name = L"txt_dateday";
			this->txt_dateday->Size = System::Drawing::Size(44, 22);
			this->txt_dateday->TabIndex = 51;
			this->txt_dateday->TextChanged += gcnew System::EventHandler(this, &ClientEdit::txt_dateday_TextChanged);
			// 
			// txt_dateyear
			// 
			this->txt_dateyear->Location = System::Drawing::Point(136, 249);
			this->txt_dateyear->Margin = System::Windows::Forms::Padding(4);
			this->txt_dateyear->Name = L"txt_dateyear";
			this->txt_dateyear->Size = System::Drawing::Size(45, 22);
			this->txt_dateyear->TabIndex = 50;
			this->txt_dateyear->TextChanged += gcnew System::EventHandler(this, &ClientEdit::txt_dateyear_TextChanged);
			// 
			// txt_datemonth
			// 
			this->txt_datemonth->Location = System::Drawing::Point(82, 249);
			this->txt_datemonth->Margin = System::Windows::Forms::Padding(4);
			this->txt_datemonth->Name = L"txt_datemonth";
			this->txt_datemonth->Size = System::Drawing::Size(45, 22);
			this->txt_datemonth->TabIndex = 49;
			this->txt_datemonth->TextChanged += gcnew System::EventHandler(this, &ClientEdit::txt_datemonth_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(413, 178);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 52;
			this->label1->Click += gcnew System::EventHandler(this, &ClientEdit::label1_Click);
			// 
			// ClientEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 315);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_dateday);
			this->Controls->Add(this->txt_dateyear);
			this->Controls->Add(this->txt_datemonth);
			this->Controls->Add(this->bt_Save_Adresse);
			this->Controls->Add(this->txt_clientpc);
			this->Controls->Add(this->lbl_pc);
			this->Controls->Add(this->txt_clientcity);
			this->Controls->Add(this->lbl_city);
			this->Controls->Add(this->txt_clientadress);
			this->Controls->Add(this->lbl_adress);
			this->Controls->Add(this->lbl_birthdate);
			this->Controls->Add(this->txt_clientfirstname);
			this->Controls->Add(this->txt_idclient);
			this->Controls->Add(this->txt_clientlastname);
			this->Controls->Add(this->bt_clientsave);
			this->Controls->Add(this->bt_clientdelete);
			this->Controls->Add(this->bt_clientedit);
			this->Controls->Add(this->bt_clientadd);
			this->Controls->Add(this->lbl_lastname);
			this->Controls->Add(this->lbl_firstname);
			this->Controls->Add(this->lbl_idclient);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ClientEdit";
			this->Text = L"ClientEdit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_edit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_del_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_Save_Adresse_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void txt_dateday_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txt_datemonth_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txt_dateyear_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lbl_birthdate_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
