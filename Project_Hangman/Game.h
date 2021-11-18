#pragma once
#include <string>
#include "How_to_Play.h"

namespace ProjectHangman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
		{
			InitializeComponent();
			void correct_letters();
			void wrong_letters();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_w10;
	protected:
	private: System::Windows::Forms::Label^ label_w9;
	private: System::Windows::Forms::Label^ label_w8;
	private: System::Windows::Forms::Label^ label_w7;
	private: System::Windows::Forms::Label^ label_w6;
	private: System::Windows::Forms::Label^ label_w5;
	private: System::Windows::Forms::Label^ label_w4;
	private: System::Windows::Forms::Label^ label_w3;
	private: System::Windows::Forms::Label^ label_w2;
	private: System::Windows::Forms::Label^ label_w1;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Button^ button_how_to_play;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Label^ label1;

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
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button_start;
	private: System::Windows::Forms::Label^ label_life1;
	private: System::Windows::Forms::Label^ label_life2;
	private: System::Windows::Forms::Label^ label_life3;
	private: System::Windows::Forms::Label^ label_attention;







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
			this->label_w10 = (gcnew System::Windows::Forms::Label());
			this->label_w9 = (gcnew System::Windows::Forms::Label());
			this->label_w8 = (gcnew System::Windows::Forms::Label());
			this->label_w7 = (gcnew System::Windows::Forms::Label());
			this->label_w6 = (gcnew System::Windows::Forms::Label());
			this->label_w5 = (gcnew System::Windows::Forms::Label());
			this->label_w4 = (gcnew System::Windows::Forms::Label());
			this->label_w3 = (gcnew System::Windows::Forms::Label());
			this->label_w2 = (gcnew System::Windows::Forms::Label());
			this->label_w1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button_how_to_play = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_start = (gcnew System::Windows::Forms::Button());
			this->label_life1 = (gcnew System::Windows::Forms::Label());
			this->label_life2 = (gcnew System::Windows::Forms::Label());
			this->label_life3 = (gcnew System::Windows::Forms::Label());
			this->label_attention = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label_w10
			// 
			this->label_w10->AutoSize = true;
			this->label_w10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label_w10->Location = System::Drawing::Point(320, 281);
			this->label_w10->Name = L"label_w10";
			this->label_w10->Size = System::Drawing::Size(21, 24);
			this->label_w10->TabIndex = 54;
			this->label_w10->Text = L"_";
			this->label_w10->Visible = false;
			// 
			// label_w9
			// 
			this->label_w9->AutoSize = true;
			this->label_w9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label_w9->Location = System::Drawing::Point(295, 281);
			this->label_w9->Name = L"label_w9";
			this->label_w9->Size = System::Drawing::Size(21, 24);
			this->label_w9->TabIndex = 53;
			this->label_w9->Text = L"_";
			this->label_w9->Visible = false;
			// 
			// label_w8
			// 
			this->label_w8->AutoSize = true;
			this->label_w8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label_w8->Location = System::Drawing::Point(270, 281);
			this->label_w8->Name = L"label_w8";
			this->label_w8->Size = System::Drawing::Size(21, 24);
			this->label_w8->TabIndex = 52;
			this->label_w8->Text = L"_";
			this->label_w8->Visible = false;
			// 
			// label_w7
			// 
			this->label_w7->AutoSize = true;
			this->label_w7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label_w7->Location = System::Drawing::Point(245, 281);
			this->label_w7->Name = L"label_w7";
			this->label_w7->Size = System::Drawing::Size(21, 24);
			this->label_w7->TabIndex = 51;
			this->label_w7->Text = L"_";
			this->label_w7->Visible = false;
			// 
			// label_w6
			// 
			this->label_w6->AutoSize = true;
			this->label_w6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label_w6->Location = System::Drawing::Point(220, 281);
			this->label_w6->Name = L"label_w6";
			this->label_w6->Size = System::Drawing::Size(21, 24);
			this->label_w6->TabIndex = 50;
			this->label_w6->Text = L"_";
			this->label_w6->Visible = false;
			// 
			// label_w5
			// 
			this->label_w5->AutoSize = true;
			this->label_w5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label_w5->Location = System::Drawing::Point(195, 281);
			this->label_w5->Name = L"label_w5";
			this->label_w5->Size = System::Drawing::Size(21, 24);
			this->label_w5->TabIndex = 49;
			this->label_w5->Text = L"_";
			this->label_w5->Visible = false;
			// 
			// label_w4
			// 
			this->label_w4->AutoSize = true;
			this->label_w4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label_w4->Location = System::Drawing::Point(170, 281);
			this->label_w4->Name = L"label_w4";
			this->label_w4->Size = System::Drawing::Size(21, 24);
			this->label_w4->TabIndex = 48;
			this->label_w4->Text = L"_";
			this->label_w4->Visible = false;
			// 
			// label_w3
			// 
			this->label_w3->AutoSize = true;
			this->label_w3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label_w3->Location = System::Drawing::Point(145, 281);
			this->label_w3->Name = L"label_w3";
			this->label_w3->Size = System::Drawing::Size(21, 24);
			this->label_w3->TabIndex = 47;
			this->label_w3->Text = L"_";
			this->label_w3->Visible = false;
			// 
			// label_w2
			// 
			this->label_w2->AutoSize = true;
			this->label_w2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label_w2->Location = System::Drawing::Point(120, 281);
			this->label_w2->Name = L"label_w2";
			this->label_w2->Size = System::Drawing::Size(21, 24);
			this->label_w2->TabIndex = 46;
			this->label_w2->Text = L"_";
			this->label_w2->Visible = false;
			// 
			// label_w1
			// 
			this->label_w1->AutoSize = true;
			this->label_w1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label_w1->Location = System::Drawing::Point(95, 281);
			this->label_w1->Name = L"label_w1";
			this->label_w1->Size = System::Drawing::Size(21, 24);
			this->label_w1->TabIndex = 45;
			this->label_w1->Text = L"_";
			this->label_w1->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label4->Location = System::Drawing::Point(337, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(198, 29);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Project Hangman";
			// 
			// button_how_to_play
			// 
			this->button_how_to_play->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button_how_to_play->Location = System::Drawing::Point(618, 525);
			this->button_how_to_play->Name = L"button_how_to_play";
			this->button_how_to_play->Size = System::Drawing::Size(214, 39);
			this->button_how_to_play->TabIndex = 34;
			this->button_how_to_play->Text = L"Οδηγίες Παιχνιδιού";
			this->button_how_to_play->UseVisualStyleBackColor = true;
			this->button_how_to_play->Click += gcnew System::EventHandler(this, &Game::button_how_to_play_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->textBox1->Location = System::Drawing::Point(99, 177);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(206, 22);
			this->textBox1->TabIndex = 30;
			// 
			// button_close
			// 
			this->button_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button_close->Location = System::Drawing::Point(618, 570);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(214, 39);
			this->button_close->TabIndex = 29;
			this->button_close->Text = L"Έξοδος";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &Game::button_close_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(298, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 73);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Κρεμάλα";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button1->Location = System::Drawing::Point(67, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 39);
			this->button1->TabIndex = 55;
			this->button1->Text = L"Α";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button2->Location = System::Drawing::Point(148, 390);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 39);
			this->button2->TabIndex = 56;
			this->button2->Text = L"Β";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button3->Location = System::Drawing::Point(229, 390);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 39);
			this->button3->TabIndex = 57;
			this->button3->Text = L"Γ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button4->Location = System::Drawing::Point(310, 390);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 39);
			this->button4->TabIndex = 58;
			this->button4->Text = L"Δ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button5->Location = System::Drawing::Point(391, 390);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 39);
			this->button5->TabIndex = 59;
			this->button5->Text = L"Ε";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button6->Location = System::Drawing::Point(67, 435);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 39);
			this->button6->TabIndex = 60;
			this->button6->Text = L"Ζ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button7->Location = System::Drawing::Point(148, 435);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 39);
			this->button7->TabIndex = 61;
			this->button7->Text = L"Η";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button8->Location = System::Drawing::Point(229, 435);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 39);
			this->button8->TabIndex = 62;
			this->button8->Text = L"Θ";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button9->Location = System::Drawing::Point(310, 435);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 39);
			this->button9->TabIndex = 63;
			this->button9->Text = L"Ι";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button10->Location = System::Drawing::Point(391, 435);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 39);
			this->button10->TabIndex = 64;
			this->button10->Text = L"Κ";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button11->Location = System::Drawing::Point(66, 480);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 39);
			this->button11->TabIndex = 65;
			this->button11->Text = L"Λ";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button12->Location = System::Drawing::Point(147, 480);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 39);
			this->button12->TabIndex = 66;
			this->button12->Text = L"Μ";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button13->Location = System::Drawing::Point(228, 480);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 39);
			this->button13->TabIndex = 67;
			this->button13->Text = L"Ν";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button14->Location = System::Drawing::Point(310, 480);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 39);
			this->button14->TabIndex = 68;
			this->button14->Text = L"Ξ";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button15->Location = System::Drawing::Point(391, 480);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 39);
			this->button15->TabIndex = 69;
			this->button15->Text = L"Ο";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Visible = false;
			this->button15->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button16->Location = System::Drawing::Point(66, 525);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 39);
			this->button16->TabIndex = 70;
			this->button16->Text = L"Π";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Visible = false;
			this->button16->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button17->Location = System::Drawing::Point(147, 525);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 39);
			this->button17->TabIndex = 71;
			this->button17->Text = L"Ρ";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Visible = false;
			this->button17->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button18->Location = System::Drawing::Point(228, 525);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 39);
			this->button18->TabIndex = 72;
			this->button18->Text = L"Σ";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Visible = false;
			this->button18->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button19->Location = System::Drawing::Point(310, 525);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 39);
			this->button19->TabIndex = 73;
			this->button19->Text = L"Τ";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Visible = false;
			this->button19->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button20->Location = System::Drawing::Point(391, 525);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 39);
			this->button20->TabIndex = 74;
			this->button20->Text = L"Υ";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Visible = false;
			this->button20->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button21->Location = System::Drawing::Point(66, 570);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 39);
			this->button21->TabIndex = 75;
			this->button21->Text = L"Φ";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Visible = false;
			this->button21->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button22->Location = System::Drawing::Point(147, 570);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 39);
			this->button22->TabIndex = 76;
			this->button22->Text = L"Χ";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Visible = false;
			this->button22->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button23->Location = System::Drawing::Point(229, 570);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 39);
			this->button23->TabIndex = 77;
			this->button23->Text = L"Ψ";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Visible = false;
			this->button23->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button24->Location = System::Drawing::Point(311, 571);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 39);
			this->button24->TabIndex = 78;
			this->button24->Text = L"Ω";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Visible = false;
			this->button24->Click += gcnew System::EventHandler(this, &Game::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(487, 177);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(345, 273);
			this->pictureBox1->TabIndex = 79;
			this->pictureBox1->TabStop = false;
			// 
			// button_start
			// 
			this->button_start->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button_start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button_start->Location = System::Drawing::Point(391, 176);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(75, 23);
			this->button_start->TabIndex = 80;
			this->button_start->Text = L"Έναρξη";
			this->button_start->UseVisualStyleBackColor = false;
			this->button_start->Click += gcnew System::EventHandler(this, &Game::button_start_Click);
			// 
			// label_life1
			// 
			this->label_life1->AutoSize = true;
			this->label_life1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label_life1->Location = System::Drawing::Point(746, 458);
			this->label_life1->Name = L"label_life1";
			this->label_life1->Size = System::Drawing::Size(44, 16);
			this->label_life1->TabIndex = 81;
			this->label_life1->Text = L"Ζωές :";
			this->label_life1->Visible = false;
			// 
			// label_life2
			// 
			this->label_life2->AutoSize = true;
			this->label_life2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label_life2->Location = System::Drawing::Point(791, 458);
			this->label_life2->Name = L"label_life2";
			this->label_life2->Size = System::Drawing::Size(15, 16);
			this->label_life2->TabIndex = 82;
			this->label_life2->Text = L"5";
			this->label_life2->Visible = false;
			// 
			// label_life3
			// 
			this->label_life3->AutoSize = true;
			this->label_life3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label_life3->Location = System::Drawing::Point(810, 458);
			this->label_life3->Name = L"label_life3";
			this->label_life3->Size = System::Drawing::Size(22, 16);
			this->label_life3->TabIndex = 83;
			this->label_life3->Text = L"/ 5";
			this->label_life3->Visible = false;
			// 
			// label_attention
			// 
			this->label_attention->AutoSize = true;
			this->label_attention->ForeColor = System::Drawing::Color::Red;
			this->label_attention->Location = System::Drawing::Point(96, 202);
			this->label_attention->Name = L"label_attention";
			this->label_attention->Size = System::Drawing::Size(343, 39);
			this->label_attention->TabIndex = 84;
			this->label_attention->Text = L"ΠΡΟΣΟΧΗ\r\n* Η λέξη πρέπει να είναι: στα Ελληνικά, με Κεφαλαία Γραμματα και \r\nμε μέ"
				L"γεθος από 3 ως 10 χαρακτήρες.\r\n";
			this->label_attention->Visible = false;
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 644);
			this->Controls->Add(this->label_attention);
			this->Controls->Add(this->label_life3);
			this->Controls->Add(this->label_life2);
			this->Controls->Add(this->label_life1);
			this->Controls->Add(this->button_start);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
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
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label_w10);
			this->Controls->Add(this->label_w9);
			this->Controls->Add(this->label_w8);
			this->Controls->Add(this->label_w7);
			this->Controls->Add(this->label_w6);
			this->Controls->Add(this->label_w5);
			this->Controls->Add(this->label_w4);
			this->Controls->Add(this->label_w3);
			this->Controls->Add(this->label_w2);
			this->Controls->Add(this->label_w1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button_how_to_play);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(916, 683);
			this->MinimumSize = System::Drawing::Size(916, 683);
			this->Name = L"Game";
			this->Text = L"Project Hangman";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_how_to_play_Click(System::Object^ sender, System::EventArgs^ e) {
		How_to_Play^ frm = gcnew How_to_Play;
		frm->ShowDialog();
	}
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	int correct_letters, wrong_letters;
	void correct_letter(int k, String^ letter) {
		correct_letters++;
		if (k == 0) {
			label_w1->Text = letter;
		}
		if (k == 1) {
			label_w2->Text = letter;
		}
		if (k == 2) {
			label_w3->Text = letter;
		}
		if (k == 3) {
			label_w4->Text = letter;
		}
		if (k == 4) {
			label_w5->Text = letter;
		}
		if (k == 5) {
			label_w6->Text = letter;
		}
		if (k == 6) {
			label_w7->Text = letter;
		}
		if (k == 7) {
			label_w8->Text = letter;
		}
		if (k == 8) {
			label_w9->Text = letter;
		}
		if (k == 9) {
			label_w10->Text = letter;
		}
		if (correct_letters == textBox1->Text->Length) {
			MessageBox::Show("Συγχαρητήρια Κέρδισες!", "Project Hangman - Win", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			this->Close();
		}
	}
	void wrong_letter(void) {
		wrong_letters++;
		if (wrong_letters == 1) {
			pictureBox1->Load("../Images/Hangman_1.png");
			label_life2->Text = ("4");
		}
		if (wrong_letters == 2) {
			pictureBox1->Load("../Images/Hangman_2.png");
			label_life2->Text = ("3");
		}
		if (wrong_letters == 3) {
			pictureBox1->Load("../Images/Hangman_3.png");
			label_life2->Text = ("2");
		}
		if (wrong_letters == 4) {
			pictureBox1->Load("../Images/Hangman_4.png");
			label_life2->Text = ("1");
		}
		if (wrong_letters == 5) {
			pictureBox1->Load("../Images/Hangman_5.png");
			label_life2->Text = ("0");
			String^ word;
			word = textBox1->Text;
			MessageBox::Show("Game Over" + "\n" + "\n" + "Έχασες!" + "\n" + "\n" + "Η σωστή λέξη ήταν: " + word, "Project Hangman - Game Over", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ word, ^ b;
		int location;
		word = textBox1->Text;
		b = ((Button^)sender)->Text;
		location = word->IndexOf(b);
		if (location < 0) {
			wrong_letter();
			((Button^)sender)->Enabled = false;
		}
		else {
			while (location >= 0) {
				correct_letter(location, b);
				word = word->Remove(location, 1);
				word = word->Insert(location, "*");
				location = word->IndexOf(b);
			}
			((Button^)sender)->Enabled = false;
		}
	}
	private: System::Void button_start_Click(System::Object^ sender, System::EventArgs^ e) {
		{
			textBox1->Visible = false;
			label_attention->Visible = false;
			button_start->Visible = false;
			button1->Visible = true;
			button2->Visible = true;
			button3->Visible = true;
			button4->Visible = true;
			button5->Visible = true;
			button6->Visible = true;
			button7->Visible = true;
			button8->Visible = true;
			button9->Visible = true;
			button10->Visible = true;
			button11->Visible = true;
			button12->Visible = true;
			button13->Visible = true;
			button14->Visible = true;
			button15->Visible = true;
			button16->Visible = true;
			button17->Visible = true;
			button18->Visible = true;
			button19->Visible = true;
			button20->Visible = true;
			button21->Visible = true;
			button22->Visible = true;
			button23->Visible = true;
			button24->Visible = true;
			label_life1->Visible = true;
			label_life2->Visible = true;
			label_life3->Visible = true;
		}
		int length;
		length = textBox1->Text->Length;
		if (length == 3) {
			label_w1->Visible = true;
			label_w2->Visible = true;
			label_w3->Visible = true;
		}
		else if (length == 4) {
			label_w1->Visible = true;
			label_w2->Visible = true;
			label_w3->Visible = true;
			label_w4->Visible = true;
		}
		else if (length == 5) {
			label_w1->Visible = true;
			label_w2->Visible = true;
			label_w3->Visible = true;
			label_w4->Visible = true;
			label_w5->Visible = true;
		}
		else if (length == 6) {
			label_w1->Visible = true;
			label_w2->Visible = true;
			label_w3->Visible = true;
			label_w4->Visible = true;
			label_w5->Visible = true;
			label_w6->Visible = true;
		}
		else if (length == 7) {
			label_w1->Visible = true;
			label_w2->Visible = true;
			label_w3->Visible = true;
			label_w4->Visible = true;
			label_w5->Visible = true;
			label_w6->Visible = true;
			label_w7->Visible = true;
		}
		else if (length == 8) {
			label_w1->Visible = true;
			label_w2->Visible = true;
			label_w3->Visible = true;
			label_w4->Visible = true;
			label_w5->Visible = true;
			label_w6->Visible = true;
			label_w7->Visible = true;
			label_w8->Visible = true;
		}
		else if (length == 9) {
			label_w1->Visible = true;
			label_w2->Visible = true;
			label_w3->Visible = true;
			label_w4->Visible = true;
			label_w5->Visible = true;
			label_w6->Visible = true;
			label_w7->Visible = true;
			label_w8->Visible = true;
			label_w9->Visible = true;
		}
		else if (length == 10) {
			label_w1->Visible = true;
			label_w2->Visible = true;
			label_w3->Visible = true;
			label_w4->Visible = true;
			label_w5->Visible = true;
			label_w6->Visible = true;
			label_w7->Visible = true;
			label_w8->Visible = true;
			label_w9->Visible = true;
			label_w10->Visible = true;
		}
		else if (length < 3) {
			MessageBox::Show("Η λέξη που δώσατε είναι πολύ μικρή!", "Project Hangman", MessageBoxButtons::OK, MessageBoxIcon::Information);
			{
				label_attention->Visible = true;
				button_start->Visible = true;
				textBox1->Visible = true;
				button1->Visible = false;
				button2->Visible = false;
				button3->Visible = false;
				button4->Visible = false;
				button5->Visible = false;
				button6->Visible = false;
				button7->Visible = false;
				button8->Visible = false;
				button9->Visible = false;
				button10->Visible = false;
				button11->Visible = false;
				button12->Visible = false;
				button13->Visible = false;
				button14->Visible = false;
				button15->Visible = false;
				button16->Visible = false;
				button17->Visible = false;
				button18->Visible = false;
				button19->Visible = false;
				button20->Visible = false;
				button21->Visible = false;
				button22->Visible = false;
				button23->Visible = false;
				button24->Visible = false;
				label_life1->Visible = false;
				label_life2->Visible = false;
				label_life3->Visible = false;
			}
		}
		else {
			MessageBox::Show("Η λέξη που δώσατε είναι πολύ μεγάλη!", "Project Hangman", MessageBoxButtons::OK, MessageBoxIcon::Information);
			{
				label_attention->Visible = true;
				button_start->Visible = true;
				textBox1->Visible = true;
				button1->Visible = false;
				button2->Visible = false;
				button3->Visible = false;
				button4->Visible = false;
				button5->Visible = false;
				button6->Visible = false;
				button7->Visible = false;
				button8->Visible = false;
				button9->Visible = false;
				button10->Visible = false;
				button11->Visible = false;
				button12->Visible = false;
				button13->Visible = false;
				button14->Visible = false;
				button15->Visible = false;
				button16->Visible = false;
				button17->Visible = false;
				button18->Visible = false;
				button19->Visible = false;
				button20->Visible = false;
				button21->Visible = false;
				button22->Visible = false;
				button23->Visible = false;
				button24->Visible = false;
				label_life1->Visible = false;
				label_life2->Visible = false;
				label_life3->Visible = false;
			}
		}
	}
};
}
