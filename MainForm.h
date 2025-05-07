#pragma once
#include "User.h"
#include "MainForm.h"

namespace ergakekatos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{

	private:
		double currentBalance = 0.0;
	private: System::Windows::Forms::Button^ clearbtn;

		   String^ expenseList = "";

	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
			label1->Text = "Welcome, " + user->name + "!";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::TextBox^ tbBudget;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbexpense;

	private: System::Windows::Forms::TextBox^ tbAmount;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ expensebtn;

	private: System::Windows::Forms::Label^ balance;
	private: System::Windows::Forms::Label^ EXPENSES;


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->tbBudget = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbexpense = (gcnew System::Windows::Forms::TextBox());
			this->tbAmount = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->expensebtn = (gcnew System::Windows::Forms::Button());
			this->balance = (gcnew System::Windows::Forms::Label());
			this->EXPENSES = (gcnew System::Windows::Forms::Label());
			this->clearbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(61, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(945, 61);
			this->label1->TabIndex = 0;
			this->label1->Text = L"welcome";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->lbUserInfo->Location = System::Drawing::Point(12, 126);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(191, 34);
			this->lbUserInfo->TabIndex = 1;
			this->lbUserInfo->Text = L"Enter Your Budget:";
			this->lbUserInfo->Click += gcnew System::EventHandler(this, &MainForm::lbUserInfo_Click);
			// 
			// tbBudget
			// 
			this->tbBudget->Location = System::Drawing::Point(209, 126);
			this->tbBudget->Multiline = true;
			this->tbBudget->Name = L"tbBudget";
			this->tbBudget->Size = System::Drawing::Size(124, 34);
			this->tbBudget->TabIndex = 2;
			this->tbBudget->TextChanged += gcnew System::EventHandler(this, &MainForm::tbBudget_TextChanged);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label2->Location = System::Drawing::Point(12, 201);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 33);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Expense";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// tbexpense
			// 
			this->tbexpense->Location = System::Drawing::Point(209, 193);
			this->tbexpense->Multiline = true;
			this->tbexpense->Name = L"tbexpense";
			this->tbexpense->Size = System::Drawing::Size(124, 31);
			this->tbexpense->TabIndex = 4;
			this->tbexpense->TextChanged += gcnew System::EventHandler(this, &MainForm::tbexpense_TextChanged);
			// 
			// tbAmount
			// 
			this->tbAmount->Location = System::Drawing::Point(209, 270);
			this->tbAmount->Multiline = true;
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(124, 32);
			this->tbAmount->TabIndex = 6;
			this->tbAmount->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label3->Location = System::Drawing::Point(12, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(172, 32);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Expense-Amount";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button1->Location = System::Drawing::Point(17, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 41);
			this->button1->TabIndex = 7;
			this->button1->Text = L"add budget";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// expensebtn
			// 
			this->expensebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->expensebtn->Location = System::Drawing::Point(17, 412);
			this->expensebtn->Name = L"expensebtn";
			this->expensebtn->Size = System::Drawing::Size(170, 49);
			this->expensebtn->TabIndex = 8;
			this->expensebtn->Text = L"add expense";
			this->expensebtn->UseVisualStyleBackColor = true;
			this->expensebtn->Click += gcnew System::EventHandler(this, &MainForm::expensebtn_Click);
			// 
			// balance
			// 
			this->balance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->balance->Location = System::Drawing::Point(572, 129);
			this->balance->Name = L"balance";
			this->balance->Size = System::Drawing::Size(456, 44);
			this->balance->TabIndex = 9;
			this->balance->Text = L"Your Balance ";
			this->balance->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// EXPENSES
			// 
			this->EXPENSES->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->EXPENSES->Location = System::Drawing::Point(572, 218);
			this->EXPENSES->Name = L"EXPENSES";
			this->EXPENSES->Size = System::Drawing::Size(469, 329);
			this->EXPENSES->TabIndex = 10;
			this->EXPENSES->Text = L"Your Expenses";
			this->EXPENSES->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->EXPENSES->Click += gcnew System::EventHandler(this, &MainForm::EXPENSES_Click);
			// 
			// clearbtn
			// 
			this->clearbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->clearbtn->Location = System::Drawing::Point(17, 493);
			this->clearbtn->Name = L"clearbtn";
			this->clearbtn->Size = System::Drawing::Size(122, 54);
			this->clearbtn->TabIndex = 11;
			this->clearbtn->Text = L"CLEAR";
			this->clearbtn->UseVisualStyleBackColor = true;
			this->clearbtn->Click += gcnew System::EventHandler(this, &MainForm::clearbtn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1072, 736);
			this->Controls->Add(this->clearbtn);
			this->Controls->Add(this->EXPENSES);
			this->Controls->Add(this->balance);
			this->Controls->Add(this->expensebtn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbAmount);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbexpense);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbBudget);
			this->Controls->Add(this->lbUserInfo);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbUserInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ amountText = tbBudget->Text;

		double amount;
		if (Double::TryParse(amountText, amount)) {
			currentBalance += amount;
			balance->Text = "Budget: " + currentBalance.ToString("F2") + " €";
		}
		else {
			MessageBox::Show("Invalid budget amount.");
		}
	}
	private: System::Void tbBudget_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void tbexpense_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void expensebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ expenseName = tbexpense->Text;
		String^ amountText = tbAmount->Text;

		double expenseAmount;
		if (String::IsNullOrEmpty(expenseName)) {
			MessageBox::Show("Please enter a valid expense name and amount.");
			return;
		}

		if (expenseAmount > currentBalance) {
			MessageBox::Show("Not enough balance to cover this expense.");
			return;
		}
		if (Double::TryParse(amountText, expenseAmount)) {
			currentBalance -= expenseAmount;

			// Προσθέτουμε το expense στη λίστα
			expenseList += expenseName + ": -" + expenseAmount.ToString("F2") + " €\n";
			EXPENSES->Text = "Your Expenses\n\n" + expenseList;
			balance->Text = "Budget: " + currentBalance.ToString("F2") + " €";

		}

		

		// Καθαρίζουμε τα πεδία
		tbexpense->Clear();
		tbAmount->Clear();
	}
	

private: System::Void EXPENSES_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void clearbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	for each (Control ^ ctrl in this->Controls) {
		if (TextBox^ tb = dynamic_cast<TextBox^>(ctrl)) {
			tb->Clear();

			EXPENSES->Text = "";     
			balance->Text = "";
		}
	}
}
};
}
