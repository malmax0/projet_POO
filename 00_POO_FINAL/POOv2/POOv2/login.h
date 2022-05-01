/*-----------------------------------------
|	  Create by Group 1 (ELITE)	          |
|	        Malmax09 		              |
|	    	Treeke			              |
|	    	Juggerne		              |
|	    	Ilona3210		              |
|					                      |
-----------------------------------------*/

#pragma once

namespace POOv2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		void seti(int *a);
		int geti();
		login(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		int* i;
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_username;
	private: System::Windows::Forms::TextBox^ txt_username;
	private: System::Windows::Forms::TextBox^ txt_mdp;
	protected:

	protected:


	private: System::Windows::Forms::Label^ lbl_mdp;

	private: System::Windows::Forms::Button^ bt_connect;
	private: System::Windows::Forms::Label^ labelLogin;





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
			this->lbl_username = (gcnew System::Windows::Forms::Label());
			this->txt_username = (gcnew System::Windows::Forms::TextBox());
			this->txt_mdp = (gcnew System::Windows::Forms::TextBox());
			this->lbl_mdp = (gcnew System::Windows::Forms::Label());
			this->bt_connect = (gcnew System::Windows::Forms::Button());
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->Location = System::Drawing::Point(59, 82);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(73, 17);
			this->lbl_username->TabIndex = 0;
			this->lbl_username->Text = L"Username";
			// 
			// txt_username
			// 
			this->txt_username->Location = System::Drawing::Point(179, 82);
			this->txt_username->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(152, 22);
			this->txt_username->TabIndex = 1;
			// 
			// txt_mdp
			// 
			this->txt_mdp->Location = System::Drawing::Point(179, 162);
			this->txt_mdp->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_mdp->Name = L"txt_mdp";
			this->txt_mdp->PasswordChar = '*';
			this->txt_mdp->Size = System::Drawing::Size(152, 22);
			this->txt_mdp->TabIndex = 2;
			// 
			// lbl_mdp
			// 
			this->lbl_mdp->AutoSize = true;
			this->lbl_mdp->Location = System::Drawing::Point(59, 162);
			this->lbl_mdp->Name = L"lbl_mdp";
			this->lbl_mdp->Size = System::Drawing::Size(69, 17);
			this->lbl_mdp->TabIndex = 3;
			this->lbl_mdp->Text = L"Password";
			// 
			// bt_connect
			// 
			this->bt_connect->Location = System::Drawing::Point(151, 231);
			this->bt_connect->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bt_connect->Name = L"bt_connect";
			this->bt_connect->Size = System::Drawing::Size(97, 41);
			this->bt_connect->TabIndex = 5;
			this->bt_connect->Text = L"Connect";
			this->bt_connect->UseVisualStyleBackColor = true;
			this->bt_connect->Click += gcnew System::EventHandler(this, &login::bt_connect_Click);
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->Location = System::Drawing::Point(89, 314);
			this->labelLogin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(0, 17);
			this->labelLogin->TabIndex = 6;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(429, 420);
			this->Controls->Add(this->labelLogin);
			this->Controls->Add(this->bt_connect);
			this->Controls->Add(this->lbl_mdp);
			this->Controls->Add(this->txt_mdp);
			this->Controls->Add(this->txt_username);
			this->Controls->Add(this->lbl_username);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"login";
			this->Text = L"login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void bt_connect_Click(System::Object^ sender, System::EventArgs^ e); 


};
}
