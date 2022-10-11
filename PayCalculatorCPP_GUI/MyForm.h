#pragma once
#include<string>

namespace PayCalculatorCPPGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	float payRate;
	float regHours;
	float otHours;
	float taxRate = 0.3;
	float basePay;
	float otPay;
	float totalPay;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBoxPayRate;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBoxGrossEarnings;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxMedicare;
	private: System::Windows::Forms::TextBox^  textBoxSocSec;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBoxTaxState;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBoxTaxFederal;


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
			this->textBoxPayRate = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxGrossEarnings = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxMedicare = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSocSec = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTaxState = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTaxFederal = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBoxPayRate
			// 
			this->textBoxPayRate->Location = System::Drawing::Point(20, 57);
			this->textBoxPayRate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPayRate->Name = L"textBoxPayRate";
			this->textBoxPayRate->Size = System::Drawing::Size(132, 22);
			this->textBoxPayRate->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 26);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pay Rate:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(20, 175);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 41);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Weekly", L"Biweekly", L"Annually" });
			this->comboBox1->Location = System::Drawing::Point(20, 122);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 24);
			this->comboBox1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 94);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Period:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(247, 26);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Gross Earnings:";
			// 
			// textBoxGrossEarnings
			// 
			this->textBoxGrossEarnings->Location = System::Drawing::Point(251, 57);
			this->textBoxGrossEarnings->Margin = System::Windows::Forms::Padding(4);
			this->textBoxGrossEarnings->Name = L"textBoxGrossEarnings";
			this->textBoxGrossEarnings->Size = System::Drawing::Size(167, 22);
			this->textBoxGrossEarnings->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(250, 183);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Medicare:";
			// 
			// textBoxMedicare
			// 
			this->textBoxMedicare->Location = System::Drawing::Point(357, 187);
			this->textBoxMedicare->Margin = System::Windows::Forms::Padding(4);
			this->textBoxMedicare->Name = L"textBoxMedicare";
			this->textBoxMedicare->Size = System::Drawing::Size(167, 22);
			this->textBoxMedicare->TabIndex = 11;
			// 
			// textBoxSocSec
			// 
			this->textBoxSocSec->Location = System::Drawing::Point(357, 162);
			this->textBoxSocSec->Margin = System::Windows::Forms::Padding(4);
			this->textBoxSocSec->Name = L"textBoxSocSec";
			this->textBoxSocSec->Size = System::Drawing::Size(167, 22);
			this->textBoxSocSec->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(250, 158);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 25);
			this->label5->TabIndex = 12;
			this->label5->Text = L"SocSec:";
			// 
			// textBoxTaxState
			// 
			this->textBoxTaxState->Location = System::Drawing::Point(357, 136);
			this->textBoxTaxState->Margin = System::Windows::Forms::Padding(4);
			this->textBoxTaxState->Name = L"textBoxTaxState";
			this->textBoxTaxState->Size = System::Drawing::Size(167, 22);
			this->textBoxTaxState->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(250, 132);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 25);
			this->label6->TabIndex = 15;
			this->label6->Text = L"State:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(250, 106);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 25);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Federal:";
			// 
			// textBoxTaxFederal
			// 
			this->textBoxTaxFederal->Location = System::Drawing::Point(357, 110);
			this->textBoxTaxFederal->Margin = System::Windows::Forms::Padding(4);
			this->textBoxTaxFederal->Name = L"textBoxTaxFederal";
			this->textBoxTaxFederal->Size = System::Drawing::Size(167, 22);
			this->textBoxTaxFederal->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 244);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxTaxFederal);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxTaxState);
			this->Controls->Add(this->textBoxSocSec);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxMedicare);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxGrossEarnings);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxPayRate);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Pay Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (comboBox1->SelectedItem->ToString() == "Weekly") {
			payRate = System::Convert::ToSingle(textBoxPayRate->Text);
			basePay = payRate * 40;
		}
		else if (comboBox1->SelectedItem->ToString() == "Biweekly") {
			payRate = System::Convert::ToSingle(textBoxPayRate->Text);
			basePay = payRate * 80;
		}
		else if (comboBox1->SelectedItem->ToString() == "Annually") {
			payRate = System::Convert::ToSingle(textBoxPayRate->Text);
			basePay = payRate * 2080;
		}

		float taxMedicare = basePay * 0.0145;
		float taxSocSec = basePay * 0.062;
		
		String^ strGross;
		String^ strMedicare;
		String^ strSocSec;

		strGross = System::String::Format("{0:c2}", basePay);
		strMedicare = System::String::Format("{0:c2}", taxMedicare);
		strSocSec = System::String::Format("{0:c2}", taxSocSec);

		textBoxGrossEarnings->Text = System::Convert::ToString(strGross);
		textBoxMedicare->Text = System::Convert::ToString(strMedicare);
		textBoxSocSec->Text = System::Convert::ToString(strSocSec);
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
