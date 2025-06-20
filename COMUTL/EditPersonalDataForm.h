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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;










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
			this->SubsidiesLabel = (gcnew System::Windows::Forms::Label());
			this->TermPlanLabel = (gcnew System::Windows::Forms::Label());
			this->PlanTariffLabel = (gcnew System::Windows::Forms::Label());
			this->DicountLabel = (gcnew System::Windows::Forms::Label());
			this->PriceLabel = (gcnew System::Windows::Forms::Label());
			this->EditInfoGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->EISCodeLabel = (gcnew System::Windows::Forms::Label());
			this->OwnerLabel = (gcnew System::Windows::Forms::Label());
			this->EditAddressGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->AddressHomeLabel = (gcnew System::Windows::Forms::Label());
			this->AddressStreetLabel = (gcnew System::Windows::Forms::Label());
			this->AddressCityLabel = (gcnew System::Windows::Forms::Label());
			this->AddressOblastLabel = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->EditConditionsGroupBox->SuspendLayout();
			this->EditInfoGroupBox->SuspendLayout();
			this->EditAddressGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// EditConditionsGroupBox
			// 
			this->EditConditionsGroupBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->EditConditionsGroupBox->Controls->Add(this->comboBox1);
			this->EditConditionsGroupBox->Controls->Add(this->trackBar1);
			this->EditConditionsGroupBox->Controls->Add(this->textBox1);
			this->EditConditionsGroupBox->Controls->Add(this->SubsidiesLabel);
			this->EditConditionsGroupBox->Controls->Add(this->TermPlanLabel);
			this->EditConditionsGroupBox->Controls->Add(this->PlanTariffLabel);
			this->EditConditionsGroupBox->Controls->Add(this->textBox11);
			this->EditConditionsGroupBox->Controls->Add(this->textBox10);
			this->EditConditionsGroupBox->Controls->Add(this->DicountLabel);
			this->EditConditionsGroupBox->Controls->Add(this->PriceLabel);
			this->EditConditionsGroupBox->Location = System::Drawing::Point(9, 10);
			this->EditConditionsGroupBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->EditConditionsGroupBox->Name = L"EditConditionsGroupBox";
			this->EditConditionsGroupBox->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->EditConditionsGroupBox->Size = System::Drawing::Size(222, 248);
			this->EditConditionsGroupBox->TabIndex = 0;
			this->EditConditionsGroupBox->TabStop = false;
			this->EditConditionsGroupBox->Text = L"Conditions";
			this->EditConditionsGroupBox->Enter += gcnew System::EventHandler(this, &EditPersonalDataForm::EditConditionsGroupBox_Enter);
			// 
			// SubsidiesLabel
			// 
			this->SubsidiesLabel->AutoSize = true;
			this->SubsidiesLabel->Location = System::Drawing::Point(2, 166);
			this->SubsidiesLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->SubsidiesLabel->Name = L"SubsidiesLabel";
			this->SubsidiesLabel->Size = System::Drawing::Size(52, 13);
			this->SubsidiesLabel->TabIndex = 4;
			this->SubsidiesLabel->Text = L"Subsidies";
			// 
			// TermPlanLabel
			// 
			this->TermPlanLabel->AutoSize = true;
			this->TermPlanLabel->Location = System::Drawing::Point(2, 126);
			this->TermPlanLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TermPlanLabel->Name = L"TermPlanLabel";
			this->TermPlanLabel->Size = System::Drawing::Size(66, 13);
			this->TermPlanLabel->TabIndex = 3;
			this->TermPlanLabel->Text = L"Term of plan";
			// 
			// PlanTariffLabel
			// 
			this->PlanTariffLabel->AutoSize = true;
			this->PlanTariffLabel->Location = System::Drawing::Point(5, 205);
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
			this->EditInfoGroupBox->Controls->Add(this->textBox4);
			this->EditInfoGroupBox->Controls->Add(this->label2);
			this->EditInfoGroupBox->Controls->Add(this->textBox3);
			this->EditInfoGroupBox->Controls->Add(this->label1);
			this->EditInfoGroupBox->Controls->Add(this->textBox5);
			this->EditInfoGroupBox->Controls->Add(this->textBox2);
			this->EditInfoGroupBox->Controls->Add(this->OwnerLabel);
			this->EditInfoGroupBox->Location = System::Drawing::Point(242, 10);
			this->EditInfoGroupBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->EditInfoGroupBox->Name = L"EditInfoGroupBox";
			this->EditInfoGroupBox->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
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
			this->EditAddressGroupBox->Controls->Add(this->textBox9);
			this->EditAddressGroupBox->Controls->Add(this->textBox7);
			this->EditAddressGroupBox->Controls->Add(this->textBox8);
			this->EditAddressGroupBox->Controls->Add(this->textBox6);
			this->EditAddressGroupBox->Location = System::Drawing::Point(242, 120);
			this->EditAddressGroupBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->EditAddressGroupBox->Name = L"EditAddressGroupBox";
			this->EditAddressGroupBox->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->EditAddressGroupBox->Size = System::Drawing::Size(434, 138);
			this->EditAddressGroupBox->TabIndex = 2;
			this->EditAddressGroupBox->TabStop = false;
			this->EditAddressGroupBox->Text = L"Address";
			// 
			// AddressHomeLabel
			// 
			this->AddressHomeLabel->AutoSize = true;
			this->AddressHomeLabel->Location = System::Drawing::Point(4, 54);
			this->AddressHomeLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->AddressHomeLabel->Name = L"AddressHomeLabel";
			this->AddressHomeLabel->Size = System::Drawing::Size(35, 13);
			this->AddressHomeLabel->TabIndex = 3;
			this->AddressHomeLabel->Text = L"Home";
			// 
			// AddressStreetLabel
			// 
			this->AddressStreetLabel->AutoSize = true;
			this->AddressStreetLabel->Location = System::Drawing::Point(217, 95);
			this->AddressStreetLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->AddressStreetLabel->Name = L"AddressStreetLabel";
			this->AddressStreetLabel->Size = System::Drawing::Size(35, 13);
			this->AddressStreetLabel->TabIndex = 2;
			this->AddressStreetLabel->Text = L"Street";
			// 
			// AddressCityLabel
			// 
			this->AddressCityLabel->AutoSize = true;
			this->AddressCityLabel->Location = System::Drawing::Point(4, 95);
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(5, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(212, 20);
			this->textBox1->TabIndex = 5;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(5, 78);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(212, 45);
			this->trackBar1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(5, 31);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(138, 20);
			this->textBox2->TabIndex = 5;
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
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(148, 31);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(138, 20);
			this->textBox3->TabIndex = 5;
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
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(291, 31);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(138, 20);
			this->textBox4->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(5, 70);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(424, 20);
			this->textBox5->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(7, 31);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(422, 20);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(7, 111);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(207, 20);
			this->textBox7->TabIndex = 5;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(7, 70);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(422, 20);
			this->textBox8->TabIndex = 5;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(220, 111);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(207, 20);
			this->textBox9->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(5, 142);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(212, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(5, 182);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(212, 20);
			this->textBox10->TabIndex = 5;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(5, 221);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(212, 20);
			this->textBox11->TabIndex = 5;
			// 
			// EditPersonalDataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(687, 267);
			this->Controls->Add(this->EditAddressGroupBox);
			this->Controls->Add(this->EditInfoGroupBox);
			this->Controls->Add(this->EditConditionsGroupBox);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"EditPersonalDataForm";
			this->Text = L"EditPersonalDataForm";
			this->EditConditionsGroupBox->ResumeLayout(false);
			this->EditConditionsGroupBox->PerformLayout();
			this->EditInfoGroupBox->ResumeLayout(false);
			this->EditInfoGroupBox->PerformLayout();
			this->EditAddressGroupBox->ResumeLayout(false);
			this->EditAddressGroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EditConditionsGroupBox_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void OwnerLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
