#pragma once
#include <string>
#include <chrono>
#include <thread>
#include <stdlib.h>     
#include <streambuf>
#include <Windows.h>
#include <msclr\marshal_cppstd.h>
#include "aboutForm.h"
using namespace System::Globalization;

namespace CrypText
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Security::Cryptography;
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}
	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
		/// <summary>
		/// Элементы формы
		/// </summary>
#pragma region elements
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::RichTextBox^ BufferBox;
	private: System::Windows::Forms::RichTextBox^ EditBox;
	private: System::Windows::Forms::ToolStripMenuItem^ saveButtonMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ encryptionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ UserEncrypt;
	private: System::Windows::Forms::ToolStripMenuItem^ userCryptButton;
	private: System::Windows::Forms::ToolStripMenuItem^ decryptToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ userDecryptButton;
	private: System::Windows::Forms::ToolStripMenuItem^ cezareEncryptButton;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openMenuButton;
	private: System::Windows::Forms::ToolStripMenuItem^ newMenuButton;
	private: System::Windows::Forms::ToolStripMenuItem^ programToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsInMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ cezareDecryptButton;
	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ logoMainPicture;
	private: System::Windows::Forms::ToolStripMenuItem^ aesEncryptButton;
	private: System::Windows::Forms::ToolStripMenuItem^ aesDecryptButton;
	private: System::Windows::Forms::ToolStripMenuItem^ setRandomPasswordToolStripMenuItem;

	private: System::ComponentModel::Container^ components;
	/// <summary>
	/// Конец элементов формы
	/// </summary>
	void InitializeComponent(void)
		   {
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->newMenuButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->openMenuButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->saveButtonMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->saveAsInMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->encryptionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->UserEncrypt = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->userCryptButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->cezareEncryptButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->aesEncryptButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->decryptToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->userDecryptButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->cezareDecryptButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->aesDecryptButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->setRandomPasswordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->programToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->EditBox = (gcnew System::Windows::Forms::RichTextBox());
		this->BufferBox = (gcnew System::Windows::Forms::RichTextBox());
		this->logoMainPicture = (gcnew System::Windows::Forms::PictureBox());
		this->menuStrip1->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoMainPicture))->BeginInit();
		this->SuspendLayout();
		// 
		// label1
		// 
		this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->label1->AutoEllipsis = true;
		this->label1->AutoSize = true;
		this->label1->BackColor = System::Drawing::Color::Transparent;
		this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 64));
		this->label1->ForeColor = System::Drawing::SystemColors::InfoText;
		this->label1->Location = System::Drawing::Point(173, 44);
		this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(392, 97);
		this->label1->TabIndex = 0;
		this->label1->Text = L"CrypText";
		// 
		// menuStrip1
		// 
		this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
			this->fileToolStripMenuItem,
				this->encryptionToolStripMenuItem, this->programToolStripMenuItem
		});
		this->menuStrip1->Location = System::Drawing::Point(0, 0);
		this->menuStrip1->Name = L"menuStrip1";
		this->menuStrip1->Padding = System::Windows::Forms::Padding(10, 3, 0, 3);
		this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
		this->menuStrip1->Size = System::Drawing::Size(745, 25);
		this->menuStrip1->TabIndex = 1;
		this->menuStrip1->Text = L"menuStrip1";
		// 
		// fileToolStripMenuItem
		// 
		this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
			this->newMenuButton,
				this->openMenuButton, this->saveButtonMenu, this->saveAsInMenu
		});
		this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
		this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 19);
		this->fileToolStripMenuItem->Text = L"File";
		// 
		// newMenuButton
		// 
		this->newMenuButton->Name = L"newMenuButton";
		this->newMenuButton->Size = System::Drawing::Size(180, 22);
		this->newMenuButton->Text = L"New file";
		this->newMenuButton->Click += gcnew System::EventHandler(this, &MainForm::newMenuButton_Click);
		// 
		// openMenuButton
		// 
		this->openMenuButton->Name = L"openMenuButton";
		this->openMenuButton->Size = System::Drawing::Size(180, 22);
		this->openMenuButton->Text = L"Open file";
		this->openMenuButton->Click += gcnew System::EventHandler(this, &MainForm::openMenuButton_Click);
		// 
		// saveButtonMenu
		// 
		this->saveButtonMenu->Name = L"saveButtonMenu";
		this->saveButtonMenu->Size = System::Drawing::Size(180, 22);
		this->saveButtonMenu->Text = L"Save";
		this->saveButtonMenu->Click += gcnew System::EventHandler(this, &MainForm::saveToolStripMenuItem1_Click);
		// 
		// saveAsInMenu
		// 
		this->saveAsInMenu->Name = L"saveAsInMenu";
		this->saveAsInMenu->Size = System::Drawing::Size(180, 22);
		this->saveAsInMenu->Text = L"Save as";
		this->saveAsInMenu->Click += gcnew System::EventHandler(this, &MainForm::saveToolStripMenuItem_Click);
		// 
		// encryptionToolStripMenuItem
		// 
		this->encryptionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
			this->UserEncrypt,
				this->decryptToolStripMenuItem, this->setRandomPasswordToolStripMenuItem
		});
		this->encryptionToolStripMenuItem->Name = L"encryptionToolStripMenuItem";
		this->encryptionToolStripMenuItem->Size = System::Drawing::Size(55, 19);
		this->encryptionToolStripMenuItem->Text = L"Crypto";
		// 
		// UserEncrypt
		// 
		this->UserEncrypt->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
			this->userCryptButton,
				this->cezareEncryptButton, this->aesEncryptButton
		});
		this->UserEncrypt->Name = L"UserEncrypt";
		this->UserEncrypt->Size = System::Drawing::Size(188, 22);
		this->UserEncrypt->Text = L"Encrypt";
		// 
		// userCryptButton
		// 
		this->userCryptButton->Name = L"userCryptButton";
		this->userCryptButton->Size = System::Drawing::Size(149, 22);
		this->userCryptButton->Text = L"AntiLeak";
		this->userCryptButton->Click += gcnew System::EventHandler(this, &MainForm::userEncryptButton_Click);
		// 
		// cezareEncryptButton
		// 
		this->cezareEncryptButton->Name = L"cezareEncryptButton";
		this->cezareEncryptButton->Size = System::Drawing::Size(149, 22);
		this->cezareEncryptButton->Text = L"CezareEncrypt";
		this->cezareEncryptButton->Click += gcnew System::EventHandler(this, &MainForm::cezareEncryptButton_Click);
		// 
		// aesEncryptButton
		// 
		this->aesEncryptButton->Name = L"aesEncryptButton";
		this->aesEncryptButton->Size = System::Drawing::Size(149, 22);
		this->aesEncryptButton->Text = L"AES";
		this->aesEncryptButton->Click += gcnew System::EventHandler(this, &MainForm::aesEncryptButton_Click);
		// 
		// decryptToolStripMenuItem
		// 
		this->decryptToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
			this->userDecryptButton,
				this->cezareDecryptButton, this->aesDecryptButton
		});
		this->decryptToolStripMenuItem->Name = L"decryptToolStripMenuItem";
		this->decryptToolStripMenuItem->Size = System::Drawing::Size(188, 22);
		this->decryptToolStripMenuItem->Text = L"Decrypt";
		// 
		// userDecryptButton
		// 
		this->userDecryptButton->Name = L"userDecryptButton";
		this->userDecryptButton->Size = System::Drawing::Size(150, 22);
		this->userDecryptButton->Text = L"AntiLeak";
		this->userDecryptButton->Click += gcnew System::EventHandler(this, &MainForm::userDecryptButton_Click);
		// 
		// cezareDecryptButton
		// 
		this->cezareDecryptButton->Name = L"cezareDecryptButton";
		this->cezareDecryptButton->Size = System::Drawing::Size(150, 22);
		this->cezareDecryptButton->Text = L"CezareDecrypt";
		this->cezareDecryptButton->Click += gcnew System::EventHandler(this, &MainForm::cezareDecryptButton_Click);
		// 
		// aesDecryptButton
		// 
		this->aesDecryptButton->Name = L"aesDecryptButton";
		this->aesDecryptButton->Size = System::Drawing::Size(150, 22);
		this->aesDecryptButton->Text = L"AES";
		this->aesDecryptButton->Click += gcnew System::EventHandler(this, &MainForm::aesDecryptButton_Click);
		// 
		// setRandomPasswordToolStripMenuItem
		// 
		this->setRandomPasswordToolStripMenuItem->Name = L"setRandomPasswordToolStripMenuItem";
		this->setRandomPasswordToolStripMenuItem->Size = System::Drawing::Size(188, 22);
		this->setRandomPasswordToolStripMenuItem->Text = L"Set random password";
		this->setRandomPasswordToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::setRandomPasswordToolStripMenuItem_Click);
		// 
		// programToolStripMenuItem
		// 
		this->programToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
			this->infoToolStripMenuItem,
				this->exitToolStripMenuItem
		});
		this->programToolStripMenuItem->Name = L"programToolStripMenuItem";
		this->programToolStripMenuItem->Size = System::Drawing::Size(65, 19);
		this->programToolStripMenuItem->Text = L"Program";
		// 
		// infoToolStripMenuItem
		// 
		this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
		this->infoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
		this->infoToolStripMenuItem->Text = L"About";
		this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::infoToolStripMenuItem_Click);
		// 
		// exitToolStripMenuItem
		// 
		this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
		this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
		this->exitToolStripMenuItem->Text = L"Exit";
		this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
		// 
		// EditBox
		// 
		this->EditBox->AcceptsTab = true;
		this->EditBox->BackColor = System::Drawing::SystemColors::InactiveBorder;
		this->EditBox->Enabled = false;
		this->EditBox->ForeColor = System::Drawing::SystemColors::MenuHighlight;
		this->EditBox->Location = System::Drawing::Point(575, 347);
		this->EditBox->Margin = System::Windows::Forms::Padding(5);
		this->EditBox->Name = L"EditBox";
		this->EditBox->Size = System::Drawing::Size(156, 29);
		this->EditBox->TabIndex = 2;
		this->EditBox->Text = L"";
		this->EditBox->Visible = false;
		// 
		// BufferBox
		// 
		this->BufferBox->BackColor = System::Drawing::SystemColors::InactiveBorder;
		this->BufferBox->DetectUrls = false;
		this->BufferBox->ForeColor = System::Drawing::SystemColors::MenuHighlight;
		this->BufferBox->Location = System::Drawing::Point(0, 334);
		this->BufferBox->Margin = System::Windows::Forms::Padding(5);
		this->BufferBox->Name = L"BufferBox";
		this->BufferBox->Size = System::Drawing::Size(87, 44);
		this->BufferBox->TabIndex = 3;
		this->BufferBox->TabStop = false;
		this->BufferBox->Text = L"";
		this->BufferBox->Visible = false;
		// 
		// logoMainPicture
		// 
		this->logoMainPicture->BackColor = System::Drawing::SystemColors::ControlLight;
		this->logoMainPicture->Cursor = System::Windows::Forms::Cursors::Hand;
		this->logoMainPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoMainPicture.Image")));
		this->logoMainPicture->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoMainPicture.InitialImage")));
		this->logoMainPicture->Location = System::Drawing::Point(169, 153);
		this->logoMainPicture->Name = L"logoMainPicture";
		this->logoMainPicture->Size = System::Drawing::Size(396, 234);
		this->logoMainPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->logoMainPicture->TabIndex = 4;
		this->logoMainPicture->TabStop = false;
		// 
		// MainForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::SystemColors::ControlLight;
		this->ClientSize = System::Drawing::Size(745, 390);
		this->Controls->Add(this->logoMainPicture);
		this->Controls->Add(this->BufferBox);
		this->Controls->Add(this->EditBox);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->menuStrip1);
		this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		this->Location = System::Drawing::Point(1, 1);
		this->MainMenuStrip = this->menuStrip1;
		this->Margin = System::Windows::Forms::Padding(5);
		this->MaximumSize = System::Drawing::Size(1280, 720);
		this->MinimumSize = System::Drawing::Size(640, 420);
		this->Name = L"MainForm";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"CrypText";
		this->menuStrip1->ResumeLayout(false);
		this->menuStrip1->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoMainPicture))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
