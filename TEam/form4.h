#pragma once
#include"form6.h"
namespace TEam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form4
	/// </summary>
	public ref class form4 : public System::Windows::Forms::Form
	{
	public:
		Form^ frm1;
		form4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		form4(Form^ frm2)
		{
			frm1=frm2;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::RadioButton^  rb2;

	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::TextBox^  days;

	private: System::Windows::Forms::TextBox^  licid;

	private: System::Windows::Forms::TextBox^  adress;

	private: System::Windows::Forms::TextBox^  phone;

	private: System::Windows::Forms::TextBox^  id;

	private: System::Windows::Forms::TextBox^  name;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;




	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  Payment;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  totalprice;
	private: System::Windows::Forms::Label^  carname;
	private: System::Windows::Forms::Label^  payname;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox5;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form4::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->rb2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->days = (gcnew System::Windows::Forms::TextBox());
			this->licid = (gcnew System::Windows::Forms::TextBox());
			this->adress = (gcnew System::Windows::Forms::TextBox());
			this->phone = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Payment = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->totalprice = (gcnew System::Windows::Forms::Label());
			this->carname = (gcnew System::Windows::Forms::Label());
			this->payname = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->Payment->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->rb2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->days);
			this->groupBox1->Controls->Add(this->licid);
			this->groupBox1->Controls->Add(this->adress);
			this->groupBox1->Controls->Add(this->phone);
			this->groupBox1->Controls->Add(this->id);
			this->groupBox1->Controls->Add(this->name);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(508, 380);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"FORM";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(375, 312);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Saved Data";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &form4::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(492, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(10, 4);
			this->listBox1->TabIndex = 18;
			this->listBox1->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(375, 351);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form4::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Dodge Challenger  ", L"Ford Mustang ", L"Chrysler 300c"});
			this->comboBox1->Location = System::Drawing::Point(108, 243);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(138, 21);
			this->comboBox1->TabIndex = 15;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &form4::comboBox1_SelectedIndexChanged);
			// 
			// rb2
			// 
			this->rb2->AutoSize = true;
			this->rb2->Checked = true;
			this->rb2->Location = System::Drawing::Point(15, 337);
			this->rb2->Name = L"rb2";
			this->rb2->Size = System::Drawing::Size(123, 17);
			this->rb2->TabIndex = 14;
			this->rb2->TabStop = true;
			this->rb2->Text = L"With Driver(150 L.E)";
			this->rb2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(151, 337);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(95, 17);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->Text = L"Without Driver";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// days
			// 
			this->days->Location = System::Drawing::Point(108, 290);
			this->days->Name = L"days";
			this->days->Size = System::Drawing::Size(138, 20);
			this->days->TabIndex = 12;
			this->days->TextChanged += gcnew System::EventHandler(this, &form4::days_TextChanged);
			// 
			// licid
			// 
			this->licid->Location = System::Drawing::Point(108, 199);
			this->licid->Name = L"licid";
			this->licid->Size = System::Drawing::Size(138, 20);
			this->licid->TabIndex = 11;
			// 
			// adress
			// 
			this->adress->Location = System::Drawing::Point(108, 161);
			this->adress->Name = L"adress";
			this->adress->Size = System::Drawing::Size(138, 20);
			this->adress->TabIndex = 10;
			// 
			// phone
			// 
			this->phone->Location = System::Drawing::Point(108, 119);
			this->phone->Name = L"phone";
			this->phone->Size = System::Drawing::Size(138, 20);
			this->phone->TabIndex = 9;
			this->phone->TextChanged += gcnew System::EventHandler(this, &form4::phone_TextChanged);
			// 
			// id
			// 
			this->id->Location = System::Drawing::Point(108, 79);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(138, 20);
			this->id->TabIndex = 8;
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(108, 39);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(138, 20);
			this->name->TabIndex = 7;
			this->name->TextChanged += gcnew System::EventHandler(this, &form4::name_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 290);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Number Of Days:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 246);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Choose Car:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 199);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Licence ID:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Adress:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Phone #:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ID:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 39);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(38, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Name:";
			// 
			// Payment
			// 
			this->Payment->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Payment->Controls->Add(this->pictureBox5);
			this->Payment->Controls->Add(this->label10);
			this->Payment->Controls->Add(this->totalprice);
			this->Payment->Controls->Add(this->carname);
			this->Payment->Controls->Add(this->payname);
			this->Payment->Controls->Add(this->label9);
			this->Payment->Controls->Add(this->label8);
			this->Payment->Controls->Add(this->label14);
			this->Payment->Location = System::Drawing::Point(545, 32);
			this->Payment->Name = L"Payment";
			this->Payment->Size = System::Drawing::Size(508, 174);
			this->Payment->TabIndex = 2;
			this->Payment->TabStop = false;
			this->Payment->Text = L"Payment";
			this->Payment->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(176, 15);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(332, 153);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(154, 126);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(22, 13);
			this->label10->TabIndex = 7;
			this->label10->Text = L"L.E";
			// 
			// totalprice
			// 
			this->totalprice->AutoSize = true;
			this->totalprice->Location = System::Drawing::Point(99, 126);
			this->totalprice->Name = L"totalprice";
			this->totalprice->Size = System::Drawing::Size(41, 13);
			this->totalprice->TabIndex = 5;
			this->totalprice->Text = L"label12";
			// 
			// carname
			// 
			this->carname->AutoSize = true;
			this->carname->Location = System::Drawing::Point(99, 82);
			this->carname->Name = L"carname";
			this->carname->Size = System::Drawing::Size(41, 13);
			this->carname->TabIndex = 4;
			this->carname->Text = L"label11";
			// 
			// payname
			// 
			this->payname->AutoSize = true;
			this->payname->Location = System::Drawing::Point(99, 39);
			this->payname->Name = L"payname";
			this->payname->Size = System::Drawing::Size(41, 13);
			this->payname->TabIndex = 3;
			this->payname->Text = L"label10";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 126);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Total Price :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Car Name:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 418);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 28);
			this->button2->TabIndex = 17;
			this->button2->Text = L"<- Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form4::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(669, 212);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(271, 240);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(612, 234);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(403, 178);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(590, 246);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(441, 160);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(590, 234);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(450, 188);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			// 
			// form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1065, 458);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Payment);
			this->Controls->Add(this->groupBox1);
			this->Name = L"form4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Last Step";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &form4::form4_FormClosing);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->Payment->ResumeLayout(false);
			this->Payment->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private	: void vs()        /////////
				  {
					  pictureBox1->Visible = false ;
					  pictureBox2->Visible = false ;
					  pictureBox3->Visible = false ;
					  pictureBox4->Visible = false ;
				  }
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void form4_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 if(MessageBox::Show("Are you sure you want to exit","Quit",MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes)
			 {
				 Environment::Exit;
			 }
			 else
			 {
				 e->Cancel=true;
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 frm1->Show();
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			switch(comboBox1->SelectedIndex)      /////////
			{
			   case 0 : vs();		pictureBox1->Visible = true ;		break;
		       case 1 : vs();		pictureBox2->Visible = true ;		break;
		       case 2 : vs();		pictureBox3->Visible = true ;		break;
			}
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(name->Text==""||id->Text==""||phone->Text==""||adress->Text==""||comboBox1->SelectedIndex==-1||days->Text=="")
				 MessageBox::Show("Uncompleted Form","wrong insertion",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 else
			 {
			  Payment->Visible = true ;
			  payname->Text=name->Text;			
			  carname->Text=Convert::ToString(comboBox1->SelectedItem);
			  int day=Convert::ToInt32(days->Text);
			  int dri=150;
			  switch(comboBox1->SelectedIndex)      /////////
				{
				   case 0 : dri*=day;	 day*=4500; 	break;
				   case 1 :	dri*=day;	 day*=5000;     break;
				   case 2 :	dri*=day;  	 day*=3000;	    break;
		       
				}
			 if(rb2->Checked==true)
					totalprice->Text=Convert::ToString(dri+day);
			 else 
				totalprice->Text=Convert::ToString(day);

			    button2->Enabled=false;
			    //
				System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("test.txt",true);
				String^rec =name->Text+"\r"+id->Text+"\r"+phone->Text+"\r"+adress->Text+"\r"+licid->Text+"\r"+comboBox1->SelectedItem+"\r"+days->Text+"\r"+totalprice->Text+"\r";
				listBox1->Items->Add(rec);

				for(int i=0;i<listBox1->Items->Count;i++)
					writer->WriteLine(listBox1->Items[i]);

				writer->Close();
				button3->Visible=true;
			    name->Text="";
				id->Text="";
				phone->Text="";
				adress->Text="";
				licid->Text="";
				comboBox1->SelectedIndex=-1;
				days->Text="";
			 }
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 form6^fm=gcnew form6();
			 fm->Show();
		 }
private: System::Void days_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			  days->Focus();
			 days->SelectionStart = days->Text->Length;
	if (System::Text::RegularExpressions::Regex::IsMatch(days->Text, "[^0-9]"))
        {
            MessageBox::Show("Please enter only numbers.");
            days->Text = days->Text->Remove(days->Text->Length - 1);
        }
		 }
private: System::Void name_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 name->Focus();
			 name->SelectionStart = name->Text->Length;
	if (System::Text::RegularExpressions::Regex::IsMatch(name->Text, "[^A-z]"))
        {
            MessageBox::Show("Please enter only Chars.");
            name->Text = name->Text->Remove(name->Text->Length - 1);
        }
		 }
private: System::Void phone_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			  phone->Focus();
			 phone->SelectionStart = phone->Text->Length;
	if (System::Text::RegularExpressions::Regex::IsMatch(phone->Text, "[^0-9]"))
        {
            MessageBox::Show("Please enter only numbers.");
            phone->Text = phone->Text->Remove(phone->Text->Length - 1);
        }
		 }
};
}
