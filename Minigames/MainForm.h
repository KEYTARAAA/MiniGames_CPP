#pragma once
#include "XAndOForm.h"
#include "Connect4Form.h"
namespace Minigames {
	
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{

	private: XAndOForm^ XAndO;
	private: Connect4Form^ Connect4;
	public:
		MainForm(void)
		{
			InitializeComponent();
			XAndO = gcnew XAndOForm();
			Connect4 = gcnew Connect4Form();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ X_And_O_Button;
	protected:

	protected:
	private: System::Windows::Forms::Button^ Connect_4_Button;
	private: System::Windows::Forms::Panel^ Panel_Display;



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
			this->X_And_O_Button = (gcnew System::Windows::Forms::Button());
			this->Connect_4_Button = (gcnew System::Windows::Forms::Button());
			this->Panel_Display = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// X_And_O_Button
			// 
			this->X_And_O_Button->Location = System::Drawing::Point(0, 0);
			this->X_And_O_Button->Name = L"X_And_O_Button";
			this->X_And_O_Button->Size = System::Drawing::Size(100, 100);
			this->X_And_O_Button->TabIndex = 0;
			this->X_And_O_Button->Text = L"X and O";
			this->X_And_O_Button->UseVisualStyleBackColor = true;
			this->X_And_O_Button->Click += gcnew System::EventHandler(this, &MainForm::X_And_O_Button_Click);
			// 
			// Connect_4_Button
			// 
			this->Connect_4_Button->Location = System::Drawing::Point(100, 0);
			this->Connect_4_Button->Name = L"Connect_4_Button";
			this->Connect_4_Button->Size = System::Drawing::Size(100, 100);
			this->Connect_4_Button->TabIndex = 1;
			this->Connect_4_Button->Text = L"Connect 4";
			this->Connect_4_Button->UseVisualStyleBackColor = true;
			this->Connect_4_Button->Click += gcnew System::EventHandler(this, &MainForm::Connect_4_Button_Click);
			// 
			// Panel_Display
			// 
			this->Panel_Display->Location = System::Drawing::Point(100, 100);
			this->Panel_Display->Name = L"Panel_Display";
			this->Panel_Display->Size = System::Drawing::Size(617, 791);
			this->Panel_Display->TabIndex = 2;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(717, 892);
			this->Controls->Add(this->Panel_Display);
			this->Controls->Add(this->Connect_4_Button);
			this->Controls->Add(this->X_And_O_Button);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void X_And_O_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		delete XAndO;
		XAndO = gcnew XAndOForm();
		XAndO->reset_XAndO();
		Panel_Display->Controls->Clear();
		XAndO->TopLevel = false;
		Panel_Display->Controls->Add(XAndO);
		XAndO->Show();
		
	}

	private: System::Void Connect_4_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		delete Connect4;
		Connect4 = gcnew Connect4Form();
		Connect4->reset_Connect4();
		Panel_Display->Controls->Clear();
		Connect4->TopLevel = false;
		Panel_Display->Controls->Add(Connect4);
		Connect4->Show();
	}
	};
}