#pragma region form variebles
			/// <summary>
		   /// Начало переменных формы
		   /// </summary>
	private:  System::String^ FileName = "";
	public: Int16 key = 3;
	public: System::String^ password = "password";
	private: System::String^ engAlphabetUpper = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	private: System::String^ engAlphabetLower = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	private: System::String^ rusAlphabetUpper = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
	private: System::String^ rusAlphabetLower = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяабвгдеёжзийклмнопрстуфхцчшщъыьэюяабвгдеёжзийклмнопрстуфхцчшщъыьэюя";
	private: System::String^ uaAlphabetUpper = "АБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯАБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯАБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯ";
	private: System::String^ uaAlphabetLower = "абвгґдеєжзиіїйклмнопрстуфхцчшщьюяабвгґдеєжзиіїйклмнопрстуфхцчшщьюяабвгґдеєжзиіїйклмнопрстуфхцчшщьюя";
		/// <summary>
		/// Конец переменных формы
		/// </summary>
#pragma endregion
#pragma region loop cryptofunctions
			private: array<unsigned char>^ AES_Encrypt(array<unsigned char>^ bytesToBeEncrypted, array<unsigned char>^ passwordBytes)
			{
				array<unsigned char>^ encryptedBytes = nullptr;

				// Set your salt here, change it to meet your flavor:
				// The salt bytes must be at least 8 bytes.
				array<unsigned char>^ saltBytes = gcnew array<unsigned char>(8) { 1, 2, 3, 4, 5, 6, 7, 8 };

				MemoryStream^ ms = gcnew MemoryStream();
				RijndaelManaged^ AES = gcnew RijndaelManaged();
				auto cs = gcnew CryptoStream(ms, AES->CreateEncryptor(), CryptoStreamMode::Write);

				try {
					try {
						AES->KeySize = 256;
						AES->BlockSize = 128;
						AES->Mode = CipherMode::CBC;
						AES->Padding = System::Security::Cryptography::PaddingMode::Zeros;
						auto key = gcnew Rfc2898DeriveBytes(passwordBytes, saltBytes, 1000);
						AES->Key = key->GetBytes(AES->KeySize / 8);
						AES->IV = key->GetBytes(AES->BlockSize / 8);
						auto cs = gcnew CryptoStream(ms, AES->CreateEncryptor(), CryptoStreamMode::Write);

						try {
							cs->Write(bytesToBeEncrypted, 0, bytesToBeEncrypted->Length);
							cs->Close();
						}
						finally {
							if (cs != nullptr) delete cs;
						}

						encryptedBytes = ms->ToArray();
					}
					finally {
						if (AES != nullptr) delete AES;
					}
				}
				finally {
					if (ms != nullptr) delete ms;
				}

				return encryptedBytes;
			}
	private: array<unsigned char>^ AES_Decrypt(array<unsigned char>^ bytesToBeDecrypted, array<unsigned char>^ passwordBytes)
	{
		array<unsigned char>^ decryptedBytes = nullptr;
		// Set your salt here, change it to meet your flavor:
		// The salt bytes must be at least 8 bytes.
		array<unsigned char>^ saltBytes = gcnew array<unsigned char>(8) { 1, 2, 3, 4, 5, 6, 7, 8 };
		MemoryStream^ ms = gcnew MemoryStream();
		RijndaelManaged^ AES = gcnew RijndaelManaged();
		auto cs = gcnew CryptoStream(ms, AES->CreateDecryptor(), CryptoStreamMode::Write);
		try {
			try {
				AES->KeySize = 256;
				AES->BlockSize = 128;
				AES->Mode = CipherMode::CBC;
				AES->Padding = System::Security::Cryptography::PaddingMode::Zeros;
				auto key = gcnew Rfc2898DeriveBytes(passwordBytes, saltBytes, 1000);
				AES->Key = key->GetBytes(AES->KeySize / 8);
				AES->IV = key->GetBytes(AES->BlockSize / 8);
				auto cs = gcnew CryptoStream(ms, AES->CreateDecryptor(), CryptoStreamMode::Write);

				try {
					cs->Write(bytesToBeDecrypted, 0, bytesToBeDecrypted->Length);
					cs->Close();
				}
				finally {
					if (cs != nullptr) delete cs;
				}

				decryptedBytes = ms->ToArray();
			}
			finally {
				if (AES != nullptr) delete AES;
			}
		}
		finally {
			if (ms != nullptr) delete ms;
		}

		return decryptedBytes;
	}

	private: System::String^ aesEncryptFunc(System::String^ input, System::String^ password) {
		// Get the bytes of the string
		array<unsigned char>^ bytesToBeEncrypted = System::Text::Encoding::UTF8->GetBytes(input);
		array<unsigned char>^ passwordBytes = System::Text::Encoding::UTF8->GetBytes(password);

		// Hash the password with SHA256
		passwordBytes = SHA256::Create()->ComputeHash(passwordBytes);

		array<unsigned char>^ bytesEncrypted = AES_Encrypt(bytesToBeEncrypted, passwordBytes);

		System::String^ result = Convert::ToBase64String(bytesEncrypted);

		return result;
	}
	//Decrypt String
	private: System::String^ aesDecryptFunc(System::String^ input, System::String^ password) {
		// Get the bytes of the string
		array<unsigned char>^ bytesToBeDecrypted = Convert::FromBase64String(input);
		array<unsigned char>^ passwordBytes = System::Text::Encoding::Encoding::UTF8->GetBytes(password);
		passwordBytes = SHA256::Create()->ComputeHash(passwordBytes);

		array<unsigned char>^ bytesDecrypted = AES_Decrypt(bytesToBeDecrypted, passwordBytes);

		System::String^ result = System::Text::Encoding::Encoding::UTF8->GetString(bytesDecrypted);

		return result;
	}
	private: wchar_t encrypCezareFunc(wchar_t letter, int key)
	{
		int i = 0;
		while (true)
		{
			try
			{
				if (letter == ' ') return letter;
				else if (letter == '\n') return letter;
				else if (letter >= '0' && letter <= '9') { return letter; }
				else if (letter >= ':' && letter <= '@' || letter >= '[' && letter <= '`' || letter >= '{' && letter <= '~') { return letter; }
				for (int i = 0; i < engAlphabetUpper->Length; i++)
				{
					if (letter == engAlphabetUpper[i])
					{
						letter = engAlphabetUpper[i + key];
						return letter;
					}
				}
				for (int i = 0; i < engAlphabetLower->Length; i++)
				{
					if (letter == engAlphabetLower[i])
					{
						letter = engAlphabetLower[i + key];
						return letter;
					}
				}
				for (int i = 0; i < rusAlphabetUpper->Length; i++)
				{
					if (letter == rusAlphabetUpper[i])
					{
						letter = rusAlphabetUpper[i + key];
						return letter;
					}
				}
				for (int i = 0; i < rusAlphabetLower->Length; i++)
				{
					if (letter == rusAlphabetLower[i])
					{
						letter = rusAlphabetLower[i + key];
						return letter;
					}
				}
				for (int i = 0; i < uaAlphabetUpper->Length; i++)
				{
					if (letter == uaAlphabetUpper[i])
					{
						letter = uaAlphabetUpper[i + key];
						return letter;
					}
				}
				for (int i = 0; i < uaAlphabetLower->Length; i++)
				{
					if (letter == uaAlphabetLower[i])
					{
						letter = uaAlphabetLower[i + key];
						return letter;
					}
				}
				if (letter != ' ' && letter != '\n' && letter != engAlphabetUpper[i] && letter != engAlphabetLower[i] && letter != rusAlphabetUpper[i] && letter != rusAlphabetLower[i] && letter != uaAlphabetUpper[i] && letter != uaAlphabetLower[i])
				{
					return ' ';
				}
			}
			catch (IndexOutOfRangeException^)
			{
				return letter = ' ';
			}
		}
	}
	private: wchar_t decryptCezareFunc(wchar_t letter, int key)
	{
		int i = 0;
		while (true)
		{
			try
			{
				if (letter == ' ') return letter;
				else if (letter == '\n') return letter;
				else if (letter >= '0' && letter <= '9') { return letter; }
				else if (letter >= ':' && letter <= '@' || letter >= '[' && letter <= '`' || letter >= '{' && letter <= '~') { return letter; }
				for (int i = 0; i < engAlphabetUpper->Length; i++)
				{
					if (letter == engAlphabetUpper[i])
					{
						letter = engAlphabetUpper[(i + 26) - key];
						return letter;
					}
				}
				for (int i = 0; i < engAlphabetLower->Length; i++)
				{
					if (letter == engAlphabetLower[i])
					{
						letter = engAlphabetLower[(i + 26) - key];
						return letter;
					}
				}
				for (int i = 0; i < rusAlphabetUpper->Length; i++)
				{
					if (letter == rusAlphabetUpper[i])
					{
						letter = rusAlphabetUpper[(i + 33) - key];
						return letter;
					}
				}
				for (int i = 0; i < rusAlphabetLower->Length; i++)
				{
					if (letter == rusAlphabetLower[i])
					{
						letter = rusAlphabetLower[(i + 33) - key];
						return letter;
					}
				}
				for (int i = 0; i < uaAlphabetUpper->Length; i++)
				{
					if (letter == uaAlphabetUpper[i])
					{
						letter = uaAlphabetUpper[(i + 33) - key];
						return letter;
					}
				}
				for (int i = 0; i < uaAlphabetLower->Length; i++)
				{
					if (letter == uaAlphabetLower[i])
					{
						letter = uaAlphabetLower[(i + 33) - key];
						return letter;
					}
				}
				if (letter != ' ' && letter != '\n' && letter != engAlphabetUpper[i] && letter != engAlphabetLower[i] && letter != rusAlphabetUpper[i] && letter != rusAlphabetLower[i] && letter != uaAlphabetUpper[i] && letter != uaAlphabetLower[i])
				{
					return ' ';
				}
			}
			catch (IndexOutOfRangeException^)
			{
				return letter;
			}
		}
	}
	private: System::String^ cezareEncrypt(System::String^ TextBuffer, int key)
	{
		System::String^ tempText = TextBuffer;
		std::wstring forConv = msclr::interop::marshal_as< std::wstring >(tempText);
		for (int i = 0; i < tempText->Length; i++)
		{
			forConv[i] = encrypCezareFunc(tempText[i], key);
		}
		System::String^ encryptedText = gcnew System::String(forConv.c_str());
		return encryptedText;
	}
	private: System::String^ cezareCezareDecrypt(System::String^ TextBuffer, int key)
	{
		System::String^ tempText = TextBuffer;
		std::wstring forConv = msclr::interop::marshal_as< std::wstring >(tempText);
		for (int i = 0; i < tempText->Length; i++)
		{
			forConv[i] = decryptCezareFunc(tempText[i], key);
		}
		System::String^ encryptedText = gcnew System::String(forConv.c_str());
		return encryptedText;
	}
		   //
