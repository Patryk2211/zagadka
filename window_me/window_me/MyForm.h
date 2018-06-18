#pragma once
#include "Home.h"
#include "Home1.h"
#include "Home2.h"
#include "Home3.h"
#include "Home4.h"
#include "Home5.h"
#include <iostream>
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>

int Home::licznik;

namespace windowme {
	Home1 house1; 
	Home1 house1P("Norweg", "Zolty", "Woda", "Sliwki", "Koty");
	Home2 house2;
	Home2 house2P("Dunczyk", "Niebieski", "Herbata", "Jablka", "Konie");
	Home3 house3;
	Home3 house3P("Anglik", "Czerwony", "Mleko", "Banany", "Ptaki");
	Home4 house4;
	Home4 house4P("Niemiec", "Zielony", "Kawa", "Pomarancze", "Rybki");
	Home5 house5;
	Home5 house5P("Szwed", "Bialy", "Piwo", "Gruszki", "Psy");

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	private: System::Windows::Forms::ComboBox^  comboBox10;
	private: System::Windows::Forms::ComboBox^  comboBox11;
	private: System::Windows::Forms::ComboBox^  comboBox12;
	private: System::Windows::Forms::ComboBox^  comboBox13;
	private: System::Windows::Forms::ComboBox^  comboBox14;
	private: System::Windows::Forms::ComboBox^  comboBox15;
	private: System::Windows::Forms::ComboBox^  comboBox16;
	private: System::Windows::Forms::ComboBox^  comboBox17;
	private: System::Windows::Forms::ComboBox^  comboBox18;
	private: System::Windows::Forms::ComboBox^  comboBox19;
	private: System::Windows::Forms::ComboBox^  comboBox20;
	private: System::Windows::Forms::ComboBox^  comboBox21;
	private: System::Windows::Forms::ComboBox^  comboBox22;
	private: System::Windows::Forms::ComboBox^  comboBox23;
	private: System::Windows::Forms::ComboBox^  comboBox24;
	private: System::Windows::Forms::ComboBox^  comboBox25;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;



	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label29;






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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox16 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox17 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox18 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox19 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox20 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox21 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox22 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox23 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox24 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox25 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(397, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 28);
			this->label2->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->Location = System::Drawing::Point(140, 297);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(140, 327);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(140, 357);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 24);
			this->comboBox3->TabIndex = 4;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(140, 387);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 24);
			this->comboBox4->TabIndex = 5;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(140, 417);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 24);
			this->comboBox5->TabIndex = 6;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox5_SelectedIndexChanged);
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(267, 417);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 24);
			this->comboBox6->TabIndex = 11;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox6_SelectedIndexChanged);
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(267, 387);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(121, 24);
			this->comboBox7->TabIndex = 10;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox7_SelectedIndexChanged);
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(267, 357);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(121, 24);
			this->comboBox8->TabIndex = 9;
			this->comboBox8->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox8_SelectedIndexChanged);
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(267, 327);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(121, 24);
			this->comboBox9->TabIndex = 8;
			this->comboBox9->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox9_SelectedIndexChanged);
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(267, 297);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(121, 24);
			this->comboBox10->TabIndex = 7;
			this->comboBox10->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox10_SelectedIndexChanged);
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Location = System::Drawing::Point(394, 417);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(121, 24);
			this->comboBox11->TabIndex = 16;
			this->comboBox11->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox11_SelectedIndexChanged);
			// 
			// comboBox12
			// 
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Location = System::Drawing::Point(394, 387);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(121, 24);
			this->comboBox12->TabIndex = 15;
			this->comboBox12->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox12_SelectedIndexChanged);
			// 
			// comboBox13
			// 
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Location = System::Drawing::Point(394, 357);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(121, 24);
			this->comboBox13->TabIndex = 14;
			this->comboBox13->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox13_SelectedIndexChanged);
			// 
			// comboBox14
			// 
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Location = System::Drawing::Point(394, 327);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(121, 24);
			this->comboBox14->TabIndex = 13;
			this->comboBox14->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox14_SelectedIndexChanged);
			// 
			// comboBox15
			// 
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Location = System::Drawing::Point(394, 297);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(121, 24);
			this->comboBox15->TabIndex = 12;
			this->comboBox15->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox15_SelectedIndexChanged);
			// 
			// comboBox16
			// 
			this->comboBox16->FormattingEnabled = true;
			this->comboBox16->Location = System::Drawing::Point(521, 417);
			this->comboBox16->Name = L"comboBox16";
			this->comboBox16->Size = System::Drawing::Size(121, 24);
			this->comboBox16->TabIndex = 21;
			this->comboBox16->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox16_SelectedIndexChanged);
			// 
			// comboBox17
			// 
			this->comboBox17->FormattingEnabled = true;
			this->comboBox17->Location = System::Drawing::Point(521, 387);
			this->comboBox17->Name = L"comboBox17";
			this->comboBox17->Size = System::Drawing::Size(121, 24);
			this->comboBox17->TabIndex = 20;
			this->comboBox17->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox17_SelectedIndexChanged);
			// 
			// comboBox18
			// 
			this->comboBox18->FormattingEnabled = true;
			this->comboBox18->Location = System::Drawing::Point(521, 357);
			this->comboBox18->Name = L"comboBox18";
			this->comboBox18->Size = System::Drawing::Size(121, 24);
			this->comboBox18->TabIndex = 19;
			this->comboBox18->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox18_SelectedIndexChanged);
			// 
			// comboBox19
			// 
			this->comboBox19->FormattingEnabled = true;
			this->comboBox19->Location = System::Drawing::Point(521, 327);
			this->comboBox19->Name = L"comboBox19";
			this->comboBox19->Size = System::Drawing::Size(121, 24);
			this->comboBox19->TabIndex = 18;
			this->comboBox19->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox19_SelectedIndexChanged);
			// 
			// comboBox20
			// 
			this->comboBox20->FormattingEnabled = true;
			this->comboBox20->Location = System::Drawing::Point(521, 297);
			this->comboBox20->Name = L"comboBox20";
			this->comboBox20->Size = System::Drawing::Size(121, 24);
			this->comboBox20->TabIndex = 17;
			this->comboBox20->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox20_SelectedIndexChanged);
			// 
			// comboBox21
			// 
			this->comboBox21->FormattingEnabled = true;
			this->comboBox21->Location = System::Drawing::Point(648, 417);
			this->comboBox21->Name = L"comboBox21";
			this->comboBox21->Size = System::Drawing::Size(121, 24);
			this->comboBox21->TabIndex = 26;
			this->comboBox21->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox21_SelectedIndexChanged);
			// 
			// comboBox22
			// 
			this->comboBox22->FormattingEnabled = true;
			this->comboBox22->Location = System::Drawing::Point(648, 387);
			this->comboBox22->Name = L"comboBox22";
			this->comboBox22->Size = System::Drawing::Size(121, 24);
			this->comboBox22->TabIndex = 25;
			this->comboBox22->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox22_SelectedIndexChanged);
			// 
			// comboBox23
			// 
			this->comboBox23->FormattingEnabled = true;
			this->comboBox23->Location = System::Drawing::Point(648, 357);
			this->comboBox23->Name = L"comboBox23";
			this->comboBox23->Size = System::Drawing::Size(121, 24);
			this->comboBox23->TabIndex = 24;
			this->comboBox23->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox23_SelectedIndexChanged);
			// 
			// comboBox24
			// 
			this->comboBox24->FormattingEnabled = true;
			this->comboBox24->Location = System::Drawing::Point(648, 327);
			this->comboBox24->Name = L"comboBox24";
			this->comboBox24->Size = System::Drawing::Size(121, 24);
			this->comboBox24->TabIndex = 23;
			this->comboBox24->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox24_SelectedIndexChanged);
			// 
			// comboBox25
			// 
			this->comboBox25->FormattingEnabled = true;
			this->comboBox25->Location = System::Drawing::Point(648, 297);
			this->comboBox25->Name = L"comboBox25";
			this->comboBox25->Size = System::Drawing::Size(121, 24);
			this->comboBox25->TabIndex = 22;
			this->comboBox25->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox25_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(4, 298);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(119, 23);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Narodowoœæ: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(4, 328);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(115, 23);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Kolor domu: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(4, 358);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(76, 23);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Co pije: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(5, 388);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label6->Size = System::Drawing::Size(88, 23);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Co zjada: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(4, 418);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label7->Size = System::Drawing::Size(101, 23);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Co hoduje: ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(783, 297);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 38);
			this->button1->TabIndex = 32;
			this->button1->Text = L"SprawdŸ!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(783, 350);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 38);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Zapisz wyniki";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(135, 258);
			this->label8->Name = L"label8";
			this->label8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label8->Size = System::Drawing::Size(96, 23);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Dom nr 1: ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(262, 258);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label9->Size = System::Drawing::Size(96, 23);
			this->label9->TabIndex = 35;
			this->label9->Text = L"Dom nr 2: ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(389, 258);
			this->label10->Name = L"label10";
			this->label10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label10->Size = System::Drawing::Size(91, 23);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Dom nr 3:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(516, 258);
			this->label11->Name = L"label11";
			this->label11->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label11->Size = System::Drawing::Size(91, 23);
			this->label11->TabIndex = 37;
			this->label11->Text = L"Dom nr 4:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(643, 258);
			this->label12->Name = L"label12";
			this->label12->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label12->Size = System::Drawing::Size(91, 23);
			this->label12->TabIndex = 38;
			this->label12->Text = L"Dom nr 5:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(26, 75);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(363, 19);
			this->label13->TabIndex = 39;
			this->label13->Text = L"1. Norweg zamieszkuje pierwszy dom (licz¹c od lewej).";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(27, 96);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(262, 19);
			this->label14->TabIndex = 40;
			this->label14->Text = L"2. Anglik mieszka w czerwonym domu.";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(27, 117);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(387, 19);
			this->label15->TabIndex = 41;
			this->label15->Text = L"3. Zielony dom znajduje siê po lewej stronie domu bia³ego.";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(27, 138);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(166, 19);
			this->label16->TabIndex = 42;
			this->label16->Text = L"4. Duñczyk pija herbatê.";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(26, 159);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(321, 19);
			this->label17->TabIndex = 43;
			this->label17->Text = L"5. Zjadacz jab³ek mieszka obok hodowcy kotów.";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(27, 180);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(279, 19);
			this->label18->TabIndex = 44;
			this->label18->Text = L"6. Mieszkaniec ¿ó³tego domu zjada œliwki.";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(26, 201);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(203, 19);
			this->label19->TabIndex = 45;
			this->label19->Text = L"7. Niemiec zjada pomarañcze.";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(26, 222);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(301, 19);
			this->label20->TabIndex = 46;
			this->label20->Text = L"8. Mieszkaniec œrodkowego domu pija mleko.";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(501, 201);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(242, 19);
			this->label22->TabIndex = 53;
			this->label22->Text = L"15. W zielonym domu pija siê kawe.";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(502, 180);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(204, 19);
			this->label23->TabIndex = 52;
			this->label23->Text = L"14. Zjadacz gruszek pija piwo.";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(501, 159);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(315, 19);
			this->label24->TabIndex = 51;
			this->label24->Text = L"13. Hodowca koni mieszka obok ¿ó³tego domu.";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(502, 138);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(305, 19);
			this->label25->TabIndex = 50;
			this->label25->Text = L"12. Norweg mieszka obok niebieskiego domu.";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(502, 117);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(151, 19);
			this->label26->TabIndex = 49;
			this->label26->Text = L"11. Szwed hoduje psy.";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(502, 96);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(234, 19);
			this->label27->TabIndex = 48;
			this->label27->Text = L"10. Zjadacz bananów hoduje ptaki.";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(503, 75);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(309, 19);
			this->label28->TabIndex = 47;
			this->label28->Text = L"9. Zjadacz jab³ek ma s¹siada, który pija wodê.";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label30->ForeColor = System::Drawing::Color::Yellow;
			this->label30->Location = System::Drawing::Point(133, 485);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(281, 32);
			this->label30->TabIndex = 57;
			this->label30->Text = L"Twój wynik wynosi: ";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(421, 485);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(78, 32);
			this->label31->TabIndex = 58;
			this->label31->Text = L".......";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(491, 485);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(32, 32);
			this->label32->TabIndex = 59;
			this->label32->Text = L"\?";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(22, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(346, 46);
			this->label1->TabIndex = 60;
			this->label1->Text = L"Kto hoduje rybki\?";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label21->ForeColor = System::Drawing::Color::Yellow;
			this->label21->Location = System::Drawing::Point(504, 224);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(391, 17);
			this->label21->TabIndex = 62;
			this->label21->Text = L"Pamiêtaj! Zanim sprawdzisz uzupe³nij wszystkie pola.";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(783, 403);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 38);
			this->button3->TabIndex = 63;
			this->button3->Text = L"Wyczyœæ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label29->ForeColor = System::Drawing::Color::Yellow;
			this->label29->Location = System::Drawing::Point(538, 498);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(0, 17);
			this->label29->TabIndex = 64;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkRed;
			this->ClientSize = System::Drawing::Size(942, 533);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox21);
			this->Controls->Add(this->comboBox22);
			this->Controls->Add(this->comboBox23);
			this->Controls->Add(this->comboBox24);
			this->Controls->Add(this->comboBox25);
			this->Controls->Add(this->comboBox16);
			this->Controls->Add(this->comboBox17);
			this->Controls->Add(this->comboBox18);
			this->Controls->Add(this->comboBox19);
			this->Controls->Add(this->comboBox20);
			this->Controls->Add(this->comboBox11);
			this->Controls->Add(this->comboBox12);
			this->Controls->Add(this->comboBox13);
			this->Controls->Add(this->comboBox14);
			this->Controls->Add(this->comboBox15);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->comboBox8);
			this->Controls->Add(this->comboBox9);
			this->Controls->Add(this->comboBox10);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Zagadka Einsteina";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		comboBox1->Items->Add("Anglik");
		comboBox1->Items->Add("Dunczyk");
		comboBox1->Items->Add("Niemiec");
		comboBox1->Items->Add("Norweg");
		comboBox1->Items->Add("Szwed");

		comboBox10->Items->Add("Anglik");
		comboBox10->Items->Add("Dunczyk");
		comboBox10->Items->Add("Niemiec");
		comboBox10->Items->Add("Norweg");
		comboBox10->Items->Add("Szwed");

		comboBox15->Items->Add("Anglik");
		comboBox15->Items->Add("Dunczyk");
		comboBox15->Items->Add("Niemiec");
		comboBox15->Items->Add("Norweg");
		comboBox15->Items->Add("Szwed");

		comboBox20->Items->Add("Anglik");
		comboBox20->Items->Add("Dunczyk");
		comboBox20->Items->Add("Niemiec");
		comboBox20->Items->Add("Norweg");
		comboBox20->Items->Add("Szwed");

		comboBox25->Items->Add("Anglik");
		comboBox25->Items->Add("Dunczyk");
		comboBox25->Items->Add("Niemiec");
		comboBox25->Items->Add("Norweg");
		comboBox25->Items->Add("Szwed");

		comboBox2->Items->Add("Bialy");
		comboBox2->Items->Add("Czerwony");
		comboBox2->Items->Add("Niebieski");
		comboBox2->Items->Add("Zielony");
		comboBox2->Items->Add("Zolty");

		comboBox9->Items->Add("Bialy");
		comboBox9->Items->Add("Czerwony");
		comboBox9->Items->Add("Niebieski");
		comboBox9->Items->Add("Zielony");
		comboBox9->Items->Add("Zolty");

		comboBox14->Items->Add("Bialy");
		comboBox14->Items->Add("Czerwony");
		comboBox14->Items->Add("Niebieski");
		comboBox14->Items->Add("Zielony");
		comboBox14->Items->Add("Zolty");

		comboBox19->Items->Add("Bialy");
		comboBox19->Items->Add("Czerwony");
		comboBox19->Items->Add("Niebieski");
		comboBox19->Items->Add("Zielony");
		comboBox19->Items->Add("Zolty");

		comboBox24->Items->Add("Bialy");
		comboBox24->Items->Add("Czerwony");
		comboBox24->Items->Add("Niebieski");
		comboBox24->Items->Add("Zielony");
		comboBox24->Items->Add("Zolty");

		comboBox3->Items->Add("Kawa");
		comboBox3->Items->Add("Herbata");
		comboBox3->Items->Add("Mleko");
		comboBox3->Items->Add("Piwo");
		comboBox3->Items->Add("Woda");

		comboBox8->Items->Add("Kawa");
		comboBox8->Items->Add("Herbata");
		comboBox8->Items->Add("Mleko");
		comboBox8->Items->Add("Piwo");
		comboBox8->Items->Add("Woda");

		comboBox13->Items->Add("Kawa");
		comboBox13->Items->Add("Herbata");
		comboBox13->Items->Add("Mleko");
		comboBox13->Items->Add("Piwo");
		comboBox13->Items->Add("Woda");

		comboBox18->Items->Add("Kawa");
		comboBox18->Items->Add("Herbata");
		comboBox18->Items->Add("Mleko");
		comboBox18->Items->Add("Piwo");
		comboBox18->Items->Add("Woda");

		comboBox23->Items->Add("Kawa");
		comboBox23->Items->Add("Herbata");
		comboBox23->Items->Add("Mleko");
		comboBox23->Items->Add("Piwo");
		comboBox23->Items->Add("Woda");

		comboBox4->Items->Add("Banany");
		comboBox4->Items->Add("Gruszki");
		comboBox4->Items->Add("Jablka");
		comboBox4->Items->Add("Pomarancze");
		comboBox4->Items->Add("Sliwki");

		comboBox7->Items->Add("Banany");
		comboBox7->Items->Add("Gruszki");
		comboBox7->Items->Add("Jablka");
		comboBox7->Items->Add("Pomarancze");
		comboBox7->Items->Add("Sliwki");

		comboBox12->Items->Add("Banany");
		comboBox12->Items->Add("Gruszki");
		comboBox12->Items->Add("Jablka");
		comboBox12->Items->Add("Pomarancze");
		comboBox12->Items->Add("Sliwki");

		comboBox17->Items->Add("Banany");
		comboBox17->Items->Add("Gruszki");
		comboBox17->Items->Add("Jablka");
		comboBox17->Items->Add("Pomarancze");
		comboBox17->Items->Add("Sliwki");

		comboBox22->Items->Add("Banany");
		comboBox22->Items->Add("Gruszki");
		comboBox22->Items->Add("Jablka");
		comboBox22->Items->Add("Pomarancze");
		comboBox22->Items->Add("Sliwki");

		comboBox5->Items->Add("Konie");
		comboBox5->Items->Add("Koty");
		comboBox5->Items->Add("Psy");
		comboBox5->Items->Add("Ptaki");
		comboBox5->Items->Add("Rybki");

		comboBox6->Items->Add("Konie");
		comboBox6->Items->Add("Koty");
		comboBox6->Items->Add("Psy");
		comboBox6->Items->Add("Ptaki");
		comboBox6->Items->Add("Rybki");

		comboBox11->Items->Add("Konie");
		comboBox11->Items->Add("Koty");
		comboBox11->Items->Add("Psy");
		comboBox11->Items->Add("Ptaki");
		comboBox11->Items->Add("Rybki");

		comboBox16->Items->Add("Konie");
		comboBox16->Items->Add("Koty");
		comboBox16->Items->Add("Psy");
		comboBox16->Items->Add("Ptaki");
		comboBox16->Items->Add("Rybki");

		comboBox21->Items->Add("Konie");
		comboBox21->Items->Add("Koty");
		comboBox21->Items->Add("Psy");
		comboBox21->Items->Add("Ptaki");
		comboBox21->Items->Add("Rybki");
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}






















			 


