/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#pragma once
#include <string>

namespace POOv2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de DomainePP
	/// </summary>
	public ref class DomainePP : public System::Windows::Forms::Form
	{
	public:
		void setselect(String^ *a);
		void setstop(int* b);
		void setaction(String^ *c);

	private: System::Windows::Forms::Button^ bt_disconnect;
		   String^* DomaineSelected;
		   int* stop;
		   String^* action;
	public:
		
		DomainePP(void)
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
		~DomainePP()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cb_domaine;
	private: System::Windows::Forms::ComboBox^ cb_actions;
	private: System::Windows::Forms::Button^ bt_DomainePPValidate1;
	private: System::Windows::Forms::Button^ bt_DomainePPValidate2;
	protected:



	protected:

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
			this->cb_domaine = (gcnew System::Windows::Forms::ComboBox());
			this->cb_actions = (gcnew System::Windows::Forms::ComboBox());
			this->bt_DomainePPValidate1 = (gcnew System::Windows::Forms::Button());
			this->bt_DomainePPValidate2 = (gcnew System::Windows::Forms::Button());
			this->bt_disconnect = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cb_domaine
			// 
			this->cb_domaine->FormattingEnabled = true;
			this->cb_domaine->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Order", L"Stock", L"Client", L"Staff", L"Statistic" });
			this->cb_domaine->Location = System::Drawing::Point(25, 36);
			this->cb_domaine->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cb_domaine->Name = L"cb_domaine";
			this->cb_domaine->Size = System::Drawing::Size(165, 21);
			this->cb_domaine->TabIndex = 0;
			// 
			// cb_actions
			// 
			this->cb_actions->Location = System::Drawing::Point(25, 35);
			this->cb_actions->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cb_actions->Name = L"cb_actions";
			this->cb_actions->Size = System::Drawing::Size(165, 21);
			this->cb_actions->TabIndex = 4;
			// 
			// bt_DomainePPValidate1
			// 
			this->bt_DomainePPValidate1->Location = System::Drawing::Point(216, 37);
			this->bt_DomainePPValidate1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->bt_DomainePPValidate1->Name = L"bt_DomainePPValidate1";
			this->bt_DomainePPValidate1->Size = System::Drawing::Size(65, 20);
			this->bt_DomainePPValidate1->TabIndex = 3;
			this->bt_DomainePPValidate1->Text = L"Validate";
			this->bt_DomainePPValidate1->UseVisualStyleBackColor = true;
			this->bt_DomainePPValidate1->Click += gcnew System::EventHandler(this, &DomainePP::bt_DomainePPValidate_Click);
			// 
			// bt_DomainePPValidate2
			// 
			this->bt_DomainePPValidate2->Location = System::Drawing::Point(216, 37);
			this->bt_DomainePPValidate2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->bt_DomainePPValidate2->Name = L"bt_DomainePPValidate2";
			this->bt_DomainePPValidate2->Size = System::Drawing::Size(65, 19);
			this->bt_DomainePPValidate2->TabIndex = 5;
			this->bt_DomainePPValidate2->Text = L"Validate";
			this->bt_DomainePPValidate2->UseVisualStyleBackColor = true;
			this->bt_DomainePPValidate2->Click += gcnew System::EventHandler(this, &DomainePP::bt_DomainePPValidate2_Click);
			// 
			// bt_disconnect
			// 
			this->bt_disconnect->Location = System::Drawing::Point(467, 18);
			this->bt_disconnect->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->bt_disconnect->Name = L"bt_disconnect";
			this->bt_disconnect->Size = System::Drawing::Size(86, 19);
			this->bt_disconnect->TabIndex = 6;
			this->bt_disconnect->Text = L"Disconnect";
			this->bt_disconnect->UseVisualStyleBackColor = true;
			this->bt_disconnect->Click += gcnew System::EventHandler(this, &DomainePP::bt_Disconnect_Click);
			// 
			// DomainePP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 219);
			this->Controls->Add(this->bt_disconnect);
			this->Controls->Add(this->bt_DomainePPValidate1);
			this->Controls->Add(this->cb_domaine);
			this->Controls->Add(this->cb_actions);
			this->Controls->Add(this->bt_DomainePPValidate2);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"DomainePP";
			this->Text = L"DomainePP";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void bt_DomainePPValidate_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		*DomaineSelected = Convert::ToString(cb_domaine->SelectedItem);
		this->cb_actions->Items->Clear();
		

		
		this->cb_actions->FormattingEnabled = true;
		if (*DomaineSelected == "Order"|| *DomaineSelected == "Stock" || *DomaineSelected == "Client" || *DomaineSelected == "Staff")
		{
			this->cb_actions->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"show all", L"add, delete, change"});
			this->cb_actions->Location = System::Drawing::Point(33, 113);
			this->cb_actions->Name = L"cb_actions";
			this->cb_actions->Size = System::Drawing::Size(150, 24);
			this->cb_actions->TabIndex = 1;

			this->bt_DomainePPValidate2->Location = System::Drawing::Point(200, 113);
			this->bt_DomainePPValidate2->Name = L"bt_DomainePPValidate2";
			this->bt_DomainePPValidate2->Size = System::Drawing::Size(75, 23);
			this->bt_DomainePPValidate2->TabIndex = 5;
			this->bt_DomainePPValidate2->Text = L"Validate";
			this->bt_DomainePPValidate2->UseVisualStyleBackColor = true;
		}
		else if (*DomaineSelected == "Statistic")
		{
			this->cb_actions->Items->AddRange(gcnew cli::array< System::Object^  >(9) 
			{ 
				L"Calculate the average cart (after discount)", 
				L"Revenue for a specific period",
				L"Items under the limit replenishment",
				L"Total sales for a selected client",
				L"The 10 best - selling items",
				L"The 10 least sold items",
				L"Calculate the commercial value of the stock",
				L"Calculate the purchase value of the stock",
				L"Simulate changes in commercial values"
			});
			this->cb_actions->Location = System::Drawing::Point(33, 113);
			this->cb_actions->Name = L"cb_actions";
			this->cb_actions->Size = System::Drawing::Size(350, 24);
			this->cb_actions->TabIndex = 1;

			this->bt_DomainePPValidate2->Location = System::Drawing::Point(400, 112);
			this->bt_DomainePPValidate2->Name = L"bt_DomainePPValidate2";
			this->bt_DomainePPValidate2->Size = System::Drawing::Size(75, 23);
			this->bt_DomainePPValidate2->TabIndex = 5;
			this->bt_DomainePPValidate2->Text = L"Validate";
			this->bt_DomainePPValidate2->UseVisualStyleBackColor = true;
		}

	}
	private: System::Void bt_DomainePPValidate2_Click(System::Object^ sender, System::EventArgs^ e) ;
		   private: System::Void bt_Disconnect_Click(System::Object^ sender, System::EventArgs^ e);
};
}

