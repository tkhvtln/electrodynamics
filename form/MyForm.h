#pragma once
#include <cmath>
#include <vector>
#include "particle.h"

namespace form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace OpenTK;
	using namespace OpenTK::Graphics;
	using namespace OpenTK::Platform::Windows;
	using namespace OpenTK::Graphics::OpenGL;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: OpenTK::GLControl^  glControl1;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;


	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::ImageList^  imageList1;

































	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:




	protected:

	protected:



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->glControl1 = (gcnew OpenTK::GLControl());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// glControl1
			// 
			this->glControl1->BackColor = System::Drawing::Color::Black;
			this->glControl1->Location = System::Drawing::Point(195, 9);
			this->glControl1->Name = L"glControl1";
			this->glControl1->Size = System::Drawing::Size(676, 498);
			this->glControl1->TabIndex = 0;
			this->glControl1->VSync = false;
			this->glControl1->Load += gcnew System::EventHandler(this, &MyForm::glControl1_Load);
			this->glControl1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::glControl1_MouseDown);
			this->glControl1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::glControl1_MouseMove);
			this->glControl1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::glControl1_MouseUp);
			this->glControl1->MouseWheel += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::glControl1_MouseWheel);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(877, 9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(231, 100);
			this->panel1->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(140, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(73, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(80, 37);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(57, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->Text = L"от нас";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(17, 37);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(54, 17);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"к нам";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Магнитная индукция ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Вектор магнитной индукции";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label59);
			this->panel2->Controls->Add(this->radioButton4);
			this->panel2->Controls->Add(this->radioButton3);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(877, 115);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(231, 392);
			this->panel2->TabIndex = 2;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(105, 305);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(24, 13);
			this->label59->TabIndex = 14;
			this->label59->Text = L"0/3";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(188, 10);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(28, 17);
			this->radioButton4->TabIndex = 13;
			this->radioButton4->Text = L"-";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Checked = true;
			this->radioButton3->Location = System::Drawing::Point(140, 10);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(31, 17);
			this->radioButton3->TabIndex = 12;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"+";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(80, 321);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(140, 124);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(76, 20);
			this->textBox6->TabIndex = 10;
			this->textBox6->Text = L"90";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox6_KeyDown);
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(140, 94);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(76, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox5_KeyDown);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(140, 68);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(76, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox4_KeyDown);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(140, 41);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox3_KeyDown);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Location = System::Drawing::Point(17, 160);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(199, 100);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Координаты";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(47, 75);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(73, 20);
			this->textBox9->TabIndex = 13;
			this->textBox9->Text = L"0";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			this->textBox9->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox9_KeyDown);
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox9_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(47, 52);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(73, 20);
			this->textBox8->TabIndex = 12;
			this->textBox8->Text = L"0";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			this->textBox8->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox8_KeyDown);
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox8_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(47, 26);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(73, 20);
			this->textBox7->TabIndex = 11;
			this->textBox7->Text = L"0";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			this->textBox7->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox7_KeyDown);
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyPress);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 75);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Z";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 51);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Y";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 29);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"X";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 127);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Угол :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Скорость";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Масса";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Электрический заряд";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Знак заряда";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->label53);
			this->panel3->Controls->Add(this->label54);
			this->panel3->Controls->Add(this->label23);
			this->panel3->Controls->Add(this->label24);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->label19);
			this->panel3->Controls->Add(this->label20);
			this->panel3->Controls->Add(this->label21);
			this->panel3->Controls->Add(this->label22);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Location = System::Drawing::Point(12, 9);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(177, 164);
			this->panel3->TabIndex = 3;
			this->panel3->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(126, 131);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(38, 23);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(89, 77);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(13, 13);
			this->label53->TabIndex = 16;
			this->label53->Text = L"0";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(3, 77);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(38, 13);
			this->label54->TabIndex = 15;
			this->label54->Text = L"Угол :";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(89, 64);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(13, 13);
			this->label23->TabIndex = 14;
			this->label23->Text = L"0";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(3, 64);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(52, 13);
			this->label24->TabIndex = 13;
			this->label24->Text = L"Радиус : ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(45, 131);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(89, 103);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 11;
			this->label17->Text = L"0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(89, 90);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 10;
			this->label18->Text = L"0";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(89, 51);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(13, 13);
			this->label19->TabIndex = 9;
			this->label19->Text = L"0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(89, 38);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(13, 13);
			this->label20->TabIndex = 8;
			this->label20->Text = L"0";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(89, 25);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(13, 13);
			this->label21->TabIndex = 7;
			this->label21->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(89, 12);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(13, 13);
			this->label22->TabIndex = 6;
			this->label22->Text = L"0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 103);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(36, 13);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Шаг : ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(3, 90);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(88, 13);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Сила Лоренца : ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 51);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(64, 13);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Скорость : ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(3, 38);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Масса : ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 25);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(77, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Элек. заряд : ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 12);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(80, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Знак зарядя : ";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Controls->Add(this->label25);
			this->panel4->Controls->Add(this->label26);
			this->panel4->Controls->Add(this->label27);
			this->panel4->Controls->Add(this->label28);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->label29);
			this->panel4->Controls->Add(this->label30);
			this->panel4->Controls->Add(this->label31);
			this->panel4->Controls->Add(this->label32);
			this->panel4->Controls->Add(this->label33);
			this->panel4->Controls->Add(this->label34);
			this->panel4->Controls->Add(this->label35);
			this->panel4->Controls->Add(this->label36);
			this->panel4->Controls->Add(this->label37);
			this->panel4->Controls->Add(this->label38);
			this->panel4->Controls->Add(this->label39);
			this->panel4->Controls->Add(this->label40);
			this->panel4->Location = System::Drawing::Point(12, 176);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(177, 164);
			this->panel4->TabIndex = 4;
			this->panel4->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(126, 131);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(38, 23);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(89, 77);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(13, 13);
			this->label25->TabIndex = 16;
			this->label25->Text = L"0";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(3, 77);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(41, 13);
			this->label26->TabIndex = 15;
			this->label26->Text = L"Угол  :";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(89, 64);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(13, 13);
			this->label27->TabIndex = 14;
			this->label27->Text = L"0";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(3, 64);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(52, 13);
			this->label28->TabIndex = 13;
			this->label28->Text = L"Радиус : ";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(45, 131);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(89, 103);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(13, 13);
			this->label29->TabIndex = 11;
			this->label29->Text = L"0";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(89, 90);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(13, 13);
			this->label30->TabIndex = 10;
			this->label30->Text = L"0";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(89, 51);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(13, 13);
			this->label31->TabIndex = 9;
			this->label31->Text = L"0";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(89, 38);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(13, 13);
			this->label32->TabIndex = 8;
			this->label32->Text = L"0";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(89, 25);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(13, 13);
			this->label33->TabIndex = 7;
			this->label33->Text = L"0";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(89, 12);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(13, 13);
			this->label34->TabIndex = 6;
			this->label34->Text = L"0";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(3, 103);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(36, 13);
			this->label35->TabIndex = 5;
			this->label35->Text = L"Шаг : ";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(3, 90);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(88, 13);
			this->label36->TabIndex = 4;
			this->label36->Text = L"Сила Лоренца : ";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(3, 51);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(64, 13);
			this->label37->TabIndex = 3;
			this->label37->Text = L"Скорость : ";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(3, 38);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(49, 13);
			this->label38->TabIndex = 2;
			this->label38->Text = L"Масса : ";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(3, 25);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(77, 13);
			this->label39->TabIndex = 1;
			this->label39->Text = L"Элек. заряд : ";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(3, 12);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(80, 13);
			this->label40->TabIndex = 0;
			this->label40->Text = L"Знак зарядя : ";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->pictureBox3);
			this->panel5->Controls->Add(this->label41);
			this->panel5->Controls->Add(this->label42);
			this->panel5->Controls->Add(this->label43);
			this->panel5->Controls->Add(this->label44);
			this->panel5->Controls->Add(this->button4);
			this->panel5->Controls->Add(this->label45);
			this->panel5->Controls->Add(this->label46);
			this->panel5->Controls->Add(this->label47);
			this->panel5->Controls->Add(this->label48);
			this->panel5->Controls->Add(this->label49);
			this->panel5->Controls->Add(this->label50);
			this->panel5->Controls->Add(this->label51);
			this->panel5->Controls->Add(this->label52);
			this->panel5->Controls->Add(this->label55);
			this->panel5->Controls->Add(this->label56);
			this->panel5->Controls->Add(this->label57);
			this->panel5->Controls->Add(this->label58);
			this->panel5->Location = System::Drawing::Point(12, 343);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(177, 164);
			this->panel5->TabIndex = 17;
			this->panel5->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(126, 131);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(38, 23);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(89, 77);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(13, 13);
			this->label41->TabIndex = 16;
			this->label41->Text = L"0";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(3, 77);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(41, 13);
			this->label42->TabIndex = 15;
			this->label42->Text = L"Угол  :";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(89, 64);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(13, 13);
			this->label43->TabIndex = 14;
			this->label43->Text = L"0";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(3, 64);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(52, 13);
			this->label44->TabIndex = 13;
			this->label44->Text = L"Радиус : ";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(45, 131);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Удалить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(89, 103);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(13, 13);
			this->label45->TabIndex = 11;
			this->label45->Text = L"0";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(89, 90);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(13, 13);
			this->label46->TabIndex = 10;
			this->label46->Text = L"0";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(89, 51);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(13, 13);
			this->label47->TabIndex = 9;
			this->label47->Text = L"0";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(89, 38);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(13, 13);
			this->label48->TabIndex = 8;
			this->label48->Text = L"0";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(89, 25);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(13, 13);
			this->label49->TabIndex = 7;
			this->label49->Text = L"0";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(89, 12);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(13, 13);
			this->label50->TabIndex = 6;
			this->label50->Text = L"0";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(3, 103);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(36, 13);
			this->label51->TabIndex = 5;
			this->label51->Text = L"Шаг : ";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(3, 90);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(88, 13);
			this->label52->TabIndex = 4;
			this->label52->Text = L"Сила Лоренца : ";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(3, 51);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(64, 13);
			this->label55->TabIndex = 3;
			this->label55->Text = L"Скорость : ";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(3, 38);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(49, 13);
			this->label56->TabIndex = 2;
			this->label56->Text = L"Масса : ";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(3, 25);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(77, 13);
			this->label57->TabIndex = 1;
			this->label57->Text = L"Элек. заряд : ";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(3, 12);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(80, 13);
			this->label58->TabIndex = 0;
			this->label58->Text = L"Знак зарядя : ";
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"w514h3201380476829eye.png");
			this->imageList1->Images->SetKeyName(1, L"w514h3201380476829eye2.png");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1117, 513);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->glControl1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}

