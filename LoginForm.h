#pragma once
#include "User.h"

namespace ergakekatos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Button^ btmOk;
	private: System::Windows::Forms::Button^ btnCnacel;
	private: System::Windows::Forms::LinkLabel^ Register;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btmOk = (gcnew System::Windows::Forms::Button());
			this->btnCnacel = (gcnew System::Windows::Forms::Button());
			this->Register = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(3, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(544, 77);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(156, 121);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(400, 37);
			this->tbEmail->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 182);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &LoginForm::label3_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(156, 176);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(391, 37);
			this->tbPassword->TabIndex = 4;
			// 
			// btmOk
			// 
			this->btmOk->Location = System::Drawing::Point(156, 305);
			this->btmOk->Name = L"btmOk";
			this->btmOk->Size = System::Drawing::Size(105, 42);
			this->btmOk->TabIndex = 5;
			this->btmOk->Text = L"OK";
			this->btmOk->UseVisualStyleBackColor = true;
			this->btmOk->Click += gcnew System::EventHandler(this, &LoginForm::btmOk_Click);
			// 
			// btnCnacel
			// 
			this->btnCnacel->Location = System::Drawing::Point(348, 305);
			this->btnCnacel->Name = L"btnCnacel";
			this->btnCnacel->Size = System::Drawing::Size(100, 41);
			this->btnCnacel->TabIndex = 6;
			this->btnCnacel->Text = L"cancel";
			this->btnCnacel->UseVisualStyleBackColor = true;
			this->btnCnacel->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// Register
			// 
			this->Register->AutoSize = true;
			this->Register->Location = System::Drawing::Point(245, 401);
			this->Register->Name = L"Register";
			this->Register->Size = System::Drawing::Size(105, 31);
			this->Register->TabIndex = 7;
			this->Register->TabStop = true;
			this->Register->Text = L"register";
			this->Register->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::Register_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(568, 502);
			this->Controls->Add(this->Register);
			this->Controls->Add(this->btnCnacel);
			this->Controls->Add(this->btmOk);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
    public: User^ user=nullptr;
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btmOk_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->tbEmail->Text;
	String^ password = this->tbPassword->Text;

	if (email->Length == 0 || password->Length == 0) {
		MessageBox::Show("please enter email and password","", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connString = "Data Source=localhost\\MSSQLSERVER01;Initial Catalog=myapp;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@pwd";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@pwd", password);


		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->name = reader->GetString(1);
		    user->email = reader->GetString(2);
			user->phone = reader ->GetString(3);
			user->address = reader ->GetString(4);
			user->password = reader ->GetString(5);
			this->Close();
		}
		else {
			MessageBox::Show("Email or Password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
		}

	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to connect to database:\n" + ex->Message, "Database connection error", MessageBoxButtons::OK);
	}


}
	   public: bool switchToRegister = false;	
private: System::Void Register_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
}
};
}