#pragma endregion
#pragma region form events
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Close();
	}
		   //код для создание нового документа с автооткрытием
	private: System::Void newMenuButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SaveFileDialog^ SaveFileDialog1 = gcnew SaveFileDialog;
		SaveFileDialog1->InitialDirectory = "C:\\Users\\";
		SaveFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt";
		SaveFileDialog1->FilterIndex = 2;
		EditBox->Clear();
		if (SaveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			logoMainPicture->Enabled = false;
			logoMainPicture->Visible = false;
			label1->Enabled = false;
			label1->Visible = false;
			EditBox->Visible = true;
			EditBox->Enabled = true;
			FileName = SaveFileDialog1->FileName;
			this->EditBox->Dock = DockStyle::Fill;
			EditBox->SaveFile(FileName, RichTextBoxStreamType::PlainText);
		}
	}
		   // Код для открытия файла.
	private: System::Void openMenuButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//делаем дизайн
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "C:\\Users\\";
		openFileDialog1->Filter = "Все файлы (*.*)|*.*|Текстовые файлы (*.txt)|*.txt";
		openFileDialog1->Title = "Open file";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;
		//выбираем файл и убираем надпись
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			logoMainPicture->Enabled = false;
			logoMainPicture->Visible = false;
			label1->Enabled = false;
			label1->Visible = false;
			EditBox->Visible = true;
			EditBox->Enabled = true;
			FileName = (openFileDialog1->FileName);
			this->EditBox->Dock = DockStyle::Fill;
			//загрузка в EditBox всего текста из файла
			EditBox->LoadFile(FileName, RichTextBoxStreamType::PlainText);
		}
		else
		{
			MessageBox::Show("Что-то пошло не так");
		}
	}
		   //сохранение файла
	private: System::Void saveToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (FileName == "")
		{
			MessageBox::Show("Boi, сохранять то нечего!");
		}
		else
		{
			EditBox->SaveFile(FileName, RichTextBoxStreamType::PlainText);
		}
	}
		   //обработка нажатия кнопки Save as
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SaveFileDialog^ SaveFileDialog1 = gcnew SaveFileDialog;
		SaveFileDialog1->InitialDirectory = "C:\\Users\\";
		SaveFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt";
		SaveFileDialog1->FilterIndex = 2;
		SaveFileDialog1->RestoreDirectory = true;
		if (SaveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if (SaveFileDialog1->FileName->Length > 0)
				EditBox->SaveFile(SaveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
		}
	}
			//код для шифрование системой
	private: System::Void userEncryptButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "C:\\";
		openFileDialog1->Filter = "Все файлы (*.*)|*.*|Текстовые файлы (*.txt)|*.txt";
		openFileDialog1->Title = "Open file";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileAttributes fa = File::GetAttributes(openFileDialog1->FileName);
			if ((fa & FileAttributes::Encrypted) == FileAttributes::Encrypted)
				MessageBox::Show("File already encrypted");
			else
			{
				std::chrono::time_point<std::chrono::system_clock> start, end;	//код для проверки скорости программы
				start = std::chrono::system_clock::now();
				//
				FileName = openFileDialog1->FileName;
				File::Encrypt(FileName);
				//
				end = std::chrono::system_clock::now();
				std::chrono::duration<double> elapsed_seconds = end - start;
				auto x = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds);
				std::string elapsedTime = std::to_string(x.count());
				String^ codeTimeStringCLI = gcnew String(elapsedTime.c_str());
				System::Windows::Forms::MessageBox::Show("Encrypted!\nTime(ms): " + codeTimeStringCLI);
				//конец кода для проверки скорости работы
			}
		}
		else MessageBox::Show("Error");
	}
			//код для расшифровки системой
	private: System::Void userDecryptButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "C:\\Users\\";
		openFileDialog1->Filter = "Все файлы (*.*)|*.*|Текстовые файлы (*.txt)|*.txt";
		openFileDialog1->Title = "Open file";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileAttributes fa = File::GetAttributes(openFileDialog1->FileName);
			if ((fa & FileAttributes::Encrypted) == FileAttributes::Encrypted)
			{
				std::chrono::time_point<std::chrono::system_clock> start, end;	//код для проверки скорости программы
				start = std::chrono::system_clock::now();
				//
				FileName = openFileDialog1->FileName;
				File::Decrypt(FileName);
				//
				end = std::chrono::system_clock::now();
				std::chrono::duration<double> elapsed_seconds = end - start;
				auto x = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds);
				std::string elapsedTime = std::to_string(x.count());
				String^ codeTimeStringCLI = gcnew String(elapsedTime.c_str());
				System::Windows::Forms::MessageBox::Show("Derypted!\nTime(ms): " + codeTimeStringCLI);
				//конец кода для проверки скорости работы
			}
			else
			{
				MessageBox::Show("File already Decrypted");
			}
		}
		else MessageBox::Show("Error");
	}
			//код для шифрования шифром Цезаря
	private: System::Void cezareEncryptButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "C:\\Users\\";
		openFileDialog1->Filter = "Все файлы (*.*)|*.*|Текстовые файлы (*.txt)|*.txt";
		openFileDialog1->Title = "Open file";
		openFileDialog1->FilterIndex = 2;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			std::chrono::time_point<std::chrono::system_clock> start, end;	//код для проверки скорости программы
			start = std::chrono::system_clock::now();
			//
			FileName = openFileDialog1->FileName;
			BufferBox->LoadFile(FileName, RichTextBoxStreamType::PlainText);
			EditBox->Enabled = true;
			EditBox->Text = cezareEncrypt(BufferBox->Text, key);
			EditBox->SaveFile(FileName, RichTextBoxStreamType::PlainText);
			//
			end = std::chrono::system_clock::now();
			std::chrono::duration<double> elapsed_seconds = end - start;
			auto x = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds);
			std::string elapsedTime = std::to_string(x.count());
			String^ codeTimeStringCLI = gcnew String(elapsedTime.c_str());
			System::Windows::Forms::MessageBox::Show("Encrypted!\nTime(ms): " + codeTimeStringCLI);
			//конец кода для проверки скорости работы
		}
		else MessageBox::Show("Error");
	}
			//код для расшифровки шифра Цезаря
	private: System::Void cezareDecryptButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "C:\\Users\\";
		openFileDialog1->Filter = "Все файлы (*.*)|*.*|Текстовые файлы (*.txt)|*.txt";
		openFileDialog1->Title = "Open file";
		openFileDialog1->FilterIndex = 2;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			std::chrono::time_point<std::chrono::system_clock> start, end;	//код для проверки скорости программы
			start = std::chrono::system_clock::now();
			FileName = openFileDialog1->FileName;
			BufferBox->LoadFile(FileName, RichTextBoxStreamType::PlainText);
			EditBox->Enabled = true;
			EditBox->Text = cezareCezareDecrypt(BufferBox->Text, key);
			EditBox->SaveFile(FileName, RichTextBoxStreamType::PlainText);
			//
			end = std::chrono::system_clock::now();
			std::chrono::duration<double> elapsed_seconds = end - start;
			auto x = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds);
			std::string elapsedTime = std::to_string(x.count());
			String^ codeTimeStringCLI = gcnew String(elapsedTime.c_str());
			System::Windows::Forms::MessageBox::Show("Decrypted!\nTime(ms): " + codeTimeStringCLI);
			//конец кода для проверки скорости работы
		}
		else MessageBox::Show("Error");
	}
			//
	private: System::Void aesEncryptButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "C:\\Users\\";
		openFileDialog1->Filter = "Все файлы (*.*)|*.*|Текстовые файлы (*.txt)|*.txt";
		openFileDialog1->Title = "Open file";
		openFileDialog1->FilterIndex = 2;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			std::chrono::time_point<std::chrono::system_clock> start, end;	//код для проверки скорости программы
			start = std::chrono::system_clock::now();
			//
			FileName = openFileDialog1->FileName;
			BufferBox->LoadFile(FileName, RichTextBoxStreamType::PlainText);
			EditBox->Visible = true;
			BufferBox->Visible = FALSE;
			EditBox->Enabled = true;
			EditBox->Text = aesEncryptFunc(BufferBox->Text, password);
			EditBox->SaveFile(FileName, RichTextBoxStreamType::PlainText);
			//
			end = std::chrono::system_clock::now();
			std::chrono::duration<double> elapsed_seconds = end - start;
			auto x = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds);
			std::string elapsedTime = std::to_string(x.count());
			String^ codeTimeStringCLI = gcnew String(elapsedTime.c_str());
			System::Windows::Forms::MessageBox::Show("Encrypted!\nTime(ms): " + codeTimeStringCLI);
			//конец кода для проверки скорости работы
		}
	}
	private: System::Void aesDecryptButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "C:\\Users\\";
		openFileDialog1->Filter = "Все файлы (*.*)|*.*|Текстовые файлы (*.txt)|*.txt";
		openFileDialog1->Title = "Open file";
		openFileDialog1->FilterIndex = 2;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			std::chrono::time_point<std::chrono::system_clock> start, end;	//код для проверки скорости программы
			start = std::chrono::system_clock::now();
			//
			FileName = openFileDialog1->FileName;
			BufferBox->LoadFile(FileName, RichTextBoxStreamType::PlainText);
			EditBox->Enabled = true;
			EditBox->Text = aesDecryptFunc(BufferBox->Text, password);
			EditBox->SaveFile(FileName, RichTextBoxStreamType::PlainText);
			//
			end = std::chrono::system_clock::now();
			std::chrono::duration<double> elapsed_seconds = end - start;
			auto x = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds);
			std::string elapsedTime = std::to_string(x.count());
			String^ codeTimeStringCLI = gcnew String(elapsedTime.c_str());
			System::Windows::Forms::MessageBox::Show("Decrypted!\nTime(ms): " + codeTimeStringCLI);
			//конец кода для проверки скорости работы
		}
		else MessageBox::Show("Error");
	}
	private: System::Void setRandomPasswordToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Random^ rand = gcnew Random();
		key = rand->Next(26);
		password = Convert::ToString(rand->Next(100000000));
		MessageBox::Show("Current key = " + key + "\n" +"Current password = " + password);
	}
			//info
	private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	aboutForm^ about = gcnew aboutForm;
	about->Owner = this;
	about->Show(this);
	}
