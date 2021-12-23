﻿#pragma once
#include <String>
#include "../lab3-stack/Calculator.h"
#include <msclr/marshal_cppstd.h>
namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	protected:











	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;



	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
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
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button22;



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
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::LavenderBlush;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button13->Location = System::Drawing::Point(273, 390);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 40);
			this->button13->TabIndex = 12;
			this->button13->Text = L"^";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::LavenderBlush;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button14->Location = System::Drawing::Point(273, 436);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(167, 80);
			this->button14->TabIndex = 13;
			this->button14->Text = L"=";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::LavenderBlush;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button18->Location = System::Drawing::Point(360, 390);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 40);
			this->button18->TabIndex = 17;
			this->button18->Text = L"√";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::LavenderBlush;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button19->Location = System::Drawing::Point(15, 218);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(140, 40);
			this->button19->TabIndex = 18;
			this->button19->Text = L"sin";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::LavenderBlush;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button20->Location = System::Drawing::Point(157, 218);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(140, 40);
			this->button20->TabIndex = 19;
			this->button20->Text = L"cos";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::LavenderBlush;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button21->Location = System::Drawing::Point(300, 218);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(140, 40);
			this->button21->TabIndex = 20;
			this->button21->Text = L"tan";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LavenderBlush;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(15, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(425, 200);
			this->panel1->TabIndex = 21;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LavenderBlush;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(304, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"            ";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox1->Location = System::Drawing::Point(0, 162);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(425, 38);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LavenderBlush;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Location = System::Drawing::Point(15, 436);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 80);
			this->button1->TabIndex = 22;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LavenderBlush;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Location = System::Drawing::Point(101, 436);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 80);
			this->button2->TabIndex = 23;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LavenderBlush;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button3->Location = System::Drawing::Point(187, 436);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 80);
			this->button3->TabIndex = 24;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LavenderBlush;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button4->Location = System::Drawing::Point(15, 350);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 80);
			this->button4->TabIndex = 25;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LavenderBlush;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button5->Location = System::Drawing::Point(101, 350);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 80);
			this->button5->TabIndex = 26;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LavenderBlush;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button6->Location = System::Drawing::Point(187, 350);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 80);
			this->button6->TabIndex = 27;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LavenderBlush;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button7->Location = System::Drawing::Point(15, 264);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 80);
			this->button7->TabIndex = 28;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LavenderBlush;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button8->Location = System::Drawing::Point(101, 264);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 80);
			this->button8->TabIndex = 29;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::LavenderBlush;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button9->Location = System::Drawing::Point(187, 264);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 80);
			this->button9->TabIndex = 30;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::LavenderBlush;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button10->Location = System::Drawing::Point(274, 264);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 40);
			this->button10->TabIndex = 31;
			this->button10->Text = L"+";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::LavenderBlush;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button11->Location = System::Drawing::Point(273, 304);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 40);
			this->button11->TabIndex = 32;
			this->button11->Text = L"*";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::LavenderBlush;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button12->Location = System::Drawing::Point(273, 350);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 40);
			this->button12->TabIndex = 33;
			this->button12->Text = L"(";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::LavenderBlush;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button15->Location = System::Drawing::Point(360, 264);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 40);
			this->button15->TabIndex = 34;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::LavenderBlush;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button16->Location = System::Drawing::Point(360, 304);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 40);
			this->button16->TabIndex = 35;
			this->button16->Text = L"/";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::LavenderBlush;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button17->Location = System::Drawing::Point(360, 350);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 40);
			this->button17->TabIndex = 36;
			this->button17->Text = L")";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::LavenderBlush;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button22->Location = System::Drawing::Point(101, 522);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(80, 80);
			this->button22->TabIndex = 37;
			this->button22->Text = L"0";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Pink;
			this->ClientSize = System::Drawing::Size(459, 606);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
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
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += "3";
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	string infix;
	
	infix = msclr::interop::marshal_as<string>(textBox1->Text);
	TCalculator calc;
	calc.SetExpr(infix);
	double res;
	try {
		res = calc.Calc();
		label1->Text = Convert::ToString(res);
	}
	catch (int a) {
		label1->Text = "uncorrect";
	}
	catch (char b) {
		label1->Text = "uncorrect";
	}
	;
	textBox1->Text = "";
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "1";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "2";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "8";
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "0";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "9";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "+";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "-";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "*";
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "/";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "(";
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += ")";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "^";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "^(1/2)";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "sin(";
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "cos(";
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "tan(";
}
};
}
