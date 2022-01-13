#pragma once
#include"form4.h"
namespace TEam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form2
	/// </summary>
	public ref class form2 : public System::Windows::Forms::Form
	{
	public:
		Form^ fm1 ;
		form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		form2(Form^ fr)
		{
			fm1=fr;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::PictureBox^  pictureBox3;

	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  price;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  speed;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  no;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  model;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  name;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  gears;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  gps;
	private: System::Windows::Forms::Label^  label8;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->gears = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->gps = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->price = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->speed = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->no = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->model = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(44, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(337, 166);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &form2::pictureBox1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(716, 61);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(301, 139);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &form2::pictureBox3_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(387, 48);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(323, 166);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &form2::pictureBox5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(335, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(357, 30);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Please Choose The Car";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(163, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Chrysler  300c";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(480, 227);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Ford Mustang 2015 Shelby";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(818, 227);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Dodge Challenger  2014";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->groupBox1->Controls->Add(this->gears);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->gps);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->price);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->speed);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->no);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->model);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->name);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(44, 243);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(973, 174);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" Details ";
			// 
			// gears
			// 
			this->gears->AutoSize = true;
			this->gears->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->gears->Location = System::Drawing::Point(473, 111);
			this->gears->Name = L"gears";
			this->gears->Size = System::Drawing::Size(11, 16);
			this->gears->TabIndex = 17;
			this->gears->Text = L" ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(343, 111);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 16);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Gears:";
			// 
			// gps
			// 
			this->gps->AutoSize = true;
			this->gps->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->gps->Location = System::Drawing::Point(473, 74);
			this->gps->Name = L"gps";
			this->gps->Size = System::Drawing::Size(11, 16);
			this->gps->TabIndex = 15;
			this->gps->Text = L" ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(343, 74);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"GPS:";
			// 
			// price
			// 
			this->price->AutoSize = true;
			this->price->Location = System::Drawing::Point(737, 38);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(10, 13);
			this->price->TabIndex = 9;
			this->price->Text = L" ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(614, 38);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(105, 16);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Price (Per Day) :";
			// 
			// speed
			// 
			this->speed->AutoSize = true;
			this->speed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->speed->Location = System::Drawing::Point(473, 38);
			this->speed->Name = L"speed";
			this->speed->Size = System::Drawing::Size(11, 16);
			this->speed->TabIndex = 7;
			this->speed->Text = L" ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(343, 38);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(124, 16);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Max Speed (Km/h) :";
			// 
			// no
			// 
			this->no->AutoSize = true;
			this->no->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->no->Location = System::Drawing::Point(160, 111);
			this->no->Name = L"no";
			this->no->Size = System::Drawing::Size(11, 16);
			this->no->TabIndex = 5;
			this->no->Text = L" ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(39, 111);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 16);
			this->label9->TabIndex = 4;
			this->label9->Text = L"#NO. Seats :";
			// 
			// model
			// 
			this->model->AutoSize = true;
			this->model->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->model->Location = System::Drawing::Point(160, 74);
			this->model->Name = L"model";
			this->model->Size = System::Drawing::Size(11, 16);
			this->model->TabIndex = 3;
			this->model->Text = L" ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(42, 74);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 16);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Model Year :";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(160, 38);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(11, 16);
			this->name->TabIndex = 1;
			this->name->Text = L" ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(39, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Car Name :";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(483, 434);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 28);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form2::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(916, 433);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 29);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Fill The Form ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form2::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(44, 433);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 17;
			this->button2->Text = L"<- Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form2::button2_Click_1);
			// 
			// form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1067, 471);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Luxury  Cars";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 form4 ^ frm=gcnew form4(this);
			 frm->Show();
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 fm1->Show();
		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 name->Text="Dodge Challenger";
			 model->Text="2014";
			 no->Text="2";
			 speed->Text="233";
			 gps->Text="Yes";
			 gears->Text="Manual";
			 price->Text="4500 L.E";
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		     name->Text="Ford Mustang Shelby";
			 model->Text="2014";
			 no->Text="4";
			 speed->Text="240";
			 gps->Text="Yes";
			 gears->Text="Manual";
			 price->Text="5000 L.E";
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 name->Text="Chrysler 300c";
			 model->Text="2013";
			 no->Text="4";
			 speed->Text="190";
			 gps->Text="Yes";
			 gears->Text="Auto";
			 price->Text="3000 L.E";
		 }
};
}