int iv = 0, ii = 0;
double xt = 0, yt = 0, zt = -300, rt = -35, py;
const int size = 3;
const int rd = 5;
bool glload = false, click = false, md = false, VB, ch;
const double PI = 3.14159265;
double B, q, m, v, al, x0, y0, z0;
particle* ve = new particle[size];

#pragma endregion

	//MAX SIZE = 3 !!!!!!!!!!

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (glload) {

			glControl1->Width = glControl1->Width + 1;
			glControl1->Width = glControl1->Width - 1;

			GL::MatrixMode(MatrixMode::Projection);
			GL::LoadIdentity();
			GL::Viewport(0, 0, glControl1->Width, glControl1->Height);
			GL::Clear(ClearBufferMask::ColorBufferBit | ClearBufferMask::DepthBufferBit);

			GL::MatrixMode(MatrixMode::Projection);
			GL::LoadIdentity();
			GL::Frustum(-100, 100, -100, 100, 100, 2000);
			GL::Translate(xt, yt, zt);
			GL::Rotate(rt, 1.0, 0.0, 0.0);
			GL::ClearColor(Color::Black);

			//Сетка
			GL::Color3(Color::Blue);
			GL::Begin(BeginMode::Lines);
			for (double i = -200; i <= 200; i += 10) {
				GL::Vertex3(i, 200.0, 0.0);
				GL::Vertex3(i, -200.0, 0.0);
			}

			for (double i = -200; i <= 200; i += 10) {
				GL::Vertex3(-200.0, i, 0.0);
				GL::Vertex3(200.0, i, 0.0);
			}
			GL::End(); 

			if (click) {

				if (radioButton1->Checked)
					VB = true;
				if (radioButton2->Checked)
					VB = false;
				
				if (textBox1->Text == "") 
					B = 0.0000001;
				else
					B = Convert::ToDouble((textBox1->Text));

				for (unsigned int j = 0; j < iv; j++) {

					ve[j].radius();
					ve[j].period();
					ve[j].step();
					ve[j].direction();
					ve[j].trajectory();
					ve[j].color();	
					ve[j].LForce();
					ve[j].init(VB, B);
					ve[j].ftr();

				
					for (int i = 1; i < ve[j].ii;  i++) {
						GL::PointSize(1);
						GL::Begin(BeginMode::Lines);
						GL::Color3(Color::White);
							GL::Vertex3(ve[j].trv[i].xv, ve[j].trv[i].yv, ve[j].trv[i].zv);
							GL::Vertex3(ve[j].trv[i + 1].xv, ve[j].trv[i + 1].yv, ve[j].trv[i + 1].zv);
						GL::End();
					}																							
					ve[j].ii++;

					//Частица
					GL::PointSize(10);
					GL::Begin(BeginMode::Points);
					GL::Color3(ve[j].red, ve[j].green, ve[j].blue);
					GL::Vertex3(ve[j].x, ve[j].y, ve[j].z0);  
					GL::End();

					if (ve[0].w) {
						if (ve[0].ch)
							label22->Text = "+";
						else
							label22->Text = "-";

						label21->Text = Convert::ToString(Math::Round(ve[0].q, rd));
						label20->Text = Convert::ToString(Math::Round(ve[0].m, rd));
						label19->Text = Convert::ToString(Math::Round(ve[0].v, rd));
						label23->Text = Convert::ToString(Math::Round(ve[0].r, rd));
						label53->Text = Convert::ToString(Math::Round(ve[0].al, rd));
						label18->Text = Convert::ToString(Math::Round(ve[0].F, rd));
						label17->Text = Convert::ToString(Math::Round(ve[0].h, rd));

						panel3->Visible = true;
					}

					if (ve[1].w) {
						if (ve[1].ch)
							label34->Text = "+";
						else
							label34->Text = "-";

						label33->Text = Convert::ToString(Math::Round(ve[1].q, rd));
						label32->Text = Convert::ToString(Math::Round(ve[1].m, rd));
						label31->Text = Convert::ToString(Math::Round(ve[1].v, rd));
						label27->Text = Convert::ToString(Math::Round(ve[1].r, rd));
						label25->Text = Convert::ToString(Math::Round(ve[1].al, rd));
						label30->Text = Convert::ToString(Math::Round(ve[1].F, rd));
						label29->Text = Convert::ToString(Math::Round(ve[1].h, rd));

						panel4->Visible = true;
					}

					if (ve[2].w) {
						if (ve[2].ch)
							label50->Text = "+";
						else
							label50->Text = "-";

						label49->Text = Convert::ToString(Math::Round(ve[2].q, rd));
						label48->Text = Convert::ToString(Math::Round(ve[2].m, rd));
						label47->Text = Convert::ToString(Math::Round(ve[2].v, rd));
						label43->Text = Convert::ToString(Math::Round(ve[2].r, rd));
						label41->Text = Convert::ToString(Math::Round(ve[2].al, rd));
						label46->Text = Convert::ToString(Math::Round(ve[2].F, rd));
						label45->Text = Convert::ToString(Math::Round(ve[2].h, rd));

						panel5->Visible = true;
					}

				}

				label59->Text = Convert::ToString((iv)) + "/3";
			}
			
			if (ve[0].sh) {
				xt = -ve[0].x0;
				yt = -ve[0].y0;
				zt = -ve[0].z0 - ve[0].r - 130;
			}

			if (ve[1].sh) {
				xt = -ve[1].x0;
				yt = -ve[1].y0;
				zt = -ve[1].z0 - ve[1].r - 130;
			}

			if (ve[2].sh) {
				xt = -ve[2].x0;
				yt = -ve[2].y0;
				zt = -ve[2].z0 - ve[2].r - 130;
			}

			glControl1->SwapBuffers();
			glControl1->Invalidate();
		}
	}

	private: System::Void glControl1_Load(System::Object^  sender, System::EventArgs^  e) {
		glload = true;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		click = true;

		if (radioButton1->Checked)
			VB = true;
		if (radioButton2->Checked)
			VB = false;

		if (radioButton3->Checked)
			ch = true;
		if (radioButton4->Checked)
			ch = false;

		B = Convert::ToDouble((textBox1->Text));

		q = Convert::ToDouble((textBox3->Text));
		m = Convert::ToDouble((textBox4->Text));
		v = Convert::ToDouble((textBox5->Text));
		al = Convert::ToDouble((textBox6->Text));
		x0 = Convert::ToDouble((textBox7->Text));
		y0 = Convert::ToDouble((textBox8->Text));
		z0 = Convert::ToDouble((textBox9->Text));

		if (iv < size) {
			ve[iv].init(ch, VB, B, q, m, v, al, x0, y0, z0);
			ve[iv].w = true;
			++iv;
		}
	}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == ""  || textBox9->Text == "")
		button1->Visible = false;
	else
		button1->Visible = true;

	if (textBox1->Text == "00") {
		textBox1->Text = "0";
		textBox1->SelectionStart = textBox1->Text->Length;
	}

	if (textBox1->Text == "--") {
		textBox1->Text = "-";
		textBox1->SelectionStart = textBox1->Text->Length;
	}

	if (textBox1->Text == ".") {
		textBox1->Text = "";
		textBox1->SelectionStart = textBox1->Text->Length;
	}
}

