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
	/// Description résumée de StockEdit
	/// </summary>
	public ref class StockEdit : public System::Windows::Forms::Form
	{
	public:
		StockEdit(void)
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
		~StockEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bt_stocksave;
	protected:

	protected:






	private: System::Windows::Forms::Button^ bt_stockdelete;

	private: System::Windows::Forms::Button^ bt_stockedit;

	private: System::Windows::Forms::Button^ bt_stockadd;

	private: System::Windows::Forms::TextBox^ txt_stockquantity;

	private: System::Windows::Forms::Label^ lbl_stockquantity;

	private: System::Windows::Forms::TextBox^ txt_itemname;

	private: System::Windows::Forms::TextBox^ txt_iditemstock;
	private: System::Windows::Forms::TextBox^ txt_exclusivetaxes;


	private: System::Windows::Forms::Label^ lbl_exclusivetaxes;

	private: System::Windows::Forms::Label^ lbl_itemname;

	private: System::Windows::Forms::Label^ lbl_iditemstock;
	private: System::Windows::Forms::TextBox^ txt_vat;

	private: System::Windows::Forms::Label^ lbl_vat;

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
			this->bt_stocksave = (gcnew System::Windows::Forms::Button());
			this->bt_stockdelete = (gcnew System::Windows::Forms::Button());
			this->bt_stockedit = (gcnew System::Windows::Forms::Button());
			this->bt_stockadd = (gcnew System::Windows::Forms::Button());
			this->txt_stockquantity = (gcnew System::Windows::Forms::TextBox());
			this->lbl_stockquantity = (gcnew System::Windows::Forms::Label());
			this->txt_itemname = (gcnew System::Windows::Forms::TextBox());
			this->txt_iditemstock = (gcnew System::Windows::Forms::TextBox());
			this->txt_exclusivetaxes = (gcnew System::Windows::Forms::TextBox());
			this->lbl_exclusivetaxes = (gcnew System::Windows::Forms::Label());
			this->lbl_itemname = (gcnew System::Windows::Forms::Label());
			this->lbl_iditemstock = (gcnew System::Windows::Forms::Label());
			this->txt_vat = (gcnew System::Windows::Forms::TextBox());
			this->lbl_vat = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bt_stocksave
			// 
			this->bt_stocksave->Location = System::Drawing::Point(332, 37);
			this->bt_stocksave->Name = L"bt_stocksave";
			this->bt_stocksave->Size = System::Drawing::Size(89, 184);
			this->bt_stocksave->TabIndex = 27;
			this->bt_stocksave->Text = L"Save";
			this->bt_stocksave->UseVisualStyleBackColor = true;
			this->bt_stocksave->Click += gcnew System::EventHandler(this, &StockEdit::btn_save_Click);
			// 
			// bt_stockdelete
			// 
			this->bt_stockdelete->Location = System::Drawing::Point(214, 178);
			this->bt_stockdelete->Name = L"bt_stockdelete";
			this->bt_stockdelete->Size = System::Drawing::Size(75, 43);
			this->bt_stockdelete->TabIndex = 26;
			this->bt_stockdelete->Text = L"Delete";
			this->bt_stockdelete->UseVisualStyleBackColor = true;
			this->bt_stockdelete->Click += gcnew System::EventHandler(this, &StockEdit::btn_del_Click);
			// 
			// bt_stockedit
			// 
			this->bt_stockedit->Location = System::Drawing::Point(214, 108);
			this->bt_stockedit->Name = L"bt_stockedit";
			this->bt_stockedit->Size = System::Drawing::Size(75, 43);
			this->bt_stockedit->TabIndex = 25;
			this->bt_stockedit->Text = L"Edit";
			this->bt_stockedit->UseVisualStyleBackColor = true;
			this->bt_stockedit->Click += gcnew System::EventHandler(this, &StockEdit::btn_edit_Click);
			// 
			// bt_stockadd
			// 
			this->bt_stockadd->Location = System::Drawing::Point(214, 37);
			this->bt_stockadd->Name = L"bt_stockadd";
			this->bt_stockadd->Size = System::Drawing::Size(75, 43);
			this->bt_stockadd->TabIndex = 24;
			this->bt_stockadd->Text = L"Add";
			this->bt_stockadd->UseVisualStyleBackColor = true;
			this->bt_stockadd->Click += gcnew System::EventHandler(this, &StockEdit::btn_add_Click);
			// 
			// txt_stockquantity
			// 
			this->txt_stockquantity->Location = System::Drawing::Point(30, 213);
			this->txt_stockquantity->Name = L"txt_stockquantity";
			this->txt_stockquantity->Size = System::Drawing::Size(100, 20);
			this->txt_stockquantity->TabIndex = 35;
			// 
			// lbl_stockquantity
			// 
			this->lbl_stockquantity->AutoSize = true;
			this->lbl_stockquantity->Location = System::Drawing::Point(27, 197);
			this->lbl_stockquantity->Name = L"lbl_stockquantity";
			this->lbl_stockquantity->Size = System::Drawing::Size(77, 13);
			this->lbl_stockquantity->TabIndex = 34;
			this->lbl_stockquantity->Text = L"Stock Quantity";
			// 
			// txt_itemname
			// 
			this->txt_itemname->Location = System::Drawing::Point(29, 103);
			this->txt_itemname->Name = L"txt_itemname";
			this->txt_itemname->Size = System::Drawing::Size(100, 20);
			this->txt_itemname->TabIndex = 33;
			// 
			// txt_iditemstock
			// 
			this->txt_iditemstock->Location = System::Drawing::Point(29, 49);
			this->txt_iditemstock->Name = L"txt_iditemstock";
			this->txt_iditemstock->Size = System::Drawing::Size(100, 20);
			this->txt_iditemstock->TabIndex = 32;
			// 
			// txt_exclusivetaxes
			// 
			this->txt_exclusivetaxes->Location = System::Drawing::Point(29, 158);
			this->txt_exclusivetaxes->Name = L"txt_exclusivetaxes";
			this->txt_exclusivetaxes->Size = System::Drawing::Size(100, 20);
			this->txt_exclusivetaxes->TabIndex = 31;
			// 
			// lbl_exclusivetaxes
			// 
			this->lbl_exclusivetaxes->AutoSize = true;
			this->lbl_exclusivetaxes->Location = System::Drawing::Point(26, 142);
			this->lbl_exclusivetaxes->Name = L"lbl_exclusivetaxes";
			this->lbl_exclusivetaxes->Size = System::Drawing::Size(96, 13);
			this->lbl_exclusivetaxes->TabIndex = 30;
			this->lbl_exclusivetaxes->Text = L"Exclusive of Taxes";
			// 
			// lbl_itemname
			// 
			this->lbl_itemname->AutoSize = true;
			this->lbl_itemname->Location = System::Drawing::Point(26, 87);
			this->lbl_itemname->Name = L"lbl_itemname";
			this->lbl_itemname->Size = System::Drawing::Size(58, 13);
			this->lbl_itemname->TabIndex = 29;
			this->lbl_itemname->Text = L"Item Name";
			// 
			// lbl_iditemstock
			// 
			this->lbl_iditemstock->AutoSize = true;
			this->lbl_iditemstock->Location = System::Drawing::Point(27, 32);
			this->lbl_iditemstock->Name = L"lbl_iditemstock";
			this->lbl_iditemstock->Size = System::Drawing::Size(41, 13);
			this->lbl_iditemstock->TabIndex = 28;
			this->lbl_iditemstock->Text = L"ID Item";
			// 
			// txt_vat
			// 
			this->txt_vat->Location = System::Drawing::Point(30, 271);
			this->txt_vat->Name = L"txt_vat";
			this->txt_vat->Size = System::Drawing::Size(100, 20);
			this->txt_vat->TabIndex = 37;
			// 
			// lbl_vat
			// 
			this->lbl_vat->AutoSize = true;
			this->lbl_vat->Location = System::Drawing::Point(27, 255);
			this->lbl_vat->Name = L"lbl_vat";
			this->lbl_vat->Size = System::Drawing::Size(28, 13);
			this->lbl_vat->TabIndex = 36;
			this->lbl_vat->Text = L"VAT";
			// 
			// StockEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 324);
			this->Controls->Add(this->txt_vat);
			this->Controls->Add(this->lbl_vat);
			this->Controls->Add(this->txt_stockquantity);
			this->Controls->Add(this->lbl_stockquantity);
			this->Controls->Add(this->txt_itemname);
			this->Controls->Add(this->txt_iditemstock);
			this->Controls->Add(this->txt_exclusivetaxes);
			this->Controls->Add(this->lbl_exclusivetaxes);
			this->Controls->Add(this->lbl_itemname);
			this->Controls->Add(this->lbl_iditemstock);
			this->Controls->Add(this->bt_stocksave);
			this->Controls->Add(this->bt_stockdelete);
			this->Controls->Add(this->bt_stockedit);
			this->Controls->Add(this->bt_stockadd);
			this->Name = L"StockEdit";
			this->Text = L"StockEdit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_edit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_del_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
