#pragma once
#include "TariffRepository.h"
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
		TariffPriceForm(TariffRepository^ tariffs)
		{
			InitializeComponent();
			this->tariffs = tariffs;
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

	private: TariffRepository^ tariffs;

	private: System::Windows::Forms::GroupBox^ TariffPriceMenuGroupBox;
	private: System::Windows::Forms::Button^ ShowDataButton;
	private: System::Windows::Forms::TextBox^ MontlyPriceTextBox;
	private: System::Windows::Forms::TextBox^ YearlyPriceTextBox;
	private: System::Windows::Forms::Label^ MontlyLabel;
	private: System::Windows::Forms::Label^ YearlyLabel;
	private: System::Windows::Forms::ComboBox^ YearComboBox;
	private: System::Windows::Forms::ComboBox^ MonthComboBox;
	private: System::Windows::Forms::Label^ MonthLabel;
	private: System::Windows::Forms::Label^ YearLabel;
	private: System::Windows::Forms::Button^ AddPriceButton;
	private: System::Windows::Forms::Label^ PriceTariffLabel;
	private: System::Windows::Forms::DataGridView^ TariffPriceDataGridView;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->TariffPriceChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->TariffPriceMenuGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->PriceTariffLabel = (gcnew System::Windows::Forms::Label());
			this->AddPriceButton = (gcnew System::Windows::Forms::Button());
			this->YearLabel = (gcnew System::Windows::Forms::Label());
			this->MonthLabel = (gcnew System::Windows::Forms::Label());
			this->YearComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->MonthComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->YearlyLabel = (gcnew System::Windows::Forms::Label());
			this->MontlyLabel = (gcnew System::Windows::Forms::Label());
			this->YearlyPriceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MontlyPriceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ShowDataButton = (gcnew System::Windows::Forms::Button());
			this->TariffPriceDataGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TariffPriceChart))->BeginInit();
			this->TariffPriceMenuGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TariffPriceDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// TariffPriceChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->TariffPriceChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->TariffPriceChart->Legends->Add(legend1);
			this->TariffPriceChart->Location = System::Drawing::Point(9, 10);
			this->TariffPriceChart->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TariffPriceChart->Name = L"TariffPriceChart";
			this->TariffPriceChart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->TariffPriceChart->Series->Add(series1);
			this->TariffPriceChart->Size = System::Drawing::Size(440, 265);
			this->TariffPriceChart->TabIndex = 0;
			this->TariffPriceChart->Text = L"TariffPriceChart";
			// 
			// TariffPriceMenuGroupBox
			// 
			this->TariffPriceMenuGroupBox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TariffPriceMenuGroupBox->Controls->Add(this->PriceTariffLabel);
			this->TariffPriceMenuGroupBox->Controls->Add(this->AddPriceButton);
			this->TariffPriceMenuGroupBox->Controls->Add(this->YearLabel);
			this->TariffPriceMenuGroupBox->Controls->Add(this->MonthLabel);
			this->TariffPriceMenuGroupBox->Controls->Add(this->YearComboBox);
			this->TariffPriceMenuGroupBox->Controls->Add(this->MonthComboBox);
			this->TariffPriceMenuGroupBox->Controls->Add(this->YearlyLabel);
			this->TariffPriceMenuGroupBox->Controls->Add(this->MontlyLabel);
			this->TariffPriceMenuGroupBox->Controls->Add(this->YearlyPriceTextBox);
			this->TariffPriceMenuGroupBox->Controls->Add(this->MontlyPriceTextBox);
			this->TariffPriceMenuGroupBox->Controls->Add(this->ShowDataButton);
			this->TariffPriceMenuGroupBox->Location = System::Drawing::Point(458, 10);
			this->TariffPriceMenuGroupBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TariffPriceMenuGroupBox->Name = L"TariffPriceMenuGroupBox";
			this->TariffPriceMenuGroupBox->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TariffPriceMenuGroupBox->Size = System::Drawing::Size(195, 265);
			this->TariffPriceMenuGroupBox->TabIndex = 1;
			this->TariffPriceMenuGroupBox->TabStop = false;
			this->TariffPriceMenuGroupBox->Text = L"Menu";
			// 
			// PriceTariffLabel
			// 
			this->PriceTariffLabel->AutoSize = true;
			this->PriceTariffLabel->Location = System::Drawing::Point(23, 31);
			this->PriceTariffLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PriceTariffLabel->Name = L"PriceTariffLabel";
			this->PriceTariffLabel->Size = System::Drawing::Size(87, 13);
			this->PriceTariffLabel->TabIndex = 7;
			this->PriceTariffLabel->Text = L"Add price of tariff";
			// 
			// AddPriceButton
			// 
			this->AddPriceButton->Location = System::Drawing::Point(129, 28);
			this->AddPriceButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->AddPriceButton->Name = L"AddPriceButton";
			this->AddPriceButton->Size = System::Drawing::Size(44, 19);
			this->AddPriceButton->TabIndex = 2;
			this->AddPriceButton->Text = L"OK";
			this->AddPriceButton->UseVisualStyleBackColor = true;
			this->AddPriceButton->Click += gcnew System::EventHandler(this, &TariffPriceForm::AddPriceButton_Click);
			// 
			// YearLabel
			// 
			this->YearLabel->AutoSize = true;
			this->YearLabel->Location = System::Drawing::Point(23, 187);
			this->YearLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->YearLabel->Name = L"YearLabel";
			this->YearLabel->Size = System::Drawing::Size(29, 13);
			this->YearLabel->TabIndex = 6;
			this->YearLabel->Text = L"Year";
			// 
			// MonthLabel
			// 
			this->MonthLabel->AutoSize = true;
			this->MonthLabel->Location = System::Drawing::Point(23, 145);
			this->MonthLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MonthLabel->Name = L"MonthLabel";
			this->MonthLabel->Size = System::Drawing::Size(37, 13);
			this->MonthLabel->TabIndex = 5;
			this->MonthLabel->Text = L"Month";
			// 
			// YearComboBox
			// 
			this->YearComboBox->FormattingEnabled = true;
			this->YearComboBox->Location = System::Drawing::Point(107, 184);
			this->YearComboBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->YearComboBox->Name = L"YearComboBox";
			this->YearComboBox->Size = System::Drawing::Size(67, 21);
			this->YearComboBox->TabIndex = 4;
			// 
			// MonthComboBox
			// 
			this->MonthComboBox->FormattingEnabled = true;
			this->MonthComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->MonthComboBox->Location = System::Drawing::Point(106, 138);
			this->MonthComboBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MonthComboBox->Name = L"MonthComboBox";
			this->MonthComboBox->Size = System::Drawing::Size(67, 21);
			this->MonthComboBox->TabIndex = 2;
			// 
			// YearlyLabel
			// 
			this->YearlyLabel->AutoSize = true;
			this->YearlyLabel->Location = System::Drawing::Point(23, 106);
			this->YearlyLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->YearlyLabel->Name = L"YearlyLabel";
			this->YearlyLabel->Size = System::Drawing::Size(62, 13);
			this->YearlyLabel->TabIndex = 2;
			this->YearlyLabel->Text = L"Yearly price";
			// 
			// MontlyLabel
			// 
			this->MontlyLabel->AutoSize = true;
			this->MontlyLabel->Location = System::Drawing::Point(23, 67);
			this->MontlyLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MontlyLabel->Name = L"MontlyLabel";
			this->MontlyLabel->Size = System::Drawing::Size(64, 13);
			this->MontlyLabel->TabIndex = 3;
			this->MontlyLabel->Text = L"Montly price";
			// 
			// YearlyPriceTextBox
			// 
			this->YearlyPriceTextBox->Location = System::Drawing::Point(107, 101);
			this->YearlyPriceTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->YearlyPriceTextBox->Name = L"YearlyPriceTextBox";
			this->YearlyPriceTextBox->Size = System::Drawing::Size(67, 20);
			this->YearlyPriceTextBox->TabIndex = 2;
			// 
			// MontlyPriceTextBox
			// 
			this->MontlyPriceTextBox->Location = System::Drawing::Point(107, 65);
			this->MontlyPriceTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MontlyPriceTextBox->Name = L"MontlyPriceTextBox";
			this->MontlyPriceTextBox->Size = System::Drawing::Size(67, 20);
			this->MontlyPriceTextBox->TabIndex = 1;
			// 
			// ShowDataButton
			// 
			this->ShowDataButton->Location = System::Drawing::Point(106, 224);
			this->ShowDataButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ShowDataButton->Name = L"ShowDataButton";
			this->ShowDataButton->Size = System::Drawing::Size(66, 21);
			this->ShowDataButton->TabIndex = 0;
			this->ShowDataButton->Text = L"Show data";
			this->ShowDataButton->UseVisualStyleBackColor = true;
			this->ShowDataButton->Click += gcnew System::EventHandler(this, &TariffPriceForm::ShowDataButton_Click);
			// 
			// TariffPriceDataGridView
			// 
			this->TariffPriceDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TariffPriceDataGridView->Location = System::Drawing::Point(664, 10);
			this->TariffPriceDataGridView->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TariffPriceDataGridView->Name = L"TariffPriceDataGridView";
			this->TariffPriceDataGridView->RowHeadersWidth = 51;
			this->TariffPriceDataGridView->RowTemplate->Height = 24;
			this->TariffPriceDataGridView->Size = System::Drawing::Size(278, 265);
			this->TariffPriceDataGridView->TabIndex = 2;
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"TariffPriceForm";
			this->Text = L"TariffPriceForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TariffPriceChart))->EndInit();
			this->TariffPriceMenuGroupBox->ResumeLayout(false);
			this->TariffPriceMenuGroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TariffPriceDataGridView))->EndInit();
			this->ResumeLayout(false);

		}