private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox9->Text == "")
		button1->Visible = false;
	else
		button1->Visible = true;

	if (textBox3->Text == "00") {
		textBox3->Text = "0";
		textBox3->SelectionStart = textBox3->Text->Length;
	}

	if (textBox3->Text == "--") {
		textBox3->Text = "-";
		textBox3->SelectionStart = textBox3->Text->Length;
	}

	if (textBox3->Text == ".") {
		textBox3->Text = "";
		textBox3->SelectionStart = textBox3->Text->Length;
	}
}

private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox9->Text == "")
		button1->Visible = false;
	else
		button1->Visible = true;

	if (textBox4->Text == "00") {
		textBox4->Text = "0";
		textBox4->SelectionStart = textBox4->Text->Length;
	}

	if (textBox4->Text == "--") {
		textBox4->Text = "-";
		textBox4->SelectionStart = textBox4->Text->Length;
	}

	if (textBox4->Text == ".") {
		textBox4->Text = "";
		textBox4->SelectionStart = textBox4->Text->Length;
	}
}

private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox9->Text == "")
		button1->Visible = false;
	else
		button1->Visible = true;

	if (textBox5->Text == "00") {
		textBox5->Text = "0";
		textBox5->SelectionStart = textBox5->Text->Length;
	}

	if (textBox5->Text == "--") {
		textBox5->Text = "-";
		textBox5->SelectionStart = textBox5->Text->Length;
	}

	if (textBox5->Text == ".") {
		textBox5->Text = "";
		textBox5->SelectionStart = textBox5->Text->Length;
	}
}

