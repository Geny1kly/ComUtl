#pragma once

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
		EditPersonalDataForm(void)
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
		~EditPersonalDataForm()
		{
			if (components)
			{
				delete components;
			}
		}
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
			this->EditInfoGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->EditAddressGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->PriceLabel = (gcnew System::Windows::Forms::Label());
			this->DicountLabel = (gcnew System::Windows::Forms::Label());
			this->PlanTariffLabel = (gcnew System::Windows::Forms::Label());
			this->TermPlanLabel = (gcnew System::Windows::Forms::Label());
			this->SubsidiesLabel = (gcnew System::Windows::Forms::Label());
			this->OwnerLabel = (gcnew System::Windows::Forms::Label());
			this->EISCodeLabel = (gcnew System::Windows::Forms::Label());
			this->AddressOblastLabel = (gcnew System::Windows::Forms::Label());
			this->AddressCityLabel = (gcnew System::Windows::Forms::Label());
			this->AddressStreetLabel = (gcnew System::Windows::Forms::Label());
			this->AddressHomeLabel = (gcnew System::Windows::Forms::Label());
			this->EditConditionsGroupBox->SuspendLayout();
			this->EditInfoGroupBox->SuspendLayout();
			this->EditAddressGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// EditConditionsGroupBox
			// 
			this->EditConditionsGroupBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->EditConditionsGroupBox->Controls->Add(this->SubsidiesLabel);
			this->EditConditionsGroupBox->Controls->Add(this->TermPlanLabel);
			this->EditConditionsGroupBox->Controls->Add(this->PlanTariffLabel);
			this->EditConditionsGroupBox->Controls->Add(this->DicountLabel);
			this->EditConditionsGroupBox->Controls->Add(this->PriceLabel);
			this->EditConditionsGroupBox->Location = System::Drawing::Point(12, 12);
			this->EditConditionsGroupBox->Name = L"EditConditionsGroupBox";
			this->EditConditionsGroupBox->Size = System::Drawing::Size(296, 354);
			this->EditConditionsGroupBox->TabIndex = 0;
			this->EditConditionsGroupBox->TabStop = false;
			this->EditConditionsGroupBox->Text = L"Conditions";
			// 
			// EditInfoGroupBox
			// 
			this->EditInfoGroupBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->EditInfoGroupBox->Controls->Add(this->EISCodeLabel);
			this->EditInfoGroupBox->Controls->Add(this->OwnerLabel);
			this->EditInfoGroupBox->Location = System::Drawing::Point(322, 12);
			this->EditInfoGroupBox->Name = L"EditInfoGroupBox";
			this->EditInfoGroupBox->Size = System::Drawing::Size(354, 99);
			this->EditInfoGroupBox->TabIndex = 1;
			this->EditInfoGroupBox->TabStop = false;
			this->EditInfoGroupBox->Text = L"Personal info";
			// 
			// EditAddressGroupBox
			// 
			this->EditAddressGroupBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->EditAddressGroupBox->Controls->Add(this->AddressHomeLabel);
			this->EditAddressGroupBox->Controls->Add(this->AddressStreetLabel);
			this->EditAddressGroupBox->Controls->Add(this->AddressCityLabel);
			this->EditAddressGroupBox->Controls->Add(this->AddressOblastLabel);
			this->EditAddressGroupBox->Location = System::Drawing::Point(322, 124);
			this->EditAddressGroupBox->Name = L"EditAddressGroupBox";
			this->EditAddressGroupBox->Size = System::Drawing::Size(354, 242);
			this->EditAddressGroupBox->TabIndex = 2;
			this->EditAddressGroupBox->TabStop = false;
			this->EditAddressGroupBox->Text = L"Address";
			// 
			// PriceLabel
			// 
			this->PriceLabel->AutoSize = true;
			this->PriceLabel->Location = System::Drawing::Point(16, 28);
			this->PriceLabel->Name = L"PriceLabel";
			this->PriceLabel->Size = System::Drawing::Size(38, 16);
			this->PriceLabel->TabIndex = 0;
			this->PriceLabel->Text = L"Price";
			// 
			// DicountLabel
			// 
			this->DicountLabel->AutoSize = true;
			this->DicountLabel->Location = System::Drawing::Point(16, 79);
			this->DicountLabel->Name = L"DicountLabel";
			this->DicountLabel->Size = System::Drawing::Size(59, 16);
			this->DicountLabel->TabIndex = 1;
			this->DicountLabel->Text = L"Discount";
			// 
			// PlanTariffLabel
			// 
			this->PlanTariffLabel->AutoSize = true;
			this->PlanTariffLabel->Location = System::Drawing::Point(16, 140);
			this->PlanTariffLabel->Name = L"PlanTariffLabel";
			this->PlanTariffLabel->Size = System::Drawing::Size(75, 16);
			this->PlanTariffLabel->TabIndex = 2;
			this->PlanTariffLabel->Text = L"Plan of tariff";
			// 
			// TermPlanLabel
			// 
			this->TermPlanLabel->AutoSize = true;
			this->TermPlanLabel->Location = System::Drawing::Point(16, 201);
			this->TermPlanLabel->Name = L"TermPlanLabel";
			this->TermPlanLabel->Size = System::Drawing::Size(82, 16);
			this->TermPlanLabel->TabIndex = 3;
			this->TermPlanLabel->Text = L"Term of plan";
			// 
			// SubsidiesLabel
			// 
			this->SubsidiesLabel->AutoSize = true;
			this->SubsidiesLabel->Location = System::Drawing::Point(16, 271);
			this->SubsidiesLabel->Name = L"SubsidiesLabel";
			this->SubsidiesLabel->Size = System::Drawing::Size(67, 16);
			this->SubsidiesLabel->TabIndex = 4;
			this->SubsidiesLabel->Text = L"Subsidies";
			// 
			// OwnerLabel
			// 
			this->OwnerLabel->AutoSize = true;
			this->OwnerLabel->Location = System::Drawing::Point(25, 28);
			this->OwnerLabel->Name = L"OwnerLabel";
			this->OwnerLabel->Size = System::Drawing::Size(109, 16);
			this->OwnerLabel->TabIndex = 0;
			this->OwnerLabel->Text = L"Owner of account";
			// 
			// EISCodeLabel
			// 
			this->EISCodeLabel->AutoSize = true;
			this->EISCodeLabel->Location = System::Drawing::Point(25, 69);
			this->EISCodeLabel->Name = L"EISCodeLabel";
			this->EISCodeLabel->Size = System::Drawing::Size(65, 16);
			this->EISCodeLabel->TabIndex = 1;
			this->EISCodeLabel->Text = L"EIS-Code";
			// 
			// AddressOblastLabel
			// 
			this->AddressOblastLabel->AutoSize = true;
			this->AddressOblastLabel->Location = System::Drawing::Point(25, 28);
			this->AddressOblastLabel->Name = L"AddressOblastLabel";
			this->AddressOblastLabel->Size = System::Drawing::Size(46, 16);
			this->AddressOblastLabel->TabIndex = 0;
			this->AddressOblastLabel->Text = L"Oblast";
			// 
			// AddressCityLabel
			// 
			this->AddressCityLabel->AutoSize = true;
			this->AddressCityLabel->Location = System::Drawing::Point(25, 71);
			this->AddressCityLabel->Name = L"AddressCityLabel";
			this->AddressCityLabel->Size = System::Drawing::Size(29, 16);
			this->AddressCityLabel->TabIndex = 1;
			this->AddressCityLabel->Text = L"City";
			// 
			// AddressStreetLabel
			// 
			this->AddressStreetLabel->AutoSize = true;
			this->AddressStreetLabel->Location = System::Drawing::Point(25, 122);
			this->AddressStreetLabel->Name = L"AddressStreetLabel";
			this->AddressStreetLabel->Size = System::Drawing::Size(42, 16);
			this->AddressStreetLabel->TabIndex = 2;
			this->AddressStreetLabel->Text = L"Street";
			// 
			// AddressHomeLabel
			// 
			this->AddressHomeLabel->AutoSize = true;
			this->AddressHomeLabel->Location = System::Drawing::Point(27, 183);
			this->AddressHomeLabel->Name = L"AddressHomeLabel";
			this->AddressHomeLabel->Size = System::Drawing::Size(44, 16);
			this->AddressHomeLabel->TabIndex = 3;
			this->AddressHomeLabel->Text = L"Home";
			// 
			// EditPersonalDataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(688, 378);
			this->Controls->Add(this->EditAddressGroupBox);
			this->Controls->Add(this->EditInfoGroupBox);
			this->Controls->Add(this->EditConditionsGroupBox);
			this->Name = L"EditPersonalDataForm";
			this->Text = L"EditPersonalDataForm";
			this->EditConditionsGroupBox->ResumeLayout(false);
			this->EditConditionsGroupBox->PerformLayout();
			this->EditInfoGroupBox->ResumeLayout(false);
			this->EditInfoGroupBox->PerformLayout();
			this->EditAddressGroupBox->ResumeLayout(false);
			this->EditAddressGroupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
