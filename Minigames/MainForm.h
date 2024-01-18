#pragma once
#include "XAndOForm.h"
#include "Connect4Form.h"
#include "HangmanForm.h"
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
	private: HangmanForm^ Hangman;
	private: System::Windows::Forms::Button^ Hangman_button;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
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
			this->Hangman_button = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// X_And_O_Button
			// 
			this->X_And_O_Button->BackColor = System::Drawing::Color::Red;
			this->X_And_O_Button->FlatAppearance->BorderColor = System::Drawing::Color::DarkRed;
			this->X_And_O_Button->FlatAppearance->BorderSize = 5;
			this->X_And_O_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->X_And_O_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->X_And_O_Button->Location = System::Drawing::Point(0, 0);
			this->X_And_O_Button->Name = L"X_And_O_Button";
			this->X_And_O_Button->Size = System::Drawing::Size(100, 100);
			this->X_And_O_Button->TabIndex = 0;
			this->X_And_O_Button->Text = L"X and O";
			this->X_And_O_Button->UseVisualStyleBackColor = false;
			this->X_And_O_Button->Click += gcnew System::EventHandler(this, &MainForm::X_And_O_Button_Click);
			// 
			// Connect_4_Button
			// 
			this->Connect_4_Button->BackColor = System::Drawing::Color::Blue;
			this->Connect_4_Button->FlatAppearance->BorderColor = System::Drawing::Color::DarkBlue;
			this->Connect_4_Button->FlatAppearance->BorderSize = 5;
			this->Connect_4_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Connect_4_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Connect_4_Button->Location = System::Drawing::Point(100, 0);
			this->Connect_4_Button->Name = L"Connect_4_Button";
			this->Connect_4_Button->Size = System::Drawing::Size(100, 100);
			this->Connect_4_Button->TabIndex = 1;
			this->Connect_4_Button->Text = L"Connect 4";
			this->Connect_4_Button->UseVisualStyleBackColor = false;
			this->Connect_4_Button->Click += gcnew System::EventHandler(this, &MainForm::Connect_4_Button_Click);
			// 
			// Panel_Display
			// 
			this->Panel_Display->Location = System::Drawing::Point(100, 100);
			this->Panel_Display->Name = L"Panel_Display";
			this->Panel_Display->Size = System::Drawing::Size(617, 791);
			this->Panel_Display->TabIndex = 2;
			// 
			// Hangman_button
			// 
			this->Hangman_button->BackColor = System::Drawing::Color::Lime;
			this->Hangman_button->FlatAppearance->BorderColor = System::Drawing::Color::DarkGreen;
			this->Hangman_button->FlatAppearance->BorderSize = 5;
			this->Hangman_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Hangman_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hangman_button->Location = System::Drawing::Point(200, 0);
			this->Hangman_button->Name = L"Hangman_button";
			this->Hangman_button->Size = System::Drawing::Size(100, 100);
			this->Hangman_button->TabIndex = 3;
			this->Hangman_button->Text = L"Hangman";
			this->Hangman_button->UseVisualStyleBackColor = false;
			this->Hangman_button->Click += gcnew System::EventHandler(this, &MainForm::Hangman_Button_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(300, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 100);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(400, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 100);
			this->button3->TabIndex = 5;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(500, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 100);
			this->button4->TabIndex = 6;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(600, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 100);
			this->button5->TabIndex = 7;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(0, 100);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 100);
			this->button6->TabIndex = 8;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(0, 200);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 100);
			this->button7->TabIndex = 9;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(0, 300);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 100);
			this->button8->TabIndex = 10;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(0, 400);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 100);
			this->button9->TabIndex = 11;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(0, 500);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 100);
			this->button10->TabIndex = 12;
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(0, 600);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 100);
			this->button11->TabIndex = 13;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(0, 700);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 100);
			this->button12->TabIndex = 14;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(0, 800);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 100);
			this->button13->TabIndex = 15;
			this->button13->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(717, 892);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Hangman_button);
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
	private: System::Void Hangman_Button_Click (System::Object^ sender, System::EventArgs^ e) {
		delete Hangman;
		Hangman = gcnew HangmanForm();
		Hangman->reset_Hangman();
		Panel_Display->Controls->Clear();
		Hangman->TopLevel = false;
		Panel_Display->Controls->Add(Hangman);
		Hangman->Show();
	}
	};
}