private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox9->Text == "")
		button1->Visible = false;
	else
		button1->Visible = true;

	if (textBox6->Text == "00") {
		textBox6->Text = "0";
		textBox6->SelectionStart = textBox6->Text->Length;
	}

	if (textBox6->Text == "--") {
		textBox6->Text = "-";
		textBox6->SelectionStart = textBox6->Text->Length;
	}

	if (textBox6->Text == ".") {
		textBox6->Text = "";
		textBox6->SelectionStart = textBox6->Text->Length;
	}
}

private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox9->Text == "")
		button1->Visible = false;
	else
		button1->Visible = true;

	if (textBox7->Text == "00") {
		textBox7->Text = "0";
		textBox7->SelectionStart = textBox7->Text->Length;
	}

	if (textBox7->Text == "--") {
		textBox7->Text = "-";
		textBox7->SelectionStart = textBox7->Text->Length;
	}

	if (textBox7->Text == ".") {
		textBox7->Text = "";
		textBox7->SelectionStart = textBox7->Text->Length;
	}
}

private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox9->Text == "")
		button1->Visible = false;
	else
		button1->Visible = true;

	if (textBox8->Text == "00") {
		textBox8->Text = "0";
		textBox8->SelectionStart = textBox8->Text->Length;
	}

	if (textBox8->Text == "--") {
		textBox8->Text = "-";
		textBox8->SelectionStart = textBox8->Text->Length;
	}

	if (textBox8->Text == ".") {
		textBox8->Text = "";
		textBox8->SelectionStart = textBox8->Text->Length;
	}
}

