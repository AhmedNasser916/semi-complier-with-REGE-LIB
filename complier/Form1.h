#include"Header.h"
#include<msclr\marshal_cppstd.h>
#include <algorithm>




#pragma once
//char* spjilt(String s, char dlemater = ' ') 
//{
//	char *d[20][50];
//
//	int i = 0;
//	int j = 0;
//	while(s[i] !='\0')
//	{
//		while (s[i] != dlemater)
//		{
//			*d[i][j] = s[i];
//			i++;
//		}
//		j++;
//	}
//
//	return d;
//
//
//}



namespace complier {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(20, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Compiler Project";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-1, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(976, 53);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(748, 301);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(183, 164);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label2->Location = System::Drawing::Point(10, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Enter Your Text :";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 129);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(330, 160);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label3->Location = System::Drawing::Point(449, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Your Output:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(306, 372);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(217, 47);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->Location = System::Drawing::Point(454, 129);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(222, 160);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox3->Location = System::Drawing::Point(682, 129);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(249, 160);
			this->textBox3->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label4->Location = System::Drawing::Point(677, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Errors";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(941, 475);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context text;
	

	string s = text.marshal_as<string>(textBox1->Text);
	string Allstring="";
	int if_conut=0;
	int repeat_conut = 0;
	vector<string> v=split(clean(s));
	int lines=0;
	string Allerrors = "";


	
	
	
	
	
		
	regex id("[a-z|A-Z][a-z|A-Z|0-9]*[;]*"); // entire match will be 2 numbers
	regex opareators("[-|+|*|/|=|<|>]");
	regex ex("[a-z|A-Z|0-9]+[+|-|*|/|==|<|>][a-z|A-Z|1-9][a-z|A-Z|0-9]*");
	regex digit("[0-9]|[1-9][0-9]*[;]*");
	regex assiment("[:][=]");
	smatch m;
	regex f("[t][h][e][n]|[e][l][s][e]|[w][r][i][t][e]|[r][e][a][d]|[u][n][t][i][l]|[e][n][d]|[i][f]|[r][e][p][e][a][t]|[u][n][t][i][l][e]");
	regex read ("[r][e][a][d]");
	regex write("[w][r][i][t][e]");
	regex semi("[;][\r]*");
	regex IF("[i][f]");
	regex Then("[t][h][e][n][\r]*");
	regex end("[e][n][d][\r]*");
	regex repeat("[r][e][p][e][a][t][\r]*");
	regex until ("[u][n][t][i][l]");
	regex stri("[\'][a-z|A-Z|0-9|!|@|#|$|%|^|&|*|(|)|_|+|=|-|?|>|<|:|/*|~|`]*[\']");
	regex line ("[$][$][3]");
	//regex stri("[\'][a-z|A-Z|0-9]*[\']");
/*
	map<string ,int> mapp;
	map<string, int>::iterator itr;
*/
	vector<string>::iterator it;
	vector<string>::iterator temp;
	it = v.begin();
	temp=v.begin();
	int count_line=1;
	while (it != v.end())
	{


	A:
	
		if (regex_match(*it, m, line))
		{
			count_line++;

		}
		else if (regex_match(*it, m,read))
		{  
			

			for (auto v : m)
			{

				cout << v << "->>" << v << "_kw" << endl;
				Allstring += v ;
				Allstring +="->>";
				Allstring += v;
				Allstring += "_kw\r\n";
				
				
			}

			temp=1+it;

		 if (regex_match(*temp, m, id))
		{
			for (auto v : m)
			{

				cout << v << "->>" << "id_kw" << endl;
				Allstring += v;
				Allstring += "->>";
				Allstring += v;
				Allstring += "_kw\r\n";
			


				temp++;

			}
		}
		else 
		{
			cout << "error in read commed / missing id /in line : "<<count_line<<" \n";
			Allerrors += "error in read commed /missing id / in line: " ;
			Allerrors += to_string(count_line) ;
			Allerrors +=" \r\n";
			while ( !(regex_match(*temp, m, line)) )
			{
				temp++;
			}
			it=temp;
			goto A;
		}
		

      
		 if (regex_match(*temp, m, semi))
		 {
			 for (auto v : m)
			 {

				 cout << v << "->>" << "semi_kw" << endl;
				 Allstring += v;
				 Allstring += "->>";
				 Allstring += "semi_kw\r\n";
				 
			


			 }

			
		 }
		 else
		 {
			 cout << "error in read commed / missing semi colen /in line : " << count_line << " \n";
			 Allerrors += "error in read commed /missing semi colen/ in line : ";
			 Allerrors += to_string(count_line);
			 Allerrors += " \r\n";
			 while (!(regex_match(*temp, m, line)))
			 {
				 temp++;
			 }
			 it = temp;
			 goto A;
		 }

		 it= temp;


		}
		





		else if (regex_match(*it, m, write))
		{


			for (auto v : m)
			{

				cout << v << "->>" << v << "_kw" << endl;
				Allstring += v;
				Allstring += "->>";
				Allstring += v;
				Allstring += "_kw\r\n";
				


			}

			temp = 1 + it;

			if (regex_match(*temp, m, id))
			{
				for (auto v : m)
				{

					cout << v << "->>" << "id_kw" << endl;
					Allstring += v;
					Allstring += "->>";
					Allstring += "id _kw\r\n";




				}
				temp++;
			}
			else if (regex_match(*temp, m, digit))
			{

				for (auto v : m)
				{

					cout << v << "->>" << "digit_kw" << endl;
					Allstring += v;
					Allstring += "->>";
					Allstring += "Digit _kw\r\n";


				}
				temp++;

			}
			else if (regex_match(*temp, m, stri))
			{
				for (auto v : m)
				{

					cout << v << "->>" << "string_kw" << endl;

					Allstring += v;
					Allstring += "->>";
					Allstring += "String_kw\r\n";


				}
				temp++;
			}

			else
			{
				cout << "error in write commed / missing id ,digigt or sring /in line : " << count_line << " \n";
				Allerrors += "error in write commed in line / missing id ,digigt or sring / : ";
				Allerrors += to_string(count_line);
				Allerrors += " \r\n";
				while (!(regex_match(*temp, m, line)))
				{
					temp++;
				}
				it = temp;
				goto A;
			}
		

			
			if (regex_match(*temp, m, semi))
			{
				for (auto v : m)
				{

					cout << v << "->>" << "semi_kw" << endl;
					Allstring += v;
					Allstring += "->>";
					Allstring += "semi_kw\r\n";


				}
			}
			else
			{
				cout << "error in write commed  / missing semi colen / in line : " << count_line << " \n";
				Allerrors += "error in write commed / missing semi colen / in line : ";
				Allerrors += to_string(count_line);
				Allerrors += " \r\n";
				while (!(regex_match(*temp, m, line)))
				{
					temp++;
				}
				it = temp;
				goto A;
			}

			it = temp;


		}

		// asingement

		else if ( !(regex_match(*it, m, f) ) && (regex_match(*it, m, id) ) )
		{
			for (auto v : m)
			{

				cout << v << "->> id_kw" << endl;
				Allstring += v;
				Allstring += "->>";
				Allstring += "id_kw\r\n";


			}
		
			//mapp.insert( pair <string , int>( *it , 0 ) );

			temp = 1 + it;
			if (regex_match(*temp, m, assiment))
			{ 
				for (auto v : m)
				{

					cout << v << "->> assingmet _kw" << endl;
					Allstring += v;
					Allstring += "->>";
					Allstring += "assignment_kw\r\n";


				}
				temp++;

			}
			else
			{
				cout << "error in assignment commed  / missing assignment / in line : " << count_line << " \n";
				Allerrors += "error in assignment commed / missing assignment / in line : ";
				Allerrors += to_string(count_line);
				Allerrors += " \r\n";
				while (!(regex_match(*temp, m, line)))
				{
					temp++;
				}
				it = temp;
				goto A;
			}
			
	l:
			if (regex_match(*temp, m, id)  )
			{
				for (auto v : m)
				{

					cout << v << "->> id_kw" << endl;
					Allstring += v;
					Allstring += "->>";
					Allstring += "id_kw\r\n";

				}
				temp++;
			}
			else if (regex_match(*temp, m, digit))
			{
				for (auto v : m)
				{

					cout << v << "->> digit_kw" << endl;
					Allstring += v;
					Allstring += "->>";
					Allstring += "digit_kw\r\n";

				}
				temp++;
			}
			else
			{
				cout << "error in assingement commed  / missing id or digit/ in line : " << count_line << " \n";
				Allerrors += "error in assignmet commed / missing  id or digit / in line : ";
				Allerrors += to_string(count_line);
				Allerrors += " \r\n";
				while (!(regex_match(*temp, m, line)))
				{
					temp++;
				}
				it = temp;
				goto A;
			}

			

			if (regex_match(*temp, m, opareators))
			{
				for (auto v : m)
				{

					cout << v << "->> opareators" << endl;
					Allstring += v;
					Allstring += " ->>";
		
					Allstring += "opareators_kw \r\n";


				}
				temp++;
				goto l;
			}
			
		   else if (regex_match(*temp, m, semi))
				{
					for (auto v : m)
					{

						cout << v << "->> semicoln" << endl;
						Allstring += v;
						Allstring += "->>";
						Allstring += "semicoln _kw\r\n";


					}
					
				}
		   else
		   {
			   cout << "error in assigment commed  in line : " << count_line << " \n";
			   Allerrors += "error in assignmet commed in line : ";
			   Allerrors += to_string(count_line);
			   Allerrors += " \r\n";
			   while (!(regex_match(*temp, m, line)))
			   {
				   temp++;
			   }
			   it = temp;
			   goto A;
		   }



			it=temp;
		
		
			
		
		
		
		
		}
        
       
	   else if (regex_match(*it, m, repeat) && repeat_conut==0 )
	   {
			temp=it;
		    repeat_conut++;
		   
		   for (auto v : m)
		   {

			   cout << v << "->>" << "reprat_kw" << endl;
			   Allstring += v;
			   Allstring += "->>";
			   Allstring += "repeat _kw\r\n";



		   }
		  
		   
		   temp++;
		 
		   
			   
			  

			   if (regex_match(*temp, m, until))
			   {
				   for (auto v : m)
				   {

					   cout << v << "->>" << "until_kw" << endl;
					   Allstring += v;
					   Allstring += " ->> ";
					   Allstring += " until_kw\r\n";



				   }

				    temp++;
				   if (regex_match(*temp, m, id))
				   {
					   for (auto v : m)
					   {

						   cout << v << "->>" << "id_kw" << endl;
						   Allstring += v;
						   Allstring += "->>";
						   Allstring += "id _kw\r\n";




					   }
				   }
				   else if (regex_match(*temp, m, digit))
				   {
					   for (auto v : m)
					   {

						   cout << v << "->>" << "digit_kw" << endl;
						   Allstring += v;
						   Allstring += "->>";
						   Allstring += "digit_kw\r\n";




					   }
				   }

				   else
				   {
					   cout << "error in repeat commed  / missing  condtion untli / in line : " << count_line << " \n";
					   Allerrors += "error in repeat commed / missing condition untli / in line : ";
					   Allerrors += to_string(count_line);
					   Allerrors += " \r\n";
					   while (!(regex_match(*temp, m, line)))
					   {
						   temp++;
					   }
					   it = temp;
					   goto A;
				   }

				   temp++;



				   if (regex_match(*temp, m, opareators))
				   {
					   for (auto v : m)
					   {

						   cout << v << "->>" << "opareators_kw" << endl;
						   Allstring += v;
						   Allstring += "->>";
						   Allstring += "opareators _kw\r\n";



					   }
				   }
				   else
				   {
					   cout << "error in repeat commed  / missing  condition oparetors / in line : " << count_line << " \n";
					   Allerrors += "error in repeat commed / missing condition oparetors / in line : ";
					   Allerrors += to_string(count_line);
					   Allerrors += " \r\n";
					   while (!(regex_match(*temp, m, line)))
					   {
						   temp++;
					   }
					   it = temp;
					   goto A;
				   }

				   temp++;


				   if (regex_match(*temp, m, id))
				   {
					   for (auto v : m)
					   {

						   cout << v << "->>" << "id_kw" << endl;
						   Allstring += v;
						   Allstring += "->>";
						   Allstring += "id _kw\r\n";




					   }
				   }
				   else if (regex_match(*temp, m, digit))
				   {
					   for (auto v : m)
					   {

						   cout << v << "->>" << "digit_kw" << endl;
						   Allstring += v;
						   Allstring += "->>";
						   Allstring += "digit_kw\r\n";



					   }
				   }

				   else
				   {
					   cout << "error in repeat commed  / missing id or digit  in condition / in line : " << count_line << " \n";
					   Allerrors += "error in repeat commed / missing id or digit / in line : ";
					   Allerrors += to_string(count_line);
					   Allerrors += " \r\n";
					   while (!(regex_match(*temp, m, line)))
					   {
						   temp++;
					   }
					   it = temp;
					   goto A;
				   }




				   

				   it=temp;

				   cout << "$" << endl;

				   repeat_conut = 0;
			   }
			   else
			   {
				  
						
					it = temp;
				  // cout<<*it<<endl;
				   cout << "looop+++++++++++++++++++++++++++" << endl;
				   Allstring += "looop++++++++++++++++++++++++++\r\n";
				  
				   goto A;
				   
			   }



		   


	   }
	   else if (regex_match(*it, m, until) && repeat_conut == 1)
	   {
	    temp = it;
		   repeat_conut = 0;
		   cout << "untli -> untli_kw" << endl;
		   Allstring += "until ->> untli_kw\r\n";

		   temp++;
		   if (regex_match(*temp, m, id))
		   {
			   for (auto v : m)
			   {

				   cout << v << "->>" << "id_kw" << endl;
				   Allstring += v;
				   Allstring += "->>";
				   Allstring += "id_kw\r\n";




			   }
		   }
		   else if (regex_match(*temp, m, digit))
		   {
			   for (auto v : m)
			   {

				   cout << v << "->>" << "digit_kw" << endl;
				   Allstring += v;
				   Allstring += "->>";
				   Allstring += "digit _kw\r\n";




			   }
		   }

		   else
		   {
			   cout << "error in repeat commed  / missing digit or id / in line : " << count_line << " \n";
			   Allerrors += "error in repeat commed / missing digit or id / in line : ";
			   Allerrors += to_string(count_line);
			   Allerrors += " \r\n";
			   while (!(regex_match(*temp, m, line)))
			   {
				   temp++;
			   }
			   it = temp;
			   goto A;
		   }

		   temp++;



		   if (regex_match(*temp, m, opareators))
		   {
			   for (auto v : m)
			   {

				   cout << v << "->>" << "opareators_kw" << endl;
				   Allstring += v;
				   Allstring += "->>";
				   Allstring += "opareators_kw\r\n";




			   }
		   }
		   else
		   {
			   cout << "error in repeat commed  / missing oparetor / in line : " << count_line << " \n";
			   Allerrors += "error in write commed / missing oparetor / in line : ";
			   Allerrors += to_string(count_line);
			   Allerrors += " \r\n";
			   while (!(regex_match(*temp, m, line)))
			   {
				   temp++;
			   }
			   it = temp;
			   goto A;
		   }

		   temp++;


		   if (regex_match(*temp, m, id))
		   {
			   for (auto v : m)
			   {

				   cout << v << "->>" << "id_kw" << endl;
				   Allstring += v;
				   Allstring += "->>";
				   Allstring += "id_kw\r\n";




			   }
		   }
		   else if (regex_match(*temp, m, digit))
		   {
			   for (auto v : m)
			   {

				   cout << v << "->>" << "digit_kw" << endl;
				   Allstring += v;
				   Allstring += "->>";
				   Allstring += "digit_kw\r\n";




			   }
		   }

		   else
		   {
			   cout << "error in repeat commed  / missing digit or id/ in line : " << count_line << " \n";
			   Allerrors += "error in repeat commed / missing digit or id / in line : ";
			   Allerrors += to_string(count_line);
			   Allerrors += " \r\n";
			   while (!(regex_match(*temp, m, line)))
			   {
				   temp++;
			   }
			   it = temp;
			   goto A;
		   }

		   temp++;

		   if (regex_match(*temp, m, semi))
		   {
			   for (auto v : m)
			   {

				   cout << v << "->>" << "semicolon_kw" << endl;
				   Allstring += v;
				   Allstring += "->>";
				   Allstring += "semi_kw\r\n";




			   }
		   }
		   else
		   {
			   cout << "error in repeat commed  / missing semi colen / in line : " << count_line << " \n";
			   Allerrors += "error in repeat commed / missing semi colen / in line : ";
			   Allerrors += to_string(count_line);
			   Allerrors += " \r\n";
			   while (!(regex_match(*temp, m, line)))
			   {
				   temp++;
			   }
			   it = temp;
			   goto A;
		   }


		   it=temp;


	   }

	   else if (repeat_conut == 1)
	   {
		   // cout << *it << endl;
		   cout << "error in line : " << count_line << " \n";
		   Allerrors += "error in line : ";
		   Allerrors += to_string(count_line);
		   Allerrors += "\r\n";


		   //break;
	   }
	   else if (regex_match(*it, m, until) && repeat_conut == 0)
	   {
		   cout << "error repeat commed /not found repeat/\n";
		   Allerrors += "error in read commed /not found reapet/ \r\n";
		   //break;
		   temp = it;
		   temp++;
		   if (regex_match(*temp, m, id))
		   {
			   for (auto v : m)
			   {

				   cout << v << "->>" << "id_kw" << endl;
				   Allstring += v;
				   Allstring += "->>";
				   Allstring += "id_kw\r\n";




			   }
		   }
		   else if (regex_match(*temp, m, digit))
		   {
			   for (auto v : m)
			   {

				   cout << v << "->>" << "digit_kw" << endl;
				   Allstring += v;
				   Allstring += "->>";
				   Allstring += "digit _kw\r\n";




			   }
		   }
		   else
		   {
			   cout << "error in repeat commed  / missing id or digit in condtion / in line : " << count_line << " \n";
			   Allerrors += "error in repeat commed / missing id or digit in condition / in line : ";
			   Allerrors += to_string(count_line);
			   Allerrors += " \r\n";
			   while (!(regex_match(*temp, m, line)))
			   {
				   temp++;
			   }
			   it = temp;
			   goto A;
		   }

		   temp++;



		   if (regex_match(*temp, m, opareators))
		   {
			   for (auto v : m)
			   {

				   cout << v << "->>" << "opareators_kw" << endl;
				   Allstring += v;
				   Allstring += "->>";
				   Allstring += "opareators_kw\r\n";




			   }
		   }
		   else
		   {
			   cout << "error in rapeat commed  / missing oparetor  / in line : " << count_line << " \n";
			   Allerrors += "error in repeat commed / missing oparetor / in line : ";
			   Allerrors += to_string(count_line);
			   Allerrors += " \r\n";
			   while (!(regex_match(*temp, m, line)))
			   {
				   temp++;
			   }
			   it = temp;
			   goto A;
		   }

		   temp++;


		   if (regex_match(*temp, m, id))
		   {
			   for (auto v : m)
			   {

				   cout << v << "->>" << "id_kw" << endl;
				   Allstring += v;
				   Allstring += "->>";
				   Allstring += "id_kw\r\n";




			   }
		   }
		   else if (regex_match(*temp, m, digit))
		   {
			   for (auto v : m)
			   {

				   cout << v << "->>" << "digit_kw" << endl;
				   Allstring += v;
				   Allstring += "->>";
				   Allstring += "digit_kw\r\n";




			   }
		   }

		   else
		   {
			   cout << "error in repeat commed  / missing id or digit in codition / in line : " << count_line << " \n";
			   Allerrors += "error in repeat commed / missing id or digit condtion / in line : ";
			   Allerrors += to_string(count_line);
			   Allerrors += " \r\n";
			   while (!(regex_match(*temp, m, line)))
			   {
				   temp++;
			   }
			   it = temp;
			   goto A;
		   }

		   temp++;

		   if (regex_match(*temp, m, semi))
		   {
			   for (auto v : m)
			   {

				   cout << v << "->>" << "semicolon_kw" << endl;
				   Allstring += v;
				   Allstring += "->>";
				   Allstring += "semi_kw\r\n";




			   }
		   }

		   else
		   {
			   cout << "error in repeat commed  / missing semi colen / in line : " << count_line << " \n";
			   Allerrors += "error in repeat commed / missing semi colen / in line : ";
			   Allerrors += to_string(count_line);
			   Allerrors += " \r\n";
			   while (!(regex_match(*temp, m, line)))
			   {
				   temp++;
			   }
			   it = temp;
			   goto A;
		   }


		   it = temp;




	   }








		

		else if (regex_match(*it, m, IF) && if_conut== 0)
		{

			if_conut ++;

			for (auto v : m)
			{

				cout << v << "->>" << v << "_kw" << endl;
				Allstring += v;
				 Allstring += "->>";
				 Allstring += v;
				 Allstring += "_kw\r\n";
				


			}

			temp = 1 + it;

			if (regex_match(*temp, m, id))
			{
				for (auto v : m)
				{

					cout << v << "->>" << "id_kw" << endl;
					Allstring += v;
					Allstring += "->>";
					Allstring += "id_kw\r\n";




				}
			}
			else if (regex_match(*temp, m, digit))
			{
				for (auto v : m)
				{

					cout << v << "->>" << "digit_kw" << endl;
					Allstring += v;
					Allstring += "->>";
					Allstring += "id_kw\r\n";




				}
			}

			else
			{
				cout << "error in if commed  / missing id or digit / in line : " << count_line << " \n";
				Allerrors += "error in if commed / missing id or digit / in line : ";
				Allerrors += to_string(count_line);
				Allerrors += " \r\n";
				while (!(regex_match(*temp, m, line)))
				{
					temp++;
				}
				it = temp;
				goto A;
			}

			temp++;



			if (regex_match(*temp, m, opareators))
			{
				for (auto v : m)
				{

					cout << v << "->>" << "opareators_kw" << endl;
					Allstring += v;
					Allstring += "->>";
					Allstring += "opareators_kw\r\n";




				}
			}
			else
			{
				cout << "error in if commed  / missing oparetor / in line : " << count_line << " \n";
				Allerrors += "error in if commed / missing oparetor / in line : ";
				Allerrors += to_string(count_line);
				Allerrors += " \r\n";
				while (!(regex_match(*temp, m, line)))
				{
					temp++;
				}
				it = temp;
				goto A;
			}

			temp++;


			if (regex_match(*temp, m, id))
			{
				for (auto v : m)
				{

					cout << v << "->>" << "id_kw" << endl;
					Allstring += v;
					Allstring += "->>";
					Allstring += "id_kw\r\n";




				}
			}
			else if (regex_match(*temp, m, digit))
			{
				for (auto v : m)
				{

					cout << v << "->>" << "digit_kw" << endl;
					Allstring += v;
					Allstring += "->>";
					Allstring += "digit_kw\r\n";




				}
			}

			else
			{
				cout << "error in if commed  / missing digit or id / in line : " << count_line << " \n";
				Allerrors += "error in if commed / missing digit or id / in line : ";
				Allerrors += to_string(count_line);
				Allerrors += " \r\n";
				while (!(regex_match(*temp, m, line)))
				{
					temp++;
				}
				it = temp;
				goto A;
			}

			temp++;
			if (regex_match(*temp, m, Then))
			{
				for (auto v : m)
				{

					cout << v << "->>" << "then_kw" << endl;
					Allstring += v;
					Allstring += "->>";
					Allstring += "then_kw\r\n";




				}

				temp++;
				it = temp;

				if (regex_match(*temp, m, end))
				{ 
					for (auto v : m)
					{

						cout << v << "->>" << "end_kw" << endl;
						Allstring += v;
						Allstring += "->>";
						Allstring += "end_kw\r\n";



					}
					//cout << "$" << endl;

					if_conut=0;
				}
				else
				{ 
					cout << "if++++++++++++" << endl;
					Allstring += "if+++++++++++++\r\n";

					goto A;
				}



			}

			else
			{
				cout << "error in if commed  / missing then/ in line : " << count_line << " \n";
				Allerrors += "error in if commed / missing then / in line : ";
				Allerrors += to_string(count_line);
				Allerrors += " \r\n";
				while (!(regex_match(*temp, m, line)))
				{
					temp++;
				}
				it = temp;
				goto A;
			}


		}
		else if (regex_match(*it, m, end) && if_conut == 1)
		{
			if_conut=0;
			cout<<"end -> end_kw"<<endl;
			Allstring += "end_kw\r\n";

		}
		

		
		else if (if_conut==1 )
		{
			//cout<<*it<<endl;
			cout << "error in line : "<<count_line<<" \n";
			Allerrors += "error in line : ";
			Allerrors += to_string(count_line);
			Allerrors += "\r\n";


			//break;
		}
		else if (regex_match(*it, m, end) && if_conut == 0)
		{
			cout << "error if commed /not found if/\n";
			Allerrors += "error in if  /not found if/\r\n";

			//break;
		}
		


		





		it++;
	}
	


	String^ Str = gcnew String(Allstring.c_str());
	String^ Strer = gcnew String(Allerrors.c_str());


	textBox2->Text=Str;
	textBox3->Text = Strer;
	//


	

       





	


}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}


