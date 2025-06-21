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
		EditPersonalDataForm(RecordRepository^ repository, ERecordType selectedType)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->repository = repository;
			this->selectedType = selectedType;
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
	private: ERecordType selectedType;

	private: System::Windows::Forms::GroupBox^ EditConditionsGroupBox;
	private: System::Windows::Forms::GroupBox^ EditInfoGroupBox;
	private: System::Windows::Forms::GroupBox^ EditAddressGroupBox;
	private: System::Windows::Forms::Label^ PriceLabel;
	private: System::Windows::Forms::Label^ DicountLabel;
	private: System::Windows::Forms::Label^ PlanTariffLabel;
	private: System::Windows::Forms::Label^ TermPlanLabel;
	private: System::Windows::Forms::Label^ SubsidiesLabel;
	private: System::Windows::Forms::Label^ FirstNameLabel;



	private: System::Windows::Forms::Label^ EISCodeLabel;
	private: System::Windows::Forms::Label^ AddressOblastLabel;
	private: System::Windows::Forms::Label^ AddressCityLabel;
	private: System::Windows::Forms::Label^ AddressStreetLabel;
	private: System::Windows::Forms::Label^ AddressHomeLabel;
	private: System::Windows::Forms::TextBox^ PriceTextBox;
	private: System::Windows::Forms::TextBox^ FirstNameTextBox;
	private: System::Windows::Forms::TextBox^ ThirdNameTextBox;
	private: System::Windows::Forms::Label^ ThirdNameLabel;


	private: System::Windows::Forms::TextBox^ SecondNameTextBox;
	private: System::Windows::Forms::Label^ SecoundNameLabel;

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::TextBox^ EISCodeTextBox;

	private: System::Windows::Forms::TextBox^ HomeTextBox;
	private: System::Windows::Forms::TextBox^ StreetTextBox;
	private: System::Windows::Forms::TextBox^ CityComboBox;
	private: System::Windows::Forms::TextBox^ RegionTextBox;
	private: System::Windows::Forms::ComboBox^ DiscountComboBox;
	private: System::Windows::Forms::DateTimePicker^ TermPlanDateTimePicker;


	private: System::Windows::Forms::CheckBox^ SubsidiesCheckBox;

	private: System::Windows::Forms::ComboBox^ PlanTariffComboBox;



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
			this->PlanTariffComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SubsidiesCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->TermPlanDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->DiscountComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->PriceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SubsidiesLabel = (gcnew System::Windows::Forms::Label());
			this->TermPlanLabel = (gcnew System::Windows::Forms::Label());
			this->PlanTariffLabel = (gcnew System::Windows::Forms::Label());
			this->DicountLabel = (gcnew System::Windows::Forms::Label());
			this->PriceLabel = (gcnew System::Windows::Forms::Label());
			this->EditInfoGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->EISCodeLabel = (gcnew System::Windows::Forms::Label());
			this->ThirdNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ThirdNameLabel = (gcnew System::Windows::Forms::Label());
			this->SecondNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SecoundNameLabel = (gcnew System::Windows::Forms::Label());
			this->EISCodeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FirstNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FirstNameLabel = (gcnew System::Windows::Forms::Label());
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
			this->EditConditionsGroupBox->SuspendLayout();
			this->EditInfoGroupBox->SuspendLayout();
			this->EditAddressGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// EditConditionsGroupBox
			// 
			this->EditConditionsGroupBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->EditConditionsGroupBox->Controls->Add(this->PlanTariffComboBox);
			this->EditConditionsGroupBox->Controls->Add(this->SubsidiesCheckBox);
			this->EditConditionsGroupBox->Controls->Add(this->TermPlanDateTimePicker);
			this->EditConditionsGroupBox->Controls->Add(this->DiscountComboBox);
			this->EditConditionsGroupBox->Controls->Add(this->PriceTextBox);
			this->EditConditionsGroupBox->Controls->Add(this->SubsidiesLabel);
			this->EditConditionsGroupBox->Controls->Add(this->TermPlanLabel);
			this->EditConditionsGroupBox->Controls->Add(this->PlanTariffLabel);
			this->EditConditionsGroupBox->Controls->Add(this->DicountLabel);
			this->EditConditionsGroupBox->Controls->Add(this->PriceLabel);
			this->EditConditionsGroupBox->Location = System::Drawing::Point(12, 12);
			this->EditConditionsGroupBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EditConditionsGroupBox->Name = L"EditConditionsGroupBox";
			this->EditConditionsGroupBox->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EditConditionsGroupBox->Size = System::Drawing::Size(451, 177);
			this->EditConditionsGroupBox->TabIndex = 0;
			this->EditConditionsGroupBox->TabStop = false;
			this->EditConditionsGroupBox->Text = L"Conditions";
			this->EditConditionsGroupBox->Enter += gcnew System::EventHandler(this, &EditPersonalDataForm::EditConditionsGroupBox_Enter);
			// 
			// PlanTariffComboBox
			// 
			this->PlanTariffComboBox->FormattingEnabled = true;
			this->PlanTariffComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"None", L"Yearly", L"Monthly" });
			this->PlanTariffComboBox->Location = System::Drawing::Point(130, 79);
			this->PlanTariffComboBox->Margin = System::Windows::Forms::Padding(4);
			this->PlanTariffComboBox->Name = L"PlanTariffComboBox";
			this->PlanTariffComboBox->Size = System::Drawing::Size(82, 24);
			this->PlanTariffComboBox->TabIndex = 10;
			// 
			// SubsidiesCheckBox
			// 
			this->SubsidiesCheckBox->AutoSize = true;
			this->SubsidiesCheckBox->Location = System::Drawing::Point(352, 80);
			this->SubsidiesCheckBox->Margin = System::Windows::Forms::Padding(4);
			this->SubsidiesCheckBox->Name = L"SubsidiesCheckBox";
			this->SubsidiesCheckBox->Size = System::Drawing::Size(72, 20);
			this->SubsidiesCheckBox->TabIndex = 9;
			this->SubsidiesCheckBox->Text = L"Include";
			this->SubsidiesCheckBox->UseVisualStyleBackColor = true;
			// 
			// TermPlanDateTimePicker
			// 
			this->TermPlanDateTimePicker->Location = System::Drawing::Point(130, 130);
			this->TermPlanDateTimePicker->Margin = System::Windows::Forms::Padding(4);
			this->TermPlanDateTimePicker->Name = L"TermPlanDateTimePicker";
			this->TermPlanDateTimePicker->Size = System::Drawing::Size(301, 22);
			this->TermPlanDateTimePicker->TabIndex = 8;
			// 
			// DiscountComboBox
			// 
			this->DiscountComboBox->FormattingEnabled = true;
			this->DiscountComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"0%", L"1%", L"2%", L"3%", L"4%", L"5%",
					L"6%", L"7%", L"8%", L"9%", L"10%", L"11%", L"12%", L"13%", L"14%", L"15%", L"16%", L"17%", L"18%", L"19%", L"20%", L"21%", L"22%",
					L"23%", L"24%", L"25%", L"26%", L"27%", L"28%", L"29%", L"30%"
			});
			this->DiscountComboBox->Location = System::Drawing::Point(349, 24);
			this->DiscountComboBox->Margin = System::Windows::Forms::Padding(4);
			this->DiscountComboBox->Name = L"DiscountComboBox";
			this->DiscountComboBox->Size = System::Drawing::Size(79, 24);
			this->DiscountComboBox->TabIndex = 7;
			// 
			// PriceTextBox
			// 
			this->PriceTextBox->Location = System::Drawing::Point(130, 27);
			this->PriceTextBox->Margin = System::Windows::Forms::Padding(4);
			this->PriceTextBox->Name = L"PriceTextBox";
			this->PriceTextBox->Size = System::Drawing::Size(82, 22);
			this->PriceTextBox->TabIndex = 5;
			// 
			// SubsidiesLabel
			// 
			this->SubsidiesLabel->AutoSize = true;
			this->SubsidiesLabel->Location = System::Drawing::Point(249, 82);
			this->SubsidiesLabel->Name = L"SubsidiesLabel";
			this->SubsidiesLabel->Size = System::Drawing::Size(67, 16);
			this->SubsidiesLabel->TabIndex = 4;
			this->SubsidiesLabel->Text = L"Subsidies";
			// 
			// TermPlanLabel
			// 
			this->TermPlanLabel->AutoSize = true;
			this->TermPlanLabel->Location = System::Drawing::Point(23, 130);
			this->TermPlanLabel->Name = L"TermPlanLabel";
			this->TermPlanLabel->Size = System::Drawing::Size(82, 16);
			this->TermPlanLabel->TabIndex = 3;
			this->TermPlanLabel->Text = L"Term of plan";
			this->TermPlanLabel->Click += gcnew System::EventHandler(this, &EditPersonalDataForm::TermPlanLabel_Click);
			// 
			// PlanTariffLabel
			// 
			this->PlanTariffLabel->AutoSize = true;
			this->PlanTariffLabel->Location = System::Drawing::Point(23, 82);
			this->PlanTariffLabel->Name = L"PlanTariffLabel";
			this->PlanTariffLabel->Size = System::Drawing::Size(75, 16);
			this->PlanTariffLabel->TabIndex = 2;
			this->PlanTariffLabel->Text = L"Plan of tariff";
			// 
			// DicountLabel
			// 
			this->DicountLabel->AutoSize = true;
			this->DicountLabel->Location = System::Drawing::Point(249, 27);
			this->DicountLabel->Name = L"DicountLabel";
			this->DicountLabel->Size = System::Drawing::Size(59, 16);
			this->DicountLabel->TabIndex = 1;
			this->DicountLabel->Text = L"Discount";
			// 
			// PriceLabel
			// 
			this->PriceLabel->AutoSize = true;
			this->PriceLabel->Location = System::Drawing::Point(23, 30);
			this->PriceLabel->Name = L"PriceLabel";
			this->PriceLabel->Size = System::Drawing::Size(38, 16);
			this->PriceLabel->TabIndex = 0;
			this->PriceLabel->Text = L"Price";
			// 
			// EditInfoGroupBox
			// 
			this->EditInfoGroupBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->EditInfoGroupBox->Controls->Add(this->EISCodeLabel);
			this->EditInfoGroupBox->Controls->Add(this->ThirdNameTextBox);
			this->EditInfoGroupBox->Controls->Add(this->ThirdNameLabel);
			this->EditInfoGroupBox->Controls->Add(this->SecondNameTextBox);
			this->EditInfoGroupBox->Controls->Add(this->SecoundNameLabel);
			this->EditInfoGroupBox->Controls->Add(this->EISCodeTextBox);
			this->EditInfoGroupBox->Controls->Add(this->FirstNameTextBox);
			this->EditInfoGroupBox->Controls->Add(this->FirstNameLabel);
			this->EditInfoGroupBox->Location = System::Drawing::Point(475, 12);
			this->EditInfoGroupBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EditInfoGroupBox->Name = L"EditInfoGroupBox";
			this->EditInfoGroupBox->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EditInfoGroupBox->Size = System::Drawing::Size(155, 311);
			this->EditInfoGroupBox->TabIndex = 1;
			this->EditInfoGroupBox->TabStop = false;
			this->EditInfoGroupBox->Text = L"Personal info";
			// 
			// EISCodeLabel
			// 
			this->EISCodeLabel->AutoSize = true;
			this->EISCodeLabel->Location = System::Drawing::Point(14, 238);
			this->EISCodeLabel->Name = L"EISCodeLabel";
			this->EISCodeLabel->Size = System::Drawing::Size(65, 16);
			this->EISCodeLabel->TabIndex = 1;
			this->EISCodeLabel->Text = L"EIS-Code";
			// 
			// ThirdNameTextBox
			// 
			this->ThirdNameTextBox->Location = System::Drawing::Point(17, 120);
			this->ThirdNameTextBox->Margin = System::Windows::Forms::Padding(4);
			this->ThirdNameTextBox->Name = L"ThirdNameTextBox";
			this->ThirdNameTextBox->Size = System::Drawing::Size(121, 22);
			this->ThirdNameTextBox->TabIndex = 5;
			// 
			// ThirdNameLabel
			// 
			this->ThirdNameLabel->AutoSize = true;
			this->ThirdNameLabel->Location = System::Drawing::Point(14, 163);
			this->ThirdNameLabel->Name = L"ThirdNameLabel";
			this->ThirdNameLabel->Size = System::Drawing::Size(78, 16);
			this->ThirdNameLabel->TabIndex = 0;
			this->ThirdNameLabel->Text = L"Third Name";
			this->ThirdNameLabel->Click += gcnew System::EventHandler(this, &EditPersonalDataForm::OwnerLabel_Click);
			// 
			// SecondNameTextBox
			// 
			this->SecondNameTextBox->Location = System::Drawing::Point(17, 183);
			this->SecondNameTextBox->Margin = System::Windows::Forms::Padding(4);
			this->SecondNameTextBox->Name = L"SecondNameTextBox";
			this->SecondNameTextBox->Size = System::Drawing::Size(121, 22);
			this->SecondNameTextBox->TabIndex = 5;
			// 
			// SecoundNameLabel
			// 
			this->SecoundNameLabel->AutoSize = true;
			this->SecoundNameLabel->Location = System::Drawing::Point(14, 100);
			this->SecoundNameLabel->Name = L"SecoundNameLabel";
			this->SecoundNameLabel->Size = System::Drawing::Size(94, 16);
			this->SecoundNameLabel->TabIndex = 0;
			this->SecoundNameLabel->Text = L"Second Name";
			this->SecoundNameLabel->Click += gcnew System::EventHandler(this, &EditPersonalDataForm::OwnerLabel_Click);
			// 
			// EISCodeTextBox
			// 
			this->EISCodeTextBox->Location = System::Drawing::Point(17, 258);
			this->EISCodeTextBox->Margin = System::Windows::Forms::Padding(4);
			this->EISCodeTextBox->Name = L"EISCodeTextBox";
			this->EISCodeTextBox->Size = System::Drawing::Size(121, 22);
			this->EISCodeTextBox->TabIndex = 5;
			// 
			// FirstNameTextBox
			// 
			this->FirstNameTextBox->Location = System::Drawing::Point(17, 55);
			this->FirstNameTextBox->Margin = System::Windows::Forms::Padding(4);
			this->FirstNameTextBox->Name = L"FirstNameTextBox";
			this->FirstNameTextBox->Size = System::Drawing::Size(121, 22);
			this->FirstNameTextBox->TabIndex = 5;
			// 
			// FirstNameLabel
			// 
			this->FirstNameLabel->AutoSize = true;
			this->FirstNameLabel->Location = System::Drawing::Point(14, 35);
			this->FirstNameLabel->Name = L"FirstNameLabel";
			this->FirstNameLabel->Size = System::Drawing::Size(72, 16);
			this->FirstNameLabel->TabIndex = 0;
			this->FirstNameLabel->Text = L"First Name";
			this->FirstNameLabel->Click += gcnew System::EventHandler(this, &EditPersonalDataForm::OwnerLabel_Click);
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
			this->EditAddressGroupBox->Location = System::Drawing::Point(12, 202);
			this->EditAddressGroupBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EditAddressGroupBox->Name = L"EditAddressGroupBox";
			this->EditAddressGroupBox->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EditAddressGroupBox->Size = System::Drawing::Size(451, 121);
			this->EditAddressGroupBox->TabIndex = 2;
			this->EditAddressGroupBox->TabStop = false;
			this->EditAddressGroupBox->Text = L"Address";
			// 
			// AddressHomeLabel
			// 
			this->AddressHomeLabel->AutoSize = true;
			this->AddressHomeLabel->Location = System::Drawing::Point(245, 84);
			this->AddressHomeLabel->Name = L"AddressHomeLabel";
			this->AddressHomeLabel->Size = System::Drawing::Size(44, 16);
			this->AddressHomeLabel->TabIndex = 3;
			this->AddressHomeLabel->Text = L"Home";
			// 
			// AddressStreetLabel
			// 
			this->AddressStreetLabel->AutoSize = true;
			this->AddressStreetLabel->Location = System::Drawing::Point(19, 87);
			this->AddressStreetLabel->Name = L"AddressStreetLabel";
			this->AddressStreetLabel->Size = System::Drawing::Size(42, 16);
			this->AddressStreetLabel->TabIndex = 2;
			this->AddressStreetLabel->Text = L"Street";
			// 
			// AddressCityLabel
			// 
			this->AddressCityLabel->AutoSize = true;
			this->AddressCityLabel->Location = System::Drawing::Point(245, 33);
			this->AddressCityLabel->Name = L"AddressCityLabel";
			this->AddressCityLabel->Size = System::Drawing::Size(29, 16);
			this->AddressCityLabel->TabIndex = 1;
			this->AddressCityLabel->Text = L"City";
			// 
			// AddressOblastLabel
			// 
			this->AddressOblastLabel->AutoSize = true;
			this->AddressOblastLabel->Location = System::Drawing::Point(19, 33);
			this->AddressOblastLabel->Name = L"AddressOblastLabel";
			this->AddressOblastLabel->Size = System::Drawing::Size(51, 16);
			this->AddressOblastLabel->TabIndex = 0;
			this->AddressOblastLabel->Text = L"Region";
			// 
			// HomeTextBox
			// 
			this->HomeTextBox->Location = System::Drawing::Point(296, 84);
			this->HomeTextBox->Margin = System::Windows::Forms::Padding(4);
			this->HomeTextBox->Name = L"HomeTextBox";
			this->HomeTextBox->Size = System::Drawing::Size(135, 22);
			this->HomeTextBox->TabIndex = 5;
			// 
			// StreetTextBox
			// 
			this->StreetTextBox->Location = System::Drawing::Point(77, 81);
			this->StreetTextBox->Margin = System::Windows::Forms::Padding(4);
			this->StreetTextBox->Name = L"StreetTextBox";
			this->StreetTextBox->Size = System::Drawing::Size(135, 22);
			this->StreetTextBox->TabIndex = 5;
			// 
			// CityComboBox
			// 
			this->CityComboBox->Location = System::Drawing::Point(296, 27);
			this->CityComboBox->Margin = System::Windows::Forms::Padding(4);
			this->CityComboBox->Name = L"CityComboBox";
			this->CityComboBox->Size = System::Drawing::Size(135, 22);
			this->CityComboBox->TabIndex = 5;
			// 
			// RegionTextBox
			// 
			this->RegionTextBox->Location = System::Drawing::Point(77, 30);
			this->RegionTextBox->Margin = System::Windows::Forms::Padding(4);
			this->RegionTextBox->Name = L"RegionTextBox";
			this->RegionTextBox->Size = System::Drawing::Size(135, 22);
			this->RegionTextBox->TabIndex = 5;
			// 
			// EditPersonalDataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(640, 334);
			this->Controls->Add(this->EditAddressGroupBox);
			this->Controls->Add(this->EditInfoGroupBox);
			this->Controls->Add(this->EditConditionsGroupBox);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"EditPersonalDataForm";
			this->Text = L"EditPersonalDataForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &EditPersonalDataForm::EditPersonalDataForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &EditPersonalDataForm::EditPersonalDataForm_Load);
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
		auto result = MessageBox::Show(this, "Are you sure", "Confirammtion", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes) {

			auto record = repository->GetRecord(selectedType);

			if (record == nullptr) {
				record = gcnew HeadRecordForm();
				record->type = selectedType;

				repository->GetRecords()->Add(record);
			}

			record->price = Double::Parse(PriceTextBox->Text);
			record->discount = 
		}
		else {
			return;
		}
	}
	private: System::Void EditPersonalDataForm_Load(System::Object^ sender, System::EventArgs^ e) {
		auto record = repository->GetRecord(selectedType);
		if (record == nullptr) return;

		PriceTextBox->Text = record->price.ToString();
	}
};
}
