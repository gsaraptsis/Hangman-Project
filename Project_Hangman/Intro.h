#pragma once
#include "How_to_Play.h"
#include "Game.h"

namespace ProjectHangman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Intro
	/// </summary>
	public ref class Intro : public System::Windows::Forms::Form
	{
	public:
		Intro(void)
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
		~Intro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Button^ button_about;
	private: System::Windows::Forms::Button^ button_how_to_play;
	private: System::Windows::Forms::Button^ button_new_game;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Intro::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->button_about = (gcnew System::Windows::Forms::Button());
			this->button_how_to_play = (gcnew System::Windows::Forms::Button());
			this->button_new_game = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label2->Location = System::Drawing::Point(205, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 29);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Project Hangman";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(137, 401);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(353, 250);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// button_close
			// 
			this->button_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button_close->Location = System::Drawing::Point(238, 347);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(138, 48);
			this->button_close->TabIndex = 11;
			this->button_close->Text = L"Έξοδος";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &Intro::button_close_Click);
			// 
			// button_about
			// 
			this->button_about->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button_about->Location = System::Drawing::Point(238, 293);
			this->button_about->Name = L"button_about";
			this->button_about->Size = System::Drawing::Size(138, 48);
			this->button_about->TabIndex = 10;
			this->button_about->Text = L"Πληροφορίες";
			this->button_about->UseVisualStyleBackColor = true;
			this->button_about->Click += gcnew System::EventHandler(this, &Intro::button_about_Click);
			// 
			// button_how_to_play
			// 
			this->button_how_to_play->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button_how_to_play->Location = System::Drawing::Point(238, 239);
			this->button_how_to_play->Name = L"button_how_to_play";
			this->button_how_to_play->Size = System::Drawing::Size(138, 48);
			this->button_how_to_play->TabIndex = 9;
			this->button_how_to_play->Text = L"Οδηγίες Παιχνιδιού";
			this->button_how_to_play->UseVisualStyleBackColor = true;
			this->button_how_to_play->Click += gcnew System::EventHandler(this, &Intro::button_how_to_play_Click);
			// 
			// button_new_game
			// 
			this->button_new_game->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button_new_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button_new_game->Location = System::Drawing::Point(238, 185);
			this->button_new_game->Name = L"button_new_game";
			this->button_new_game->Size = System::Drawing::Size(138, 48);
			this->button_new_game->TabIndex = 8;
			this->button_new_game->Text = L"Νεο Παιχνίδι";
			this->button_new_game->UseVisualStyleBackColor = false;
			this->button_new_game->Click += gcnew System::EventHandler(this, &Intro::button_new_game_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(162, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 73);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Κρεμάλα";
			// 
			// Intro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 740);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->button_about);
			this->Controls->Add(this->button_how_to_play);
			this->Controls->Add(this->button_new_game);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(640, 779);
			this->MinimumSize = System::Drawing::Size(640, 779);
			this->Name = L"Intro";
			this->Text = L"Project Hangman";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_about_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("’σκηση 2-4"+"\n" + "\n" + "Έκδοση v3.4" + "\n" + "\n" + "Γιώργος Σαραπτσής - Βενέτης" + "\n" + "\n" + "4610", "Project Hangman", MessageBoxButtons::OK);
	}
	private: System::Void button_how_to_play_Click(System::Object^ sender, System::EventArgs^ e) {
		How_to_Play^ frm = gcnew How_to_Play;
		frm->ShowDialog();
	}
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button_new_game_Click(System::Object^ sender, System::EventArgs^ e) {
		Game^ frm = gcnew Game;
		frm->ShowDialog();
	}
	private: System::Void button_new_game_Hover(System::Object^ sender, System::EventArgs^ e) {
		button_new_game->Text = ("START");
	}
};
}
