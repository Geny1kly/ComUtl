#include "TariffPriceForm.h"
#include "CalculationsForm.h"
#include "EditPersonalDataForm.h"
#include "iostream"
#include "RecordRepository.h"
#pragma once

namespace COMUTL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HeadForm
	/// </summary>
	public ref class HeadForm : public System::Windows::Forms::Form
	{
	public:
		HeadForm(void)
		{
			InitializeComponent();
			this->repository = gcnew RecordRepository();
			repository->Load("test.utl");
			this->Load += gcnew System::EventHandler(this, &HeadForm::HeadForm_Load);
			this->ResourseComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &HeadForm::ResourseComboBox_Selected);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HeadForm()
		{
			if (components)
			{
				delete components;
			}
		}
private: RecordRepository^ repository;

	private: System::Void HeadForm_Load(System::Object^ sender, System::EventArgs^ e) {
		UpdateDataListBoxes();
		this->ResourseComboBox->SelectedIndex = 0;
		repository->Save("test.utl");
	}
	private: System::Void ResourseComboBox_Selected(System::Object^ sender, System::EventArgs^ e) {
		UpdateDataListBoxes();
	}

	private: System::Windows::Forms::MenuStrip^ HeadMenuStrip;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ FileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ LoadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ StatsToolStripMenuItem;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ CalculationsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ TariffPriceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ EditToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AboutToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ MenuGroupBox;
	private: System::Windows::Forms::GroupBox^ ConditionsGroupBox;
	private: System::Windows::Forms::GroupBox^ InfoGroupBox;
	private: System::Windows::Forms::GroupBox^ AddressGroupBox;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ComboBox^ ResourseComboBox;
	private: System::Windows::Forms::Label^ ResourseLabel;
	private: System::Windows::Forms::Button^ IndicatorsButton;
	private: System::Windows::Forms::Label^ BalanceStatLabel;
	private: System::Windows::Forms::ListBox^ StatBalanceListBox;
	private: System::Windows::Forms::Button^ PayButton;
	private: System::Windows::Forms::Label^ TermPlanLabel;
	private: System::Windows::Forms::Label^ PlanTariffLabel;
	private: System::Windows::Forms::Label^ DiscountLabel;
	private: System::Windows::Forms::Label^ PriceLabel;
	private: System::Windows::Forms::Label^ SubdiesLabel;
	private: System::Windows::Forms::ListBox^ PriceListBox;
	private: System::Windows::Forms::ListBox^ DiscountListBox;
	private: System::Windows::Forms::ListBox^ PlanTariffListBox;
	private: System::Windows::Forms::ListBox^ TermPlanListBox;
	private: System::Windows::Forms::ListBox^ SubsdiesListBox;
	private: System::Windows::Forms::Label^ OwnerLabel;
	private: System::Windows::Forms::Label^ EISCodeLabel;
	private: System::Windows::Forms::ListBox^ OwnerListBox;
	private: System::Windows::Forms::ListBox^ EISCodeListBox;
	private: System::Windows::Forms::Label^ AddressOblastLabel;
	private: System::Windows::Forms::Label^ AddressCityLabel;
	private: System::Windows::Forms::Label^ AddressStreetLabel;
	private: System::Windows::Forms::Label^ AddressHomeLabel;
	private: System::Windows::Forms::ListBox^ AddressOblastListBox;
	private: System::Windows::Forms::ListBox^ AddressCityListBox;
	private: System::Windows::Forms::ListBox^ AddressStreetListBox;
	private: System::Windows::Forms::ListBox^ AddressHomeListBox;
	private: System::Windows::Forms::ToolStripMenuItem^ PersonalDataToolStripMenuItem;

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
			this->HeadMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->FileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LoadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->StatsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CalculationsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TariffPriceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EditToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PersonalDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->PayButton = (gcnew System::Windows::Forms::Button());
			this->StatBalanceListBox = (gcnew System::Windows::Forms::ListBox());
			this->BalanceStatLabel = (gcnew System::Windows::Forms::Label());
			this->IndicatorsButton = (gcnew System::Windows::Forms::Button());
			this->ResourseLabel = (gcnew System::Windows::Forms::Label());
			this->ResourseComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ConditionsGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->SubsdiesListBox = (gcnew System::Windows::Forms::ListBox());
			this->TermPlanListBox = (gcnew System::Windows::Forms::ListBox());
			this->PlanTariffListBox = (gcnew System::Windows::Forms::ListBox());
			this->DiscountListBox = (gcnew System::Windows::Forms::ListBox());
			this->PriceListBox = (gcnew System::Windows::Forms::ListBox());
			this->SubdiesLabel = (gcnew System::Windows::Forms::Label());
			this->TermPlanLabel = (gcnew System::Windows::Forms::Label());
			this->PlanTariffLabel = (gcnew System::Windows::Forms::Label());
			this->DiscountLabel = (gcnew System::Windows::Forms::Label());
			this->PriceLabel = (gcnew System::Windows::Forms::Label());
			this->InfoGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->EISCodeListBox = (gcnew System::Windows::Forms::ListBox());
			this->OwnerListBox = (gcnew System::Windows::Forms::ListBox());
			this->EISCodeLabel = (gcnew System::Windows::Forms::Label());
			this->OwnerLabel = (gcnew System::Windows::Forms::Label());
			this->AddressGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->AddressHomeListBox = (gcnew System::Windows::Forms::ListBox());
			this->AddressStreetListBox = (gcnew System::Windows::Forms::ListBox());
			this->AddressCityListBox = (gcnew System::Windows::Forms::ListBox());
			this->AddressOblastListBox = (gcnew System::Windows::Forms::ListBox());
			this->AddressHomeLabel = (gcnew System::Windows::Forms::Label());
			this->AddressStreetLabel = (gcnew System::Windows::Forms::Label());
			this->AddressCityLabel = (gcnew System::Windows::Forms::Label());
			this->AddressOblastLabel = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->HeadMenuStrip->SuspendLayout();
			this->MenuGroupBox->SuspendLayout();
			this->ConditionsGroupBox->SuspendLayout();
			this->InfoGroupBox->SuspendLayout();
			this->AddressGroupBox->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// HeadMenuStrip
			// 
			this->HeadMenuStrip->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->HeadMenuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->HeadMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->FileToolStripMenuItem,
					this->StatsToolStripMenuItem, this->EditToolStripMenuItem, this->AboutToolStripMenuItem
			});
			this->HeadMenuStrip->Location = System::Drawing::Point(0, 0);
			this->HeadMenuStrip->Name = L"HeadMenuStrip";
			this->HeadMenuStrip->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->HeadMenuStrip->Size = System::Drawing::Size(739, 28);
			this->HeadMenuStrip->TabIndex = 0;
			this->HeadMenuStrip->Text = L"menuStrip1";
			this->HeadMenuStrip->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &HeadForm::HeadMenuStrip_ItemClicked);
			// 
			// FileToolStripMenuItem
			// 
			this->FileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->SaveToolStripMenuItem,
					this->LoadToolStripMenuItem, this->ExitToolStripMenuItem
			});
			this->FileToolStripMenuItem->Name = L"FileToolStripMenuItem";
			this->FileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->FileToolStripMenuItem->Text = L"File";
			// 
			// SaveToolStripMenuItem
			// 
			this->SaveToolStripMenuItem->Name = L"SaveToolStripMenuItem";
			this->SaveToolStripMenuItem->Size = System::Drawing::Size(125, 26);
			this->SaveToolStripMenuItem->Text = L"Save";
			// 
			// LoadToolStripMenuItem
			// 
			this->LoadToolStripMenuItem->Name = L"LoadToolStripMenuItem";
			this->LoadToolStripMenuItem->Size = System::Drawing::Size(125, 26);
			this->LoadToolStripMenuItem->Text = L"Load";
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(125, 26);
			this->ExitToolStripMenuItem->Text = L"Exit";
			// 
			// StatsToolStripMenuItem
			// 
			this->StatsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->CalculationsToolStripMenuItem,
					this->TariffPriceToolStripMenuItem
			});
			this->StatsToolStripMenuItem->Name = L"StatsToolStripMenuItem";
			this->StatsToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->StatsToolStripMenuItem->Text = L"Stats";
			// 
			// CalculationsToolStripMenuItem
			// 
			this->CalculationsToolStripMenuItem->Name = L"CalculationsToolStripMenuItem";
			this->CalculationsToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->CalculationsToolStripMenuItem->Text = L"Calculations";
			this->CalculationsToolStripMenuItem->Click += gcnew System::EventHandler(this, &HeadForm::CalculationsToolStripMenuItem_Click);
			// 
			// TariffPriceToolStripMenuItem
			// 
			this->TariffPriceToolStripMenuItem->Name = L"TariffPriceToolStripMenuItem";
			this->TariffPriceToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->TariffPriceToolStripMenuItem->Text = L"Tariff price";
			this->TariffPriceToolStripMenuItem->Click += gcnew System::EventHandler(this, &HeadForm::TariffPriceToolStripMenuItem_Click);
			// 
			// EditToolStripMenuItem
			// 
			this->EditToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->PersonalDataToolStripMenuItem });
			this->EditToolStripMenuItem->Name = L"EditToolStripMenuItem";
			this->EditToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->EditToolStripMenuItem->Text = L"Edit";
			this->EditToolStripMenuItem->Click += gcnew System::EventHandler(this, &HeadForm::EditToolStripMenuItem_Click);
			// 
			// PersonalDataToolStripMenuItem
			// 
			this->PersonalDataToolStripMenuItem->Name = L"PersonalDataToolStripMenuItem";
			this->PersonalDataToolStripMenuItem->Size = System::Drawing::Size(179, 26);
			this->PersonalDataToolStripMenuItem->Text = L"PersonalData";
			this->PersonalDataToolStripMenuItem->Click += gcnew System::EventHandler(this, &HeadForm::PersonalDataToolStripMenuItem_Click);
			// 
			// AboutToolStripMenuItem
			// 
			this->AboutToolStripMenuItem->Name = L"AboutToolStripMenuItem";
			this->AboutToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->AboutToolStripMenuItem->Text = L"About";
			this->AboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &HeadForm::AboutToolStripMenuItem_Click);
			// 
			// MenuGroupBox
			// 
			this->MenuGroupBox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->MenuGroupBox->Controls->Add(this->PayButton);
			this->MenuGroupBox->Controls->Add(this->StatBalanceListBox);
			this->MenuGroupBox->Controls->Add(this->BalanceStatLabel);
			this->MenuGroupBox->Controls->Add(this->IndicatorsButton);
			this->MenuGroupBox->Controls->Add(this->ResourseLabel);
			this->MenuGroupBox->Controls->Add(this->ResourseComboBox);
			this->MenuGroupBox->Location = System::Drawing::Point(12, 37);
			this->MenuGroupBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MenuGroupBox->Name = L"MenuGroupBox";
			this->MenuGroupBox->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MenuGroupBox->Size = System::Drawing::Size(715, 57);
			this->MenuGroupBox->TabIndex = 1;
			this->MenuGroupBox->TabStop = false;
			this->MenuGroupBox->Text = L"Menu";
			// 
			// PayButton
			// 
			this->PayButton->Location = System::Drawing::Point(591, 18);
			this->PayButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PayButton->Name = L"PayButton";
			this->PayButton->Size = System::Drawing::Size(59, 26);
			this->PayButton->TabIndex = 9;
			this->PayButton->Text = L"Pay";
			this->PayButton->UseVisualStyleBackColor = true;
			// 
			// StatBalanceListBox
			// 
			this->StatBalanceListBox->FormattingEnabled = true;
			this->StatBalanceListBox->ItemHeight = 16;
			this->StatBalanceListBox->Location = System::Drawing::Point(484, 22);
			this->StatBalanceListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->StatBalanceListBox->Name = L"StatBalanceListBox";
			this->StatBalanceListBox->Size = System::Drawing::Size(101, 20);
			this->StatBalanceListBox->TabIndex = 8;
			// 
			// BalanceStatLabel
			// 
			this->BalanceStatLabel->AutoSize = true;
			this->BalanceStatLabel->Location = System::Drawing::Point(368, 23);
			this->BalanceStatLabel->Name = L"BalanceStatLabel";
			this->BalanceStatLabel->Size = System::Drawing::Size(110, 16);
			this->BalanceStatLabel->TabIndex = 7;
			this->BalanceStatLabel->Text = L"Status of balance";
			// 
			// IndicatorsButton
			// 
			this->IndicatorsButton->Location = System::Drawing::Point(229, 18);
			this->IndicatorsButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->IndicatorsButton->Name = L"IndicatorsButton";
			this->IndicatorsButton->Size = System::Drawing::Size(75, 27);
			this->IndicatorsButton->TabIndex = 6;
			this->IndicatorsButton->Text = L"Indicators";
			this->IndicatorsButton->UseVisualStyleBackColor = true;
			// 
			// ResourseLabel
			// 
			this->ResourseLabel->AutoSize = true;
			this->ResourseLabel->Location = System::Drawing::Point(21, 23);
			this->ResourseLabel->Name = L"ResourseLabel";
			this->ResourseLabel->Size = System::Drawing::Size(109, 16);
			this->ResourseLabel->TabIndex = 6;
			this->ResourseLabel->Text = L"Type of resourse";
			// 
			// ResourseComboBox
			// 
			this->ResourseComboBox->FormattingEnabled = true;
			this->ResourseComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Gas", L"Water", L"Energy" });
			this->ResourseComboBox->Location = System::Drawing::Point(137, 20);
			this->ResourseComboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ResourseComboBox->Name = L"ResourseComboBox";
			this->ResourseComboBox->Size = System::Drawing::Size(89, 24);
			this->ResourseComboBox->TabIndex = 0;
			// 
			// ConditionsGroupBox
			// 
			this->ConditionsGroupBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ConditionsGroupBox->Controls->Add(this->SubsdiesListBox);
			this->ConditionsGroupBox->Controls->Add(this->TermPlanListBox);
			this->ConditionsGroupBox->Controls->Add(this->PlanTariffListBox);
			this->ConditionsGroupBox->Controls->Add(this->DiscountListBox);
			this->ConditionsGroupBox->Controls->Add(this->PriceListBox);
			this->ConditionsGroupBox->Controls->Add(this->SubdiesLabel);
			this->ConditionsGroupBox->Controls->Add(this->TermPlanLabel);
			this->ConditionsGroupBox->Controls->Add(this->PlanTariffLabel);
			this->ConditionsGroupBox->Controls->Add(this->DiscountLabel);
			this->ConditionsGroupBox->Controls->Add(this->PriceLabel);
			this->ConditionsGroupBox->Location = System::Drawing::Point(12, 102);
			this->ConditionsGroupBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ConditionsGroupBox->Name = L"ConditionsGroupBox";
			this->ConditionsGroupBox->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ConditionsGroupBox->Size = System::Drawing::Size(333, 270);
			this->ConditionsGroupBox->TabIndex = 2;
			this->ConditionsGroupBox->TabStop = false;
			this->ConditionsGroupBox->Text = L"My conditions";
			// 
			// SubsdiesListBox
			// 
			this->SubsdiesListBox->FormattingEnabled = true;
			this->SubsdiesListBox->ItemHeight = 16;
			this->SubsdiesListBox->Location = System::Drawing::Point(135, 229);
			this->SubsdiesListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SubsdiesListBox->Name = L"SubsdiesListBox";
			this->SubsdiesListBox->Size = System::Drawing::Size(181, 20);
			this->SubsdiesListBox->TabIndex = 9;
			// 
			// TermPlanListBox
			// 
			this->TermPlanListBox->FormattingEnabled = true;
			this->TermPlanListBox->ItemHeight = 16;
			this->TermPlanListBox->Location = System::Drawing::Point(135, 177);
			this->TermPlanListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TermPlanListBox->Name = L"TermPlanListBox";
			this->TermPlanListBox->Size = System::Drawing::Size(181, 20);
			this->TermPlanListBox->TabIndex = 8;
			// 
			// PlanTariffListBox
			// 
			this->PlanTariffListBox->FormattingEnabled = true;
			this->PlanTariffListBox->ItemHeight = 16;
			this->PlanTariffListBox->Location = System::Drawing::Point(135, 121);
			this->PlanTariffListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PlanTariffListBox->Name = L"PlanTariffListBox";
			this->PlanTariffListBox->Size = System::Drawing::Size(181, 20);
			this->PlanTariffListBox->TabIndex = 7;
			// 
			// DiscountListBox
			// 
			this->DiscountListBox->FormattingEnabled = true;
			this->DiscountListBox->ItemHeight = 16;
			this->DiscountListBox->Location = System::Drawing::Point(135, 70);
			this->DiscountListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DiscountListBox->Name = L"DiscountListBox";
			this->DiscountListBox->Size = System::Drawing::Size(181, 20);
			this->DiscountListBox->TabIndex = 6;
			// 
			// PriceListBox
			// 
			this->PriceListBox->FormattingEnabled = true;
			this->PriceListBox->ItemHeight = 16;
			this->PriceListBox->Location = System::Drawing::Point(135, 21);
			this->PriceListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PriceListBox->Name = L"PriceListBox";
			this->PriceListBox->Size = System::Drawing::Size(181, 20);
			this->PriceListBox->TabIndex = 5;
			// 
			// SubdiesLabel
			// 
			this->SubdiesLabel->AutoSize = true;
			this->SubdiesLabel->Location = System::Drawing::Point(21, 233);
			this->SubdiesLabel->Name = L"SubdiesLabel";
			this->SubdiesLabel->Size = System::Drawing::Size(67, 16);
			this->SubdiesLabel->TabIndex = 4;
			this->SubdiesLabel->Text = L"Subsidies";
			// 
			// TermPlanLabel
			// 
			this->TermPlanLabel->AutoSize = true;
			this->TermPlanLabel->Location = System::Drawing::Point(21, 181);
			this->TermPlanLabel->Name = L"TermPlanLabel";
			this->TermPlanLabel->Size = System::Drawing::Size(82, 16);
			this->TermPlanLabel->TabIndex = 3;
			this->TermPlanLabel->Text = L"Term of plan";
			// 
			// PlanTariffLabel
			// 
			this->PlanTariffLabel->AutoSize = true;
			this->PlanTariffLabel->Location = System::Drawing::Point(21, 126);
			this->PlanTariffLabel->Name = L"PlanTariffLabel";
			this->PlanTariffLabel->Size = System::Drawing::Size(75, 16);
			this->PlanTariffLabel->TabIndex = 2;
			this->PlanTariffLabel->Text = L"Plan of tariff";
			// 
			// DiscountLabel
			// 
			this->DiscountLabel->AutoSize = true;
			this->DiscountLabel->Location = System::Drawing::Point(21, 74);
			this->DiscountLabel->Name = L"DiscountLabel";
			this->DiscountLabel->Size = System::Drawing::Size(59, 16);
			this->DiscountLabel->TabIndex = 1;
			this->DiscountLabel->Text = L"Discount";
			// 
			// PriceLabel
			// 
			this->PriceLabel->AutoSize = true;
			this->PriceLabel->Location = System::Drawing::Point(21, 30);
			this->PriceLabel->Name = L"PriceLabel";
			this->PriceLabel->Size = System::Drawing::Size(38, 16);
			this->PriceLabel->TabIndex = 0;
			this->PriceLabel->Text = L"Price";
			// 
			// InfoGroupBox
			// 
			this->InfoGroupBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->InfoGroupBox->Controls->Add(this->EISCodeListBox);
			this->InfoGroupBox->Controls->Add(this->OwnerListBox);
			this->InfoGroupBox->Controls->Add(this->EISCodeLabel);
			this->InfoGroupBox->Controls->Add(this->OwnerLabel);
			this->InfoGroupBox->Location = System::Drawing::Point(357, 102);
			this->InfoGroupBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->InfoGroupBox->Name = L"InfoGroupBox";
			this->InfoGroupBox->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->InfoGroupBox->Size = System::Drawing::Size(369, 95);
			this->InfoGroupBox->TabIndex = 3;
			this->InfoGroupBox->TabStop = false;
			this->InfoGroupBox->Text = L"My info";
			// 
			// EISCodeListBox
			// 
			this->EISCodeListBox->FormattingEnabled = true;
			this->EISCodeListBox->ItemHeight = 16;
			this->EISCodeListBox->Location = System::Drawing::Point(155, 63);
			this->EISCodeListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EISCodeListBox->Name = L"EISCodeListBox";
			this->EISCodeListBox->Size = System::Drawing::Size(185, 20);
			this->EISCodeListBox->TabIndex = 3;
			// 
			// OwnerListBox
			// 
			this->OwnerListBox->FormattingEnabled = true;
			this->OwnerListBox->ItemHeight = 16;
			this->OwnerListBox->Location = System::Drawing::Point(155, 25);
			this->OwnerListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OwnerListBox->Name = L"OwnerListBox";
			this->OwnerListBox->Size = System::Drawing::Size(185, 20);
			this->OwnerListBox->TabIndex = 2;
			// 
			// EISCodeLabel
			// 
			this->EISCodeLabel->AutoSize = true;
			this->EISCodeLabel->Location = System::Drawing::Point(19, 66);
			this->EISCodeLabel->Name = L"EISCodeLabel";
			this->EISCodeLabel->Size = System::Drawing::Size(65, 16);
			this->EISCodeLabel->TabIndex = 1;
			this->EISCodeLabel->Text = L"EIS-Code";
			// 
			// OwnerLabel
			// 
			this->OwnerLabel->AutoSize = true;
			this->OwnerLabel->Location = System::Drawing::Point(19, 30);
			this->OwnerLabel->Name = L"OwnerLabel";
			this->OwnerLabel->Size = System::Drawing::Size(109, 16);
			this->OwnerLabel->TabIndex = 0;
			this->OwnerLabel->Text = L"Owner of account";
			// 
			// AddressGroupBox
			// 
			this->AddressGroupBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->AddressGroupBox->Controls->Add(this->AddressHomeListBox);
			this->AddressGroupBox->Controls->Add(this->AddressStreetListBox);
			this->AddressGroupBox->Controls->Add(this->AddressCityListBox);
			this->AddressGroupBox->Controls->Add(this->AddressOblastListBox);
			this->AddressGroupBox->Controls->Add(this->AddressHomeLabel);
			this->AddressGroupBox->Controls->Add(this->AddressStreetLabel);
			this->AddressGroupBox->Controls->Add(this->AddressCityLabel);
			this->AddressGroupBox->Controls->Add(this->AddressOblastLabel);
			this->AddressGroupBox->Location = System::Drawing::Point(357, 206);
			this->AddressGroupBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddressGroupBox->Name = L"AddressGroupBox";
			this->AddressGroupBox->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddressGroupBox->Size = System::Drawing::Size(369, 166);
			this->AddressGroupBox->TabIndex = 4;
			this->AddressGroupBox->TabStop = false;
			this->AddressGroupBox->Text = L"Address";
			// 
			// AddressHomeListBox
			// 
			this->AddressHomeListBox->FormattingEnabled = true;
			this->AddressHomeListBox->ItemHeight = 16;
			this->AddressHomeListBox->Location = System::Drawing::Point(155, 130);
			this->AddressHomeListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddressHomeListBox->Name = L"AddressHomeListBox";
			this->AddressHomeListBox->Size = System::Drawing::Size(185, 20);
			this->AddressHomeListBox->TabIndex = 7;
			// 
			// AddressStreetListBox
			// 
			this->AddressStreetListBox->FormattingEnabled = true;
			this->AddressStreetListBox->ItemHeight = 16;
			this->AddressStreetListBox->Location = System::Drawing::Point(155, 91);
			this->AddressStreetListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddressStreetListBox->Name = L"AddressStreetListBox";
			this->AddressStreetListBox->Size = System::Drawing::Size(185, 20);
			this->AddressStreetListBox->TabIndex = 6;
			// 
			// AddressCityListBox
			// 
			this->AddressCityListBox->FormattingEnabled = true;
			this->AddressCityListBox->ItemHeight = 16;
			this->AddressCityListBox->Location = System::Drawing::Point(155, 57);
			this->AddressCityListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddressCityListBox->Name = L"AddressCityListBox";
			this->AddressCityListBox->Size = System::Drawing::Size(185, 20);
			this->AddressCityListBox->TabIndex = 5;
			// 
			// AddressOblastListBox
			// 
			this->AddressOblastListBox->FormattingEnabled = true;
			this->AddressOblastListBox->ItemHeight = 16;
			this->AddressOblastListBox->Location = System::Drawing::Point(155, 21);
			this->AddressOblastListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddressOblastListBox->Name = L"AddressOblastListBox";
			this->AddressOblastListBox->Size = System::Drawing::Size(185, 20);
			this->AddressOblastListBox->TabIndex = 4;
			// 
			// AddressHomeLabel
			// 
			this->AddressHomeLabel->AutoSize = true;
			this->AddressHomeLabel->Location = System::Drawing::Point(21, 134);
			this->AddressHomeLabel->Name = L"AddressHomeLabel";
			this->AddressHomeLabel->Size = System::Drawing::Size(44, 16);
			this->AddressHomeLabel->TabIndex = 3;
			this->AddressHomeLabel->Text = L"Home";
			// 
			// AddressStreetLabel
			// 
			this->AddressStreetLabel->AutoSize = true;
			this->AddressStreetLabel->Location = System::Drawing::Point(21, 95);
			this->AddressStreetLabel->Name = L"AddressStreetLabel";
			this->AddressStreetLabel->Size = System::Drawing::Size(42, 16);
			this->AddressStreetLabel->TabIndex = 2;
			this->AddressStreetLabel->Text = L"Street";
			// 
			// AddressCityLabel
			// 
			this->AddressCityLabel->AutoSize = true;
			this->AddressCityLabel->Location = System::Drawing::Point(21, 60);
			this->AddressCityLabel->Name = L"AddressCityLabel";
			this->AddressCityLabel->Size = System::Drawing::Size(29, 16);
			this->AddressCityLabel->TabIndex = 1;
			this->AddressCityLabel->Text = L"City";
			// 
			// AddressOblastLabel
			// 
			this->AddressOblastLabel->AutoSize = true;
			this->AddressOblastLabel->Location = System::Drawing::Point(21, 25);
			this->AddressOblastLabel->Name = L"AddressOblastLabel";
			this->AddressOblastLabel->Size = System::Drawing::Size(46, 16);
			this->AddressOblastLabel->TabIndex = 0;
			this->AddressOblastLabel->Text = L"Oblast";
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 380);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 13, 0);
			this->statusStrip1->Size = System::Drawing::Size(739, 26);
			this->statusStrip1->TabIndex = 5;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(117, 20);
			this->toolStripStatusLabel1->Text = L"Made in Ukraine";
			// 
			// HeadForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(739, 406);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->AddressGroupBox);
			this->Controls->Add(this->InfoGroupBox);
			this->Controls->Add(this->ConditionsGroupBox);
			this->Controls->Add(this->MenuGroupBox);
			this->Controls->Add(this->HeadMenuStrip);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->HeadMenuStrip;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"HeadForm";
			this->Text = L"ComUtl";
			this->Load += gcnew System::EventHandler(this, &HeadForm::HeadForm_Load_1);
			this->HeadMenuStrip->ResumeLayout(false);
			this->HeadMenuStrip->PerformLayout();
			this->MenuGroupBox->ResumeLayout(false);
			this->MenuGroupBox->PerformLayout();
			this->ConditionsGroupBox->ResumeLayout(false);
			this->ConditionsGroupBox->PerformLayout();
			this->InfoGroupBox->ResumeLayout(false);
			this->InfoGroupBox->PerformLayout();
			this->AddressGroupBox->ResumeLayout(false);
			this->AddressGroupBox->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void UpdateDataListBoxes() {
			array<ListBox^>^ listBoxes = gcnew array<ListBox^>{
				this->PriceListBox,
				this->DiscountListBox,
				this->PlanTariffListBox,
				this->TermPlanListBox,
				this->SubsdiesListBox,
				this->OwnerListBox,
				this->EISCodeListBox,
				this->AddressOblastListBox,
				this->AddressCityListBox,
				this->AddressStreetListBox,
				this->AddressHomeListBox,
				this->StatBalanceListBox
			};

			for each (ListBox ^ calb in listBoxes) calb->Items->Clear();

			auto record = repository->GetRecord(GetSelectedRecordType());
			if (record == nullptr) return;

			PriceListBox->Items->Add(record->price.ToString());
			DiscountListBox->Items->Add(String::Format("{0}%", record->discount));
			TermPlanListBox->Items->Add(record->termPlan.ToShortDateString());
		}
#pragma endregion

	private: System::Void AboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("ComUtl \nVersion 1.9.1\n(c) Vadim Ivanchuk, 2025", "About programl", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: ERecordType GetSelectedRecordType() {
		return static_cast<ERecordType>(ResourseComboBox->SelectedIndex);
	}
	private: System::Void PersonalDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		EditPersonalDataForm^ OpenEditPersonalDataForm = gcnew EditPersonalDataForm(repository, GetSelectedRecordType());
		OpenEditPersonalDataForm->ShowDialog();
		UpdateDataListBoxes();
	}

	private: System::Void CalculationsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CalculationsForm^ OpenCalculationsForm = gcnew CalculationsForm();
		OpenCalculationsForm->ShowDialog();
	}

	private: System::Void TariffPriceToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		TariffPriceForm^ OpenTariffPriceForm = gcnew TariffPriceForm();
		OpenTariffPriceForm->ShowDialog();
	}

	private: System::Void HeadForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void HeadMenuStrip_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void EditToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
