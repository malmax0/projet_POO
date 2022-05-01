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
	/// Description résumée de PersonnelEdit
	/// </summary>
	public ref class PersonnelEdit : public System::Windows::Forms::Form
	{
	public:
		PersonnelEdit(void)
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
		~PersonnelEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_staffpc;
	protected:

	private: System::Windows::Forms::Label^ lbl_staffpc;
	private: System::Windows::Forms::TextBox^ txt_staffcity;
	protected:


	private: System::Windows::Forms::Label^ lbl_staffcity;

	private: System::Windows::Forms::TextBox^ txt_staffadress;

	private: System::Windows::Forms::Label^ lbl_staffadress;




	private: System::Windows::Forms::Label^ lbl_hiredate;

	private: System::Windows::Forms::TextBox^ txt_stafffirstname;

	private: System::Windows::Forms::TextBox^ txt_idstaff;
	private: System::Windows::Forms::TextBox^ txt_stafflastname;
	private: System::Windows::Forms::Button^ bt_staffsave;




	private: System::Windows::Forms::Button^ bt_staffdelete;

	private: System::Windows::Forms::Button^ bt_staffedit;

	private: System::Windows::Forms::Button^ bt_staffadd;

	private: System::Windows::Forms::Label^ lbl_lastname;
	private: System::Windows::Forms::Label^ lbl_stafffirstname;

	private: System::Windows::Forms::Label^ lbl_idstaff;
	private: System::Windows::Forms::TextBox^ txt_superior;

	private: System::Windows::Forms::Label^ lbl_superior;
	private: System::Windows::Forms::TextBox^ txt_dateday;
	private: System::Windows::Forms::TextBox^ txt_dateyear;
	private: System::Windows::Forms::TextBox^ txt_datemonth;
	private: NS_Svc::CL_svc_gestionPersonnes^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: String^ mode;


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
			this->txt_staffpc = (gcnew System::Windows::Forms::TextBox());
			this->lbl_staffpc = (gcnew System::Windows::Forms::Label());
			this->txt_staffcity = (gcnew System::Windows::Forms::TextBox());
			this->lbl_staffcity = (gcnew System::Windows::Forms::Label());
			this->txt_staffadress = (gcnew System::Windows::Forms::TextBox());
			this->lbl_staffadress = (gcnew System::Windows::Forms::Label());
			this->lbl_hiredate = (gcnew System::Windows::Forms::Label());
			this->txt_stafffirstname = (gcnew System::Windows::Forms::TextBox());
			this->txt_idstaff = (gcnew System::Windows::Forms::TextBox());
			this->txt_stafflastname = (gcnew System::Windows::Forms::TextBox());
			this->bt_staffsave = (gcnew System::Windows::Forms::Button());
			this->bt_staffdelete = (gcnew System::Windows::Forms::Button());
			this->bt_staffedit = (gcnew System::Windows::Forms::Button());
			this->bt_staffadd = (gcnew System::Windows::Forms::Button());
			this->lbl_lastname = (gcnew System::Windows::Forms::Label());
			this->lbl_stafffirstname = (gcnew System::Windows::Forms::Label());
			this->lbl_idstaff = (gcnew System::Windows::Forms::Label());
			this->txt_superior = (gcnew System::Windows::Forms::TextBox());
			this->lbl_superior = (gcnew System::Windows::Forms::Label());
			this->txt_dateday = (gcnew System::Windows::Forms::TextBox());
			this->txt_dateyear = (gcnew System::Windows::Forms::TextBox());
			this->txt_datemonth = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txt_staffpc
			// 
			this->txt_staffpc->Location = System::Drawing::Point(260, 176);
			this->txt_staffpc->Margin = System::Windows::Forms::Padding(4);
			this->txt_staffpc->Name = L"txt_staffpc";
			this->txt_staffpc->Size = System::Drawing::Size(132, 22);
			this->txt_staffpc->TabIndex = 41;
			// 
			// lbl_staffpc
			// 
			this->lbl_staffpc->AutoSize = true;
			this->lbl_staffpc->Location = System::Drawing::Point(256, 158);
			this->lbl_staffpc->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_staffpc->Name = L"lbl_staffpc";
			this->lbl_staffpc->Size = System::Drawing::Size(84, 17);
			this->lbl_staffpc->TabIndex = 40;
			this->lbl_staffpc->Text = L"Postal Code";
			// 
			// txt_staffcity
			// 
			this->txt_staffcity->Location = System::Drawing::Point(260, 244);
			this->txt_staffcity->Margin = System::Windows::Forms::Padding(4);
			this->txt_staffcity->Name = L"txt_staffcity";
			this->txt_staffcity->Size = System::Drawing::Size(132, 22);
			this->txt_staffcity->TabIndex = 39;
			// 
			// lbl_staffcity
			// 
			this->lbl_staffcity->AutoSize = true;
			this->lbl_staffcity->Location = System::Drawing::Point(256, 225);
			this->lbl_staffcity->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_staffcity->Name = L"lbl_staffcity";
			this->lbl_staffcity->Size = System::Drawing::Size(31, 17);
			this->lbl_staffcity->TabIndex = 38;
			this->lbl_staffcity->Text = L"City";
			// 
			// txt_staffadress
			// 
			this->txt_staffadress->Location = System::Drawing::Point(260, 108);
			this->txt_staffadress->Margin = System::Windows::Forms::Padding(4);
			this->txt_staffadress->Name = L"txt_staffadress";
			this->txt_staffadress->Size = System::Drawing::Size(132, 22);
			this->txt_staffadress->TabIndex = 37;
			// 
			// lbl_staffadress
			// 
			this->lbl_staffadress->AutoSize = true;
			this->lbl_staffadress->Location = System::Drawing::Point(256, 90);
			this->lbl_staffadress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_staffadress->Name = L"lbl_staffadress";
			this->lbl_staffadress->Size = System::Drawing::Size(52, 17);
			this->lbl_staffadress->TabIndex = 36;
			this->lbl_staffadress->Text = L"Adress";
			// 
			// lbl_hiredate
			// 
			this->lbl_hiredate->AutoSize = true;
			this->lbl_hiredate->Location = System::Drawing::Point(29, 225);
			this->lbl_hiredate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_hiredate->Name = L"lbl_hiredate";
			this->lbl_hiredate->Size = System::Drawing::Size(140, 14);
			this->lbl_hiredate->TabIndex = 34;
			this->lbl_hiredate->Text = L"Hire Date (DD/MM/YYYY)";
			this->lbl_hiredate->Click += gcnew System::EventHandler(this, &PersonnelEdit::lbl_hiredate_Click);
			// 
			// txt_stafffirstname
			// 
			this->txt_stafffirstname->Location = System::Drawing::Point(32, 108);
			this->txt_stafffirstname->Margin = System::Windows::Forms::Padding(4);
			this->txt_stafffirstname->Name = L"txt_stafffirstname";
			this->txt_stafffirstname->Size = System::Drawing::Size(132, 22);
			this->txt_stafffirstname->TabIndex = 33;
			// 
			// txt_idstaff
			// 
			this->txt_idstaff->Location = System::Drawing::Point(32, 42);
			this->txt_idstaff->Margin = System::Windows::Forms::Padding(4);
			this->txt_idstaff->Name = L"txt_idstaff";
			this->txt_idstaff->Size = System::Drawing::Size(132, 22);
			this->txt_idstaff->TabIndex = 32;
			// 
			// txt_stafflastname
			// 
			this->txt_stafflastname->Location = System::Drawing::Point(32, 176);
			this->txt_stafflastname->Margin = System::Windows::Forms::Padding(4);
			this->txt_stafflastname->Name = L"txt_stafflastname";
			this->txt_stafflastname->Size = System::Drawing::Size(132, 22);
			this->txt_stafflastname->TabIndex = 31;
			// 
			// bt_staffsave
			// 
			this->bt_staffsave->Location = System::Drawing::Point(664, 42);
			this->bt_staffsave->Margin = System::Windows::Forms::Padding(4);
			this->bt_staffsave->Name = L"bt_staffsave";
			this->bt_staffsave->Size = System::Drawing::Size(119, 226);
			this->bt_staffsave->TabIndex = 30;
			this->bt_staffsave->Text = L"Save";
			this->bt_staffsave->UseVisualStyleBackColor = true;
			this->bt_staffsave->Click += gcnew System::EventHandler(this, &PersonnelEdit::btn_save_Click);
			// 
			// bt_staffdelete
			// 
			this->bt_staffdelete->Location = System::Drawing::Point(495, 215);
			this->bt_staffdelete->Margin = System::Windows::Forms::Padding(4);
			this->bt_staffdelete->Name = L"bt_staffdelete";
			this->bt_staffdelete->Size = System::Drawing::Size(100, 53);
			this->bt_staffdelete->TabIndex = 29;
			this->bt_staffdelete->Text = L"Delete";
			this->bt_staffdelete->UseVisualStyleBackColor = true;
			this->bt_staffdelete->Click += gcnew System::EventHandler(this, &PersonnelEdit::btn_delete_Click);
			// 
			// bt_staffedit
			// 
			this->bt_staffedit->Location = System::Drawing::Point(495, 129);
			this->bt_staffedit->Margin = System::Windows::Forms::Padding(4);
			this->bt_staffedit->Name = L"bt_staffedit";
			this->bt_staffedit->Size = System::Drawing::Size(100, 53);
			this->bt_staffedit->TabIndex = 28;
			this->bt_staffedit->Text = L"Edit";
			this->bt_staffedit->UseVisualStyleBackColor = true;
			this->bt_staffedit->Click += gcnew System::EventHandler(this, &PersonnelEdit::btn_edit_Click);
			// 
			// bt_staffadd
			// 
			this->bt_staffadd->Location = System::Drawing::Point(495, 42);
			this->bt_staffadd->Margin = System::Windows::Forms::Padding(4);
			this->bt_staffadd->Name = L"bt_staffadd";
			this->bt_staffadd->Size = System::Drawing::Size(100, 53);
			this->bt_staffadd->TabIndex = 27;
			this->bt_staffadd->Text = L"Add";
			this->bt_staffadd->UseVisualStyleBackColor = true;
			this->bt_staffadd->Click += gcnew System::EventHandler(this, &PersonnelEdit::btn_add_Click);
			// 
			// lbl_lastname
			// 
			this->lbl_lastname->AutoSize = true;
			this->lbl_lastname->Location = System::Drawing::Point(28, 158);
			this->lbl_lastname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_lastname->Name = L"lbl_lastname";
			this->lbl_lastname->Size = System::Drawing::Size(76, 17);
			this->lbl_lastname->TabIndex = 26;
			this->lbl_lastname->Text = L"Last Name";
			// 
			// lbl_stafffirstname
			// 
			this->lbl_stafffirstname->AutoSize = true;
			this->lbl_stafffirstname->Location = System::Drawing::Point(28, 90);
			this->lbl_stafffirstname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_stafffirstname->Name = L"lbl_stafffirstname";
			this->lbl_stafffirstname->Size = System::Drawing::Size(76, 17);
			this->lbl_stafffirstname->TabIndex = 25;
			this->lbl_stafffirstname->Text = L"First Name";
			// 
			// lbl_idstaff
			// 
			this->lbl_idstaff->AutoSize = true;
			this->lbl_idstaff->Location = System::Drawing::Point(29, 23);
			this->lbl_idstaff->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_idstaff->Name = L"lbl_idstaff";
			this->lbl_idstaff->Size = System::Drawing::Size(54, 17);
			this->lbl_idstaff->TabIndex = 24;
			this->lbl_idstaff->Text = L"ID Staff";
			// 
			// txt_superior
			// 
			this->txt_superior->Location = System::Drawing::Point(260, 42);
			this->txt_superior->Margin = System::Windows::Forms::Padding(4);
			this->txt_superior->Name = L"txt_superior";
			this->txt_superior->Size = System::Drawing::Size(132, 22);
			this->txt_superior->TabIndex = 43;
			// 
			// lbl_superior
			// 
			this->lbl_superior->AutoSize = true;
			this->lbl_superior->Location = System::Drawing::Point(256, 23);
			this->lbl_superior->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_superior->Name = L"lbl_superior";
			this->lbl_superior->Size = System::Drawing::Size(79, 17);
			this->lbl_superior->TabIndex = 42;
			this->lbl_superior->Text = L"ID Superior";
			// 
			// txt_dateday
			// 
			this->txt_dateday->Location = System::Drawing::Point(31, 244);
			this->txt_dateday->Margin = System::Windows::Forms::Padding(4);
			this->txt_dateday->Name = L"txt_dateday";
			this->txt_dateday->Size = System::Drawing::Size(44, 22);
			this->txt_dateday->TabIndex = 51;
			// 
			// txt_dateyear
			// 
			this->txt_dateyear->Location = System::Drawing::Point(139, 244);
			this->txt_dateyear->Margin = System::Windows::Forms::Padding(4);
			this->txt_dateyear->Name = L"txt_dateyear";
			this->txt_dateyear->Size = System::Drawing::Size(45, 22);
			this->txt_dateyear->TabIndex = 50;
			// 
			// txt_datemonth
			// 
			this->txt_datemonth->Location = System::Drawing::Point(85, 244);
			this->txt_datemonth->Margin = System::Windows::Forms::Padding(4);
			this->txt_datemonth->Name = L"txt_datemonth";
			this->txt_datemonth->Size = System::Drawing::Size(45, 22);
			this->txt_datemonth->TabIndex = 49;
			// 
			// PersonnelEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(833, 311);
			this->Controls->Add(this->txt_dateday);
			this->Controls->Add(this->txt_dateyear);
			this->Controls->Add(this->txt_datemonth);
			this->Controls->Add(this->txt_superior);
			this->Controls->Add(this->lbl_superior);
			this->Controls->Add(this->txt_staffpc);
			this->Controls->Add(this->lbl_staffpc);
			this->Controls->Add(this->txt_staffcity);
			this->Controls->Add(this->lbl_staffcity);
			this->Controls->Add(this->txt_staffadress);
			this->Controls->Add(this->lbl_staffadress);
			this->Controls->Add(this->lbl_hiredate);
			this->Controls->Add(this->txt_stafffirstname);
			this->Controls->Add(this->txt_idstaff);
			this->Controls->Add(this->txt_stafflastname);
			this->Controls->Add(this->bt_staffsave);
			this->Controls->Add(this->bt_staffdelete);
			this->Controls->Add(this->bt_staffedit);
			this->Controls->Add(this->bt_staffadd);
			this->Controls->Add(this->lbl_lastname);
			this->Controls->Add(this->lbl_stafffirstname);
			this->Controls->Add(this->lbl_idstaff);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PersonnelEdit";
			this->Text = L"PersonnelEdit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_edit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void lbl_hiredate_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
