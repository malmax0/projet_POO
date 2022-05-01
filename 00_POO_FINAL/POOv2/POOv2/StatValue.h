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
	/// Description résumée de StatValue
	/// </summary>
	public ref class StatValue : public System::Windows::Forms::Form
	{
	public:
		StatValue(void)
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
		~StatValue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_VAT;
	protected:
	private: System::Windows::Forms::TextBox^ txt_VAT;
	private: System::Windows::Forms::Label^ lbl_SalesMargin;
	private: System::Windows::Forms::ComboBox^ cb_SalesMargin;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ lbl_Approach;
	private: System::Windows::Forms::Label^ lbl_Trade;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ bt_StatValueValidate;
	private: System::Windows::Forms::Label^ lbl_StockValue;
	private: System::Windows::Forms::TextBox^ txt_StockValue;
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
			this->lbl_VAT = (gcnew System::Windows::Forms::Label());
			this->txt_VAT = (gcnew System::Windows::Forms::TextBox());
			this->lbl_SalesMargin = (gcnew System::Windows::Forms::Label());
			this->cb_SalesMargin = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_Approach = (gcnew System::Windows::Forms::Label());
			this->lbl_Trade = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->bt_StatValueValidate = (gcnew System::Windows::Forms::Button());
			this->lbl_StockValue = (gcnew System::Windows::Forms::Label());
			this->txt_StockValue = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lbl_VAT
			// 
			this->lbl_VAT->AutoSize = true;
			this->lbl_VAT->Location = System::Drawing::Point(107, 56);
			this->lbl_VAT->Name = L"lbl_VAT";
			this->lbl_VAT->Size = System::Drawing::Size(78, 17);
			this->lbl_VAT->TabIndex = 0;
			this->lbl_VAT->Text = L"Select VAT";
			// 
			// txt_VAT
			// 
			this->txt_VAT->Location = System::Drawing::Point(344, 53);
			this->txt_VAT->Name = L"txt_VAT";
			this->txt_VAT->Size = System::Drawing::Size(121, 22);
			this->txt_VAT->TabIndex = 1;
			// 
			// lbl_SalesMargin
			// 
			this->lbl_SalesMargin->AutoSize = true;
			this->lbl_SalesMargin->Location = System::Drawing::Point(110, 123);
			this->lbl_SalesMargin->Name = L"lbl_SalesMargin";
			this->lbl_SalesMargin->Size = System::Drawing::Size(174, 17);
			this->lbl_SalesMargin->TabIndex = 2;
			this->lbl_SalesMargin->Text = L"Select Sales Margin (in %)";
			// 
			// cb_SalesMargin
			// 
			this->cb_SalesMargin->FormattingEnabled = true;
			this->cb_SalesMargin->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"0", L"5", L"10", L"15" });
			this->cb_SalesMargin->Location = System::Drawing::Point(344, 116);
			this->cb_SalesMargin->Name = L"cb_SalesMargin";
			this->cb_SalesMargin->Size = System::Drawing::Size(121, 24);
			this->cb_SalesMargin->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->Items->AddRange(gcnew cli::array< System::String^  >(4) { L"0", L"2", L"3", L"5" });
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(344, 187);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 4;
			// 
			// lbl_Approach
			// 
			this->lbl_Approach->AutoSize = true;
			this->lbl_Approach->Location = System::Drawing::Point(110, 187);
			this->lbl_Approach->Name = L"lbl_Approach";
			this->lbl_Approach->Size = System::Drawing::Size(165, 17);
			this->lbl_Approach->TabIndex = 5;
			this->lbl_Approach->Text = L"Select a Approach (in %)";
			// 
			// lbl_Trade
			// 
			this->lbl_Trade->AutoSize = true;
			this->lbl_Trade->Location = System::Drawing::Point(110, 250);
			this->lbl_Trade->Name = L"lbl_Trade";
			this->lbl_Trade->Size = System::Drawing::Size(201, 17);
			this->lbl_Trade->TabIndex = 6;
			this->lbl_Trade->Text = L"Select a Trade Discount (in %)";
			// 
			// comboBox2
			// 
			this->comboBox2->Items->AddRange(gcnew cli::array< System::String^  >(3) { L"0", L"5", L"6" });
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(344, 250);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 7;
			// 
			// bt_StatValueValidate
			// 
			this->bt_StatValueValidate->Location = System::Drawing::Point(179, 318);
			this->bt_StatValueValidate->Name = L"bt_StatValueValidate";
			this->bt_StatValueValidate->Size = System::Drawing::Size(242, 39);
			this->bt_StatValueValidate->TabIndex = 8;
			this->bt_StatValueValidate->Text = L"Validate";
			this->bt_StatValueValidate->UseVisualStyleBackColor = true;
			this->bt_StatValueValidate->Click += gcnew System::EventHandler(this, &StatValue::bt_StatValueValidate_Click);
			// 
			// lbl_StockValue
			// 
			this->lbl_StockValue->AutoSize = true;
			this->lbl_StockValue->Location = System::Drawing::Point(113, 395);
			this->lbl_StockValue->Name = L"lbl_StockValue";
			this->lbl_StockValue->Size = System::Drawing::Size(83, 17);
			this->lbl_StockValue->TabIndex = 9;
			this->lbl_StockValue->Text = L"Stock Value";
			// 
			// txt_StockValue
			// 
			this->txt_StockValue->Location = System::Drawing::Point(344, 395);
			this->txt_StockValue->Name = L"txt_StockValue";
			this->txt_StockValue->Size = System::Drawing::Size(121, 22);
			this->txt_StockValue->TabIndex = 10;
			// 
			// StatValue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 477);
			this->Controls->Add(this->txt_StockValue);
			this->Controls->Add(this->lbl_StockValue);
			this->Controls->Add(this->bt_StatValueValidate);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->lbl_Trade);
			this->Controls->Add(this->lbl_Approach);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->cb_SalesMargin);
			this->Controls->Add(this->lbl_SalesMargin);
			this->Controls->Add(this->txt_VAT);
			this->Controls->Add(this->lbl_VAT);
			this->Name = L"StatValue";
			this->Text = L"StatValue";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_StatValueValidate_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