private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox9->Text == "")
		button1->Visible = false;
	else
		button1->Visible = true;

	if (textBox9->Text == "00") {
		textBox9->Text = "0";
		textBox9->SelectionStart = textBox9->Text->Length;
	}

	if (textBox9->Text == "--") {
		textBox9->Text = "-";
		textBox9->SelectionStart = textBox9->Text->Length;
	}

	if (textBox9->Text == ".") {
		textBox9->Text = "";
		textBox9->SelectionStart = textBox9->Text->Length;
	}
}



private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	char number = e->KeyChar;
	if (e->KeyChar <= 47 || e->KeyChar >= 58) //0..9
		e->Handled = true;

	if (e->KeyChar == 8  || e->KeyChar == 45 || e->KeyChar == 44) //bs, - , 
		e->Handled = false;
}

private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	char number = e->KeyChar;
	if (e->KeyChar <= 47 || e->KeyChar >= 58) //0..9
		e->Handled = true;

	if (e->KeyChar == 8 || e->KeyChar == 45 || e->KeyChar == 44) //bs, - , 
		e->Handled = false;
}
private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	char number = e->KeyChar;
	if (e->KeyChar <= 47 || e->KeyChar >= 58) //0..9
		e->Handled = true;

	if (e->KeyChar == 8 || e->KeyChar == 45 || e->KeyChar == 44) //bs, - , 
		e->Handled = false;
}
private: System::Void textBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	char number = e->KeyChar;
	if (e->KeyChar <= 47 || e->KeyChar >= 58) //0..9
		e->Handled = true;

	if (e->KeyChar == 8 || e->KeyChar == 45 || e->KeyChar == 44) //bs, - , .
		e->Handled = false;
}
private: System::Void textBox6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	char number = e->KeyChar;
	if (e->KeyChar <= 47 || e->KeyChar >= 58) //0..9
		e->Handled = true;

	if (e->KeyChar == 8 || e->KeyChar == 45 || e->KeyChar == 44) //bs, - , .
		e->Handled = false;
}
private: System::Void textBox7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	char number = e->KeyChar;
	if (e->KeyChar <= 47 || e->KeyChar >= 58) //0..9
		e->Handled = true;

	if (e->KeyChar == 8 || e->KeyChar == 45 || e->KeyChar == 44) //bs, - , .
		e->Handled = false;
}
private: System::Void textBox8_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	char number = e->KeyChar;
	if (e->KeyChar <= 47 || e->KeyChar >= 58) //0..9
		e->Handled = true;

	if (e->KeyChar == 8 || e->KeyChar == 45 || e->KeyChar == 44) //bs, - , .
		e->Handled = false;
}
private: System::Void textBox9_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	char number = e->KeyChar;
	if (e->KeyChar <= 47 || e->KeyChar >= 58) //0..9
		e->Handled = true;

	if (e->KeyChar == 8 || e->KeyChar == 45 || e->KeyChar == 44) //bs, - , .
		e->Handled = false;
}

