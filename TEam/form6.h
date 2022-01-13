#pragma once

namespace TEam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form6
	/// </summary>
	public ref class form6 : public System::Windows::Forms::Form
	{
	public:
		form6(void)
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
		~form6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form6::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(295, 327);
			this->listBox1->TabIndex = 0;
			// 
			// form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(295, 327);
			this->Controls->Add(this->listBox1);
			this->Name = L"form6";
			this->Text = L"Saved Data";
			this->Load += gcnew System::EventHandler(this, &form6::form6_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void form6_Load(System::Object^  sender, System::EventArgs^  e) {
				 System::IO::StreamReader^reader =gcnew System::IO::StreamReader("test.txt");
				 listBox1->Items->Clear();
				 while(!reader->EndOfStream)
					 listBox1->Items->Add(reader->ReadLine());
				 reader->Close();
			 }
	};
}