#pragma endregion
#pragma region comments
		   //public: static System::Void paswordSetter(System::String^ value)
   //{
   //	password = value;
   //}
   //public: static extern System::Void keySetter(int value)
   //{
   //	if (value > 0 && value <= 26)
   //	{
   //		key = value;
   //	}
   //	else MessageBox::Show("Enter Value More 0 and Under 26");
   //}
   //public: static inline System::Int16 keyGetter() { return key; }
   //public: static System::String^ passwordGetter() { return password; }
   //Encrypt String
	//		public: System::Void passwordSetterForm_Load(System::Object^ sender, System::EventArgs^ e)
	//		{
	//			MainForm^ main = dynamic_cast<MainForm^>(Owner);
	//			if (main != nullptr) {
	//				passwordTextBox->Text = main->password;
	//				keyTextBox->Text = Convert::ToString(main->key);
	//			}
	//		}
	//private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	//{
	//	MainForm^ main = dynamic_cast<MainForm^>(Owner);
	//	if (main != nullptr)
	//	{
	//		if (passwordTextBox->TextLength != 0 && keyTextBox->TextLength != 0)
	//		{
	//			main->password = passwordTextBox->Text;
	//			main->key = Convert::ToInt16(keyTextBox->Text);
	//		}
	//	}
	//	//MainForm::keySetter(Convert::ToInt16(keyTextBox->Text));
	//}
#pragma endregion

};
}