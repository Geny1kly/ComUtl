#pragma once
#include "GlobalRepository.h"

namespace COMUTL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IndicatorsForm
	/// </summary>
	public ref class IndicatorsForm : public System::Windows::Forms::Form
	{
	public:
		IndicatorsForm(GlobalRepository^ repository)
		{
			InitializeComponent();

			this->repostiory = repository;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IndicatorsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GlobalRepository^ repostiory;
	private: System::Windows::Forms::DataGridView^ DataGridView;
	private: System::Windows::Forms::TextBox^ IndicatorTextBox;





	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ IndicatorsLabel;
	private: System::Windows::Forms::Label^ DateLabel;
	private: System::Windows::Forms::Button^ AddInicatorsButton;
	private: System::Windows::Forms::ComboBox^ YearComboBox;
	private: System::Windows::Forms::ComboBox^ MonthComboBox;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

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
			this->DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->IndicatorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->YearComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->MonthComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddInicatorsButton = (gcnew System::Windows::Forms::Button());
			this->DateLabel = (gcnew System::Windows::Forms::Label());
			this->IndicatorsLabel = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// DataGridView
			// 
			this->DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridView->Location = System::Drawing::Point(9, 145);
			this->DataGridView->Margin = System::Windows::Forms::Padding(2);
			this->DataGridView->Name = L"DataGridView";
			this->DataGridView->RowHeadersWidth = 51;
			this->DataGridView->RowTemplate->Height = 24;
			this->DataGridView->Size = System::Drawing::Size(227, 230);
			this->DataGridView->TabIndex = 0;
			// 
			// IndicatorTextBox
			// 
			this->IndicatorTextBox->Location = System::Drawing::Point(9, 28);
			this->IndicatorTextBox->Margin = System::Windows::Forms::Padding(2);
			this->IndicatorTextBox->Name = L"IndicatorTextBox";
			this->IndicatorTextBox->Size = System::Drawing::Size(209, 20);
			this->IndicatorTextBox->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->YearComboBox);
			this->panel1->Controls->Add(this->MonthComboBox);
			this->panel1->Controls->Add(this->AddInicatorsButton);
			this->panel1->Controls->Add(this->DateLabel);
			this->panel1->Controls->Add(this->IndicatorsLabel);
			this->panel1->Controls->Add(this->IndicatorTextBox);
			this->panel1->Location = System::Drawing::Point(9, 10);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(227, 128);
			this->panel1->TabIndex = 3;
			// 
			// YearComboBox
			// 
			this->YearComboBox->FormattingEnabled = true;
			this->YearComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"2019", L"2020", L"2021", L"2022", L"2023",
					L"2024", L"2025", L"2026", L"2027"
			});
			this->YearComboBox->Location = System::Drawing::Point(148, 72);
			this->YearComboBox->Name = L"YearComboBox";
			this->YearComboBox->Size = System::Drawing::Size(70, 21);
			this->YearComboBox->TabIndex = 6;
			// 
			// MonthComboBox
			// 
			this->MonthComboBox->FormattingEnabled = true;
			this->MonthComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"January", L"February", L"March", L"April",
					L"May", L"June", L"July", L"August", L"September", L"October", L"November", L"December"
			});
			this->MonthComboBox->Location = System::Drawing::Point(9, 72);
			this->MonthComboBox->Name = L"MonthComboBox";
			this->MonthComboBox->Size = System::Drawing::Size(133, 21);
			this->MonthComboBox->TabIndex = 6;
			// 
			// AddInicatorsButton
			// 
			this->AddInicatorsButton->Location = System::Drawing::Point(155, 101);
			this->AddInicatorsButton->Margin = System::Windows::Forms::Padding(2);
			this->AddInicatorsButton->Name = L"AddInicatorsButton";
			this->AddInicatorsButton->Size = System::Drawing::Size(56, 19);
			this->AddInicatorsButton->TabIndex = 4;
			this->AddInicatorsButton->Text = L"Add";
			this->AddInicatorsButton->UseVisualStyleBackColor = true;
			this->AddInicatorsButton->Click += gcnew System::EventHandler(this, &IndicatorsForm::AddInicatorsButton_Click);
			// 
			// DateLabel
			// 
			this->DateLabel->AutoSize = true;
			this->DateLabel->Location = System::Drawing::Point(14, 56);
			this->DateLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DateLabel->Name = L"DateLabel";
			this->DateLabel->Size = System::Drawing::Size(30, 13);
			this->DateLabel->TabIndex = 5;
			this->DateLabel->Text = L"Date";
			// 
			// IndicatorsLabel
			// 
			this->IndicatorsLabel->AutoSize = true;
			this->IndicatorsLabel->Location = System::Drawing::Point(14, 12);
			this->IndicatorsLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->IndicatorsLabel->Name = L"IndicatorsLabel";
			this->IndicatorsLabel->Size = System::Drawing::Size(53, 13);
			this->IndicatorsLabel->TabIndex = 4;
			this->IndicatorsLabel->Text = L"Indicators";
			// 
			// IndicatorsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(245, 385);
			this->Controls->Add(this->DataGridView);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"IndicatorsForm";
			this->Text = L"IndicatorsForm";
			this->Load += gcnew System::EventHandler(this, &IndicatorsForm::IndicatorsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		IndicatorRecord^ GetRecord(int month, int year) {
			auto indicators = repostiory->GetIndicators();

			for (int i = 0; i < indicators->Count; i++) {
				if (indicators[i]->date->Month == month && indicators[i]->date->Year == year) {
					return indicators[i];
				}
			}

			return nullptr;
		}

		void UpdateData() {
			DataGridView->Rows->Clear();

			DataGridView->ColumnCount = 2;
			DataGridView->Columns[0]->Name = "Indicators";
			DataGridView->Columns[1]->Name = "Dates";

			auto indicators = repostiory->GetIndicators();

			for (int i = 0; i < indicators->Count; i++) {
				DataGridView->Rows->Add(
					indicators[i]->indicator,
					GetVeryShortDateString(indicators[i]->date)
				);
			}

		}

		System::Void AddInicatorsButton_Click(System::Object^ sender, System::EventArgs^ e) {
			auto indicator = GetRecord(MonthComboBox->SelectedIndex + 1, Int32::Parse(YearComboBox->Text));

			if (!indicator) {
				indicator = gcnew IndicatorRecord();
				repostiory->GetIndicators()->Add(indicator);
			}

			indicator->indicator = Int64::Parse(IndicatorTextBox->Text);
			indicator->date = gcnew DateTime(Int32::Parse(YearComboBox->Text), MonthComboBox->SelectedIndex + 1, 1);

			repostiory->isSaved = false;

			UpdateData();
		}
	private: System::Void IndicatorsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		UpdateData();
	}
};
}
