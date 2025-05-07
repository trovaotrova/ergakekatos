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
	/// Summary for RegistrationForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ NAME;
	private: System::Windows::Forms::TextBox^ tbname;
	private: System::Windows::Forms::TextBox^ tbemail;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbphone;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbaddress;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbpassword;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnRegister;

	private: System::Windows::Forms::Button^ btncancel;
	private: System::Windows::Forms::LinkLabel^ login;



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
			this->NAME = (gcnew System::Windows::Forms::Label());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbphone = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbaddress = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->login = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(656, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTER";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// NAME
			// 
			this->NAME->Location = System::Drawing::Point(15, 142);
			this->NAME->Name = L"NAME";
			this->NAME->Size = System::Drawing::Size(151, 46);
			this->NAME->TabIndex = 1;
			this->NAME->Text = L"NAME:";
			// 
			// tbname
			// 
			this->tbname->Location = System::Drawing::Point(129, 139);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(471, 38);
			this->tbname->TabIndex = 2;
			// 
			// tbemail
			// 
			this->tbemail->Location = System::Drawing::Point(126, 228);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(471, 38);
			this->tbemail->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(12, 231);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 46);
			this->label2->TabIndex = 3;
			this->label2->Text = L"EMAIL:";
			this->label2->Click += gcnew System::EventHandler(this, &RegistrationForm::label2_Click);
			// 
			// tbphone
			// 
			this->tbphone->Location = System::Drawing::Point(126, 323);
			this->tbphone->Name = L"tbphone";
			this->tbphone->Size = System::Drawing::Size(471, 38);
			this->tbphone->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(12, 326);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 46);
			this->label3->TabIndex = 5;
			this->label3->Text = L"PHONE:";
			// 
			// tbaddress
			// 
			this->tbaddress->Location = System::Drawing::Point(126, 415);
			this->tbaddress->Name = L"tbaddress";
			this->tbaddress->Size = System::Drawing::Size(471, 38);
			this->tbaddress->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(12, 418);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 46);
			this->label4->TabIndex = 7;
			this->label4->Text = L"ADD:";
			// 
			// tbpassword
			// 
			this->tbpassword->Location = System::Drawing::Point(126, 506);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(471, 38);
			this->tbpassword->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(12, 509);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 46);
			this->label5->TabIndex = 9;
			this->label5->Text = L"PWD:";
			this->label5->Click += gcnew System::EventHandler(this, &RegistrationForm::label5_Click);
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(44, 629);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(260, 57);
			this->btnRegister->TabIndex = 11;
			this->btnRegister->Text = L"REGISTER";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &RegistrationForm::btnRegister_Click);
			// 
			// btncancel
			// 
			this->btncancel->Location = System::Drawing::Point(397, 629);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(143, 57);
			this->btncancel->TabIndex = 12;
			this->btncancel->Text = L"cancel";
			this->btncancel->UseVisualStyleBackColor = true;
			this->btncancel->Click += gcnew System::EventHandler(this, &RegistrationForm::btncancel_Click);
			// 
			// login
			// 
			this->login->AutoSize = true;
			this->login->Location = System::Drawing::Point(284, 729);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(76, 32);
			this->login->TabIndex = 13;
			this->login->TabStop = true;
			this->login->Text = L"login";
			this->login->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegistrationForm::login_LinkClicked);
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1728, 1055);
			this->Controls->Add(this->login);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbaddress);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbphone);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbname);
			this->Controls->Add(this->NAME);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->Name = L"RegistrationForm";
			this->Text = L"RegistrationForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   public: bool switchToLogin = false;
private: System::Void login_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}
	   public: User^ user = nullptr;
private: System::Void btncancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = tbname->Text;
	String^ email = tbemail->Text;
	String^ phone = tbphone->Text;
	String^ address = tbaddress->Text;
	String^ password = tbpassword->Text;

	if (name->Length == 0 || email->Length == 0 || phone->Length == 0 || address->Length == 0 || password->Length == 0) {
		MessageBox::Show("please enter all fields", "on or more empty fields", MessageBoxButtons::OK);
			return;
	}
	try {
		String^ connString = "Data Source=localhost\\MSSQLSERVER01;Initial Catalog=myapp;Integrated Security=True;Encrypt=True;TrustServerCertificate=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();



		String^ sqlQuery = "INSERT INTO Users" + "(name, email, phone, address, password) VALUES" + "(@name, @email, @phone, @address, @password);";

		SqlCommand command(sqlQuery, %sqlConn);
		command.Parameters->AddWithValue("@name",name);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@phone", phone);
		command.Parameters->AddWithValue("@address", address);	
		command.Parameters->AddWithValue("@password", password);

		command.ExecuteNonQuery();
		user = gcnew User;
		user->name = name;
		user->email = email;
		user->phone = phone;
		user->address = address;
		user->password = password;


		this->Close();
	}
	catch (Exception^ ex) {
			MessageBox::Show("Failed to register: " + ex->Message, "REGISTER FAILURE", MessageBoxButtons::OK, MessageBoxIcon::Error);
		

	}

}
};
}
