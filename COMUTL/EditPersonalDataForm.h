#pragma once
#include "iostream"
#include "RecordRepository.h"

namespace COMUTL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditPersonalDataForm
	/// </summary>
	public ref class EditPersonalDataForm : public System::Windows::Forms::Form
	{
	public:
		EditPersonalDataForm(RecordRepository^ repository)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->repository = repository;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditPersonalDataForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: RecordRepository^ repository;
	private: System::Windows::Forms::GroupBox^ EditConditionsGroupBox;
	private: System::Windows::Forms::GroupBox^ EditInfoGroupBox;
	private: System::Windows::Forms::GroupBox^ EditAddressGroupBox;
	private: System::Windows::Forms::Label^ PriceLabel;
	private: System::Windows::Forms::Label^ DicountLabel;
	private: System::Windows::Forms::Label^ PlanTariffLabel;
	private: System::Windows::Forms::Label^ TermPlanLabel;
	private: System::Windows::Forms::Label^ SubsidiesLabel;
	private: System::Windows::Forms::Label^ OwnerLabel;
	private: System::Windows::Forms::Label^ EISCodeLabel;
	private: System::Windows::Forms::Label^ AddressOblastLabel;
	private: System::Windows::Forms::Label^ AddressCityLabel;
	private: System::Windows::Forms::Label^ AddressStreetLabel;
	private: System::Windows::Forms::Label^ AddressHomeLabel;
	private: System::Windows::Forms::TextBox^ PriceTextBox;
	private: System::Windows::Forms::TextBox^ FirstNameTextBox;
	private: System::Windows::Forms::TextBox^ ThirdNameTextBox;







	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ SecondNameTextBox;


	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

	private: System::Windows::Forms::TextBox^ CodeTextBox;
	private: System::Windows::Forms::TextBox^ HomeTextBox;




	private: System::Windows::Forms::TextBox^ StreetTextBox;
	private: System::Windows::Forms::TextBox^ CityComboBox;


	private: System::Windows::Forms::TextBox^ RegionTextBox;






	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;











	protected:

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
			this->EditConditionsGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->PriceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SubsidiesLabel = (gcnew System::Windows::Forms::Label());
			this->TermPlanLabel = (gcnew System::Windows::Forms::Label());
			this->PlanTariffLabel = (gcnew System::Windows::Forms::Label());
			this->DicountLabel = (gcnew System::Windows::Forms::Label());
			this->PriceLabel = (gcnew System::Windows::Forms::Label());
			this->EditInfoGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->EISCodeLabel = (gcnew System::Windows::Forms::Label());
			this->ThirdNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SecondNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CodeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FirstNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->OwnerLabel = (gcnew System::Windows::Forms::Label());
			this->EditAddressGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->AddressHomeLabel = (gcnew System::Windows::Forms::Label());
			this->AddressStreetLabel = (gcnew System::Windows::Forms::Label());
			this->AddressCityLabel = (gcnew System::Windows::Forms::Label());
			this->AddressOblastLabel = (gcnew System::Windows::Forms::Label());
			this->HomeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StreetTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CityComboBox = (gcnew System::Windows::Forms::TextBox());
			this->RegionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->EditConditionsGroupBox->SuspendLayout();
			this->EditInfoGroupBox->SuspendLayout();
			this->EditAddressGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// EditConditionsGroupBox
			// 
			this->EditConditionsGroupBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->EditConditionsGroupBox->Controls->Add(this->comboBox2);
			this->EditConditionsGroupBox->Controls->Add(this->checkBox1);
			this->EditConditionsGroupBox->Controls->Add(this->dateTimePicker1);
			this->EditConditionsGroupBox->Controls->Add(this->comboBox1);
			this->EditConditionsGroupBox->Controls->Add(this->PriceTextBox);
			this->EditConditionsGroupBox->Controls->Add(this->SubsidiesLabel);
			this->EditConditionsGroupBox->Controls->Add(this->TermPlanLabel);
			this->EditConditionsGroupBox->Controls->Add(this->PlanTariffLabel);
			this->EditConditionsGroupBox->Controls->Add(this->DicountLabel);
			this->EditConditionsGroupBox->Controls->Add(this->PriceLabel);
			this->EditConditionsGroupBox->Location = System::Drawing::Point(9, 10);
			this->EditConditionsGroupBox->Margin = System::Windows::Forms::Padding(2);
			this->EditConditionsGroupBox->Name = L"EditConditionsGroupBox";
			this->EditConditionsGroupBox->Padding = System::Windows::Forms::Padding(2);
			this->EditConditionsGroupBox->Size = System::Drawing::Size(222, 210);
			this->EditConditionsGroupBox->TabIndex = 0;
			this->EditConditionsGroupBox->TabStop = false;
			this->EditConditionsGroupBox->Text = L"Conditions";
			this->EditConditionsGroupBox->Enter += gcnew System::EventHandler(this, &EditPersonalDataForm::EditConditionsGroupBox_Enter);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(158, 182);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(61, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Include";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(5, 151);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(212, 20);
			this->dateTimePicker1->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"0%", L"1%", L"2%", L"3%", L"4%", L"5%", L"6%",
					L"7%", L"8%", L"9%", L"10%", L"11%", L"12%", L"13%", L"14%", L"15%", L"16%", L"17%", L"18%", L"19%", L"20%", L"21%", L"22%",
					L"23%", L"24%", L"25%", L"26%", L"27%", L"28%", L"29%", L"30%"
			});
			this->comboBox1->Location = System::Drawing::Point(5, 70);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(212, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// PriceTextBox
			// 
			this->PriceTextBox->Location = System::Drawing::Point(5, 31);
			this->PriceTextBox->Name = L"PriceTextBox";
			this->PriceTextBox->Size = System::Drawing::Size(212, 20);
			this->PriceTextBox->TabIndex = 5;
			// 
			// SubsidiesLabel
			// 
			this->SubsidiesLabel->AutoSize = true;
			this->SubsidiesLabel->Location = System::Drawing::Point(4, 183);
			this->SubsidiesLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->SubsidiesLabel->Name = L"SubsidiesLabel";
			this->SubsidiesLabel->Size = System::Drawing::Size(52, 13);
			this->SubsidiesLabel->TabIndex = 4;
			this->SubsidiesLabel->Text = L"Subsidies";
			// 
			// TermPlanLabel
			// 
			this->TermPlanLabel->AutoSize = true;
			this->TermPlanLabel->Location = System::Drawing::Point(2, 135);
			this->TermPlanLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TermPlanLabel->Name = L"TermPlanLabel";
			this->TermPlanLabel->Size = System::Drawing::Size(66, 13);
			this->TermPlanLabel->TabIndex = 3;
			this->TermPlanLabel->Text = L"Term of plan";
			this->TermPlanLabel->Click += gcnew System::EventHandler(this, &EditPersonalDataForm::TermPlanLabel_Click);
			// 
			// PlanTariffLabel
			// 
			this->PlanTariffLabel->AutoSize = true;
			this->PlanTariffLabel->Location = System::Drawing::Point(2, 94);
			this->PlanTariffLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PlanTariffLabel->Name = L"PlanTariffLabel";
			this->PlanTariffLabel->Size = System::Drawing::Size(63, 13);
			this->PlanTariffLabel->TabIndex = 2;
			this->PlanTariffLabel->Text = L"Plan of tariff";
			// 
			// DicountLabel
			// 
			this->DicountLabel->AutoSize = true;
			this->DicountLabel->Location = System::Drawing::Point(2, 54);
			this->DicountLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DicountLabel->Name = L"DicountLabel";
			this->DicountLabel->Size = System::Drawing::Size(49, 13);
			this->DicountLabel->TabIndex = 1;
			this->DicountLabel->Text = L"Discount";
			// 
			// PriceLabel
			// 
			this->PriceLabel->AutoSize = true;
			this->PriceLabel->Location = System::Drawing::Point(2, 15);
			this->PriceLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PriceLabel->Name = L"PriceLabel";
			this->PriceLabel->Size = System::Drawing::Size(31, 13);
			this->PriceLabel->TabIndex = 0;
			this->PriceLabel->Text = L"Price";
			// 
			// EditInfoGroupBox
			// 
			this->EditInfoGroupBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->EditInfoGroupBox->Controls->Add(this->EISCodeLabel);
			this->EditInfoGroupBox->Controls->Add(this->ThirdNameTextBox);
			this->EditInfoGroupBox->Controls->Add(this->label2);
			this->EditInfoGroupBox->Controls->Add(this->SecondNameTextBox);
			this->EditInfoGroupBox->Controls->Add(this->label1);
			this->EditInfoGroupBox->Controls->Add(this->CodeTextBox);
			this->EditInfoGroupBox->Controls->Add(this->FirstNameTextBox);
			this->EditInfoGroupBox->Controls->Add(this->OwnerLabel);
			this->EditInfoGroupBox->Location = System::Drawing::Point(242, 10);
			this->EditInfoGroupBox->Margin = System::Windows::Forms::Padding(2);
			this->EditInfoGroupBox->Name = L"EditInfoGroupBox";
			this->EditInfoGroupBox->Padding = System::Windows::Forms::Padding(2);
			this->EditInfoGroupBox->Size = System::Drawing::Size(434, 97);
			this->EditInfoGroupBox->TabIndex = 1;
			this->EditInfoGroupBox->TabStop = false;
			this->EditInfoGroupBox->Text = L"Personal info";
			// 
			// EISCodeLabel
			// 
			this->EISCodeLabel->AutoSize = true;
			this->EISCodeLabel->Location = System::Drawing::Point(4, 54);
			this->EISCodeLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->EISCodeLabel->Name = L"EISCodeLabel";
			this->EISCodeLabel->Size = System::Drawing::Size(52, 13);
			this->EISCodeLabel->TabIndex = 1;
			this->EISCodeLabel->Text = L"EIS-Code";
			// 
			// ThirdNameTextBox
			// 
			this->ThirdNameTextBox->Location = System::Drawing::Point(291, 31);
			this->ThirdNameTextBox->Name = L"ThirdNameTextBox";
			this->ThirdNameTextBox->Size = System::Drawing::Size(138, 20);
			this->ThirdNameTextBox->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(288, 15);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Third Name";
			this->label2->Click += gcnew System::EventHandler(this, &EditPersonalDataForm::OwnerLabel_Click);
			// 
			// SecondNameTextBox
			// 
			this->SecondNameTextBox->Location = System::Drawing::Point(148, 31);
			this->SecondNameTextBox->Name = L"SecondNameTextBox";
			this->SecondNameTextBox->Size = System::Drawing::Size(138, 20);
			this->SecondNameTextBox->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(145, 15);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Second Name";
			this->label1->Click += gcnew System::EventHandler(this, &EditPersonalDataForm::OwnerLabel_Click);
			// 
			// CodeTextBox
			// 
			this->CodeTextBox->Location = System::Drawing::Point(5, 70);
			this->CodeTextBox->Name = L"CodeTextBox";
			this->CodeTextBox->Size = System::Drawing::Size(424, 20);
			this->CodeTextBox->TabIndex = 5;
			// 
			// FirstNameTextBox
			// 
			this->FirstNameTextBox->Location = System::Drawing::Point(5, 31);
			this->FirstNameTextBox->Name = L"FirstNameTextBox";
			this->FirstNameTextBox->Size = System::Drawing::Size(138, 20);
			this->FirstNameTextBox->TabIndex = 5;
			// 
			// OwnerLabel
			// 
			this->OwnerLabel->AutoSize = true;
			this->OwnerLabel->Location = System::Drawing::Point(4, 15);
			this->OwnerLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->OwnerLabel->Name = L"OwnerLabel";
			this->OwnerLabel->Size = System::Drawing::Size(57, 13);
			this->OwnerLabel->TabIndex = 0;
			this->OwnerLabel->Text = L"First Name";
			this->OwnerLabel->Click += gcnew System::EventHandler(this, &EditPersonalDataForm::OwnerLabel_Click);
			// 
			// EditAddressGroupBox
			// 
			this->EditAddressGroupBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->EditAddressGroupBox->Controls->Add(this->AddressHomeLabel);
			this->EditAddressGroupBox->Controls->Add(this->AddressStreetLabel);
			this->EditAddressGroupBox->Controls->Add(this->AddressCityLabel);
			this->EditAddressGroupBox->Controls->Add(this->AddressOblastLabel);
			this->EditAddressGroupBox->Controls->Add(this->HomeTextBox);
			this->EditAddressGroupBox->Controls->Add(this->StreetTextBox);
			this->EditAddressGroupBox->Controls->Add(this->CityComboBox);
			this->EditAddressGroupBox->Controls->Add(this->RegionTextBox);
			this->EditAddressGroupBox->Location = System::Drawing::Point(242, 120);
			this->EditAddressGroupBox->Margin = System::Windows::Forms::Padding(2);
			this->EditAddressGroupBox->Name = L"EditAddressGroupBox";
			this->EditAddressGroupBox->Padding = System::Windows::Forms::Padding(2);
			this->EditAddressGroupBox->Size = System::Drawing::Size(434, 99);
			this->EditAddressGroupBox->TabIndex = 2;
			this->EditAddressGroupBox->TabStop = false;
			this->EditAddressGroupBox->Text = L"Address";
			// 
			// AddressHomeLabel
			// 
			this->AddressHomeLabel->AutoSize = true;
			this->AddressHomeLabel->Location = System::Drawing::Point(217, 54);
			this->AddressHomeLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->AddressHomeLabel->Name = L"AddressHomeLabel";
			this->AddressHomeLabel->Size = System::Drawing::Size(35, 13);
			this->AddressHomeLabel->TabIndex = 3;
			this->AddressHomeLabel->Text = L"Home";
			// 
			// AddressStreetLabel
			// 
			this->AddressStreetLabel->AutoSize = true;
			this->AddressStreetLabel->Location = System::Drawing::Point(6, 54);
			this->AddressStreetLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->AddressStreetLabel->Name = L"AddressStreetLabel";
			this->AddressStreetLabel->Size = System::Drawing::Size(35, 13);
			this->AddressStreetLabel->TabIndex = 2;
			this->AddressStreetLabel->Text = L"Street";
			// 
			// AddressCityLabel
			// 
			this->AddressCityLabel->AutoSize = true;
			this->AddressCityLabel->Location = System::Drawing::Point(217, 15);
			this->AddressCityLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->AddressCityLabel->Name = L"AddressCityLabel";
			this->AddressCityLabel->Size = System::Drawing::Size(24, 13);
			this->AddressCityLabel->TabIndex = 1;
			this->AddressCityLabel->Text = L"City";
			// 
			// AddressOblastLabel
			// 
			this->AddressOblastLabel->AutoSize = true;
			this->AddressOblastLabel->Location = System::Drawing::Point(4, 15);
			this->AddressOblastLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->AddressOblastLabel->Name = L"AddressOblastLabel";
			this->AddressOblastLabel->Size = System::Drawing::Size(41, 13);
			this->AddressOblastLabel->TabIndex = 0;
			this->AddressOblastLabel->Text = L"Region";
			// 
			// HomeTextBox
			// 
			this->HomeTextBox->Location = System::Drawing::Point(220, 70);
			this->HomeTextBox->Name = L"HomeTextBox";
			this->HomeTextBox->Size = System::Drawing::Size(209, 20);
			this->HomeTextBox->TabIndex = 5;
			// 
			// StreetTextBox
			// 
			this->StreetTextBox->Location = System::Drawing::Point(9, 70);
			this->StreetTextBox->Name = L"StreetTextBox";
			this->StreetTextBox->Size = System::Drawing::Size(205, 20);
			this->StreetTextBox->TabIndex = 5;
			// 
			// CityComboBox
			// 
			this->CityComboBox->Location = System::Drawing::Point(220, 31);
			this->CityComboBox->Name = L"CityComboBox";
			this->CityComboBox->Size = System::Drawing::Size(209, 20);
			this->CityComboBox->TabIndex = 5;
			// 
			// RegionTextBox
			// 
			this->RegionTextBox->Location = System::Drawing::Point(7, 31);
			this->RegionTextBox->Name = L"RegionTextBox";
			this->RegionTextBox->Size = System::Drawing::Size(207, 20);
			this->RegionTextBox->TabIndex = 5;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"None", L"Yearly", L"Monthly" });
			this->comboBox2->Location = System::Drawing::Point(5, 110);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(212, 21);
			this->comboBox2->TabIndex = 10;
			// 
			// EditPersonalDataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(687, 230);
			this->Controls->Add(this->EditAddressGroupBox);
			this->Controls->Add(this->EditInfoGroupBox);
			this->Controls->Add(this->EditConditionsGroupBox);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"EditPersonalDataForm";
			this->Text = L"EditPersonalDataForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &EditPersonalDataForm::EditPersonalDataForm_FormClosing);
			this->EditConditionsGroupBox->ResumeLayout(false);
			this->EditConditionsGroupBox->PerformLayout();
			this->EditInfoGroupBox->ResumeLayout(false);
			this->EditInfoGroupBox->PerformLayout();
			this->EditAddressGroupBox->ResumeLayout(false);
			this->EditAddressGroupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EditConditionsGroupBox_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void OwnerLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void TermPlanLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EditPersonalDataForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	auto result = MessageBox::Show(this, "Are you gayh", "Confirammtion", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}
};
}
