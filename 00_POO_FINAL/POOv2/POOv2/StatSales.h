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
	/// Description résumée de StatSales
	/// </summary>
	public ref class StatSales : public System::Windows::Forms::Form
	{
	public:
		StatSales(void)
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
		~StatSales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_IDclient;
	protected:
	private: System::Windows::Forms::TextBox^ txt_IDclient;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ lbl_TotalSales;
	private: System::Windows::Forms::Button^ bt_StatSalesValidate;
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
			this->lbl_IDclient = (gcnew System::Windows::Forms::Label());
			this->txt_IDclient = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_TotalSales = (gcnew System::Windows::Forms::Label());
			this->bt_StatSalesValidate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_IDclient
			// 
			this->lbl_IDclient->AutoSize = true;
			this->lbl_IDclient->Location = System::Drawing::Point(122, 108);
			this->lbl_IDclient->Name = L"lbl_IDclient";
			this->lbl_IDclient->Size = System::Drawing::Size(154, 17);
			this->lbl_IDclient->TabIndex = 0;
			this->lbl_IDclient->Text = L"Select an ID for a client";
			// 
			// txt_IDclient
			// 
			this->txt_IDclient->Location = System::Drawing::Point(342, 105);
			this->txt_IDclient->Name = L"txt_IDclient";
			this->txt_IDclient->Size = System::Drawing::Size(187, 22);
			this->txt_IDclient->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(348, 314);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 22);
			this->textBox1->TabIndex = 2;
			// 
			// lbl_TotalSales
			// 
			this->lbl_TotalSales->AutoSize = true;
			this->lbl_TotalSales->Location = System::Drawing::Point(91, 319);
			this->lbl_TotalSales->Name = L"lbl_TotalSales";
			this->lbl_TotalSales->Size = System::Drawing::Size(216, 17);
			this->lbl_TotalSales->TabIndex = 3;
			this->lbl_TotalSales->Text = L"Total sales for the selected client";
			// 
			// bt_StatSalesValidate
			// 
			this->bt_StatSalesValidate->Location = System::Drawing::Point(260, 176);
			this->bt_StatSalesValidate->Name = L"bt_StatSalesValidate";
			this->bt_StatSalesValidate->Size = System::Drawing::Size(144, 39);
			this->bt_StatSalesValidate->TabIndex = 4;
			this->bt_StatSalesValidate->Text = L"Validate";
			this->bt_StatSalesValidate->UseVisualStyleBackColor = true;
			this->bt_StatSalesValidate->Click += gcnew System::EventHandler(this, &StatSales::bt_StatSalesValidate_Click);
			// 
			// StatSales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(691, 444);
			this->Controls->Add(this->bt_StatSalesValidate);
			this->Controls->Add(this->lbl_TotalSales);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txt_IDclient);
			this->Controls->Add(this->lbl_IDclient);
			this->Name = L"StatSales";
			this->Text = L"StatSales";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_StatSalesValidate_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
