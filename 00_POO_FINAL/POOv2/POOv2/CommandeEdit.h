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
	/// Description résumée de CommandeEdit
	/// </summary>
	public ref class CommandeEdit : public System::Windows::Forms::Form
	{
	public:
		CommandeEdit(void)
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
		~CommandeEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_idorder;
	protected:
	private: System::Windows::Forms::TextBox^ txt_idclientorder;
	private: System::Windows::Forms::Button^ bt_ordersave;

	private: System::Windows::Forms::Button^ bt_orderdelete;

	private: System::Windows::Forms::Button^ bt_orderedit;

	private: System::Windows::Forms::Button^ bt_ordertadd;

	private: System::Windows::Forms::Label^ lbl_idorder;
	private: System::Windows::Forms::Label^ lbl_idclientorder;


	private: System::Windows::Forms::Label^ lbl_price;

	private: System::Windows::Forms::TextBox^ txt_clientpc;

	private: System::Windows::Forms::ComboBox^ cb_meansofpayment;

	private: System::Windows::Forms::Label^ lbl_meansofpayment;
	private: System::Windows::Forms::Label^ lbl_datepayment;
	private: System::Windows::Forms::TextBox^ txt_datemonth;
	private: System::Windows::Forms::TextBox^ txt_dateyear;
	private: System::Windows::Forms::TextBox^ txt_dateday;
	private: System::Windows::Forms::Label^ lbl_percentagediscount;
	private: System::Windows::Forms::Label^ lbl_billingaddress;
	private: System::Windows::Forms::Label^ lbl_deliveryaddress;



	private: System::Windows::Forms::TextBox^ txt_percentagediscount;
	private: System::Windows::Forms::TextBox^ txt_quantityorder;

	private: System::Windows::Forms::Label^ lbl_quantityorder;





	private: System::Windows::Forms::TextBox^ txt_iditemorder;


	private: System::Windows::Forms::Label^ lbl_iditemorder;



	private: System::Windows::Forms::ComboBox^ cb_deliveryaddress;

	private: System::Windows::Forms::ComboBox^ cb_billingaddress;



	private: NS_Svc::CL_svc_gestionPersonnes^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: String^ mode;
	private: System::Windows::Forms::Button^ bt_Id;

	private: System::Windows::Forms::Button^ bt_Save_Article;




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
			this->txt_idorder = (gcnew System::Windows::Forms::TextBox());
			this->txt_idclientorder = (gcnew System::Windows::Forms::TextBox());
			this->bt_ordersave = (gcnew System::Windows::Forms::Button());
			this->bt_orderdelete = (gcnew System::Windows::Forms::Button());
			this->bt_orderedit = (gcnew System::Windows::Forms::Button());
			this->bt_ordertadd = (gcnew System::Windows::Forms::Button());
			this->lbl_idorder = (gcnew System::Windows::Forms::Label());
			this->lbl_idclientorder = (gcnew System::Windows::Forms::Label());
			this->lbl_price = (gcnew System::Windows::Forms::Label());
			this->txt_clientpc = (gcnew System::Windows::Forms::TextBox());
			this->cb_meansofpayment = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_meansofpayment = (gcnew System::Windows::Forms::Label());
			this->lbl_datepayment = (gcnew System::Windows::Forms::Label());
			this->txt_datemonth = (gcnew System::Windows::Forms::TextBox());
			this->txt_dateyear = (gcnew System::Windows::Forms::TextBox());
			this->txt_dateday = (gcnew System::Windows::Forms::TextBox());
			this->lbl_percentagediscount = (gcnew System::Windows::Forms::Label());
			this->lbl_billingaddress = (gcnew System::Windows::Forms::Label());
			this->lbl_deliveryaddress = (gcnew System::Windows::Forms::Label());
			this->txt_percentagediscount = (gcnew System::Windows::Forms::TextBox());
			this->txt_quantityorder = (gcnew System::Windows::Forms::TextBox());
			this->lbl_quantityorder = (gcnew System::Windows::Forms::Label());
			this->txt_iditemorder = (gcnew System::Windows::Forms::TextBox());
			this->lbl_iditemorder = (gcnew System::Windows::Forms::Label());
			this->cb_deliveryaddress = (gcnew System::Windows::Forms::ComboBox());
			this->cb_billingaddress = (gcnew System::Windows::Forms::ComboBox());
			this->bt_Id = (gcnew System::Windows::Forms::Button());
			this->bt_Save_Article = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_idorder
			// 
			this->txt_idorder->Location = System::Drawing::Point(16, 102);
			this->txt_idorder->Margin = System::Windows::Forms::Padding(4);
			this->txt_idorder->Name = L"txt_idorder";
			this->txt_idorder->Size = System::Drawing::Size(132, 22);
			this->txt_idorder->TabIndex = 33;
			// 
			// txt_idclientorder
			// 
			this->txt_idclientorder->Location = System::Drawing::Point(16, 36);
			this->txt_idclientorder->Margin = System::Windows::Forms::Padding(4);
			this->txt_idclientorder->Name = L"txt_idclientorder";
			this->txt_idclientorder->Size = System::Drawing::Size(132, 22);
			this->txt_idclientorder->TabIndex = 32;
			// 
			// bt_ordersave
			// 
			this->bt_ordersave->Location = System::Drawing::Point(725, 64);
			this->bt_ordersave->Margin = System::Windows::Forms::Padding(4);
			this->bt_ordersave->Name = L"bt_ordersave";
			this->bt_ordersave->Size = System::Drawing::Size(156, 364);
			this->bt_ordersave->TabIndex = 30;
			this->bt_ordersave->Text = L"Save";
			this->bt_ordersave->UseVisualStyleBackColor = true;
			this->bt_ordersave->Click += gcnew System::EventHandler(this, &CommandeEdit::btn_save_Click);
			// 
			// bt_orderdelete
			// 
			this->bt_orderdelete->Location = System::Drawing::Point(525, 336);
			this->bt_orderdelete->Margin = System::Windows::Forms::Padding(4);
			this->bt_orderdelete->Name = L"bt_orderdelete";
			this->bt_orderdelete->Size = System::Drawing::Size(156, 94);
			this->bt_orderdelete->TabIndex = 29;
			this->bt_orderdelete->Text = L"Delete";
			this->bt_orderdelete->UseVisualStyleBackColor = true;
			this->bt_orderdelete->Click += gcnew System::EventHandler(this, &CommandeEdit::btn_delete_Click);
			// 
			// bt_orderedit
			// 
			this->bt_orderedit->Location = System::Drawing::Point(525, 198);
			this->bt_orderedit->Margin = System::Windows::Forms::Padding(4);
			this->bt_orderedit->Name = L"bt_orderedit";
			this->bt_orderedit->Size = System::Drawing::Size(156, 91);
			this->bt_orderedit->TabIndex = 28;
			this->bt_orderedit->Text = L"Edit";
			this->bt_orderedit->UseVisualStyleBackColor = true;
			this->bt_orderedit->Click += gcnew System::EventHandler(this, &CommandeEdit::btn_edit_Click);
			// 
			// bt_ordertadd
			// 
			this->bt_ordertadd->Location = System::Drawing::Point(525, 64);
			this->bt_ordertadd->Margin = System::Windows::Forms::Padding(4);
			this->bt_ordertadd->Name = L"bt_ordertadd";
			this->bt_ordertadd->Size = System::Drawing::Size(156, 91);
			this->bt_ordertadd->TabIndex = 27;
			this->bt_ordertadd->Text = L"Add";
			this->bt_ordertadd->UseVisualStyleBackColor = true;
			this->bt_ordertadd->Click += gcnew System::EventHandler(this, &CommandeEdit::btn_add_Click);
			// 
			// lbl_idorder
			// 
			this->lbl_idorder->AutoSize = true;
			this->lbl_idorder->Location = System::Drawing::Point(12, 82);
			this->lbl_idorder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_idorder->Name = L"lbl_idorder";
			this->lbl_idorder->Size = System::Drawing::Size(62, 17);
			this->lbl_idorder->TabIndex = 25;
			this->lbl_idorder->Text = L"ID Order";
			// 
			// lbl_idclientorder
			// 
			this->lbl_idclientorder->AutoSize = true;
			this->lbl_idclientorder->Location = System::Drawing::Point(13, 15);
			this->lbl_idclientorder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_idclientorder->Name = L"lbl_idclientorder";
			this->lbl_idclientorder->Size = System::Drawing::Size(60, 17);
			this->lbl_idclientorder->TabIndex = 24;
			this->lbl_idclientorder->Text = L"ID Client";
			// 
			// lbl_price
			// 
			this->lbl_price->AutoSize = true;
			this->lbl_price->Location = System::Drawing::Point(263, 177);
			this->lbl_price->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_price->Name = L"lbl_price";
			this->lbl_price->Size = System::Drawing::Size(40, 17);
			this->lbl_price->TabIndex = 40;
			this->lbl_price->Text = L"Price";
			// 
			// txt_clientpc
			// 
			this->txt_clientpc->Location = System::Drawing::Point(267, 197);
			this->txt_clientpc->Margin = System::Windows::Forms::Padding(4);
			this->txt_clientpc->Name = L"txt_clientpc";
			this->txt_clientpc->Size = System::Drawing::Size(132, 22);
			this->txt_clientpc->TabIndex = 41;
			// 
			// cb_meansofpayment
			// 
			this->cb_meansofpayment->FormattingEnabled = true;
			this->cb_meansofpayment->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Credit Card", L"Cash", L"Paycheck" });
			this->cb_meansofpayment->Location = System::Drawing::Point(267, 130);
			this->cb_meansofpayment->Margin = System::Windows::Forms::Padding(4);
			this->cb_meansofpayment->Name = L"cb_meansofpayment";
			this->cb_meansofpayment->Size = System::Drawing::Size(132, 24);
			this->cb_meansofpayment->TabIndex = 43;
			// 
			// lbl_meansofpayment
			// 
			this->lbl_meansofpayment->AutoSize = true;
			this->lbl_meansofpayment->Location = System::Drawing::Point(263, 111);
			this->lbl_meansofpayment->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_meansofpayment->Name = L"lbl_meansofpayment";
			this->lbl_meansofpayment->Size = System::Drawing::Size(125, 17);
			this->lbl_meansofpayment->TabIndex = 44;
			this->lbl_meansofpayment->Text = L"Means of Payment";
			// 
			// lbl_datepayment
			// 
			this->lbl_datepayment->AutoSize = true;
			this->lbl_datepayment->Location = System::Drawing::Point(229, 28);
			this->lbl_datepayment->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_datepayment->Name = L"lbl_datepayment";
			this->lbl_datepayment->Size = System::Drawing::Size(213, 17);
			this->lbl_datepayment->TabIndex = 45;
			this->lbl_datepayment->Text = L"Date of Payment (DD/MM/YYYY)";
			// 
			// txt_datemonth
			// 
			this->txt_datemonth->Location = System::Drawing::Point(313, 64);
			this->txt_datemonth->Margin = System::Windows::Forms::Padding(4);
			this->txt_datemonth->Name = L"txt_datemonth";
			this->txt_datemonth->Size = System::Drawing::Size(45, 22);
			this->txt_datemonth->TabIndex = 46;
			// 
			// txt_dateyear
			// 
			this->txt_dateyear->Location = System::Drawing::Point(367, 64);
			this->txt_dateyear->Margin = System::Windows::Forms::Padding(4);
			this->txt_dateyear->Name = L"txt_dateyear";
			this->txt_dateyear->Size = System::Drawing::Size(45, 22);
			this->txt_dateyear->TabIndex = 47;
			// 
			// txt_dateday
			// 
			this->txt_dateday->Location = System::Drawing::Point(259, 64);
			this->txt_dateday->Margin = System::Windows::Forms::Padding(4);
			this->txt_dateday->Name = L"txt_dateday";
			this->txt_dateday->Size = System::Drawing::Size(44, 22);
			this->txt_dateday->TabIndex = 48;
			// 
			// lbl_percentagediscount
			// 
			this->lbl_percentagediscount->AutoSize = true;
			this->lbl_percentagediscount->Location = System::Drawing::Point(12, 178);
			this->lbl_percentagediscount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_percentagediscount->Name = L"lbl_percentagediscount";
			this->lbl_percentagediscount->Size = System::Drawing::Size(140, 17);
			this->lbl_percentagediscount->TabIndex = 49;
			this->lbl_percentagediscount->Text = L"Percentage Discount";
			// 
			// lbl_billingaddress
			// 
			this->lbl_billingaddress->AutoSize = true;
			this->lbl_billingaddress->Location = System::Drawing::Point(11, 302);
			this->lbl_billingaddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_billingaddress->Name = L"lbl_billingaddress";
			this->lbl_billingaddress->Size = System::Drawing::Size(101, 17);
			this->lbl_billingaddress->TabIndex = 50;
			this->lbl_billingaddress->Text = L"Billing Address";
			// 
			// lbl_deliveryaddress
			// 
			this->lbl_deliveryaddress->AutoSize = true;
			this->lbl_deliveryaddress->Location = System::Drawing::Point(5, 382);
			this->lbl_deliveryaddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_deliveryaddress->Name = L"lbl_deliveryaddress";
			this->lbl_deliveryaddress->Size = System::Drawing::Size(115, 17);
			this->lbl_deliveryaddress->TabIndex = 51;
			this->lbl_deliveryaddress->Text = L"Delivery Address";
			// 
			// txt_percentagediscount
			// 
			this->txt_percentagediscount->Location = System::Drawing::Point(16, 198);
			this->txt_percentagediscount->Margin = System::Windows::Forms::Padding(4);
			this->txt_percentagediscount->Name = L"txt_percentagediscount";
			this->txt_percentagediscount->Size = System::Drawing::Size(132, 22);
			this->txt_percentagediscount->TabIndex = 52;
			// 
			// txt_quantityorder
			// 
			this->txt_quantityorder->Location = System::Drawing::Point(267, 338);
			this->txt_quantityorder->Margin = System::Windows::Forms::Padding(4);
			this->txt_quantityorder->Name = L"txt_quantityorder";
			this->txt_quantityorder->Size = System::Drawing::Size(132, 22);
			this->txt_quantityorder->TabIndex = 54;
			// 
			// lbl_quantityorder
			// 
			this->lbl_quantityorder->AutoSize = true;
			this->lbl_quantityorder->Location = System::Drawing::Point(261, 318);
			this->lbl_quantityorder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_quantityorder->Name = L"lbl_quantityorder";
			this->lbl_quantityorder->Size = System::Drawing::Size(61, 17);
			this->lbl_quantityorder->TabIndex = 53;
			this->lbl_quantityorder->Text = L"Quantity";
			// 
			// txt_iditemorder
			// 
			this->txt_iditemorder->Location = System::Drawing::Point(267, 270);
			this->txt_iditemorder->Margin = System::Windows::Forms::Padding(4);
			this->txt_iditemorder->Name = L"txt_iditemorder";
			this->txt_iditemorder->Size = System::Drawing::Size(132, 22);
			this->txt_iditemorder->TabIndex = 56;
			// 
			// lbl_iditemorder
			// 
			this->lbl_iditemorder->AutoSize = true;
			this->lbl_iditemorder->Location = System::Drawing::Point(261, 250);
			this->lbl_iditemorder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_iditemorder->Name = L"lbl_iditemorder";
			this->lbl_iditemorder->Size = System::Drawing::Size(51, 17);
			this->lbl_iditemorder->TabIndex = 55;
			this->lbl_iditemorder->Text = L"ID Item";
			// 
			// cb_deliveryaddress
			// 
			this->cb_deliveryaddress->FormattingEnabled = true;
			this->cb_deliveryaddress->Location = System::Drawing::Point(13, 402);
			this->cb_deliveryaddress->Margin = System::Windows::Forms::Padding(4);
			this->cb_deliveryaddress->Name = L"cb_deliveryaddress";
			this->cb_deliveryaddress->Size = System::Drawing::Size(128, 24);
			this->cb_deliveryaddress->TabIndex = 57;
			// 
			// cb_billingaddress
			// 
			this->cb_billingaddress->FormattingEnabled = true;
			this->cb_billingaddress->Location = System::Drawing::Point(15, 322);
			this->cb_billingaddress->Margin = System::Windows::Forms::Padding(4);
			this->cb_billingaddress->Name = L"cb_billingaddress";
			this->cb_billingaddress->Size = System::Drawing::Size(132, 24);
			this->cb_billingaddress->TabIndex = 58;
			// 
			// bt_Id
			// 
			this->bt_Id->Location = System::Drawing::Point(169, 34);
			this->bt_Id->Name = L"bt_Id";
			this->bt_Id->Size = System::Drawing::Size(23, 23);
			this->bt_Id->TabIndex = 62;
			this->bt_Id->UseVisualStyleBackColor = true;
			this->bt_Id->Click += gcnew System::EventHandler(this, &CommandeEdit::btn_Id_Click);
			// 
			// bt_Save_Article
			// 
			this->bt_Save_Article->Location = System::Drawing::Point(301, 395);
			this->bt_Save_Article->Name = L"bt_Save_Article";
			this->bt_Save_Article->Size = System::Drawing::Size(61, 31);
			this->bt_Save_Article->TabIndex = 64;
			this->bt_Save_Article->Text = L"Save";
			this->bt_Save_Article->UseVisualStyleBackColor = true;
			this->bt_Save_Article->Click += gcnew System::EventHandler(this, &CommandeEdit::btn_Save_Article_Click);
			// 
			// CommandeEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(940, 495);
			this->Controls->Add(this->bt_Save_Article);
			this->Controls->Add(this->bt_Id);
			this->Controls->Add(this->cb_billingaddress);
			this->Controls->Add(this->cb_deliveryaddress);
			this->Controls->Add(this->txt_iditemorder);
			this->Controls->Add(this->lbl_iditemorder);
			this->Controls->Add(this->txt_quantityorder);
			this->Controls->Add(this->lbl_quantityorder);
			this->Controls->Add(this->txt_percentagediscount);
			this->Controls->Add(this->lbl_deliveryaddress);
			this->Controls->Add(this->lbl_billingaddress);
			this->Controls->Add(this->lbl_percentagediscount);
			this->Controls->Add(this->txt_dateday);
			this->Controls->Add(this->txt_dateyear);
			this->Controls->Add(this->txt_datemonth);
			this->Controls->Add(this->lbl_datepayment);
			this->Controls->Add(this->lbl_meansofpayment);
			this->Controls->Add(this->cb_meansofpayment);
			this->Controls->Add(this->txt_clientpc);
			this->Controls->Add(this->lbl_price);
			this->Controls->Add(this->txt_idorder);
			this->Controls->Add(this->txt_idclientorder);
			this->Controls->Add(this->bt_ordersave);
			this->Controls->Add(this->bt_orderdelete);
			this->Controls->Add(this->bt_orderedit);
			this->Controls->Add(this->bt_ordertadd);
			this->Controls->Add(this->lbl_idorder);
			this->Controls->Add(this->lbl_idclientorder);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CommandeEdit";
			this->Text = L"CommandeEdit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_edit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_Id_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_Save_Article_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
