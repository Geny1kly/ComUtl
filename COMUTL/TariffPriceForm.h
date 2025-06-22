#pragma once
#include "GlobalRepository.h"
#include <limits>
#include <iostream>
#include <fstream>

namespace COMUTL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Summary for TariffPriceForm
	/// </summary>
	public ref class TariffPriceForm : public System::Windows::Forms::Form
	{
	public:
		TariffPriceForm(GlobalRepository^ repository)
		{
			InitializeComponent();
			this->repository = repository;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TariffPriceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ TariffPriceChart;
	protected:

	private: GlobalRepository^ repository;
	private: bool isRefreshing;
	private: Series^ monthlySeries;
	private: Series^ yearlySeries;

	private: System::Windows::Forms::GroupBox^ TariffPriceMenuGroupBox;

	private: System::Windows::Forms::TextBox^ MontlyPriceTextBox;
	private: System::Windows::Forms::TextBox^ YearlyPriceTextBox;
	private: System::Windows::Forms::Label^ MontlyLabel;
	private: System::Windows::Forms::Label^ YearlyLabel;
	private: System::Windows::Forms::ComboBox^ YearComboBox;
	private: System::Windows::Forms::ComboBox^ MonthComboBox;
	private: System::Windows::Forms::Label^ MonthLabel;
	private: System::Windows::Forms::Label^ YearLabel;
	private: System::Windows::Forms::Button^ AddPriceButton;

	private: System::Windows::Forms::DataGridView^ TariffPriceDataGridView;
	private: System::Windows::Forms::Button^ button1;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->TariffPriceChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->TariffPriceMenuGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->AddPriceButton = (gcnew System::Windows::Forms::Button());
			this->YearLabel = (gcnew System::Windows::Forms::Label());
			this->MonthLabel = (gcnew System::Windows::Forms::Label());
			this->YearComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->MonthComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->YearlyLabel = (gcnew System::Windows::Forms::Label());
			this->MontlyLabel = (gcnew System::Windows::Forms::Label());
			this->YearlyPriceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MontlyPriceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TariffPriceDataGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TariffPriceChart))->BeginInit();
			this->TariffPriceMenuGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TariffPriceDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// TariffPriceChart
			// 
			chartArea2->Name = L"ChartArea1";
			this->TariffPriceChart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->TariffPriceChart->Legends->Add(legend2);
			this->TariffPriceChart->Location = System::Drawing::Point(9, 10);
			this->TariffPriceChart->Margin = System::Windows::Forms::Padding(2);
			this->TariffPriceChart->Name = L"TariffPriceChart";
			this->TariffPriceChart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->TariffPriceChart->Series->Add(series2);
			this->TariffPriceChart->Size = System::Drawing::Size(440, 265);
			this->TariffPriceChart->TabIndex = 0;
			this->TariffPriceChart->Text = L"TariffPriceChart";
			// 
			// TariffPriceMenuGroupBox
			// 
			this->TariffPriceMenuGroupBox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TariffPriceMenuGroupBox->Controls->Add(this->button1);
			this->TariffPriceMenuGroupBox->Controls->Add(this->AddPriceButton);
			this->TariffPriceMenuGroupBox->Controls->Add(this->YearLabel);
			this->TariffPriceMenuGroupBox->Controls->Add(this->MonthLabel);
			this->TariffPriceMenuGroupBox->Controls->Add(this->YearComboBox);
			this->TariffPriceMenuGroupBox->Controls->Add(this->MonthComboBox);
			this->TariffPriceMenuGroupBox->Controls->Add(this->YearlyLabel);
			this->TariffPriceMenuGroupBox->Controls->Add(this->MontlyLabel);
			this->TariffPriceMenuGroupBox->Controls->Add(this->YearlyPriceTextBox);
			this->TariffPriceMenuGroupBox->Controls->Add(this->MontlyPriceTextBox);
			this->TariffPriceMenuGroupBox->Location = System::Drawing::Point(458, 10);
			this->TariffPriceMenuGroupBox->Margin = System::Windows::Forms::Padding(2);
			this->TariffPriceMenuGroupBox->Name = L"TariffPriceMenuGroupBox";
			this->TariffPriceMenuGroupBox->Padding = System::Windows::Forms::Padding(2);
			this->TariffPriceMenuGroupBox->Size = System::Drawing::Size(175, 265);
			this->TariffPriceMenuGroupBox->TabIndex = 1;
			this->TariffPriceMenuGroupBox->TabStop = false;
			this->TariffPriceMenuGroupBox->Text = L"Menu";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 231);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 19);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// AddPriceButton
			// 
			this->AddPriceButton->Location = System::Drawing::Point(14, 161);
			this->AddPriceButton->Margin = System::Windows::Forms::Padding(2);
			this->AddPriceButton->Name = L"AddPriceButton";
			this->AddPriceButton->Size = System::Drawing::Size(147, 19);
			this->AddPriceButton->TabIndex = 2;
			this->AddPriceButton->Text = L"Add";
			this->AddPriceButton->UseVisualStyleBackColor = true;
			this->AddPriceButton->Click += gcnew System::EventHandler(this, &TariffPriceForm::AddPriceButton_Click);
			// 
			// YearLabel
			// 
			this->YearLabel->AutoSize = true;
			this->YearLabel->Location = System::Drawing::Point(11, 128);
			this->YearLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->YearLabel->Name = L"YearLabel";
			this->YearLabel->Size = System::Drawing::Size(29, 13);
			this->YearLabel->TabIndex = 6;
			this->YearLabel->Text = L"Year";
			// 
			// MonthLabel
			// 
			this->MonthLabel->AutoSize = true;
			this->MonthLabel->Location = System::Drawing::Point(11, 93);
			this->MonthLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MonthLabel->Name = L"MonthLabel";
			this->MonthLabel->Size = System::Drawing::Size(37, 13);
			this->MonthLabel->TabIndex = 5;
			this->MonthLabel->Text = L"Month";
			// 
			// YearComboBox
			// 
			this->YearComboBox->FormattingEnabled = true;
			this->YearComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"2019", L"2020", L"2021", L"2022", L"2023",
					L"2024", L"2025", L"2026", L"2027"
			});
			this->YearComboBox->Location = System::Drawing::Point(78, 125);
			this->YearComboBox->Margin = System::Windows::Forms::Padding(2);
			this->YearComboBox->Name = L"YearComboBox";
			this->YearComboBox->Size = System::Drawing::Size(84, 21);
			this->YearComboBox->TabIndex = 4;
			// 
			// MonthComboBox
			// 
			this->MonthComboBox->FormattingEnabled = true;
			this->MonthComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"January", L"February", L"March", L"April",
					L"May", L"June", L"July", L"August", L"September", L"October", L"November", L"December"
			});
			this->MonthComboBox->Location = System::Drawing::Point(78, 90);
			this->MonthComboBox->Margin = System::Windows::Forms::Padding(2);
			this->MonthComboBox->Name = L"MonthComboBox";
			this->MonthComboBox->Size = System::Drawing::Size(83, 21);
			this->MonthComboBox->TabIndex = 2;
			// 
			// YearlyLabel
			// 
			this->YearlyLabel->AutoSize = true;
			this->YearlyLabel->Location = System::Drawing::Point(11, 57);
			this->YearlyLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->YearlyLabel->Name = L"YearlyLabel";
			this->YearlyLabel->Size = System::Drawing::Size(62, 13);
			this->YearlyLabel->TabIndex = 2;
			this->YearlyLabel->Text = L"Yearly price";
			// 
			// MontlyLabel
			// 
			this->MontlyLabel->AutoSize = true;
			this->MontlyLabel->Location = System::Drawing::Point(11, 20);
			this->MontlyLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MontlyLabel->Name = L"MontlyLabel";
			this->MontlyLabel->Size = System::Drawing::Size(64, 13);
			this->MontlyLabel->TabIndex = 3;
			this->MontlyLabel->Text = L"Montly price";
			// 
			// YearlyPriceTextBox
			// 
			this->YearlyPriceTextBox->Location = System::Drawing::Point(79, 54);
			this->YearlyPriceTextBox->Margin = System::Windows::Forms::Padding(2);
			this->YearlyPriceTextBox->Name = L"YearlyPriceTextBox";
			this->YearlyPriceTextBox->Size = System::Drawing::Size(83, 20);
			this->YearlyPriceTextBox->TabIndex = 2;
			// 
			// MontlyPriceTextBox
			// 
			this->MontlyPriceTextBox->Location = System::Drawing::Point(79, 18);
			this->MontlyPriceTextBox->Margin = System::Windows::Forms::Padding(2);
			this->MontlyPriceTextBox->Name = L"MontlyPriceTextBox";
			this->MontlyPriceTextBox->Size = System::Drawing::Size(83, 20);
			this->MontlyPriceTextBox->TabIndex = 1;
			// 
			// TariffPriceDataGridView
			// 
			this->TariffPriceDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TariffPriceDataGridView->Location = System::Drawing::Point(641, 10);
			this->TariffPriceDataGridView->Margin = System::Windows::Forms::Padding(2);
			this->TariffPriceDataGridView->Name = L"TariffPriceDataGridView";
			this->TariffPriceDataGridView->RowHeadersWidth = 51;
			this->TariffPriceDataGridView->RowTemplate->Height = 24;
			this->TariffPriceDataGridView->Size = System::Drawing::Size(301, 265);
			this->TariffPriceDataGridView->TabIndex = 2;
			this->TariffPriceDataGridView->CurrentCellChanged += gcnew System::EventHandler(this, &TariffPriceForm::TariffPriceDataGridView_CurrentCellChanged);
			// 
			// TariffPriceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(950, 284);
			this->Controls->Add(this->TariffPriceDataGridView);
			this->Controls->Add(this->TariffPriceMenuGroupBox);
			this->Controls->Add(this->TariffPriceChart);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"TariffPriceForm";
			this->Text = L"TariffPriceForm";
			this->Load += gcnew System::EventHandler(this, &TariffPriceForm::TariffPriceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TariffPriceChart))->EndInit();
			this->TariffPriceMenuGroupBox->ResumeLayout(false);
			this->TariffPriceMenuGroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TariffPriceDataGridView))->EndInit();
			this->ResumeLayout(false);

		}


