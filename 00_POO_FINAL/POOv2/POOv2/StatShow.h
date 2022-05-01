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
	/// Description résumée de StatShow
	/// </summary>
	public ref class StatShow : public Show
	{
	public:
		int getetat();
		void setetat(int *a);
		
		StatShow(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		int* etat;
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~StatShow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button_Data;
	private: NS_Svc::CL_svc_gestionPersonnes^ processusPersonnes;
	private: Data::DataSet^ ds;
	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button_Data = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 67);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(761, 380);
			this->dataGridView1->TabIndex = 0;
			// 
			// button_Data
			// 
			this->button_Data->Location = System::Drawing::Point(12, 12);
			this->button_Data->Name = L"button_Data";
			this->button_Data->Size = System::Drawing::Size(135, 28);
			this->button_Data->TabIndex = 4;
			this->button_Data->Text = L"Load Data";
			this->button_Data->UseVisualStyleBackColor = true;
			this->button_Data->Click += gcnew System::EventHandler(this, &StatShow::bt_button_Data_Click);
			// 
			// StatShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(785, 459);
			this->Controls->Add(this->button_Data);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"StatShow";
			this->Text = L"StatShow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bt_button_Data_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
