#pragma once
#include "GlobalRepository.h"

#using <System.dll>
#using <System.Core.dll> // This line is now valid because of the project reference


namespace COMUTL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Linq;

	/// <summary>
	/// Summary for CalculationsForm
	/// </summary>

	struct BalanceRecord {
		int month;
		int plan_tariff;

		float tariff_price;
		float volume_accurals;
		float balance_begin_month;
		float accural_balance;
		float paid;
		float balance_end_month;
	};

	public ref class CalculationsForm : public System::Windows::Forms::Form
	{
	public:
		CalculationsForm(GlobalRepository^ repository)
		{
			InitializeComponent();

			this->repository = repository;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CalculationsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: GlobalRepository^ repository;

	private: System::Windows::Forms::DataGridView^ CalculationDataGridView;
	private: System::Windows::Forms::ComboBox^ SelectYearComboBox;

	private: System::Windows::Forms::ComboBox^ SelectMonthComboBox;
	private: System::Windows::Forms::Label^ DateLabel;


	private: System::Windows::Forms::Panel^ FirstPanel;
	private: System::Windows::Forms::Button^ PayButton;




	private: System::Windows::Forms::TextBox^ textBox1;



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
			this->CalculationDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->SelectYearComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SelectMonthComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->DateLabel = (gcnew System::Windows::Forms::Label());
			this->FirstPanel = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->PayButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CalculationDataGridView))->BeginInit();
			this->FirstPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// CalculationDataGridView
			// 
			this->CalculationDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CalculationDataGridView->Location = System::Drawing::Point(9, 55);
			this->CalculationDataGridView->Margin = System::Windows::Forms::Padding(2);
			this->CalculationDataGridView->Name = L"CalculationDataGridView";
			this->CalculationDataGridView->RowHeadersWidth = 35;
			this->CalculationDataGridView->RowTemplate->Height = 20;
			this->CalculationDataGridView->Size = System::Drawing::Size(629, 306);
			this->CalculationDataGridView->TabIndex = 0;
			// 
			// SelectYearComboBox
			// 
			this->SelectYearComboBox->FormattingEnabled = true;
			this->SelectYearComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"-", L"2019", L"2020", L"2021", L"2022",
					L"2023", L"2024", L"2025", L"2026", L"2027"
			});
			this->SelectYearComboBox->Location = System::Drawing::Point(152, 11);
			this->SelectYearComboBox->Margin = System::Windows::Forms::Padding(2);
			this->SelectYearComboBox->Name = L"SelectYearComboBox";
			this->SelectYearComboBox->Size = System::Drawing::Size(77, 21);
			this->SelectYearComboBox->TabIndex = 1;
			// 
			// SelectMonthComboBox
			// 
			this->SelectMonthComboBox->FormattingEnabled = true;
			this->SelectMonthComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"-", L"January", L"February", L"March",
					L"April", L"May", L"June", L"July", L"August", L"September", L"October", L"November", L"December"
			});
			this->SelectMonthComboBox->Location = System::Drawing::Point(72, 11);
			this->SelectMonthComboBox->Margin = System::Windows::Forms::Padding(2);
			this->SelectMonthComboBox->Name = L"SelectMonthComboBox";
			this->SelectMonthComboBox->Size = System::Drawing::Size(77, 21);
			this->SelectMonthComboBox->TabIndex = 2;
			// 
			// DateLabel
			// 
			this->DateLabel->AutoSize = true;
			this->DateLabel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->DateLabel->Location = System::Drawing::Point(11, 13);
			this->DateLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DateLabel->Name = L"DateLabel";
			this->DateLabel->Size = System::Drawing::Size(61, 13);
			this->DateLabel->TabIndex = 3;
			this->DateLabel->Text = L"Select date";
			// 
			// FirstPanel
			// 
			this->FirstPanel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->FirstPanel->Controls->Add(this->textBox1);
			this->FirstPanel->Controls->Add(this->SelectYearComboBox);
			this->FirstPanel->Controls->Add(this->PayButton);
			this->FirstPanel->Controls->Add(this->SelectMonthComboBox);
			this->FirstPanel->Controls->Add(this->DateLabel);
			this->FirstPanel->Location = System::Drawing::Point(10, 9);
			this->FirstPanel->Margin = System::Windows::Forms::Padding(2);
			this->FirstPanel->Name = L"FirstPanel";
			this->FirstPanel->Size = System::Drawing::Size(628, 38);
			this->FirstPanel->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(483, 11);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 20);
			this->textBox1->TabIndex = 7;
			// 
			// PayButton
			// 
			this->PayButton->Location = System::Drawing::Point(562, 9);
			this->PayButton->Margin = System::Windows::Forms::Padding(2);
			this->PayButton->Name = L"PayButton";
			this->PayButton->Size = System::Drawing::Size(52, 22);
			this->PayButton->TabIndex = 4;
			this->PayButton->Text = L"Pay";
			this->PayButton->UseVisualStyleBackColor = true;
			this->PayButton->Click += gcnew System::EventHandler(this, &CalculationsForm::ShowButton_Click);
			// 
			// CalculationsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(647, 370);
			this->Controls->Add(this->CalculationDataGridView);
			this->Controls->Add(this->FirstPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"CalculationsForm";
			this->Text = L"CalculationsForm";
			this->Load += gcnew System::EventHandler(this, &CalculationsForm::CalculationsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CalculationDataGridView))->EndInit();
			this->FirstPanel->ResumeLayout(false);
			this->FirstPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		void UpdateData() {
			auto calculations = repository->GetCalculations();

			this->CalculationDataGridView->Columns->Clear();
			this->CalculationDataGridView->Rows->Clear();

			this->CalculationDataGridView->ColumnCount = 6;

			this->CalculationDataGridView->Columns[0]->Name = "Month";
			this->CalculationDataGridView->Columns[1]->Name = "Tariff type";
			this->CalculationDataGridView->Columns[2]->Name = "Tariff price";
			this->CalculationDataGridView->Columns[3]->Name = "Accrual for indicators";
			this->CalculationDataGridView->Columns[4]->Name = "Accrual for balance";
			this->CalculationDataGridView->Columns[5]->Name = "Paid";

			this->CalculationDataGridView->Columns[0]->Width = 70;
			this->CalculationDataGridView->Columns[1]->Width = 60;
			this->CalculationDataGridView->Columns[2]->Width = 55;
			this->CalculationDataGridView->Columns[3]->Width = 70;
			this->CalculationDataGridView->Columns[4]->Width = 85;
			this->CalculationDataGridView->Columns[5]->Width = 60;

			for (int i = 0; i < calculations->Count; i++) {
				if (SelectYearComboBox->SelectedIndex > 0) {
					Int32 year;

					if (!Int32::TryParse(SelectYearComboBox->Text, year)) continue;

					if (year != calculations[i]->date->Year) {
						continue;
					}
				}
				if (SelectMonthComboBox->SelectedIndex > 0) {
					if (SelectMonthComboBox->SelectedIndex != calculations[i]->date->Month) {
						continue;
					}
				}

				this->CalculationDataGridView->Rows->Add(
					calculations[i]->date->Month.ToString(),
					((Int32)calculations[i]->tariffType).ToString(),
					calculations[i]->tariffPrice.ToString("F2"),
					calculations[i]->accrualIndicators.ToString("F2"),
					calculations[i]->accrualBalance.ToString("F2"),
					calculations[i]->payedAmount.ToString("F2")
				);
			}
		}

		System::Void ShowButton_Click(System::Object^ sender, System::EventArgs^ e) {
			/*
			BalanceRecord info[] = {
					{ 12, 1, 4.73f, 67.83f, -49.17f, 320.57f, 367.85f, 0 },
					{ 11, 1, 4.73f, 67.83f, -1.89f, 320.57f, 367.85f, -49.17f },
					{ 10, 1, 4.73f, 67.83f, 45.39f, 320.57f, 367.85f, -1.89f },
					{ 9, 2, 4.65f, 10.00f, 129.50f, 46.48f, 130.60f, 45.39f },
					{ 8, 2, 3.24f, 40.00f, 86.27f, 129.66f, 86.42f, 129.50 },
					{ 7, 2, 2.97f, 29.83f, 50.51f, 86.27f, 50.51f, 86.27 },
					{ 6, 2, 2.78f, 30.00f, -32.01f, 83.52f, 1.00f, 50.51f },
					{ 5, 2, 2.95f, 26.00f, -108.67f, 76.65f, 0.00f, -32.01f },
					{ 4, 2, 3.71f, 20.00f, -181.91f, 74.25f, 1.00f, -108.67f },
					{ 3, 2, 4.33f, 120.00f, 2296.72f, 519.13f, 2997.76f, -181.91f },
					{ 2, 2, 5.01f, 150.00f, 1545.97f, 750.75f, 0.00f, 2296.72 },
					{ 1, 2, 5.87f, 150.00f, 783.80f, 880.27f, 118.11f, 1545.97f },
			};
			*/
			UpdateData();
		}
private: System::Void CalculationsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	UpdateData();
}
};
}