private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}	
private: System::Void comboBox10_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox15_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox20_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox25_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox9_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox14_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox19_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox24_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox23_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox13_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox18_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox8_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox21_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox12_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox17_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox22_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox11_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox16_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	try
	{
		if (comboBox1->SelectedIndex < 0 || comboBox9->SelectedIndex < 0 || comboBox17->SelectedIndex < 0 ||
			comboBox2->SelectedIndex < 0 || comboBox10->SelectedIndex < 0 || comboBox18->SelectedIndex < 0 ||
			comboBox3->SelectedIndex < 0 || comboBox11->SelectedIndex < 0 || comboBox19->SelectedIndex < 0 ||
			comboBox4->SelectedIndex < 0 || comboBox12->SelectedIndex < 0 || comboBox20->SelectedIndex < 0 ||
			comboBox5->SelectedIndex < 0 || comboBox13->SelectedIndex < 0 || comboBox21->SelectedIndex < 0 ||
			comboBox6->SelectedIndex < 0 || comboBox14->SelectedIndex < 0 || comboBox22->SelectedIndex < 0 ||
			comboBox7->SelectedIndex < 0 || comboBox15->SelectedIndex < 0 || comboBox23->SelectedIndex < 0 ||
			comboBox8->SelectedIndex < 0 || comboBox16->SelectedIndex < 0 || comboBox24->SelectedIndex < 0 ||
			comboBox25->SelectedIndex < 0)
		throw 0;

		std::string national_1 = msclr::interop::marshal_as<std::string>((comboBox1->SelectedItem->ToString()));
		house1.setNational(national_1);
		std::string national_2 = msclr::interop::marshal_as<std::string>((comboBox10->SelectedItem->ToString()));
		house2.setNational(national_2);
		std::string national_3 = msclr::interop::marshal_as<std::string>((comboBox15->SelectedItem->ToString()));
		house3.setNational(national_3);
		std::string national_4 = msclr::interop::marshal_as<std::string>((comboBox20->SelectedItem->ToString()));
		house4.setNational(national_4);
		std::string national_5 = msclr::interop::marshal_as<std::string>((comboBox25->SelectedItem->ToString()));
		house5.setNational(national_5);

		std::string color_1 = msclr::interop::marshal_as<std::string>((comboBox2->SelectedItem->ToString()));
		house1.setColor(color_1);
		std::string color_2 = msclr::interop::marshal_as<std::string>((comboBox9->SelectedItem->ToString()));
		house2.setColor(color_2);
		std::string color_3 = msclr::interop::marshal_as<std::string>((comboBox14->SelectedItem->ToString()));
		house3.setColor(color_3);
		std::string color_4 = msclr::interop::marshal_as<std::string>((comboBox19->SelectedItem->ToString()));
		house4.setColor(color_4);
		std::string color_5 = msclr::interop::marshal_as<std::string>((comboBox24->SelectedItem->ToString()));
		house5.setColor(color_5);

		std::string drink_1 = msclr::interop::marshal_as<std::string>((comboBox3->SelectedItem->ToString()));
		house1.setDrink(drink_1);
		std::string drink_2 = msclr::interop::marshal_as<std::string>((comboBox8->SelectedItem->ToString()));
		house2.setDrink(drink_2);
		std::string drink_3 = msclr::interop::marshal_as<std::string>((comboBox13->SelectedItem->ToString()));
		house3.setDrink(drink_3);
		std::string drink_4 = msclr::interop::marshal_as<std::string>((comboBox18->SelectedItem->ToString()));
		house4.setDrink(drink_4);
		std::string drink_5 = msclr::interop::marshal_as<std::string>((comboBox23->SelectedItem->ToString()));
		house5.setDrink(drink_5);

		std::string food_1 = msclr::interop::marshal_as<std::string>((comboBox4->SelectedItem->ToString()));
		house1.setFood(food_1);
		std::string food_2 = msclr::interop::marshal_as<std::string>((comboBox7->SelectedItem->ToString()));
		house2.setFood(food_2);
		std::string food_3 = msclr::interop::marshal_as<std::string>((comboBox12->SelectedItem->ToString()));
		house3.setFood(food_3);
		std::string food_4 = msclr::interop::marshal_as<std::string>((comboBox17->SelectedItem->ToString()));
		house4.setFood(food_4);
		std::string food_5 = msclr::interop::marshal_as<std::string>((comboBox22->SelectedItem->ToString()));
		house5.setFood(food_5);

		std::string breed_1 = msclr::interop::marshal_as<std::string>((comboBox5->SelectedItem->ToString()));
		house1.setBreed(breed_1);
		std::string breed_2 = msclr::interop::marshal_as<std::string>((comboBox6->SelectedItem->ToString()));
		house2.setBreed(breed_2);
		std::string breed_3 = msclr::interop::marshal_as<std::string>((comboBox11->SelectedItem->ToString()));
		house3.setBreed(breed_3);
		std::string breed_4 = msclr::interop::marshal_as<std::string>((comboBox16->SelectedItem->ToString()));
		house4.setBreed(breed_4);
		std::string breed_5 = msclr::interop::marshal_as<std::string>((comboBox21->SelectedItem->ToString()));
		house5.setBreed(breed_5);

		house1 == house1P;
		house2 == house2P;
		house3 == house3P;
		house4 == house4P;
		house5 == house5P;

		label31->Text = Convert::ToString(Home::licznik);
		label32->Text = "%";

		label21->Text = "Pamiêtaj! Zanim sprawdzisz uzupe³nij wszystkie pola.";
	}
	catch (int exception)
	{
		label21->Text = "Uzupe³nij wszystkie pola!!";
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	String^ fileName = "wyniki.txt";

	StreamWriter^ sw = gcnew StreamWriter(fileName);
	if (Home::licznik == 100)
	{
		sw->WriteLine("Rozwiazales zagadke!");;
		sw->WriteLine("Twoj wynik to: " + Home::licznik + "%.");
		sw->WriteLine("Data rozgrywki:");
		sw->WriteLine(DateTime::Now);
	}
	else
	{
		sw->WriteLine("Nie udalo Ci sie rozwiazac zagadki.");;
		sw->WriteLine("Twoj wynik to: " + Home::licznik + "%.");
		sw->WriteLine("Data rozgrywki:");
		sw->WriteLine(DateTime::Now);	
	}
	sw->Close();

	label29->Text = "Twój wyink zosta³y zapisane do pliku: wyniki.txt";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		comboBox1->SelectedIndex = -1;  
		comboBox2->SelectedIndex = -1;  
		comboBox3->SelectedIndex = -1;
		comboBox4->SelectedIndex = -1;
		comboBox5->SelectedIndex = -1;
		comboBox6->SelectedIndex = -1;  		
		comboBox7->SelectedIndex = -1;  
		comboBox8->SelectedIndex = -1;
		comboBox9->SelectedIndex = -1;
		comboBox10->SelectedIndex = -1;
		comboBox11->SelectedIndex = -1;
		comboBox12->SelectedIndex = -1;
		comboBox13->SelectedIndex = -1;
		comboBox14->SelectedIndex = -1;
		comboBox15->SelectedIndex = -1;
		comboBox16->SelectedIndex = -1;
		comboBox17->SelectedIndex = -1;
		comboBox18->SelectedIndex = -1;
		comboBox19->SelectedIndex = -1;
		comboBox20->SelectedIndex = -1;
		comboBox21->SelectedIndex = -1;
		comboBox22->SelectedIndex = -1;
		comboBox23->SelectedIndex = -1;
		comboBox24->SelectedIndex = -1;
		comboBox25->SelectedIndex = -1;

		label21->Text = "Pamiêtaj! Zanim sprawdzisz uzupe³nij wszystkie pola.";
		label31->Text = ".......";
		label32->Text = "?";
		label29->Text = "";
}
};
} 