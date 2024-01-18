#pragma once
#include <string>
namespace Minigames {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HangmanForm
	/// </summary>
	public ref class HangmanForm : public System::Windows::Forms::Form
	{
	public:
		HangmanForm(void)
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
		~HangmanForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_A;
	protected:
	private: System::Windows::Forms::Button^ button1;
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
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;


	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button_guess_1;
	private: System::Windows::Forms::Button^ button_guess_2;
	private: System::Windows::Forms::Button^ button_guess_3;
	private: System::Windows::Forms::Button^ button_guess_4;
	private: System::Windows::Forms::Button^ button_guess_5;
	private: System::Windows::Forms::Button^ button_guess_6;
	private: System::Windows::Forms::Button^ button_guess_7;
	private: System::Windows::Forms::Button^ button_life_5;








	private: System::Windows::Forms::Button^ button_life_4;

	private: System::Windows::Forms::Button^ button_life_3;

	private: System::Windows::Forms::Button^ button_life_2;

	private: System::Windows::Forms::Button^ button_life_1;


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
			this->button_A = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button_guess_1 = (gcnew System::Windows::Forms::Button());
			this->button_guess_2 = (gcnew System::Windows::Forms::Button());
			this->button_guess_3 = (gcnew System::Windows::Forms::Button());
			this->button_guess_4 = (gcnew System::Windows::Forms::Button());
			this->button_guess_5 = (gcnew System::Windows::Forms::Button());
			this->button_guess_6 = (gcnew System::Windows::Forms::Button());
			this->button_guess_7 = (gcnew System::Windows::Forms::Button());
			this->button_life_5 = (gcnew System::Windows::Forms::Button());
			this->button_life_4 = (gcnew System::Windows::Forms::Button());
			this->button_life_3 = (gcnew System::Windows::Forms::Button());
			this->button_life_2 = (gcnew System::Windows::Forms::Button());
			this->button_life_1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_A
			// 
			this->button_A->FlatAppearance->BorderSize = 5;
			this->button_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_A->ForeColor = System::Drawing::Color::Magenta;
			this->button_A->Location = System::Drawing::Point(0, 540);
			this->button_A->Name = L"button_A";
			this->button_A->Size = System::Drawing::Size(50, 50);
			this->button_A->TabIndex = 0;
			this->button_A->Text = L"A";
			this->button_A->UseVisualStyleBackColor = true;
			this->button_A->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 5;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Magenta;
			this->button1->Location = System::Drawing::Point(56, 540);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"B";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 5;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Magenta;
			this->button2->Location = System::Drawing::Point(112, 540);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 5;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Magenta;
			this->button3->Location = System::Drawing::Point(168, 540);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"D";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 5;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Magenta;
			this->button4->Location = System::Drawing::Point(224, 540);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"E";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderSize = 5;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Magenta;
			this->button5->Location = System::Drawing::Point(280, 540);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 5;
			this->button5->Text = L"F";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 5;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Magenta;
			this->button6->Location = System::Drawing::Point(336, 540);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 6;
			this->button6->Text = L"G";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderSize = 5;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Magenta;
			this->button7->Location = System::Drawing::Point(392, 540);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 7;
			this->button7->Text = L"H";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderSize = 5;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Magenta;
			this->button8->Location = System::Drawing::Point(448, 540);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 8;
			this->button8->Text = L"I";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderSize = 5;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Magenta;
			this->button9->Location = System::Drawing::Point(504, 540);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 9;
			this->button9->Text = L"J";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderSize = 5;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Magenta;
			this->button10->Location = System::Drawing::Point(560, 540);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 10;
			this->button10->Text = L"K";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button11
			// 
			this->button11->FlatAppearance->BorderSize = 5;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Magenta;
			this->button11->Location = System::Drawing::Point(448, 596);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 50);
			this->button11->TabIndex = 21;
			this->button11->Text = L"T";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button12
			// 
			this->button12->FlatAppearance->BorderSize = 5;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Magenta;
			this->button12->Location = System::Drawing::Point(392, 596);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 50);
			this->button12->TabIndex = 20;
			this->button12->Text = L"S";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button13
			// 
			this->button13->FlatAppearance->BorderSize = 5;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Magenta;
			this->button13->Location = System::Drawing::Point(336, 596);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 50);
			this->button13->TabIndex = 19;
			this->button13->Text = L"R";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button14
			// 
			this->button14->FlatAppearance->BorderSize = 5;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Magenta;
			this->button14->Location = System::Drawing::Point(280, 596);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 50);
			this->button14->TabIndex = 18;
			this->button14->Text = L"Q";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button15
			// 
			this->button15->FlatAppearance->BorderSize = 5;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Magenta;
			this->button15->Location = System::Drawing::Point(224, 596);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 50);
			this->button15->TabIndex = 17;
			this->button15->Text = L"P";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button16
			// 
			this->button16->FlatAppearance->BorderSize = 5;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::Magenta;
			this->button16->Location = System::Drawing::Point(168, 596);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 50);
			this->button16->TabIndex = 16;
			this->button16->Text = L"O";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button17
			// 
			this->button17->FlatAppearance->BorderSize = 5;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Magenta;
			this->button17->Location = System::Drawing::Point(112, 596);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 50);
			this->button17->TabIndex = 15;
			this->button17->Text = L"N";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button18
			// 
			this->button18->FlatAppearance->BorderSize = 5;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::Magenta;
			this->button18->Location = System::Drawing::Point(56, 596);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(50, 50);
			this->button18->TabIndex = 14;
			this->button18->Text = L"M";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button19
			// 
			this->button19->FlatAppearance->BorderSize = 5;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Magenta;
			this->button19->Location = System::Drawing::Point(0, 596);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(50, 50);
			this->button19->TabIndex = 13;
			this->button19->Text = L"L";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button27
			// 
			this->button27->FlatAppearance->BorderSize = 5;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::Color::Magenta;
			this->button27->Location = System::Drawing::Point(376, 652);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(50, 50);
			this->button27->TabIndex = 27;
			this->button27->Text = L"Z";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button28
			// 
			this->button28->FlatAppearance->BorderSize = 5;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::Color::Magenta;
			this->button28->Location = System::Drawing::Point(320, 652);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(50, 50);
			this->button28->TabIndex = 26;
			this->button28->Text = L"Y";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button29
			// 
			this->button29->FlatAppearance->BorderSize = 5;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->ForeColor = System::Drawing::Color::Magenta;
			this->button29->Location = System::Drawing::Point(264, 652);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(50, 50);
			this->button29->TabIndex = 25;
			this->button29->Text = L"X";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button30
			// 
			this->button30->FlatAppearance->BorderSize = 5;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->ForeColor = System::Drawing::Color::Magenta;
			this->button30->Location = System::Drawing::Point(208, 652);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(50, 50);
			this->button30->TabIndex = 24;
			this->button30->Text = L"W";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button31
			// 
			this->button31->FlatAppearance->BorderSize = 5;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->ForeColor = System::Drawing::Color::Magenta;
			this->button31->Location = System::Drawing::Point(560, 596);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(50, 50);
			this->button31->TabIndex = 23;
			this->button31->Text = L"V";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button32
			// 
			this->button32->FlatAppearance->BorderSize = 5;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::Color::Magenta;
			this->button32->Location = System::Drawing::Point(504, 596);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(50, 50);
			this->button32->TabIndex = 22;
			this->button32->Text = L"U";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &HangmanForm::button_Click_Hangman);
			// 
			// button_guess_1
			// 
			this->button_guess_1->FlatAppearance->BorderSize = 5;
			this->button_guess_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_guess_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_guess_1->ForeColor = System::Drawing::Color::Orange;
			this->button_guess_1->Location = System::Drawing::Point(27, 404);
			this->button_guess_1->Name = L"button_guess_1";
			this->button_guess_1->Size = System::Drawing::Size(75, 75);
			this->button_guess_1->TabIndex = 28;
			this->button_guess_1->UseVisualStyleBackColor = true;
			// 
			// button_guess_2
			// 
			this->button_guess_2->FlatAppearance->BorderSize = 5;
			this->button_guess_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_guess_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_guess_2->ForeColor = System::Drawing::Color::Orange;
			this->button_guess_2->Location = System::Drawing::Point(108, 404);
			this->button_guess_2->Name = L"button_guess_2";
			this->button_guess_2->Size = System::Drawing::Size(75, 75);
			this->button_guess_2->TabIndex = 29;
			this->button_guess_2->UseVisualStyleBackColor = true;
			// 
			// button_guess_3
			// 
			this->button_guess_3->FlatAppearance->BorderSize = 5;
			this->button_guess_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_guess_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_guess_3->ForeColor = System::Drawing::Color::Orange;
			this->button_guess_3->Location = System::Drawing::Point(189, 404);
			this->button_guess_3->Name = L"button_guess_3";
			this->button_guess_3->Size = System::Drawing::Size(75, 75);
			this->button_guess_3->TabIndex = 30;
			this->button_guess_3->UseVisualStyleBackColor = true;
			// 
			// button_guess_4
			// 
			this->button_guess_4->FlatAppearance->BorderSize = 5;
			this->button_guess_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_guess_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_guess_4->ForeColor = System::Drawing::Color::Orange;
			this->button_guess_4->Location = System::Drawing::Point(270, 404);
			this->button_guess_4->Name = L"button_guess_4";
			this->button_guess_4->Size = System::Drawing::Size(75, 75);
			this->button_guess_4->TabIndex = 31;
			this->button_guess_4->UseVisualStyleBackColor = true;
			// 
			// button_guess_5
			// 
			this->button_guess_5->FlatAppearance->BorderSize = 5;
			this->button_guess_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_guess_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_guess_5->ForeColor = System::Drawing::Color::Orange;
			this->button_guess_5->Location = System::Drawing::Point(351, 404);
			this->button_guess_5->Name = L"button_guess_5";
			this->button_guess_5->Size = System::Drawing::Size(75, 75);
			this->button_guess_5->TabIndex = 32;
			this->button_guess_5->UseVisualStyleBackColor = true;
			// 
			// button_guess_6
			// 
			this->button_guess_6->FlatAppearance->BorderSize = 5;
			this->button_guess_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_guess_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_guess_6->ForeColor = System::Drawing::Color::Orange;
			this->button_guess_6->Location = System::Drawing::Point(432, 404);
			this->button_guess_6->Name = L"button_guess_6";
			this->button_guess_6->Size = System::Drawing::Size(75, 75);
			this->button_guess_6->TabIndex = 33;
			this->button_guess_6->UseVisualStyleBackColor = true;
			// 
			// button_guess_7
			// 
			this->button_guess_7->FlatAppearance->BorderSize = 5;
			this->button_guess_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_guess_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_guess_7->ForeColor = System::Drawing::Color::Orange;
			this->button_guess_7->Location = System::Drawing::Point(513, 404);
			this->button_guess_7->Name = L"button_guess_7";
			this->button_guess_7->Size = System::Drawing::Size(75, 75);
			this->button_guess_7->TabIndex = 34;
			this->button_guess_7->UseVisualStyleBackColor = true;
			// 
			// button_life_5
			// 
			this->button_life_5->FlatAppearance->BorderSize = 5;
			this->button_life_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_life_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_life_5->ForeColor = System::Drawing::Color::Magenta;
			this->button_life_5->Location = System::Drawing::Point(494, 42);
			this->button_life_5->Name = L"button_life_5";
			this->button_life_5->Size = System::Drawing::Size(125, 125);
			this->button_life_5->TabIndex = 39;
			this->button_life_5->Text = L"♥️";
			this->button_life_5->UseVisualStyleBackColor = true;
			// 
			// button_life_4
			// 
			this->button_life_4->FlatAppearance->BorderSize = 5;
			this->button_life_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_life_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_life_4->ForeColor = System::Drawing::Color::Magenta;
			this->button_life_4->Location = System::Drawing::Point(373, 223);
			this->button_life_4->Name = L"button_life_4";
			this->button_life_4->Size = System::Drawing::Size(125, 125);
			this->button_life_4->TabIndex = 38;
			this->button_life_4->Text = L"♥️";
			this->button_life_4->UseVisualStyleBackColor = true;
			// 
			// button_life_3
			// 
			this->button_life_3->FlatAppearance->BorderSize = 5;
			this->button_life_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_life_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_life_3->ForeColor = System::Drawing::Color::Magenta;
			this->button_life_3->Location = System::Drawing::Point(251, 42);
			this->button_life_3->Name = L"button_life_3";
			this->button_life_3->Size = System::Drawing::Size(125, 125);
			this->button_life_3->TabIndex = 37;
			this->button_life_3->Text = L"♥️";
			this->button_life_3->UseVisualStyleBackColor = true;
			// 
			// button_life_2
			// 
			this->button_life_2->FlatAppearance->BorderSize = 5;
			this->button_life_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_life_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_life_2->ForeColor = System::Drawing::Color::Magenta;
			this->button_life_2->Location = System::Drawing::Point(130, 223);
			this->button_life_2->Name = L"button_life_2";
			this->button_life_2->Size = System::Drawing::Size(125, 125);
			this->button_life_2->TabIndex = 36;
			this->button_life_2->Text = L"♥️";
			this->button_life_2->UseVisualStyleBackColor = true;
			// 
			// button_life_1
			// 
			this->button_life_1->FlatAppearance->BorderSize = 5;
			this->button_life_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_life_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_life_1->ForeColor = System::Drawing::Color::Magenta;
			this->button_life_1->Location = System::Drawing::Point(0, 42);
			this->button_life_1->Name = L"button_life_1";
			this->button_life_1->Size = System::Drawing::Size(125, 125);
			this->button_life_1->TabIndex = 35;
			this->button_life_1->Text = L"♥️";
			this->button_life_1->UseVisualStyleBackColor = true;
			// 
			// HangmanForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGreen;
			this->ClientSize = System::Drawing::Size(617, 791);
			this->Controls->Add(this->button_life_5);
			this->Controls->Add(this->button_life_4);
			this->Controls->Add(this->button_life_3);
			this->Controls->Add(this->button_life_2);
			this->Controls->Add(this->button_life_1);
			this->Controls->Add(this->button_guess_7);
			this->Controls->Add(this->button_guess_6);
			this->Controls->Add(this->button_guess_5);
			this->Controls->Add(this->button_guess_4);
			this->Controls->Add(this->button_guess_3);
			this->Controls->Add(this->button_guess_2);
			this->Controls->Add(this->button_guess_1);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_A);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"HangmanForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"HangmanForm";
			this->ResumeLayout(false);

		}
#pragma endregion


	public: System::Void button_Click_Hangman(System::Object^ sender, System::EventArgs^ e);
	public: void reset_Hangman();
	public: void setButtons();
	public: void setButton(int index);
	public: void loseLife();
	};
}
