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
	/// Description résumée de CommandShow
	/// </summary>
	public ref class CommandShow : public Show
	{
	public:
		CommandShow(void)
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
		~CommandShow()
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button_Data;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button_Data = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(4, 58);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1025, 586);
			this->dataGridView1->TabIndex = 1;
			// 
			// button_Data
			// 
			this->button_Data->Location = System::Drawing::Point(12, 12);
			this->button_Data->Name = L"button_Data";
			this->button_Data->Size = System::Drawing::Size(135, 28);
			this->button_Data->TabIndex = 2;
			this->button_Data->Text = L"Load Data";
			this->button_Data->UseVisualStyleBackColor = true;
			this->button_Data->Click += gcnew System::EventHandler(this, &CommandShow::bt_button_Data_Click);
			// 
			// CommandShow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1032, 650);
			this->Controls->Add(this->button_Data);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"CommandShow";
			this->Text = L"CommandShow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bt_button_Data_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
