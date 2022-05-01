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
	/// Description résumée de StatCA
	/// </summary>
	public ref class StatCA : public System::Windows::Forms::Form
	{
	public:
		StatCA(void)
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
		~StatCA()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	protected:

	protected:



	private: System::Windows::Forms::Label^ lbl_revenue;
	private: System::Windows::Forms::TextBox^ txt_revenue;




	private: System::Windows::Forms::Button^ bt_StatCAValidate;









	private: System::Windows::Forms::Label^ lbl_to;
	private: System::Windows::Forms::TextBox^ txt_firstday;
	private: System::Windows::Forms::TextBox^ txt_fisrtyear;
	private: System::Windows::Forms::TextBox^ txt_firstmonth;
	private: System::Windows::Forms::Label^ lbl_fisrtdate;
	private: System::Windows::Forms::TextBox^ txt_lastday;
	private: System::Windows::Forms::TextBox^ txt_lastyear;
	private: System::Windows::Forms::TextBox^ txt_lastmonth;
	private: System::Windows::Forms::Label^ lbl_lastdate;
	private: NS_Svc::CL_svc_gestionPersonnes^ processusPersonnes;
	private: Data::DataSet^ ds;




	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_revenue = (gcnew System::Windows::Forms::Label());
			this->txt_revenue = (gcnew System::Windows::Forms::TextBox());
			this->bt_StatCAValidate = (gcnew System::Windows::Forms::Button());
			this->lbl_to = (gcnew System::Windows::Forms::Label());
			this->txt_firstday = (gcnew System::Windows::Forms::TextBox());
			this->txt_fisrtyear = (gcnew System::Windows::Forms::TextBox());
			this->txt_firstmonth = (gcnew System::Windows::Forms::TextBox());
			this->lbl_fisrtdate = (gcnew System::Windows::Forms::Label());
			this->txt_lastday = (gcnew System::Windows::Forms::TextBox());
			this->txt_lastyear = (gcnew System::Windows::Forms::TextBox());
			this->txt_lastmonth = (gcnew System::Windows::Forms::TextBox());
			this->lbl_lastdate = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_revenue
			// 
			this->lbl_revenue->AutoSize = true;
			this->lbl_revenue->Location = System::Drawing::Point(95, 332);
			this->lbl_revenue->Name = L"lbl_revenue";
			this->lbl_revenue->Size = System::Drawing::Size(193, 17);
			this->lbl_revenue->TabIndex = 4;
			this->lbl_revenue->Text = L"Revenue for a specific period";
			// 
			// txt_revenue
			// 
			this->txt_revenue->Location = System::Drawing::Point(336, 329);
			this->txt_revenue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_revenue->Name = L"txt_revenue";
			this->txt_revenue->Size = System::Drawing::Size(153, 22);
			this->txt_revenue->TabIndex = 5;
			// 
			// bt_StatCAValidate
			// 
			this->bt_StatCAValidate->Location = System::Drawing::Point(268, 244);
			this->bt_StatCAValidate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bt_StatCAValidate->Name = L"bt_StatCAValidate";
			this->bt_StatCAValidate->Size = System::Drawing::Size(85, 30);
			this->bt_StatCAValidate->TabIndex = 6;
			this->bt_StatCAValidate->Text = L"Validate";
			this->bt_StatCAValidate->UseVisualStyleBackColor = true;
			this->bt_StatCAValidate->Click += gcnew System::EventHandler(this, &StatCA::bt_StatCAValidate_Click);
			// 
			// lbl_to
			// 
			this->lbl_to->AutoSize = true;
			this->lbl_to->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_to->Location = System::Drawing::Point(297, 169);
			this->lbl_to->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_to->Name = L"lbl_to";
			this->lbl_to->Size = System::Drawing::Size(28, 18);
			this->lbl_to->TabIndex = 11;
			this->lbl_to->Text = L"To";
			this->lbl_to->Click += gcnew System::EventHandler(this, &StatCA::label3_Click);
			// 
			// txt_firstday
			// 
			this->txt_firstday->Location = System::Drawing::Point(64, 169);
			this->txt_firstday->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_firstday->Name = L"txt_firstday";
			this->txt_firstday->Size = System::Drawing::Size(44, 22);
			this->txt_firstday->TabIndex = 52;
			// 
			// txt_fisrtyear
			// 
			this->txt_fisrtyear->Location = System::Drawing::Point(172, 169);
			this->txt_fisrtyear->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_fisrtyear->Name = L"txt_fisrtyear";
			this->txt_fisrtyear->Size = System::Drawing::Size(45, 22);
			this->txt_fisrtyear->TabIndex = 51;
			// 
			// txt_firstmonth
			// 
			this->txt_firstmonth->Location = System::Drawing::Point(119, 169);
			this->txt_firstmonth->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_firstmonth->Name = L"txt_firstmonth";
			this->txt_firstmonth->Size = System::Drawing::Size(45, 22);
			this->txt_firstmonth->TabIndex = 50;
			// 
			// lbl_fisrtdate
			// 
			this->lbl_fisrtdate->AutoSize = true;
			this->lbl_fisrtdate->Location = System::Drawing::Point(39, 138);
			this->lbl_fisrtdate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_fisrtdate->Name = L"lbl_fisrtdate";
			this->lbl_fisrtdate->Size = System::Drawing::Size(205, 17);
			this->lbl_fisrtdate->TabIndex = 49;
			this->lbl_fisrtdate->Text = L"Beginning Date (DD/MM/YYYY)";
			this->lbl_fisrtdate->Click += gcnew System::EventHandler(this, &StatCA::lbl_fisrtdate_Click);
			// 
			// txt_lastday
			// 
			this->txt_lastday->Location = System::Drawing::Point(415, 169);
			this->txt_lastday->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_lastday->Name = L"txt_lastday";
			this->txt_lastday->Size = System::Drawing::Size(44, 22);
			this->txt_lastday->TabIndex = 56;
			// 
			// txt_lastyear
			// 
			this->txt_lastyear->Location = System::Drawing::Point(523, 169);
			this->txt_lastyear->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_lastyear->Name = L"txt_lastyear";
			this->txt_lastyear->Size = System::Drawing::Size(45, 22);
			this->txt_lastyear->TabIndex = 55;
			// 
			// txt_lastmonth
			// 
			this->txt_lastmonth->Location = System::Drawing::Point(469, 169);
			this->txt_lastmonth->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_lastmonth->Name = L"txt_lastmonth";
			this->txt_lastmonth->Size = System::Drawing::Size(45, 22);
			this->txt_lastmonth->TabIndex = 54;
			// 
			// lbl_lastdate
			// 
			this->lbl_lastdate->AutoSize = true;
			this->lbl_lastdate->Location = System::Drawing::Point(409, 138);
			this->lbl_lastdate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_lastdate->Name = L"lbl_lastdate";
			this->lbl_lastdate->Size = System::Drawing::Size(167, 17);
			this->lbl_lastdate->TabIndex = 53;
			this->lbl_lastdate->Text = L"End Date (DD/MM/YYYY)";
			// 
			// StatCA
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 523);
			this->Controls->Add(this->txt_lastday);
			this->Controls->Add(this->txt_lastyear);
			this->Controls->Add(this->txt_lastmonth);
			this->Controls->Add(this->lbl_lastdate);
			this->Controls->Add(this->txt_firstday);
			this->Controls->Add(this->txt_fisrtyear);
			this->Controls->Add(this->txt_firstmonth);
			this->Controls->Add(this->lbl_fisrtdate);
			this->Controls->Add(this->lbl_to);
			this->Controls->Add(this->bt_StatCAValidate);
			this->Controls->Add(this->txt_revenue);
			this->Controls->Add(this->lbl_revenue);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"StatCA";
			this->Text = L"StatCA";
			this->Load += gcnew System::EventHandler(this, &StatCA::StatCA_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e){}
	private: System::Void StatCA_Load(System::Object^ sender, System::EventArgs^ e){}
	private: System::Void lbl_fisrtdate_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void bt_StatCAValidate_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
