#pragma once

namespace Minigames {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Connect4Form
	/// </summary>
	public ref class Connect4Form : public System::Windows::Forms::Form
	{
	public:
		Connect4Form(void)
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
		~Connect4Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_A_1;
	protected:
	private: System::Windows::Forms::Button^ button_B_1;
	private: System::Windows::Forms::Button^ button_C_1;
	private: System::Windows::Forms::Button^ button_D_1;
	private: System::Windows::Forms::Button^ button_E_1;
	private: System::Windows::Forms::Button^ button_F_1;
	private: System::Windows::Forms::Button^ button_G_1;
	private: System::Windows::Forms::Button^ button_G_2;
	private: System::Windows::Forms::Button^ button_F_2;
	private: System::Windows::Forms::Button^ button_E_2;
	private: System::Windows::Forms::Button^ button_D_2;
	private: System::Windows::Forms::Button^ button_C_2;
	private: System::Windows::Forms::Button^ button_B_2;
	private: System::Windows::Forms::Button^ button_A_2;
	private: System::Windows::Forms::Button^ button_G_3;
	private: System::Windows::Forms::Button^ button_F_3;
	private: System::Windows::Forms::Button^ button_E_3;
	private: System::Windows::Forms::Button^ button_D_3;
	private: System::Windows::Forms::Button^ button_C_3;
	private: System::Windows::Forms::Button^ button_B_3;
	private: System::Windows::Forms::Button^ button_A_3;
	private: System::Windows::Forms::Button^ button_G_4;
	private: System::Windows::Forms::Button^ button_F_4;
	private: System::Windows::Forms::Button^ button_E_4;
	private: System::Windows::Forms::Button^ button_D_4;
	private: System::Windows::Forms::Button^ button_C_4;
	private: System::Windows::Forms::Button^ button_B_4;
	private: System::Windows::Forms::Button^ button_A_4;
	private: System::Windows::Forms::Button^ button_G_5;
	private: System::Windows::Forms::Button^ button_F_5;
	private: System::Windows::Forms::Button^ button_E_5;
	private: System::Windows::Forms::Button^ button_D_5;
	private: System::Windows::Forms::Button^ button_C_5;
	private: System::Windows::Forms::Button^ button_B_5;
	private: System::Windows::Forms::Button^ button_A_5;
	private: System::Windows::Forms::Button^ button_G_6;
	private: System::Windows::Forms::Button^ button_F_6;
	private: System::Windows::Forms::Button^ button_E_6;
	private: System::Windows::Forms::Button^ button_D_6;
	private: System::Windows::Forms::Button^ button_C_6;
	private: System::Windows::Forms::Button^ button_B_6;
	private: System::Windows::Forms::Button^ button_A_6;
	private: System::Windows::Forms::Button^ button_G;
	private: System::Windows::Forms::Button^ button_F;
	private: System::Windows::Forms::Button^ button_E;
	private: System::Windows::Forms::Button^ button_D;
	private: System::Windows::Forms::Button^ button_C;
	private: System::Windows::Forms::Button^ button_B;
	private: System::Windows::Forms::Button^ button_A;
	private: System::Windows::Forms::Label^ label1;

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
			this->button_D_1 = (gcnew System::Windows::Forms::Button());
			this->button_E_1 = (gcnew System::Windows::Forms::Button());
			this->button_F_1 = (gcnew System::Windows::Forms::Button());
			this->button_G_1 = (gcnew System::Windows::Forms::Button());
			this->button_G_2 = (gcnew System::Windows::Forms::Button());
			this->button_F_2 = (gcnew System::Windows::Forms::Button());
			this->button_E_2 = (gcnew System::Windows::Forms::Button());
			this->button_D_2 = (gcnew System::Windows::Forms::Button());
			this->button_C_2 = (gcnew System::Windows::Forms::Button());
			this->button_B_2 = (gcnew System::Windows::Forms::Button());
			this->button_A_2 = (gcnew System::Windows::Forms::Button());
			this->button_G_3 = (gcnew System::Windows::Forms::Button());
			this->button_F_3 = (gcnew System::Windows::Forms::Button());
			this->button_E_3 = (gcnew System::Windows::Forms::Button());
			this->button_D_3 = (gcnew System::Windows::Forms::Button());
			this->button_C_3 = (gcnew System::Windows::Forms::Button());
			this->button_B_3 = (gcnew System::Windows::Forms::Button());
			this->button_A_3 = (gcnew System::Windows::Forms::Button());
			this->button_G_4 = (gcnew System::Windows::Forms::Button());
			this->button_F_4 = (gcnew System::Windows::Forms::Button());
			this->button_E_4 = (gcnew System::Windows::Forms::Button());
			this->button_D_4 = (gcnew System::Windows::Forms::Button());
			this->button_C_4 = (gcnew System::Windows::Forms::Button());
			this->button_B_4 = (gcnew System::Windows::Forms::Button());
			this->button_A_4 = (gcnew System::Windows::Forms::Button());
			this->button_G_5 = (gcnew System::Windows::Forms::Button());
			this->button_F_5 = (gcnew System::Windows::Forms::Button());
			this->button_E_5 = (gcnew System::Windows::Forms::Button());
			this->button_D_5 = (gcnew System::Windows::Forms::Button());
			this->button_C_5 = (gcnew System::Windows::Forms::Button());
			this->button_B_5 = (gcnew System::Windows::Forms::Button());
			this->button_A_5 = (gcnew System::Windows::Forms::Button());
			this->button_G_6 = (gcnew System::Windows::Forms::Button());
			this->button_F_6 = (gcnew System::Windows::Forms::Button());
			this->button_E_6 = (gcnew System::Windows::Forms::Button());
			this->button_D_6 = (gcnew System::Windows::Forms::Button());
			this->button_C_6 = (gcnew System::Windows::Forms::Button());
			this->button_B_6 = (gcnew System::Windows::Forms::Button());
			this->button_A_6 = (gcnew System::Windows::Forms::Button());
			this->button_G = (gcnew System::Windows::Forms::Button());
			this->button_F = (gcnew System::Windows::Forms::Button());
			this->button_E = (gcnew System::Windows::Forms::Button());
			this->button_D = (gcnew System::Windows::Forms::Button());
			this->button_C = (gcnew System::Windows::Forms::Button());
			this->button_B = (gcnew System::Windows::Forms::Button());
			this->button_A = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_A_1
			// 
			this->button_A_1->BackColor = System::Drawing::Color::Black;
			this->button_A_1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_A_1->FlatAppearance->BorderSize = 5;
			this->button_A_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_A_1->Location = System::Drawing::Point(27, 681);
			this->button_A_1->Name = L"button_A_1";
			this->button_A_1->Size = System::Drawing::Size(75, 75);
			this->button_A_1->TabIndex = 0;
			this->button_A_1->UseVisualStyleBackColor = false;
			this->button_A_1->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_B_1
			// 
			this->button_B_1->BackColor = System::Drawing::Color::Black;
			this->button_B_1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_B_1->FlatAppearance->BorderSize = 5;
			this->button_B_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_B_1->Location = System::Drawing::Point(108, 681);
			this->button_B_1->Name = L"button_B_1";
			this->button_B_1->Size = System::Drawing::Size(75, 75);
			this->button_B_1->TabIndex = 1;
			this->button_B_1->UseVisualStyleBackColor = false;
			this->button_B_1->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_C_1
			// 
			this->button_C_1->BackColor = System::Drawing::Color::Black;
			this->button_C_1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_C_1->FlatAppearance->BorderSize = 5;
			this->button_C_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_C_1->Location = System::Drawing::Point(189, 681);
			this->button_C_1->Name = L"button_C_1";
			this->button_C_1->Size = System::Drawing::Size(75, 75);
			this->button_C_1->TabIndex = 2;
			this->button_C_1->UseVisualStyleBackColor = false;
			this->button_C_1->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_D_1
			// 
			this->button_D_1->BackColor = System::Drawing::Color::Black;
			this->button_D_1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_D_1->FlatAppearance->BorderSize = 5;
			this->button_D_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_D_1->Location = System::Drawing::Point(270, 681);
			this->button_D_1->Name = L"button_D_1";
			this->button_D_1->Size = System::Drawing::Size(75, 75);
			this->button_D_1->TabIndex = 3;
			this->button_D_1->UseVisualStyleBackColor = false;
			this->button_D_1->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_E_1
			// 
			this->button_E_1->BackColor = System::Drawing::Color::Black;
			this->button_E_1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_E_1->FlatAppearance->BorderSize = 5;
			this->button_E_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_E_1->Location = System::Drawing::Point(351, 681);
			this->button_E_1->Name = L"button_E_1";
			this->button_E_1->Size = System::Drawing::Size(75, 75);
			this->button_E_1->TabIndex = 4;
			this->button_E_1->UseVisualStyleBackColor = false;
			this->button_E_1->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_F_1
			// 
			this->button_F_1->BackColor = System::Drawing::Color::Black;
			this->button_F_1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_F_1->FlatAppearance->BorderSize = 5;
			this->button_F_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_F_1->Location = System::Drawing::Point(432, 681);
			this->button_F_1->Name = L"button_F_1";
			this->button_F_1->Size = System::Drawing::Size(75, 75);
			this->button_F_1->TabIndex = 5;
			this->button_F_1->UseVisualStyleBackColor = false;
			this->button_F_1->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_G_1
			// 
			this->button_G_1->BackColor = System::Drawing::Color::Black;
			this->button_G_1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_G_1->FlatAppearance->BorderSize = 5;
			this->button_G_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_G_1->Location = System::Drawing::Point(513, 681);
			this->button_G_1->Name = L"button_G_1";
			this->button_G_1->Size = System::Drawing::Size(75, 75);
			this->button_G_1->TabIndex = 6;
			this->button_G_1->UseVisualStyleBackColor = false;
			this->button_G_1->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_G_2
			// 
			this->button_G_2->BackColor = System::Drawing::Color::Black;
			this->button_G_2->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_G_2->FlatAppearance->BorderSize = 5;
			this->button_G_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_G_2->Location = System::Drawing::Point(513, 600);
			this->button_G_2->Name = L"button_G_2";
			this->button_G_2->Size = System::Drawing::Size(75, 75);
			this->button_G_2->TabIndex = 13;
			this->button_G_2->UseVisualStyleBackColor = false;
			this->button_G_2->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_F_2
			// 
			this->button_F_2->BackColor = System::Drawing::Color::Black;
			this->button_F_2->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_F_2->FlatAppearance->BorderSize = 5;
			this->button_F_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_F_2->Location = System::Drawing::Point(432, 600);
			this->button_F_2->Name = L"button_F_2";
			this->button_F_2->Size = System::Drawing::Size(75, 75);
			this->button_F_2->TabIndex = 12;
			this->button_F_2->UseVisualStyleBackColor = false;
			this->button_F_2->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_E_2
			// 
			this->button_E_2->BackColor = System::Drawing::Color::Black;
			this->button_E_2->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_E_2->FlatAppearance->BorderSize = 5;
			this->button_E_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_E_2->Location = System::Drawing::Point(351, 600);
			this->button_E_2->Name = L"button_E_2";
			this->button_E_2->Size = System::Drawing::Size(75, 75);
			this->button_E_2->TabIndex = 11;
			this->button_E_2->UseVisualStyleBackColor = false;
			this->button_E_2->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_D_2
			// 
			this->button_D_2->BackColor = System::Drawing::Color::Black;
			this->button_D_2->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_D_2->FlatAppearance->BorderSize = 5;
			this->button_D_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_D_2->Location = System::Drawing::Point(270, 600);
			this->button_D_2->Name = L"button_D_2";
			this->button_D_2->Size = System::Drawing::Size(75, 75);
			this->button_D_2->TabIndex = 10;
			this->button_D_2->UseVisualStyleBackColor = false;
			this->button_D_2->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_C_2
			// 
			this->button_C_2->BackColor = System::Drawing::Color::Black;
			this->button_C_2->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_C_2->FlatAppearance->BorderSize = 5;
			this->button_C_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_C_2->Location = System::Drawing::Point(189, 600);
			this->button_C_2->Name = L"button_C_2";
			this->button_C_2->Size = System::Drawing::Size(75, 75);
			this->button_C_2->TabIndex = 9;
			this->button_C_2->UseVisualStyleBackColor = false;
			this->button_C_2->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_B_2
			// 
			this->button_B_2->BackColor = System::Drawing::Color::Black;
			this->button_B_2->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_B_2->FlatAppearance->BorderSize = 5;
			this->button_B_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_B_2->Location = System::Drawing::Point(108, 600);
			this->button_B_2->Name = L"button_B_2";
			this->button_B_2->Size = System::Drawing::Size(75, 75);
			this->button_B_2->TabIndex = 8;
			this->button_B_2->UseVisualStyleBackColor = false;
			this->button_B_2->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_A_2
			// 
			this->button_A_2->BackColor = System::Drawing::Color::Black;
			this->button_A_2->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_A_2->FlatAppearance->BorderSize = 5;
			this->button_A_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_A_2->Location = System::Drawing::Point(27, 600);
			this->button_A_2->Name = L"button_A_2";
			this->button_A_2->Size = System::Drawing::Size(75, 75);
			this->button_A_2->TabIndex = 7;
			this->button_A_2->UseVisualStyleBackColor = false;
			this->button_A_2->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_G_3
			// 
			this->button_G_3->BackColor = System::Drawing::Color::Black;
			this->button_G_3->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_G_3->FlatAppearance->BorderSize = 5;
			this->button_G_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_G_3->Location = System::Drawing::Point(513, 519);
			this->button_G_3->Name = L"button_G_3";
			this->button_G_3->Size = System::Drawing::Size(75, 75);
			this->button_G_3->TabIndex = 20;
			this->button_G_3->UseVisualStyleBackColor = false;
			this->button_G_3->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_F_3
			// 
			this->button_F_3->BackColor = System::Drawing::Color::Black;
			this->button_F_3->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_F_3->FlatAppearance->BorderSize = 5;
			this->button_F_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_F_3->Location = System::Drawing::Point(432, 519);
			this->button_F_3->Name = L"button_F_3";
			this->button_F_3->Size = System::Drawing::Size(75, 75);
			this->button_F_3->TabIndex = 19;
			this->button_F_3->UseVisualStyleBackColor = false;
			this->button_F_3->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_E_3
			// 
			this->button_E_3->BackColor = System::Drawing::Color::Black;
			this->button_E_3->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_E_3->FlatAppearance->BorderSize = 5;
			this->button_E_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_E_3->Location = System::Drawing::Point(351, 519);
			this->button_E_3->Name = L"button_E_3";
			this->button_E_3->Size = System::Drawing::Size(75, 75);
			this->button_E_3->TabIndex = 18;
			this->button_E_3->UseVisualStyleBackColor = false;
			this->button_E_3->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_D_3
			// 
			this->button_D_3->BackColor = System::Drawing::Color::Black;
			this->button_D_3->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_D_3->FlatAppearance->BorderSize = 5;
			this->button_D_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_D_3->Location = System::Drawing::Point(270, 519);
			this->button_D_3->Name = L"button_D_3";
			this->button_D_3->Size = System::Drawing::Size(75, 75);
			this->button_D_3->TabIndex = 17;
			this->button_D_3->UseVisualStyleBackColor = false;
			this->button_D_3->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_C_3
			// 
			this->button_C_3->BackColor = System::Drawing::Color::Black;
			this->button_C_3->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_C_3->FlatAppearance->BorderSize = 5;
			this->button_C_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_C_3->Location = System::Drawing::Point(189, 519);
			this->button_C_3->Name = L"button_C_3";
			this->button_C_3->Size = System::Drawing::Size(75, 75);
			this->button_C_3->TabIndex = 16;
			this->button_C_3->UseVisualStyleBackColor = false;
			this->button_C_3->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_B_3
			// 
			this->button_B_3->BackColor = System::Drawing::Color::Black;
			this->button_B_3->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_B_3->FlatAppearance->BorderSize = 5;
			this->button_B_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_B_3->Location = System::Drawing::Point(108, 519);
			this->button_B_3->Name = L"button_B_3";
			this->button_B_3->Size = System::Drawing::Size(75, 75);
			this->button_B_3->TabIndex = 15;
			this->button_B_3->UseVisualStyleBackColor = false;
			this->button_B_3->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_A_3
			// 
			this->button_A_3->BackColor = System::Drawing::Color::Black;
			this->button_A_3->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_A_3->FlatAppearance->BorderSize = 5;
			this->button_A_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_A_3->Location = System::Drawing::Point(27, 519);
			this->button_A_3->Name = L"button_A_3";
			this->button_A_3->Size = System::Drawing::Size(75, 75);
			this->button_A_3->TabIndex = 14;
			this->button_A_3->UseVisualStyleBackColor = false;
			this->button_A_3->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_G_4
			// 
			this->button_G_4->BackColor = System::Drawing::Color::Black;
			this->button_G_4->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_G_4->FlatAppearance->BorderSize = 5;
			this->button_G_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_G_4->Location = System::Drawing::Point(513, 438);
			this->button_G_4->Name = L"button_G_4";
			this->button_G_4->Size = System::Drawing::Size(75, 75);
			this->button_G_4->TabIndex = 27;
			this->button_G_4->UseVisualStyleBackColor = false;
			this->button_G_4->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_F_4
			// 
			this->button_F_4->BackColor = System::Drawing::Color::Black;
			this->button_F_4->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_F_4->FlatAppearance->BorderSize = 5;
			this->button_F_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_F_4->Location = System::Drawing::Point(432, 438);
			this->button_F_4->Name = L"button_F_4";
			this->button_F_4->Size = System::Drawing::Size(75, 75);
			this->button_F_4->TabIndex = 26;
			this->button_F_4->UseVisualStyleBackColor = false;
			this->button_F_4->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_E_4
			// 
			this->button_E_4->BackColor = System::Drawing::Color::Black;
			this->button_E_4->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_E_4->FlatAppearance->BorderSize = 5;
			this->button_E_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_E_4->Location = System::Drawing::Point(351, 438);
			this->button_E_4->Name = L"button_E_4";
			this->button_E_4->Size = System::Drawing::Size(75, 75);
			this->button_E_4->TabIndex = 25;
			this->button_E_4->UseVisualStyleBackColor = false;
			this->button_E_4->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_D_4
			// 
			this->button_D_4->BackColor = System::Drawing::Color::Black;
			this->button_D_4->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_D_4->FlatAppearance->BorderSize = 5;
			this->button_D_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_D_4->Location = System::Drawing::Point(270, 438);
			this->button_D_4->Name = L"button_D_4";
			this->button_D_4->Size = System::Drawing::Size(75, 75);
			this->button_D_4->TabIndex = 24;
			this->button_D_4->UseVisualStyleBackColor = false;
			this->button_D_4->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_C_4
			// 
			this->button_C_4->BackColor = System::Drawing::Color::Black;
			this->button_C_4->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_C_4->FlatAppearance->BorderSize = 5;
			this->button_C_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_C_4->Location = System::Drawing::Point(189, 438);
			this->button_C_4->Name = L"button_C_4";
			this->button_C_4->Size = System::Drawing::Size(75, 75);
			this->button_C_4->TabIndex = 23;
			this->button_C_4->UseVisualStyleBackColor = false;
			this->button_C_4->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_B_4
			// 
			this->button_B_4->BackColor = System::Drawing::Color::Black;
			this->button_B_4->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_B_4->FlatAppearance->BorderSize = 5;
			this->button_B_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_B_4->Location = System::Drawing::Point(108, 438);
			this->button_B_4->Name = L"button_B_4";
			this->button_B_4->Size = System::Drawing::Size(75, 75);
			this->button_B_4->TabIndex = 22;
			this->button_B_4->UseVisualStyleBackColor = false;
			this->button_B_4->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_A_4
			// 
			this->button_A_4->BackColor = System::Drawing::Color::Black;
			this->button_A_4->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_A_4->FlatAppearance->BorderSize = 5;
			this->button_A_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_A_4->Location = System::Drawing::Point(27, 438);
			this->button_A_4->Name = L"button_A_4";
			this->button_A_4->Size = System::Drawing::Size(75, 75);
			this->button_A_4->TabIndex = 21;
			this->button_A_4->UseVisualStyleBackColor = false;
			this->button_A_4->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_G_5
			// 
			this->button_G_5->BackColor = System::Drawing::Color::Black;
			this->button_G_5->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_G_5->FlatAppearance->BorderSize = 5;
			this->button_G_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_G_5->Location = System::Drawing::Point(513, 357);
			this->button_G_5->Name = L"button_G_5";
			this->button_G_5->Size = System::Drawing::Size(75, 75);
			this->button_G_5->TabIndex = 34;
			this->button_G_5->UseVisualStyleBackColor = false;
			this->button_G_5->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_F_5
			// 
			this->button_F_5->BackColor = System::Drawing::Color::Black;
			this->button_F_5->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_F_5->FlatAppearance->BorderSize = 5;
			this->button_F_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_F_5->Location = System::Drawing::Point(432, 357);
			this->button_F_5->Name = L"button_F_5";
			this->button_F_5->Size = System::Drawing::Size(75, 75);
			this->button_F_5->TabIndex = 33;
			this->button_F_5->UseVisualStyleBackColor = false;
			this->button_F_5->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_E_5
			// 
			this->button_E_5->BackColor = System::Drawing::Color::Black;
			this->button_E_5->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_E_5->FlatAppearance->BorderSize = 5;
			this->button_E_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_E_5->Location = System::Drawing::Point(351, 357);
			this->button_E_5->Name = L"button_E_5";
			this->button_E_5->Size = System::Drawing::Size(75, 75);
			this->button_E_5->TabIndex = 32;
			this->button_E_5->UseVisualStyleBackColor = false;
			this->button_E_5->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_D_5
			// 
			this->button_D_5->BackColor = System::Drawing::Color::Black;
			this->button_D_5->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_D_5->FlatAppearance->BorderSize = 5;
			this->button_D_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_D_5->Location = System::Drawing::Point(270, 357);
			this->button_D_5->Name = L"button_D_5";
			this->button_D_5->Size = System::Drawing::Size(75, 75);
			this->button_D_5->TabIndex = 31;
			this->button_D_5->UseVisualStyleBackColor = false;
			this->button_D_5->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_C_5
			// 
			this->button_C_5->BackColor = System::Drawing::Color::Black;
			this->button_C_5->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_C_5->FlatAppearance->BorderSize = 5;
			this->button_C_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_C_5->Location = System::Drawing::Point(189, 357);
			this->button_C_5->Name = L"button_C_5";
			this->button_C_5->Size = System::Drawing::Size(75, 75);
			this->button_C_5->TabIndex = 30;
			this->button_C_5->UseVisualStyleBackColor = false;
			this->button_C_5->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_B_5
			// 
			this->button_B_5->BackColor = System::Drawing::Color::Black;
			this->button_B_5->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_B_5->FlatAppearance->BorderSize = 5;
			this->button_B_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_B_5->Location = System::Drawing::Point(108, 357);
			this->button_B_5->Name = L"button_B_5";
			this->button_B_5->Size = System::Drawing::Size(75, 75);
			this->button_B_5->TabIndex = 29;
			this->button_B_5->UseVisualStyleBackColor = false;
			this->button_B_5->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_A_5
			// 
			this->button_A_5->BackColor = System::Drawing::Color::Black;
			this->button_A_5->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_A_5->FlatAppearance->BorderSize = 5;
			this->button_A_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_A_5->Location = System::Drawing::Point(27, 357);
			this->button_A_5->Name = L"button_A_5";
			this->button_A_5->Size = System::Drawing::Size(75, 75);
			this->button_A_5->TabIndex = 28;
			this->button_A_5->UseVisualStyleBackColor = false;
			this->button_A_5->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_G_6
			// 
			this->button_G_6->BackColor = System::Drawing::Color::Black;
			this->button_G_6->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_G_6->FlatAppearance->BorderSize = 5;
			this->button_G_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_G_6->Location = System::Drawing::Point(513, 276);
			this->button_G_6->Name = L"button_G_6";
			this->button_G_6->Size = System::Drawing::Size(75, 75);
			this->button_G_6->TabIndex = 41;
			this->button_G_6->UseVisualStyleBackColor = false;
			this->button_G_6->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_F_6
			// 
			this->button_F_6->BackColor = System::Drawing::Color::Black;
			this->button_F_6->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_F_6->FlatAppearance->BorderSize = 5;
			this->button_F_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_F_6->Location = System::Drawing::Point(432, 276);
			this->button_F_6->Name = L"button_F_6";
			this->button_F_6->Size = System::Drawing::Size(75, 75);
			this->button_F_6->TabIndex = 40;
			this->button_F_6->UseVisualStyleBackColor = false;
			this->button_F_6->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_E_6
			// 
			this->button_E_6->BackColor = System::Drawing::Color::Black;
			this->button_E_6->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_E_6->FlatAppearance->BorderSize = 5;
			this->button_E_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_E_6->Location = System::Drawing::Point(351, 276);
			this->button_E_6->Name = L"button_E_6";
			this->button_E_6->Size = System::Drawing::Size(75, 75);
			this->button_E_6->TabIndex = 39;
			this->button_E_6->UseVisualStyleBackColor = false;
			this->button_E_6->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_D_6
			// 
			this->button_D_6->BackColor = System::Drawing::Color::Black;
			this->button_D_6->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_D_6->FlatAppearance->BorderSize = 5;
			this->button_D_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_D_6->Location = System::Drawing::Point(270, 276);
			this->button_D_6->Name = L"button_D_6";
			this->button_D_6->Size = System::Drawing::Size(75, 75);
			this->button_D_6->TabIndex = 38;
			this->button_D_6->UseVisualStyleBackColor = false;
			this->button_D_6->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_C_6
			// 
			this->button_C_6->BackColor = System::Drawing::Color::Black;
			this->button_C_6->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_C_6->FlatAppearance->BorderSize = 5;
			this->button_C_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_C_6->Location = System::Drawing::Point(189, 276);
			this->button_C_6->Name = L"button_C_6";
			this->button_C_6->Size = System::Drawing::Size(75, 75);
			this->button_C_6->TabIndex = 37;
			this->button_C_6->UseVisualStyleBackColor = false;
			this->button_C_6->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_B_6
			// 
			this->button_B_6->BackColor = System::Drawing::Color::Black;
			this->button_B_6->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_B_6->FlatAppearance->BorderSize = 5;
			this->button_B_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_B_6->Location = System::Drawing::Point(108, 276);
			this->button_B_6->Name = L"button_B_6";
			this->button_B_6->Size = System::Drawing::Size(75, 75);
			this->button_B_6->TabIndex = 36;
			this->button_B_6->UseVisualStyleBackColor = false;
			this->button_B_6->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_A_6
			// 
			this->button_A_6->BackColor = System::Drawing::Color::Black;
			this->button_A_6->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_A_6->FlatAppearance->BorderSize = 5;
			this->button_A_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_A_6->Location = System::Drawing::Point(27, 276);
			this->button_A_6->Name = L"button_A_6";
			this->button_A_6->Size = System::Drawing::Size(75, 75);
			this->button_A_6->TabIndex = 35;
			this->button_A_6->UseVisualStyleBackColor = false;
			this->button_A_6->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_G
			// 
			this->button_G->BackColor = System::Drawing::Color::DarkBlue;
			this->button_G->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_G->FlatAppearance->BorderSize = 5;
			this->button_G->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_G->Location = System::Drawing::Point(513, 195);
			this->button_G->Name = L"button_G";
			this->button_G->Size = System::Drawing::Size(75, 75);
			this->button_G->TabIndex = 48;
			this->button_G->UseVisualStyleBackColor = false;
			this->button_G->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_F
			// 
			this->button_F->BackColor = System::Drawing::Color::DarkBlue;
			this->button_F->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_F->FlatAppearance->BorderSize = 5;
			this->button_F->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_F->Location = System::Drawing::Point(432, 195);
			this->button_F->Name = L"button_F";
			this->button_F->Size = System::Drawing::Size(75, 75);
			this->button_F->TabIndex = 47;
			this->button_F->UseVisualStyleBackColor = false;
			this->button_F->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_E
			// 
			this->button_E->BackColor = System::Drawing::Color::DarkBlue;
			this->button_E->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_E->FlatAppearance->BorderSize = 5;
			this->button_E->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_E->Location = System::Drawing::Point(351, 195);
			this->button_E->Name = L"button_E";
			this->button_E->Size = System::Drawing::Size(75, 75);
			this->button_E->TabIndex = 46;
			this->button_E->UseVisualStyleBackColor = false;
			this->button_E->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_D
			// 
			this->button_D->BackColor = System::Drawing::Color::DarkBlue;
			this->button_D->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_D->FlatAppearance->BorderSize = 5;
			this->button_D->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_D->Location = System::Drawing::Point(270, 195);
			this->button_D->Name = L"button_D";
			this->button_D->Size = System::Drawing::Size(75, 75);
			this->button_D->TabIndex = 45;
			this->button_D->UseVisualStyleBackColor = false;
			this->button_D->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_C
			// 
			this->button_C->BackColor = System::Drawing::Color::DarkBlue;
			this->button_C->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_C->FlatAppearance->BorderSize = 5;
			this->button_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_C->Location = System::Drawing::Point(189, 195);
			this->button_C->Name = L"button_C";
			this->button_C->Size = System::Drawing::Size(75, 75);
			this->button_C->TabIndex = 44;
			this->button_C->UseVisualStyleBackColor = false;
			this->button_C->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_B
			// 
			this->button_B->BackColor = System::Drawing::Color::DarkBlue;
			this->button_B->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_B->FlatAppearance->BorderSize = 5;
			this->button_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_B->Location = System::Drawing::Point(108, 195);
			this->button_B->Name = L"button_B";
			this->button_B->Size = System::Drawing::Size(75, 75);
			this->button_B->TabIndex = 43;
			this->button_B->UseVisualStyleBackColor = false;
			this->button_B->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// button_A
			// 
			this->button_A->BackColor = System::Drawing::Color::DarkBlue;
			this->button_A->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button_A->FlatAppearance->BorderSize = 5;
			this->button_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_A->Location = System::Drawing::Point(27, 195);
			this->button_A->Name = L"button_A";
			this->button_A->Size = System::Drawing::Size(75, 75);
			this->button_A->TabIndex = 42;
			this->button_A->UseVisualStyleBackColor = false;
			this->button_A->Click += gcnew System::EventHandler(this, &Connect4Form::button_Click_Connect4);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(613, 76);
			this->label1->TabIndex = 49;
			this->label1->Text = L"YELLOW WINS! :d";
			// 
			// Connect4Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkBlue;
			this->ClientSize = System::Drawing::Size(617, 791);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_G);
			this->Controls->Add(this->button_F);
			this->Controls->Add(this->button_E);
			this->Controls->Add(this->button_D);
			this->Controls->Add(this->button_C);
			this->Controls->Add(this->button_B);
			this->Controls->Add(this->button_A);
			this->Controls->Add(this->button_G_6);
			this->Controls->Add(this->button_F_6);
			this->Controls->Add(this->button_E_6);
			this->Controls->Add(this->button_D_6);
			this->Controls->Add(this->button_C_6);
			this->Controls->Add(this->button_B_6);
			this->Controls->Add(this->button_A_6);
			this->Controls->Add(this->button_G_5);
			this->Controls->Add(this->button_F_5);
			this->Controls->Add(this->button_E_5);
			this->Controls->Add(this->button_D_5);
			this->Controls->Add(this->button_C_5);
			this->Controls->Add(this->button_B_5);
			this->Controls->Add(this->button_A_5);
			this->Controls->Add(this->button_G_4);
			this->Controls->Add(this->button_F_4);
			this->Controls->Add(this->button_E_4);
			this->Controls->Add(this->button_D_4);
			this->Controls->Add(this->button_C_4);
			this->Controls->Add(this->button_B_4);
			this->Controls->Add(this->button_A_4);
			this->Controls->Add(this->button_G_3);
			this->Controls->Add(this->button_F_3);
			this->Controls->Add(this->button_E_3);
			this->Controls->Add(this->button_D_3);
			this->Controls->Add(this->button_C_3);
			this->Controls->Add(this->button_B_3);
			this->Controls->Add(this->button_A_3);
			this->Controls->Add(this->button_G_2);
			this->Controls->Add(this->button_F_2);
			this->Controls->Add(this->button_E_2);
			this->Controls->Add(this->button_D_2);
			this->Controls->Add(this->button_C_2);
			this->Controls->Add(this->button_B_2);
			this->Controls->Add(this->button_A_2);
			this->Controls->Add(this->button_G_1);
			this->Controls->Add(this->button_F_1);
			this->Controls->Add(this->button_E_1);
			this->Controls->Add(this->button_D_1);
			this->Controls->Add(this->button_C_1);
			this->Controls->Add(this->button_B_1);
			this->Controls->Add(this->button_A_1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Connect4Form";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Connect4Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Void button_Click_Connect4(System::Object^ sender, System::EventArgs^ e);
	public: void reset_Connect4();
	public: void colorButton_Connect4(int row, int col);
	};
}
