#pragma once

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
		IndicatorsForm(void)
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
		~IndicatorsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ IndicatorsLabel;
	private: System::Windows::Forms::Label^ DateLabel;
	private: System::Windows::Forms::Button^ AddInicatorsButton;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->IndicatorsLabel = (gcnew System::Windows::Forms::Label());
			this->DateLabel = (gcnew System::Windows::Forms::Label());
			this->AddInicatorsButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 179);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(303, 283);
			this->dataGridView1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(277, 22);
			this->textBox1->TabIndex = 1;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(12, 88);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(277, 22);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->AddInicatorsButton);
			this->panel1->Controls->Add(this->DateLabel);
			this->panel1->Controls->Add(this->IndicatorsLabel);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(303, 158);
			this->panel1->TabIndex = 3;
			// 
			// IndicatorsLabel
			// 
			this->IndicatorsLabel->AutoSize = true;
			this->IndicatorsLabel->Location = System::Drawing::Point(19, 15);
			this->IndicatorsLabel->Name = L"IndicatorsLabel";
			this->IndicatorsLabel->Size = System::Drawing::Size(65, 16);
			this->IndicatorsLabel->TabIndex = 4;
			this->IndicatorsLabel->Text = L"Indicators";
			// 
			// DateLabel
			// 
			this->DateLabel->AutoSize = true;
			this->DateLabel->Location = System::Drawing::Point(19, 69);
			this->DateLabel->Name = L"DateLabel";
			this->DateLabel->Size = System::Drawing::Size(36, 16);
			this->DateLabel->TabIndex = 5;
			this->DateLabel->Text = L"Date";
			// 
			// AddInicatorsButton
			// 
			this->AddInicatorsButton->Location = System::Drawing::Point(207, 124);
			this->AddInicatorsButton->Name = L"AddInicatorsButton";
			this->AddInicatorsButton->Size = System::Drawing::Size(75, 23);
			this->AddInicatorsButton->TabIndex = 4;
			this->AddInicatorsButton->Text = L"Add";
			this->AddInicatorsButton->UseVisualStyleBackColor = true;
			// 
			// IndicatorsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(327, 474);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Name = L"IndicatorsForm";
			this->Text = L"IndicatorsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;

		}
#pragma endregion
	};
}
