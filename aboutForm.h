#pragma once

namespace CrypText {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ aboutForm
	/// </summary>
	public ref class aboutForm : public System::Windows::Forms::Form
	{
	public:
		aboutForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~aboutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ aboutProgramText;
	private: System::Windows::Forms::LinkLabel^ linkToGitHubLabel;
	private: System::Windows::Forms::PictureBox^ aboutLogoPictureBox;
	private: System::Windows::Forms::Label^ aboutIssueLabel;
	private: System::Windows::Forms::Label^ aboutLicenceLabel;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(aboutForm::typeid));
			this->aboutProgramText = (gcnew System::Windows::Forms::Label());
			this->linkToGitHubLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->aboutLogoPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->aboutIssueLabel = (gcnew System::Windows::Forms::Label());
			this->aboutLicenceLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aboutLogoPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// aboutProgramText
			// 
			this->aboutProgramText->AutoSize = true;
			this->aboutProgramText->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutProgramText->Location = System::Drawing::Point(143, 9);
			this->aboutProgramText->Name = L"aboutProgramText";
			this->aboutProgramText->Size = System::Drawing::Size(183, 26);
			this->aboutProgramText->TabIndex = 0;
			this->aboutProgramText->Text = L"CrypText version 1.0";
			// 
			// linkToGitHubLabel
			// 
			this->linkToGitHubLabel->AutoSize = true;
			this->linkToGitHubLabel->Location = System::Drawing::Point(123, 91);
			this->linkToGitHubLabel->Name = L"linkToGitHubLabel";
			this->linkToGitHubLabel->Size = System::Drawing::Size(225, 13);
			this->linkToGitHubLabel->TabIndex = 1;
			this->linkToGitHubLabel->TabStop = true;
			this->linkToGitHubLabel->Text = L"https://github.com/achancel/CrypText/issues";
			// 
			// aboutLogoPictureBox
			// 
			this->aboutLogoPictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->aboutLogoPictureBox->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->aboutLogoPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aboutLogoPictureBox.Image")));
			this->aboutLogoPictureBox->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aboutLogoPictureBox.InitialImage")));
			this->aboutLogoPictureBox->Location = System::Drawing::Point(0, 107);
			this->aboutLogoPictureBox->Name = L"aboutLogoPictureBox";
			this->aboutLogoPictureBox->Size = System::Drawing::Size(460, 257);
			this->aboutLogoPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->aboutLogoPictureBox->TabIndex = 2;
			this->aboutLogoPictureBox->TabStop = false;
			// 
			// aboutIssueLabel
			// 
			this->aboutIssueLabel->AutoSize = true;
			this->aboutIssueLabel->Location = System::Drawing::Point(102, 65);
			this->aboutIssueLabel->Name = L"aboutIssueLabel";
			this->aboutIssueLabel->Size = System::Drawing::Size(263, 13);
			this->aboutIssueLabel->TabIndex = 3;
			this->aboutIssueLabel->Text = L"If you registered issue, please  register that on this link:";
			// 
			// aboutLicenceLabel
			// 
			this->aboutLicenceLabel->AutoSize = true;
			this->aboutLicenceLabel->Location = System::Drawing::Point(185, 35);
			this->aboutLicenceLabel->Name = L"aboutLicenceLabel";
			this->aboutLicenceLabel->Size = System::Drawing::Size(90, 13);
			this->aboutLicenceLabel->TabIndex = 4;
			this->aboutLicenceLabel->Text = L"Licence: GPL-3.0";
			// 
			// aboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(460, 364);
			this->Controls->Add(this->aboutLicenceLabel);
			this->Controls->Add(this->aboutIssueLabel);
			this->Controls->Add(this->aboutLogoPictureBox);
			this->Controls->Add(this->linkToGitHubLabel);
			this->Controls->Add(this->aboutProgramText);
			this->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"aboutForm";
			this->Text = L"About the program";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aboutLogoPictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
