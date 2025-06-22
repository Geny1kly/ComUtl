#pragma once

namespace COMUTL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
		CalculationsForm(void)
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
		~CalculationsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ CalculationDataGridView;
	private: System::Windows::Forms::ComboBox^ SelectYearComboBox;

	private: System::Windows::Forms::ComboBox^ SelectMonthComboBox;
	private: System::Windows::Forms::Label^ DateLabel;


	private: System::Windows::Forms::Panel^ FirstPanel;
	private: System::Windows::Forms::Button^ PayButton;

	private: System::Windows::Forms::ListBox^ StatBalanceListBox;

	private: System::Windows::Forms::Label^ StatBalanceLabel;
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
			this->StatBalanceLabel = (gcnew System::Windows::Forms::Label());
			this->StatBalanceListBox = (gcnew System::Windows::Forms::ListBox());
			this->PayButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CalculationDataGridView))->BeginInit();
			this->FirstPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// CalculationDataGridView
			// 
			this->CalculationDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CalculationDataGridView->Location = System::Drawing::Point(12, 68);
			this->CalculationDataGridView->Name = L"CalculationDataGridView";
			this->CalculationDataGridView->RowHeadersWidth = 35;
			this->CalculationDataGridView->RowTemplate->Height = 20;
			this->CalculationDataGridView->Size = System::Drawing::Size(839, 376);
			this->CalculationDataGridView->TabIndex = 0;
			// 
			// SelectYearComboBox
			// 
			this->SelectYearComboBox->FormattingEnabled = true;
			this->SelectYearComboBox->Location = System::Drawing::Point(203, 13);
			this->SelectYearComboBox->Name = L"SelectYearComboBox";
			this->SelectYearComboBox->Size = System::Drawing::Size(101, 24);
			this->SelectYearComboBox->TabIndex = 1;
			// 
			// SelectMonthComboBox
			// 
			this->SelectMonthComboBox->FormattingEnabled = true;
			this->SelectMonthComboBox->Location = System::Drawing::Point(96, 13);
			this->SelectMonthComboBox->Name = L"SelectMonthComboBox";
			this->SelectMonthComboBox->Size = System::Drawing::Size(101, 24);
			this->SelectMonthComboBox->TabIndex = 2;
			// 
			// DateLabel
			// 
			this->DateLabel->AutoSize = true;
			this->DateLabel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->DateLabel->Location = System::Drawing::Point(15, 16);
			this->DateLabel->Name = L"DateLabel";
			this->DateLabel->Size = System::Drawing::Size(75, 16);
			this->DateLabel->TabIndex = 3;
			this->DateLabel->Text = L"Select date";
			// 
			// FirstPanel
			// 
			this->FirstPanel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->FirstPanel->Controls->Add(this->textBox1);
			this->FirstPanel->Controls->Add(this->StatBalanceLabel);
			this->FirstPanel->Controls->Add(this->StatBalanceListBox);
			this->FirstPanel->Controls->Add(this->SelectYearComboBox);
			this->FirstPanel->Controls->Add(this->PayButton);
			this->FirstPanel->Controls->Add(this->SelectMonthComboBox);
			this->FirstPanel->Controls->Add(this->DateLabel);
			this->FirstPanel->Location = System::Drawing::Point(14, 11);
			this->FirstPanel->Name = L"FirstPanel";
			this->FirstPanel->Size = System::Drawing::Size(837, 47);
			this->FirstPanel->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(644, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(90, 22);
			this->textBox1->TabIndex = 7;
			// 
			// StatBalanceLabel
			// 
			this->StatBalanceLabel->AutoSize = true;
			this->StatBalanceLabel->Location = System::Drawing::Point(345, 16);
			this->StatBalanceLabel->Name = L"StatBalanceLabel";
			this->StatBalanceLabel->Size = System::Drawing::Size(148, 16);
			this->StatBalanceLabel->TabIndex = 6;
			this->StatBalanceLabel->Text = L"Actual status of balance";
			// 
			// StatBalanceListBox
			// 
			this->StatBalanceListBox->FormattingEnabled = true;
			this->StatBalanceListBox->ItemHeight = 16;
			this->StatBalanceListBox->Location = System::Drawing::Point(505, 14);
			this->StatBalanceListBox->Name = L"StatBalanceListBox";
			this->StatBalanceListBox->Size = System::Drawing::Size(107, 20);
			this->StatBalanceListBox->TabIndex = 5;
			// 
			// PayButton
			// 
			this->PayButton->Location = System::Drawing::Point(749, 11);
			this->PayButton->Name = L"PayButton";
			this->PayButton->Size = System::Drawing::Size(70, 27);
			this->PayButton->TabIndex = 4;
			this->PayButton->Text = L"Pay";
			this->PayButton->UseVisualStyleBackColor = true;
			this->PayButton->Click += gcnew System::EventHandler(this, &CalculationsForm::ShowButton_Click);
			// 
			// CalculationsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(863, 456);
			this->Controls->Add(this->CalculationDataGridView);
			this->Controls->Add(this->FirstPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"CalculationsForm";
			this->Text = L"CalculationsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CalculationDataGridView))->EndInit();
			this->FirstPanel->ResumeLayout(false);
			this->FirstPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ShowButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
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

		this->CalculationDataGridView->Columns->Clear();
		this->CalculationDataGridView->Rows->Clear();

		this->CalculationDataGridView->ColumnCount = 8;

		this->CalculationDataGridView->Columns[0]->Name = "Month";
		this->CalculationDataGridView->Columns[1]->Name = "Tariff type";
		this->CalculationDataGridView->Columns[2]->Name = "Tariff price";
		this->CalculationDataGridView->Columns[3]->Name = "Accrual for indicators";
		this->CalculationDataGridView->Columns[4]->Name = "Status on begin month";
		this->CalculationDataGridView->Columns[5]->Name = "Accrual for balance";
		this->CalculationDataGridView->Columns[6]->Name = "Paid";
		this->CalculationDataGridView->Columns[7]->Name = "Status on end month";

		this->CalculationDataGridView->Columns[0]->Width = 70;
		this->CalculationDataGridView->Columns[1]->Width = 60;
		this->CalculationDataGridView->Columns[2]->Width = 55;
		this->CalculationDataGridView->Columns[3]->Width = 70;
		this->CalculationDataGridView->Columns[4]->Width = 90;
		this->CalculationDataGridView->Columns[5]->Width = 85;
		this->CalculationDataGridView->Columns[6]->Width = 60;
		this->CalculationDataGridView->Columns[7]->Width = 85;

        for (int i = 0; i < 12; i++) {
			this->CalculationDataGridView->Rows->Add(
				info[i].month.ToString(), info[i].plan_tariff.ToString(),
				info[i].tariff_price.ToString("F2"), info[i].volume_accurals.ToString("F2"),
				info[i].balance_begin_month.ToString("F2"), info[i].accural_balance.ToString("F2"),
				info[i].paid.ToString("F2"), info[i].balance_end_month.ToString("F2"));
		}
	}
};
}
