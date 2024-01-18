#pragma once

namespace Minigames {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for XAndOForm
	/// </summary>

	public ref class XAndOForm : public System::Windows::Forms::Form
	{

	public:
		XAndOForm(void)
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
		~XAndOForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Button^ button_B_1;
	private: System::Windows::Forms::Button^ button_C_1;





	private: System::Windows::Forms::Button^ button_A_2;

	private: System::Windows::Forms::Button^ button_B_2;
	private: System::Windows::Forms::Button^ button_C_2;


	private: System::Windows::Forms::Button^ button_A_3;


	private: System::Windows::Forms::Button^ button_B_3;	
	private: System::Windows::Forms::Button^ button_C_3;
	private: System::Windows::Forms::Button^ button_A_1;
	private: System::Windows::Forms::Label^ label1;










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
			this->button_A_1 = (gcnew System::Windows::Forms::Button());
			this->button_B_1 = (gcnew System::Windows::Forms::Button());
			this->button_C_1 = (gcnew System::Windows::Forms::Button());
			this->button_A_2 = (gcnew System::Windows::Forms::Button());
			this->button_B_2 = (gcnew System::Windows::Forms::Button());
			this->button_C_2 = (gcnew System::Windows::Forms::Button());
			this->button_A_3 = (gcnew System::Windows::Forms::Button());
			this->button_B_3 = (gcnew System::Windows::Forms::Button());
			this->button_C_3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_A_1
			// 
			this->button_A_1->BackColor = System::Drawing::Color::DarkRed;
			this->button_A_1->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button_A_1->FlatAppearance->BorderSize = 10;
			this->button_A_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_A_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_A_1->Location = System::Drawing::Point(32, 214);
			this->button_A_1->Name = L"button_A_1";
			this->button_A_1->Size = System::Drawing::Size(150, 150);
			this->button_A_1->TabIndex = 0;
			this->button_A_1->UseVisualStyleBackColor = false;
			this->button_A_1->Click += gcnew System::EventHandler(this, &XAndOForm::button_Click_XAndO);
			// 
			// button_B_1
			// 
			this->button_B_1->BackColor = System::Drawing::Color::DarkRed;
			this->button_B_1->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button_B_1->FlatAppearance->BorderSize = 10;
			this->button_B_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_B_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_B_1->Location = System::Drawing::Point(232, 214);
			this->button_B_1->Name = L"button_B_1";
			this->button_B_1->Size = System::Drawing::Size(150, 150);
			this->button_B_1->TabIndex = 1;
			this->button_B_1->UseVisualStyleBackColor = false;
			this->button_B_1->Click += gcnew System::EventHandler(this, &XAndOForm::button_Click_XAndO);
			// 
			// button_C_1
			// 
			this->button_C_1->BackColor = System::Drawing::Color::DarkRed;
			this->button_C_1->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button_C_1->FlatAppearance->BorderSize = 10;
			this->button_C_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_C_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_C_1->Location = System::Drawing::Point(432, 214);
			this->button_C_1->Name = L"button_C_1";
			this->button_C_1->Size = System::Drawing::Size(150, 150);
			this->button_C_1->TabIndex = 2;
			this->button_C_1->UseVisualStyleBackColor = false;
			this->button_C_1->Click += gcnew System::EventHandler(this, &XAndOForm::button_Click_XAndO);
			// 
			// button_A_2
			// 
			this->button_A_2->BackColor = System::Drawing::Color::DarkRed;
			this->button_A_2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button_A_2->FlatAppearance->BorderSize = 10;
			this->button_A_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_A_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_A_2->Location = System::Drawing::Point(32, 414);
			this->button_A_2->Name = L"button_A_2";
			this->button_A_2->Size = System::Drawing::Size(150, 150);
			this->button_A_2->TabIndex = 3;
			this->button_A_2->UseVisualStyleBackColor = false;
			this->button_A_2->Click += gcnew System::EventHandler(this, &XAndOForm::button_Click_XAndO);
			// 
			// button_B_2
			// 
			this->button_B_2->BackColor = System::Drawing::Color::DarkRed;
			this->button_B_2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button_B_2->FlatAppearance->BorderSize = 10;
			this->button_B_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_B_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_B_2->Location = System::Drawing::Point(232, 414);
			this->button_B_2->Name = L"button_B_2";
			this->button_B_2->Size = System::Drawing::Size(150, 150);
			this->button_B_2->TabIndex = 4;
			this->button_B_2->UseVisualStyleBackColor = false;
			this->button_B_2->Click += gcnew System::EventHandler(this, &XAndOForm::button_Click_XAndO);
			// 
			// button_C_2
			// 
			this->button_C_2->BackColor = System::Drawing::Color::DarkRed;
			this->button_C_2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button_C_2->FlatAppearance->BorderSize = 10;
			this->button_C_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_C_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_C_2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_C_2->Location = System::Drawing::Point(432, 414);
			this->button_C_2->Name = L"button_C_2";
			this->button_C_2->Size = System::Drawing::Size(150, 150);
			this->button_C_2->TabIndex = 5;
			this->button_C_2->UseVisualStyleBackColor = false;
			this->button_C_2->Click += gcnew System::EventHandler(this, &XAndOForm::button_Click_XAndO);
			// 
			// button_A_3
			// 
			this->button_A_3->BackColor = System::Drawing::Color::DarkRed;
			this->button_A_3->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button_A_3->FlatAppearance->BorderSize = 10;
			this->button_A_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_A_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_A_3->Location = System::Drawing::Point(32, 614);
			this->button_A_3->Name = L"button_A_3";
			this->button_A_3->Size = System::Drawing::Size(150, 150);
			this->button_A_3->TabIndex = 6;
			this->button_A_3->UseVisualStyleBackColor = false;
			this->button_A_3->Click += gcnew System::EventHandler(this, &XAndOForm::button_Click_XAndO);
			// 
			// button_B_3
			// 
			this->button_B_3->BackColor = System::Drawing::Color::DarkRed;
			this->button_B_3->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button_B_3->FlatAppearance->BorderSize = 10;
			this->button_B_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_B_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_B_3->Location = System::Drawing::Point(232, 614);
			this->button_B_3->Name = L"button_B_3";
			this->button_B_3->Size = System::Drawing::Size(150, 150);
			this->button_B_3->TabIndex = 7;
			this->button_B_3->UseVisualStyleBackColor = false;
			this->button_B_3->Click += gcnew System::EventHandler(this, &XAndOForm::button_Click_XAndO);
			// 
			// button_C_3
			// 
			this->button_C_3->BackColor = System::Drawing::Color::DarkRed;
			this->button_C_3->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button_C_3->FlatAppearance->BorderSize = 10;
			this->button_C_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_C_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_C_3->Location = System::Drawing::Point(432, 614);
			this->button_C_3->Name = L"button_C_3";
			this->button_C_3->Size = System::Drawing::Size(150, 150);
			this->button_C_3->TabIndex = 8;
			this->button_C_3->UseVisualStyleBackColor = false;
			this->button_C_3->Click += gcnew System::EventHandler(this, &XAndOForm::button_Click_XAndO);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(97, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 95);
			this->label1->TabIndex = 9;
			// 
			// XAndOForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::DarkRed;
			this->ClientSize = System::Drawing::Size(617, 791);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_C_3);
			this->Controls->Add(this->button_B_3);
			this->Controls->Add(this->button_A_3);
			this->Controls->Add(this->button_C_2);
			this->Controls->Add(this->button_B_2);
			this->Controls->Add(this->button_A_2);
			this->Controls->Add(this->button_C_1);
			this->Controls->Add(this->button_B_1);
			this->Controls->Add(this->button_A_1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"XAndOForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"XAndOForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		public:
			property System::Windows::Forms::Form^
				formy {
				System::Windows::Forms::Form^ get() {
					return this;
				}
			}
#pragma endregion

	public: System::Void button_Click_XAndO(System::Object^ sender, System::EventArgs^ e);
	public: void reset_XAndO();

};
}