#pragma endregion
	private: System::Void ShowDataButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TariffPriceChart->Series->Clear();
		this->TariffPriceChart->ChartAreas->Clear();
		this->TariffPriceDataGridView->Columns->Clear();
		this->TariffPriceDataGridView->Rows->Clear();

		auto area = gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea("MainArea");
		this->TariffPriceChart->ChartAreas->Add(area);

		auto seriesYearly = gcnew System::Windows::Forms::DataVisualization::Charting::Series("Yearly");
		seriesYearly->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		seriesYearly->Color = System::Drawing::Color::Green;
		seriesYearly->MarkerStyle = MarkerStyle::Diamond;
		seriesYearly->BorderWidth = 3;

		auto seriesMontly = gcnew System::Windows::Forms::DataVisualization::Charting::Series("Montly");
		seriesMontly->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		seriesMontly->Color = System::Drawing::Color::Blue;
		seriesMontly->MarkerStyle = MarkerStyle::Circle;
		seriesMontly->BorderWidth = 1;

		auto records = tariffs->GetRecords();

		for (int i = 0; i < records->Count; i++) {
			seriesMontly->Points->AddXY(records[i]->date->ToShortDateString(), records[i]->montlyPrice);

			if (records[i]->yearlyPrice > 0) seriesYearly->Points->AddXY(records[i]->date->ToShortDateString(), records[i]->yearlyPrice);
		}

		this->TariffPriceChart->Series->Add(seriesMontly);
		this->TariffPriceChart->Series->Add(seriesYearly);

		this->TariffPriceDataGridView->ColumnCount = 3;
		this->TariffPriceDataGridView->Columns[0]->Name = "Date";
		this->TariffPriceDataGridView->Columns[1]->Name = "Montly tariff";
		this->TariffPriceDataGridView->Columns[2]->Name = "Yearly tariff";

		for (int i = 0; i < records->Count; i++) {
			this->TariffPriceDataGridView->Rows->Add(
				String::Format("{2}{0}.{1}", records[i]->date->Month, records[i]->date->Year, (Char)(records[i]->date->Month < 10 ? '0' : '\0')),
				records[i]->montlyPrice.ToString("F0"),
				records[i]->yearlyPrice > 0 ? records[i]->yearlyPrice.ToString("F0") : "-");
		}
	}
	private: System::Void AddPriceButton_Click(System::Object^ sender, System::EventArgs^ e) {
		auto tariff = gcnew TariffRecord();
		auto records = tariffs->GetRecords();

		auto monthNumber = MonthComboBox->SelectedIndex + 1;

		tariff->montlyPrice = Convert::ToDouble(MontlyPriceTextBox->Text);
		tariff->yearlyPrice = Convert::ToDouble(YearlyPriceTextBox->Text);
		tariff->date = gcnew DateTime(Int32::Parse(YearComboBox->Text), MonthComboBox->SelectedIndex + 1, 1);

		for (int i = 0; i < records->Count; i++) {
			if (records[i]->date->Month == tariff->date->Month && records[i]->date->Year == tariff->date->Year) {
				records[i] = tariff;
				return;
			}
		}
		records->Add(tariff);

		tariffs->Save();
	}
};
}
