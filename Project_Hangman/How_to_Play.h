#pragma once

namespace ProjectHangman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for How_to_Play
	/// </summary>
	public ref class How_to_Play : public System::Windows::Forms::Form
	{
	public:
		How_to_Play(void)
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
		~How_to_Play()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Label^ label4;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(161)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Location = System::Drawing::Point(149, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(226, 37);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Καλή Διασκέδαση!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label2->Location = System::Drawing::Point(104, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(343, 60);
			this->label2->TabIndex = 6;
			this->label2->Text = L"1. Ο Α παίκτης βάζει μια λέξη*\r\n2. Πατάει \" Έναρξη \"\r\n3. Ο Β παίκτης έχει 5 ζωές "
				L"για να βρει την λέξη";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label1->Location = System::Drawing::Point(86, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(332, 37);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Οδηγίες Παιχνιδιού";
			// 
			// button_close
			// 
			this->button_close->Cursor = System::Windows::Forms::Cursors::Default;
			this->button_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->button_close->Location = System::Drawing::Point(205, 384);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(99, 31);
			this->button_close->TabIndex = 4;
			this->button_close->Text = L"Έξοδος";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &How_to_Play::button_close_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(161)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(129, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(210, 75);
			this->label4->TabIndex = 8;
			this->label4->Text = L"ΠΡΟΣΟΧΗ\r\n* Η λέξη πρέπει να είναι : \r\n      στα Ελληνικά ,\r\n      με Κεφαλαία Γρα"
				L"μματα και με\r\n      μέγεθος από 3 ως 10 χαρακτήρες.";
			// 
			// How_to_Play
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(518, 477);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_close);
			this->MaximumSize = System::Drawing::Size(534, 516);
			this->MinimumSize = System::Drawing::Size(534, 516);
			this->Name = L"How_to_Play";
			this->Text = L"Project Hangman";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
