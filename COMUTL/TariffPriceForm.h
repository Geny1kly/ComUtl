#pragma once
#include <limits>
#include <iostream>
#include <fstream>
#include <msclr/marshal_cppstd.h>

namespace COMUTL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	ref class TariffRecord {
	public:
		String^ date;
		double montlyPrice;
		double yearlyPrice;

		TariffRecord(String^ initialDate, double initialMontlyPrice, double initialYearlyPrice) {
			date = initialDate;
			montlyPrice = initialMontlyPrice;
			yearlyPrice = initialYearlyPrice;
		}
	};

	/// <summary>
	/// Summary for TariffPriceForm
	/// </summary>
	public ref class TariffPriceForm : public System::Windows::Forms::Form
	{
	public:
		TariffPriceForm(void)
		{
			InitializeComponent();
			InitializeTariffs();
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
			this->TariffPriceChart->Location = System::Drawing::Point(12, 12);
			this->TariffPriceChart->Name = L"TariffPriceChart";
			this->TariffPriceChart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->TariffPriceChart->Series->Add(series1);
			this->TariffPriceChart->Size = System::Drawing::Size(586, 326);
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
			this->TariffPriceMenuGroupBox->Location = System::Drawing::Point(610, 12);
			this->TariffPriceMenuGroupBox->Name = L"TariffPriceMenuGroupBox";
			this->TariffPriceMenuGroupBox->Size = System::Drawing::Size(260, 326);
			this->TariffPriceMenuGroupBox->TabIndex = 1;
			this->TariffPriceMenuGroupBox->TabStop = false;
			this->TariffPriceMenuGroupBox->Text = L"Menu";
			// 
			// PriceTariffLabel
			// 
			this->PriceTariffLabel->AutoSize = true;
			this->PriceTariffLabel->Location = System::Drawing::Point(31, 38);
			this->PriceTariffLabel->Name = L"PriceTariffLabel";
			this->PriceTariffLabel->Size = System::Drawing::Size(106, 16);
			this->PriceTariffLabel->TabIndex = 7;
			this->PriceTariffLabel->Text = L"Add price of tariff";
			// 
			// AddPriceButton
			// 
			this->AddPriceButton->Location = System::Drawing::Point(172, 35);
			this->AddPriceButton->Name = L"AddPriceButton";
			this->AddPriceButton->Size = System::Drawing::Size(58, 23);
			this->AddPriceButton->TabIndex = 2;
			this->AddPriceButton->Text = L"OK";
			this->AddPriceButton->UseVisualStyleBackColor = true;
			this->AddPriceButton->Click += gcnew System::EventHandler(this, &TariffPriceForm::AddPriceButton_Click);
			// 
			// YearLabel
			// 
			this->YearLabel->AutoSize = true;
			this->YearLabel->Location = System::Drawing::Point(31, 230);
			this->YearLabel->Name = L"YearLabel";
			this->YearLabel->Size = System::Drawing::Size(36, 16);
			this->YearLabel->TabIndex = 6;
			this->YearLabel->Text = L"Year";
			// 
			// MonthLabel
			// 
			this->MonthLabel->AutoSize = true;
			this->MonthLabel->Location = System::Drawing::Point(31, 178);
			this->MonthLabel->Name = L"MonthLabel";
			this->MonthLabel->Size = System::Drawing::Size(43, 16);
			this->MonthLabel->TabIndex = 5;
			this->MonthLabel->Text = L"Month";
			// 
			// YearComboBox
			// 
			this->YearComboBox->FormattingEnabled = true;
			this->YearComboBox->Location = System::Drawing::Point(143, 227);
			this->YearComboBox->Name = L"YearComboBox";
			this->YearComboBox->Size = System::Drawing::Size(88, 24);
			this->YearComboBox->TabIndex = 4;
			// 
			// MonthComboBox
			// 
			this->MonthComboBox->FormattingEnabled = true;
			this->MonthComboBox->Location = System::Drawing::Point(142, 170);
			this->MonthComboBox->Name = L"MonthComboBox";
			this->MonthComboBox->Size = System::Drawing::Size(88, 24);
			this->MonthComboBox->TabIndex = 2;
			// 
			// YearlyLabel
			// 
			this->YearlyLabel->AutoSize = true;
			this->YearlyLabel->Location = System::Drawing::Point(31, 130);
			this->YearlyLabel->Name = L"YearlyLabel";
			this->YearlyLabel->Size = System::Drawing::Size(79, 16);
			this->YearlyLabel->TabIndex = 2;
			this->YearlyLabel->Text = L"Yearly price";
			// 
			// MontlyLabel
			// 
			this->MontlyLabel->AutoSize = true;
			this->MontlyLabel->Location = System::Drawing::Point(31, 83);
			this->MontlyLabel->Name = L"MontlyLabel";
			this->MontlyLabel->Size = System::Drawing::Size(79, 16);
			this->MontlyLabel->TabIndex = 3;
			this->MontlyLabel->Text = L"Montly price";
			// 
			// YearlyPriceTextBox
			// 
			this->YearlyPriceTextBox->Location = System::Drawing::Point(143, 124);
			this->YearlyPriceTextBox->Name = L"YearlyPriceTextBox";
			this->YearlyPriceTextBox->Size = System::Drawing::Size(88, 22);
			this->YearlyPriceTextBox->TabIndex = 2;
			// 
			// MontlyPriceTextBox
			// 
			this->MontlyPriceTextBox->Location = System::Drawing::Point(143, 80);
			this->MontlyPriceTextBox->Name = L"MontlyPriceTextBox";
			this->MontlyPriceTextBox->Size = System::Drawing::Size(88, 22);
			this->MontlyPriceTextBox->TabIndex = 1;
			// 
			// ShowDataButton
			// 
			this->ShowDataButton->Location = System::Drawing::Point(142, 276);
			this->ShowDataButton->Name = L"ShowDataButton";
			this->ShowDataButton->Size = System::Drawing::Size(88, 26);
			this->ShowDataButton->TabIndex = 0;
			this->ShowDataButton->Text = L"Show data";
			this->ShowDataButton->UseVisualStyleBackColor = true;
			this->ShowDataButton->Click += gcnew System::EventHandler(this, &TariffPriceForm::ShowDataButton_Click);
			// 
			// TariffPriceDataGridView
			// 
			this->TariffPriceDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TariffPriceDataGridView->Location = System::Drawing::Point(885, 12);
			this->TariffPriceDataGridView->Name = L"TariffPriceDataGridView";
			this->TariffPriceDataGridView->RowHeadersWidth = 51;
			this->TariffPriceDataGridView->RowTemplate->Height = 24;
			this->TariffPriceDataGridView->Size = System::Drawing::Size(370, 326);
			this->TariffPriceDataGridView->TabIndex = 2;
			// 
			// TariffPriceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1267, 350);
			this->Controls->Add(this->TariffPriceDataGridView);
			this->Controls->Add(this->TariffPriceMenuGroupBox);
			this->Controls->Add(this->TariffPriceChart);
			this->Name = L"TariffPriceForm";
			this->Text = L"TariffPriceForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TariffPriceChart))->EndInit();
			this->TariffPriceMenuGroupBox->ResumeLayout(false);
			this->TariffPriceMenuGroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TariffPriceDataGridView))->EndInit();
			this->ResumeLayout(false);

		}

		static List<TariffRecord^>^ tariffs = gcnew List<TariffRecord^>();

		public:static void LoadTariffs() {
			std::ifstream InFile("file_tariffs");
			if (!InFile.is_open()) {
				return;
			}

			tariffs->Clear();

			int count = 0;
			InFile >> count;

			if (InFile.fail() || count < 0) {
				InFile.close();
				return;
			}

			InFile.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');

			for (int i = 0; i < count; ++i) {
				std::string s_date_str;
				double montlyPriceVal;
				double yearlyPriceVal;

				if (!std::getline(InFile, s_date_str)) {
					break;
				}

				InFile >> montlyPriceVal;
				if (InFile.fail()) {
					break;
				}

				InFile.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');

				InFile >> yearlyPriceVal;
				if (InFile.fail()) {
					break;
				}

				InFile.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');

				String^ date_sys_str = msclr::interop::marshal_as<String^>(s_date_str);
				tariffs->Add(gcnew TariffRecord(date_sys_str, montlyPriceVal, yearlyPriceVal));
			}
			InFile.close();
		}

		static void SaveTariffs() {
			std::ofstream OutFile("file_tariffs");
			if (!OutFile.is_open()) {
				return;
			}

			OutFile << tariffs->Count << std::endl;

			for (int i = 0; i < tariffs->Count; ++i) {
				OutFile << msclr::interop::marshal_as<std::string>(tariffs[i]->date) << std::endl;
				OutFile << record.montlyPrice << std::endl;
				OutFile << record.yearlyPrice << std::endl;
			}
			OutFile.close();
		}

		static void InitializeTariffs() {
			LoadTariffs();
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

		for (int i = 0; i < tariffs->Count; i++) {
			String^ DateStr = gcnew System::String(tariffs[i].date);
			seriesMontly->Points->AddXY(DateStr, tariffs[i].montlyPrice);

			if (tariffs[i].yearlyPrice > 0) seriesYearly->Points->AddXY(DateStr, tariffs[i].yearlyPrice);
		}

		this->TariffPriceChart->Series->Add(seriesMontly);
		this->TariffPriceChart->Series->Add(seriesYearly);

		this->TariffPriceDataGridView->ColumnCount = 3;
		this->TariffPriceDataGridView->Columns[0]->Name = "Date";
		this->TariffPriceDataGridView->Columns[1]->Name = "Montly tariff";
		this->TariffPriceDataGridView->Columns[2]->Name = "Yearly tariff";

		for (int i = 0; i < tariffs->Count; i++) {
			this->TariffPriceDataGridView->Rows->Add(gcnew System::String(tariffs[i].date),
				tariffs[i].montlyPrice.ToString("F0"),
				tariffs[i].yearlyPrice > 0 ? tariffs[i].yearlyPrice.ToString("F0") : "-");
		}
	}
	private: System::Void AddPriceButton_Click(System::Object^ sender, System::EventArgs^ e) {
		TariffRecord tariff;

		auto monthNumber = MonthComboBox->SelectedIndex + 1;

		tariff.montlyPrice = Convert::ToDouble(MontlyPriceTextBox->Text);
		tariff.date = "01.";

		if (monthNumber < 10) {
			tariff.date += "0";
		}
		tariff.date += monthNumber.ToString();
		tariff.date += "." + YearComboBox->Text;

		TariffRecord item;

		for (int i = 0; i < tariffs->Count; i++) {
			item = tariffs[i];
			
			if (item.date == tariff.date) {
				item.montlyPrice = tariff.montlyPrice;
				item.yearlyPrice = tariff.yearlyPrice;
				tariffs[i] = item;
				return;
			}
		}
		tariffs->Add(tariff);
	}
};
}
