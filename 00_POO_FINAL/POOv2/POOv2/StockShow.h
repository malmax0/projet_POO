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
#include "show.h"
namespace POOv2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de StockShow
	/// </summary>
	public ref class StockShow : public Show
	{
	public:
		StockShow(void)
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
		~StockShow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: NS_Svc::CL_svc_gestionPersonnes^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: int index;
	private: String^ mode;
	private: System::Windows::Forms::Button^ button_Data;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->button_Data = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button_Data
			// 
			this->button_Data->Location = System::Drawing::Point(12, 10);
			this->button_Data->Name = L"button_Data";
			this->button_Data->Size = System::Drawing::Size(135, 28);
			this->button_Data->TabIndex = 5;
			this->button_Data->Text = L"Load Data";
			this->button_Data->UseVisualStyleBackColor = true;
			this->button_Data->Click += gcnew System::EventHandler(this, &StockShow::bt_button_Data_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 57);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1025, 584);
			this->dataGridView1->TabIndex = 6;
			// 
			// StockShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1025, 634);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button_Data);
			this->Location = System::Drawing::Point(1, 57);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"StockShow";
			this->Text = L"StockShow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bt_button_Data_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