#pragma endregion
	void FillWithRecord(TariffRecord^ record) {
		MontlyPriceTextBox->Text = record->montlyPrice.ToString();
		YearlyPriceTextBox->Text = record->yearlyPrice.ToString();

		YearComboBox->Text = record->date->Year.ToString();
		MonthComboBox->SelectedIndex = record->date->Month - 1;
	}
	void AddDisplayForRecord(TariffRecord^ record) {
		this->TariffPriceDataGridView->Rows->Add(
			GetVeryShortDateString(record->date),
			record->montlyPrice.ToString("F0"),
			record->yearlyPrice > 0 ? record->yearlyPrice.ToString("F0") : "-"
		);

		monthlySeries->Points->AddXY(GetVeryShortDateString(record->date), record->montlyPrice);
		if (record->yearlyPrice > 0) yearlySeries->Points->AddXY(GetVeryShortDateString(record->date), record->yearlyPrice);
	}
	void RefreshRecord(TariffRecord^ record) {
		if (isRefreshing) return;
		isRefreshing = true;

		int i;
		for (i = 0; i < TariffPriceDataGridView->Rows->Count - 1; i++) {
			if (TariffPriceDataGridView->Rows[i]->Cells[0]->Value->ToString() == GetVeryShortDateString(record->date)) {
				TariffPriceDataGridView->Rows[i]->Cells[1]->Value = record->montlyPrice.ToString("F0");
				TariffPriceDataGridView->Rows[i]->Cells[2]->Value = record->yearlyPrice.ToString("F0");
				break;
			}
		}
		if (i >= TariffPriceDataGridView->Rows->Count - 1) {
			AddDisplayForRecord(record);

			isRefreshing = false;
			return;
		}

		monthlySeries->Points[i]->YValues[0] = record->montlyPrice;
		yearlySeries->Points[i]->YValues[0] = record->yearlyPrice;

		this->TariffPriceChart->Refresh();

		isRefreshing = false;
	}
	TariffRecord^ GetRecord(int month, int year) {
		auto tariffs = repository->GetTariffs();

		for (int i = 0; i < tariffs->Count; i++) {
			if (tariffs[i]->date->Month == month && tariffs[i]->date->Year == year) {
				return tariffs[i];
			}
		}

		return nullptr;
	}
	void InitData() {
		this->TariffPriceChart->Series->Clear();
		this->TariffPriceChart->ChartAreas->Clear();
		this->TariffPriceDataGridView->Columns->Clear();
		this->TariffPriceDataGridView->Rows->Clear();

		auto area = gcnew ChartArea("MainArea");
		this->TariffPriceChart->ChartAreas->Add(area);

		yearlySeries = gcnew Series("Yearly");
		yearlySeries->ChartType = SeriesChartType::Line;
		yearlySeries->Color = System::Drawing::Color::Green;
		yearlySeries->MarkerStyle = MarkerStyle::Diamond;
		yearlySeries->BorderWidth = 3;

		monthlySeries = gcnew Series("Montly");
		monthlySeries->ChartType = SeriesChartType::Line;
		monthlySeries->Color = System::Drawing::Color::Blue;
		monthlySeries->MarkerStyle = MarkerStyle::Circle;
		monthlySeries->BorderWidth = 1;

		auto tariffs = repository->GetTariffs();

		this->TariffPriceChart->Series->Add(monthlySeries);
		this->TariffPriceChart->Series->Add(yearlySeries);

		this->TariffPriceDataGridView->ColumnCount = 3;
		this->TariffPriceDataGridView->Columns[0]->Name = "Date";
		this->TariffPriceDataGridView->Columns[1]->Name = "Montly tariff";
		this->TariffPriceDataGridView->Columns[2]->Name = "Yearly tariff";

		if (tariffs->Count <= 0) {
			return;
		}

		for (int i = 0; i < tariffs->Count; i++) {
			AddDisplayForRecord(tariffs[i]);
		}

		auto selectedDateParts = TariffPriceDataGridView->CurrentRow->Cells[0]->Value->ToString()->Split('.');

		auto selectedRecord = GetRecord(Int32::Parse(selectedDateParts[0]), Int32::Parse(selectedDateParts[1]));
		if (selectedRecord == nullptr) {
			return;
		}

		FillWithRecord(selectedRecord);
	}
	private: System::Void AddPriceButton_Click(System::Object^ sender, System::EventArgs^ e) {
		TariffRecord^ tariff = GetRecord(MonthComboBox->SelectedIndex + 1, Int32::Parse(YearComboBox->Text));

		if (tariff == nullptr) {
			tariff = gcnew TariffRecord();
			repository->GetTariffs()->Add(tariff);
			repository->isSaved = false;
		}

		tariff->montlyPrice = Convert::ToDouble(MontlyPriceTextBox->Text);
		tariff->yearlyPrice = Convert::ToDouble(YearlyPriceTextBox->Text);
		tariff->date = gcnew DateTime(Int32::Parse(YearComboBox->Text), MonthComboBox->SelectedIndex + 1, 1);

		repository->isSaved = false;

		RefreshRecord(tariff);
	}
private: System::Void TariffPriceForm_Load(System::Object^ sender, System::EventArgs^ e) {
	InitData();
}
private: System::Void TariffPriceDataGridView_CurrentCellChanged(System::Object^ sender, System::EventArgs^ e) {
	auto selectedDateParts = TariffPriceDataGridView->CurrentRow->Cells[0]->Value->ToString()->Split('.');

	auto selectedRecord = GetRecord(Int32::Parse(selectedDateParts[0]), Int32::Parse(selectedDateParts[1]));
	if (selectedRecord == nullptr) {
		return;
	}

	FillWithRecord(selectedRecord);
}
};
}
