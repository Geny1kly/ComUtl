#pragma once

namespace COMUTL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TariffPriceForm
	/// </summary>
	public ref class TariffPriceForm : public System::Windows::Forms::Form
	{
	public:
		TariffPriceForm(void)
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
		~TariffPriceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ TariffPriceMenuGroupBox;
	private: System::Windows::Forms::Button^ ShowDataButton;
	private: System::Windows::Forms::TextBox^ MontlyPriceTextBox;
	private: System::Windows::Forms::TextBox^ YearlyPriceTextBox;



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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->TariffPriceMenuGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->ShowDataButton = (gcnew System::Windows::Forms::Button());
			this->MontlyPriceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->YearlyPriceTextBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->TariffPriceMenuGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(587, 454);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// TariffPriceMenuGroupBox
			// 
			this->TariffPriceMenuGroupBox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TariffPriceMenuGroupBox->Controls->Add(this->YearlyPriceTextBox);
			this->TariffPriceMenuGroupBox->Controls->Add(this->MontlyPriceTextBox);
			this->TariffPriceMenuGroupBox->Controls->Add(this->ShowDataButton);
			this->TariffPriceMenuGroupBox->Location = System::Drawing::Point(610, 12);
			this->TariffPriceMenuGroupBox->Name = L"TariffPriceMenuGroupBox";
			this->TariffPriceMenuGroupBox->Size = System::Drawing::Size(211, 454);
			this->TariffPriceMenuGroupBox->TabIndex = 1;
			this->TariffPriceMenuGroupBox->TabStop = false;
			this->TariffPriceMenuGroupBox->Text = L"Menu";
			// 
			// ShowDataButton
			// 
			this->ShowDataButton->Location = System::Drawing::Point(51, 35);
			this->ShowDataButton->Name = L"ShowDataButton";
			this->ShowDataButton->Size = System::Drawing::Size(94, 28);
			this->ShowDataButton->TabIndex = 0;
			this->ShowDataButton->Text = L"Show data";
			this->ShowDataButton->UseVisualStyleBackColor = true;
			// 
			// MontlyPriceTextBox
			// 
			this->MontlyPriceTextBox->Location = System::Drawing::Point(102, 85);
			this->MontlyPriceTextBox->Name = L"MontlyPriceTextBox";
			this->MontlyPriceTextBox->Size = System::Drawing::Size(88, 22);
			this->MontlyPriceTextBox->TabIndex = 1;
			// 
			// YearlyPriceTextBox
			// 
			this->YearlyPriceTextBox->Location = System::Drawing::Point(102, 130);
			this->YearlyPriceTextBox->Name = L"YearlyPriceTextBox";
			this->YearlyPriceTextBox->Size = System::Drawing::Size(88, 22);
			this->YearlyPriceTextBox->TabIndex = 2;
			// 
			// TariffPriceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1001, 478);
			this->Controls->Add(this->TariffPriceMenuGroupBox);
			this->Controls->Add(this->chart1);
			this->Name = L"TariffPriceForm";
			this->Text = L"TariffPriceForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->TariffPriceMenuGroupBox->ResumeLayout(false);
			this->TariffPriceMenuGroupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