//ДОРАБОТАТЬ
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {	
	--iv;

	ve[iv].w = false;
	panel5->Visible = false;

	ve[2].trv.clear();
	ve[2].ii = 0;

	ve[0].sh = false;
	ve[1].sh = true;
	ve[2].sh = false;

	pictureBox1->Image = imageList1->Images[0];
	pictureBox2->Image = imageList1->Images[1];
	pictureBox3->Image = imageList1->Images[0];
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (iv == 2) {
		ve[1].w = false;
		panel4->Visible = false;
		--iv;

		ve[0].sh = true;
		ve[1].sh = false;

		ve[1].trv.clear();
		ve[1].ii = 0;

		pictureBox1->Image = imageList1->Images[1];
		pictureBox2->Image = imageList1->Images[0];
		pictureBox3->Image = imageList1->Images[0];
	}

	if (iv == 3) {
		ve[1] = ve[2];

		ve[2].w = false;
		panel5->Visible = false;
		--iv;

		ve[0].sh = false;
		ve[1].sh = true;
		ve[2].sh = false;

		ve[2].trv.clear();
		ve[2].ii = 0;

		pictureBox1->Image = imageList1->Images[0];
		pictureBox2->Image = imageList1->Images[1];
		pictureBox3->Image = imageList1->Images[0];

	}
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	if (iv == 1) {
		ve[1].w = false;
		panel3->Visible = false;
		--iv;

		ve[0].trv.clear();
		ve[0].ii = 0;
		
		ve[0].sh = false;
		xt = 0;
		yt = 0;
		zt = -300;

		pictureBox1->Image = imageList1->Images[1];
		pictureBox2->Image = imageList1->Images[0];
		pictureBox3->Image = imageList1->Images[0];
	}

	if (iv == 2) {
		ve[0] = ve[1];

		ve[1].w = false;
		panel4->Visible = false;
		--iv;

		ve[1].trv.clear();
		ve[1].ii = 0;

		ve[0].sh = true;
		ve[1].sh = false;

		pictureBox1->Image = imageList1->Images[1];
		pictureBox2->Image = imageList1->Images[0];
		pictureBox3->Image = imageList1->Images[0];
	}

	if (iv == 3) {
		for (int i = 0; i < iv - 1; i++)
			ve[i] = ve[i + 1];

		ve[2].w = false;
		panel5->Visible = false;
		--iv;

		ve[2].trv.clear();
		ve[2].ii = 0;

		ve[0].sh = true;
		ve[1].sh = false;
		ve[2].sh = false;

		pictureBox1->Image = imageList1->Images[1];
		pictureBox2->Image = imageList1->Images[0];
		pictureBox3->Image = imageList1->Images[0];
	}
}


private: System::Void glControl1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (md) {
		if (py > e->Y) 
			rt++;

		if (py < e->Y) 
			rt--;
	}
}

private: System::Void glControl1_MouseWheel(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	ve[0].sh = false;
	ve[1].sh = false;
	ve[2].sh = false;

	if (e->Delta > 0)
		zt += 10;

	if (e->Delta < 0)
		zt -= 10;
}

private: System::Void glControl1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	md = true;
	py = e->Y;
}

private: System::Void glControl1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	md = false;
}

private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
		textBox3->Focus();
}

private: System::Void textBox3_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
		textBox4->Focus();
}

private: System::Void textBox4_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
		textBox5->Focus();
}

private: System::Void textBox5_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
		textBox6->Focus();
}

private: System::Void textBox6_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
		textBox7->Focus();
}

private: System::Void textBox7_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
		textBox8->Focus();
}

private: System::Void textBox8_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
		textBox9->Focus();
}

private: System::Void textBox9_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
		button1->Focus();
}



private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Image = imageList1->Images[1];
	pictureBox2->Image = imageList1->Images[0];
	pictureBox3->Image = imageList1->Images[0];

	ve[0].sh = true;
	ve[1].sh = false;
	ve[2].sh = false;
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Image = imageList1->Images[0];
	pictureBox2->Image = imageList1->Images[1];
	pictureBox3->Image = imageList1->Images[0];

	ve[1].sh = true;
	ve[0].sh = false;
	ve[2].sh = false;
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Image = imageList1->Images[0];
	pictureBox2->Image = imageList1->Images[0];
	pictureBox3->Image = imageList1->Images[1];

	ve[2].sh = true;
	ve[0].sh = false;
	ve[1].sh = false;
}
};
};


 