#pragma once

namespace Project5 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;


	using namespace System::IO;
	using namespace System::Text;

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


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Lex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pseud;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridView^ dataGridView6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Lex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pseud = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(190, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Выбрать файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(625, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Изменить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(906, 17);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Знаки операций (10)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1252, 17);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Операторы отношений (20)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(906, 202);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Разделители (30)";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->ID, this->Lex,
					this->Pseud
			});
			this->dataGridView1->Location = System::Drawing::Point(888, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(344, 158);
			this->dataGridView1->TabIndex = 11;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->Width = 125;
			// 
			// Lex
			// 
			this->Lex->HeaderText = L"Lex";
			this->Lex->MinimumWidth = 6;
			this->Lex->Name = L"Lex";
			this->Lex->Width = 125;
			// 
			// Pseud
			// 
			this->Pseud->HeaderText = L"Pseud";
			this->Pseud->MinimumWidth = 6;
			this->Pseud->Name = L"Pseud";
			this->Pseud->Width = 125;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2->Location = System::Drawing::Point(1238, 41);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(344, 158);
			this->dataGridView2->TabIndex = 12;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Lex";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Pseud";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			});
			this->dataGridView3->Location = System::Drawing::Point(888, 222);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->Size = System::Drawing::Size(344, 158);
			this->dataGridView3->TabIndex = 13;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Lex";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Pseud";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(406, 391);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Анализ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(637, 401);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Псевдокод";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(174, 401);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Дескрипторный код";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(894, 581);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Ошибки";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(406, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			});
			this->dataGridView4->Location = System::Drawing::Point(1238, 222);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->Size = System::Drawing::Size(344, 158);
			this->dataGridView4->TabIndex = 22;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 125;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Lex";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 125;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Pseud";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 125;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12
			});
			this->dataGridView5->Location = System::Drawing::Point(888, 399);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->Size = System::Drawing::Size(344, 158);
			this->dataGridView5->TabIndex = 23;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 125;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Lex";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Width = 125;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Pseud";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 125;
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn13,
					this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15
			});
			this->dataGridView6->Location = System::Drawing::Point(1238, 399);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->Size = System::Drawing::Size(344, 158);
			this->dataGridView6->TabIndex = 24;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn13->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->Width = 125;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Lex";
			this->dataGridViewTextBoxColumn14->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->Width = 125;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"Pseud";
			this->dataGridViewTextBoxColumn15->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->Width = 125;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1252, 202);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Ключевые слова (40)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(906, 383);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 13);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Константы (50)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1252, 383);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(116, 13);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Идентификаторы (60)";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 41);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(426, 339);
			this->richTextBox1->TabIndex = 28;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBox2->Location = System::Drawing::Point(449, 41);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(426, 339);
			this->richTextBox2->TabIndex = 29;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(12, 430);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(426, 262);
			this->richTextBox3->TabIndex = 30;
			this->richTextBox3->Text = L"";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(449, 430);
			this->richTextBox4->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(426, 262);
			this->richTextBox4->TabIndex = 31;
			this->richTextBox4->Text = L"";
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(945, 562);
			this->richTextBox5->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(550, 220);
			this->richTextBox5->TabIndex = 32;
			this->richTextBox5->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1597, 857);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dataGridView6);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private:
		[System::STAThreadAttribute] System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			OpenFileDialog^ openDlg = gcnew OpenFileDialog();
			openDlg->Filter = "Text Files (*.txt)|*.txt|All files (*.*)|*.*";
			if (openDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ selectedFile = openDlg->FileName;
				StreamReader^ file = File::OpenText(selectedFile);
				richTextBox1->Text = file->ReadToEnd();
				MessageBox::Show("Вы открыли: " + selectedFile);
			}
			else MessageBox::Show("Ошибка открытия файла");
		}

		void reportError(int lineNumber, String^ errorMessage) {
			richTextBox5->Text += "Ошибка в строке " + lineNumber + ": " + errorMessage + "\r\n";
		}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Получаем входную строку из textBox1.
		String^ str = richTextBox1->Text;

		// Очищаем вывод в textBox2.
		richTextBox2->Text = "";
		richTextBox2->Text += "1\t";
		richTextBox5->Clear();

		// Инициализация переменных состояния и индекса строки.
		int S = 0, i = 0, length = str->Length, num = 1;

		// Итерация по каждому символу в строке.
		while (i < length)
		{
			// Выполняем действия в зависимости от текущего состояния S.
			switch (S)
			{
			case 0:
				if (str[i] == '\n') S = 0; // Пропускаем символ перевода строки.
				else if (str[i] == '\t') S = 1; // Если символ - табуляция, переходим к следующему состоянию.
				else if (str[i] == ' ') S = 1, richTextBox2->Text += str[i]; // Если символ - пробел, добавляем его к выводу.
				else if (str[i] == '/') S = 2; // Если символ - '/', переходим к обработке комментария.
				else S = 3, richTextBox2->Text += str[i]; // В остальных случаях добавляем символ к выводу.
				break;

			case 1:
				if (str[i] == '\n') S = 0, num++, richTextBox2->Text += " \r\n" + num + "\t"; // Перевод строки, увеличение номера строки.
				else if (str[i] == '\t') S = 1; // Продолжаем обработку табуляции.
				else if (str[i] == ' ') S = 1; // Продолжаем обработку пробела.
				else if (str[i] == '/') S = 2; // Переходим к обработке комментария.
				else S = 3, richTextBox2->Text += str[i]; // В остальных случаях добавляем символ к выводу.
				break;

				// Обработка комментариев.
			case 2:
				if (str[i] == '\n') S = 0, num++, richTextBox2->Text += " \r\n" + num + "\t";
				else if (str[i] == '\t') S = 3;
				else if (str[i] == '/') S = 5;
				else if (str[i] == '*') S = 6;
				else S = 3, richTextBox2->Text += "/" + str[i];
				break;

			case 3:
				if (str[i] == '\n') S = 0, num++, richTextBox2->Text += " \r\n" + num + "\t";
				else if (str[i] == '\t') S = 0;
				else if (str[i] == ' ') S = 1, richTextBox2->Text += str[i];
				else if (str[i] == '/') S = 4;
				else S = 3, richTextBox2->Text += str[i];
				break;

			case 4:
				if (str[i] == '\n') S = 0, num++, richTextBox2->Text += " \r\n" + num + "\t";
				else if (str[i] == '\t') S = 3;
				else if (str[i] == '/') S = 5;
				else if (str[i] == '*') S = 6;
				else S = 3, richTextBox2->Text += "/" + str[i];
				break;

			case 5:
				if (str[i] == '\n') S = 0; // Пропускаем символ перевода строки после однострочного комментария.
				break;

			case 6:
				if (str[i] == '*') S = 7;
				else S = 6; // В состоянии 6 остаемся до конца комментария или появления '*'
				break;

			case 7:
				if (str[i] == '/') S = 0;
				else if (str[i] == '*') S = 7; // Повторное '*' остается в состоянии 7
				else S = 6; // В состоянии 7 проверяем закрытие комментария, иначе возвращаемся к состоянию 6
				break;
			}
			i++;
		}
		// Проверка на незакрытый комментарий в конце текста
		if (S == 6 || S == 7)
		{
			reportError(num, "Многострочный комментарий не закрыт");
		}
	}

		   void PrintDiscypt(DataGridView^ dataGridView, String^ ser)
		   {
			   String^ id = "";
			   if (dataGridView == dataGridView1) id = "(10, ";
			   else if (dataGridView == dataGridView2) id = "(20, ";
			   else if (dataGridView == dataGridView3) id = "(30, ";
			   else if (dataGridView == dataGridView4) id = "(40, ";
			   else if (dataGridView == dataGridView5) id = "(50, ";
			   else if (dataGridView == dataGridView6) id = "(60, ";
			   for (int rowIndex = 0; rowIndex < dataGridView->RowCount; ++rowIndex) // Проходим по всем строкам таблицы
			   {
				   Object^ cellValueObject = dataGridView->Rows[rowIndex]->Cells[1]->Value; // Получаем значение ячейки во втором столбце
				   if (cellValueObject != nullptr) // Проверяем, что объект Value не является NULL
				   {
					   String^ cellValue = cellValueObject->ToString(); // Преобразуем объект Value в строку
					   if (cellValue == ser) // Проверяем, содержит ли значение ячейки символ
					   {
						   richTextBox3->Text += id + dataGridView->Rows[rowIndex]->Cells[0]->Value + ") ";
						   richTextBox4->Text += dataGridView->Rows[rowIndex]->Cells[2]->Value + " ";
					   }
				   }
			   }
		   }

		   bool SearchSymbolInColumn(DataGridView^ dataGridView, String^ ser)
		   {
			   for (int rowIndex = 0; rowIndex < dataGridView->RowCount; ++rowIndex) // Проходим по всем строкам таблицы
			   {
				   Object^ cellValueObject = dataGridView->Rows[rowIndex]->Cells[1]->Value; // Получаем значение ячейки во втором столбце
				   if (cellValueObject != nullptr) // Проверяем, что объект Value не является NULL
				   {
					   String^ cellValue = cellValueObject->ToString(); // Преобразуем объект Value в строку
					   if (cellValue == ser) // Проверяем, содержит ли значение ячейки символ
					   {
						   return true; // Символ найден
					   }
				   }
			   }
			   return false; // Символ не найден
		   }

		   void search(DataGridView^ dataGridView, String^ ser, int& k)
		   {
			   if (!SearchSymbolInColumn(dataGridView, ser))
			   {
				   String^ s = System::Convert::ToString(k);
				   String^ pse = "";
				   if (dataGridView == dataGridView1) pse = ser;
				   else if (dataGridView == dataGridView2) pse = ser;
				   else if (dataGridView == dataGridView3) pse = ser;
				   else if (dataGridView == dataGridView4) pse = ser;
				   else if (dataGridView == dataGridView5) pse = "const" + s;
				   else if (dataGridView == dataGridView6) pse = "id" + s;
				   array<String^>^ row1 = gcnew array<String^>{ s, ser, pse };
				   dataGridView->Rows->Add(row1); // Добавление строки в таблицу
				   k++;
			   }
			   if (SearchSymbolInColumn(dataGridView, ser)) PrintDiscypt(dataGridView, ser);
		   }

		   bool operation(char ch) { return ch == '*' || ch == '/' || ch == '%'; }

		   bool relation(char ch) { return ch == '>' || ch == '<' || ch == '!'; }

		   bool delimiter(char ch) { return ch == ';' || ch == ':' || ch == ',' || ch == '(' || ch == ')' || ch == '[' || ch == ']' || ch == '{' || ch == '}'; }

		   bool letter(char ch) { return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'); }

		   bool number(char ch) { return (ch >= '0' && ch <= '9'); }

		   bool symbol(char ch) { return ch == '!' || ch == '@' || ch == '#' || ch == '№' || ch == '$' || ch == '%' || ch == '^' || ch == '&'; }

		   bool main_word(String^ tmp)
		   {
			   return (tmp == "auto" || tmp == "bool" || tmp == "break" || tmp == "case" || tmp == "catch" || tmp == "char" || tmp == "class" ||
				   tmp == "const" || tmp == "continue" || tmp == "default" || tmp == "delete" || tmp == "do" || tmp == "double" ||
				   tmp == "else" || tmp == "enum" || tmp == "explicit" || tmp == "export" || tmp == "extern" || tmp == "false" ||
				   tmp == "float" || tmp == "for" || tmp == "friend" || tmp == "goto" || tmp == "if" || tmp == "inline" || tmp == "int" || tmp == "long" ||
				   tmp == "mutable" || tmp == "namespace" || tmp == "new" || tmp == "noexcept" || tmp == "nullptr" || tmp == "operator" ||
				   tmp == "private" || tmp == "protected" || tmp == "public" || tmp == "register" || tmp == "return" || tmp == "short" ||
				   tmp == "signed" || tmp == "sizeof" || tmp == "static" || tmp == "struct" || tmp == "switch" || tmp == "template" ||
				   tmp == "this" || tmp == "throw" || tmp == "true" || tmp == "try" || tmp == "typedef" || tmp == "typeid" || tmp == "typename" ||
				   tmp == "union" || tmp == "unsigned" || tmp == "using" || tmp == "virtual" || tmp == "void" || tmp == "volatile" ||
				   tmp == "wchar_t" || tmp == "while");
		   }

		   void errorWord(String^ word, int& k4, int& k6, int num)
		   {
			   String^ tmp = "";
			   for (int i = 0; i < word->Length; i++)
			   {
				   if (letter(word[i]) || number(word[i]) || word[i] == '_') tmp += word[i];
				   if (number(tmp[0])) tmp = "";
			   }
			   if (main_word(tmp)) reportError(num, "Ошибка ключевого слова " + word + "\nв таблицу будет внесен " + tmp), search(dataGridView4, tmp, k4);
			   else reportError(num, "Ошибка идентификатора " + word + "\nв таблицу будет внесен " + tmp), search(dataGridView6, tmp, k6);
		   }

		   void errorNumber(String^ word, int& k5, int num)
		   {
			   String^ word_tmp = word;
			   String^ tmp = "";
			   String^ s = ".eE+-";

			   if (word_tmp[0] == '.')
			   {
				   while (word_tmp[1] == 'e' || word_tmp[1] == 'E' || word_tmp[1] == '+' || word_tmp[1] == '-') word_tmp = word_tmp->Remove(1, 1);
			   }

			   for (int i = 0; i < word_tmp->Length; i++)
			   {
				   if (number(word_tmp[i]))
				   {
					   tmp += word_tmp[i];
				   }
				   else
				   {
					   int index = s->IndexOf(word_tmp[i]);
					   if (index >= 0)
					   {
						   tmp += word_tmp[i];
						   if (word_tmp[i] == '+' || word_tmp[i] == '-')
						   {
							   s = s->Replace("+", "");
							   s = s->Replace("-", "");
						   }
						   else
						   {
							   s = s->Remove(index, 1);
						   }
					   }
				   }
			   }

			   reportError(num, "Ошибка константы " + word + "\nв таблицу будет внесен " + tmp);
			   search(dataGridView5, tmp, k5);
		   }

		   void keyWord(wchar_t str, String^& word, int& S, int& k6, int& i)
		   {
			   if (letter(str) || number(str) || str == '_') word += System::Convert::ToString(str), S = 600;
			   else if (str == ' ') S = 600, i--;
			   else if (delimiter(str)) search(dataGridView6, word, k6), word = System::Convert::ToString(str), S = 11;
			   else if (str == '.') S = 600;
			   else if (str == '+') S = 1, search(dataGridView6, word, k6), word = System::Convert::ToString(str);
			   else if (str == '-') S = 2, search(dataGridView6, word, k6), word = System::Convert::ToString(str);
			   else if (str == '*' || str == '/' || str == '%') S = 3, search(dataGridView6, word, k6), word = System::Convert::ToString(str);
			   else if (str == '=') S = 6, search(dataGridView6, word, k6), word = System::Convert::ToString(str);
			   else if (str == '>') S = 7, search(dataGridView6, word, k6), word = System::Convert::ToString(str);
			   else if (str == '<') S = 10, search(dataGridView6, word, k6), word = System::Convert::ToString(str);
			   else S = 1444, word += str;
		   }

		   void correct(String^& word, int& k, int& S, int& i, DataGridView^ dataGridView)
		   {
			   search(dataGridView, word, k);
			   S = 0;
			   i--;
			   word = "";
		   }



	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str = richTextBox2->Text;

		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		dataGridView3->Rows->Clear();
		dataGridView4->Rows->Clear();
		dataGridView5->Rows->Clear();
		dataGridView6->Rows->Clear();

		richTextBox3->Clear();
		richTextBox4->Clear();
		richTextBox5->Clear();

		int S = 0, i = 2, length = str->Length;
		int k1 = 1, k2 = 1, k3 = 1, k4 = 1, k5 = 1, k6 = 1;
		int num = 1;

		bool fl = false;

		String^ word = "";
		while (i < length)
		{
			if (str[i] == '\n') ++num, i += 3;
			switch (S)
			{
			case 0:
				if (i >= length) i--;
				else if (str[i] == '+') S = 1, word += str[i];
				else if (str[i] == '-') S = 2, word += str[i];
				else if (str[i] == '*' || str[i] == '/' || str[i] == '%') S = 3, word += str[i];
				else if (str[i] == '=') S = 6, word += str[i];
				else if (str[i] == '>') S = 7, word += str[i];
				else if (str[i] == '!') S = 9, word += str[i];
				else if (str[i] == '<') S = 10, word += str[i];
				else if (str[i] == ';' || str[i] == ':' || str[i] == ',' || str[i] == '(' || str[i] == ')' || str[i] == '[' || str[i] == ']' || str[i] == '{' || str[i] == '}') S = 11, word += str[i];
				else if (str[i] == 'a') S = 12, word += str[i];
				else if (str[i] == 'b') S = 15, word += str[i];
				else if (str[i] == 'c') S = 21, word += str[i];
				else if (str[i] == 'd') S = 38, word += str[i];
				else if (str[i] == 'e') S = 51, word += str[i];
				else if (str[i] == 'f') S = 67, word += str[i];
				else if (str[i] == 'g') S = 79, word += str[i];
				else if (str[i] == 'i') S = 82, word += str[i];
				else if (str[i] == 'l') S = 87, word += str[i];
				else if (str[i] == 'm') S = 90, word += str[i];
				else if (str[i] == 'n') S = 96, word += str[i];
				else if (str[i] == 'o') S = 116, word += str[i];
				else if (str[i] == 'p') S = 123, word += str[i];
				else if (str[i] == 'r') S = 139, word += str[i];
				else if (str[i] == 's') S = 149, word += str[i];
				else if (str[i] == 't') S = 171, word += str[i];
				else if (str[i] == 'u') S = 193, word += str[i];
				else if (str[i] == 'v') S = 205, word += str[i];
				else if (str[i] == 'w') S = 218, word += str[i];
				else if (number(str[i])) S = 500, word += str[i];
				else if (str[i] == '"') S = 300, word += str[i];
				else if (str[i] == 39) S = 301, word += str[i];
				else if (str[i] == '.') S = 302, word += str[i];
				else if (letter(str[i]) || str[i] == '_') S = 600, word += str[i];
				else S = 0;
				break;
			case 1: //+
				if (str[i] == '+') word += str[i], S = 5;
				else if (str[i] == '=') S = 4, word += str[i];
				else if (number(str[i])) S = 500, word += str[i];
				else if (str[i] == '.') S = 302, word += str[i];
				else if (operation(str[i]) || relation(str[i]) || delimiter(str[i])) S = 1111, i--;
				else fl = true;
				break;
			case 2: //-
				if (str[i] == '-') word += str[i], S = 5;
				else if (str[i] == '=') S = 4, word += str[i];
				else if (number(str[i])) S = 500, word += str[i];
				else if (str[i] == '.') S = 302, word += str[i];
				else if (operation(str[i]) || relation(str[i]) || delimiter(str[i])) S = 1111, i--;
				else fl = true;
				break;
			case 3: //* / %
				if (str[i] == '=') S = 4, word += str[i];
				else if (operation(str[i]) || relation(str[i]) || delimiter(str[i])) S = 1111, i--;
				else fl = true;
				break;
			case 4: // $=
				if (operation(str[i]) || relation(str[i]) || delimiter(str[i])) S = 1111, i--;
				else fl = true;
				break;
			case 5:
				fl = true;
				break;
			case 6: // =
				if (str[i] == '=') S = 8, word += str[i];
				else if (operation(str[i]) || relation(str[i]) || delimiter(str[i])) S = 1111, i--;
				else fl = true;
				break;
			case 7: // >
				if (str[i] == '=') S = 8, word += str[i];
				else if (str[i] == '>') S = 227, word += str[i];
				else if (operation(str[i]) || relation(str[i]) || delimiter(str[i])) S = 1222, i--;
				else fl = true;
				break;
			case 8: // $=
				if (operation(str[i]) || relation(str[i]) || delimiter(str[i])) S = 1222, i--;
				else fl = true;
				break;
			case 9: // !
				if (str[i] == '=') S = 8, word += str[i];
				else if (operation(str[i]) || relation(str[i]) || delimiter(str[i])) S = 1111, i--;
				else fl = true;
				break;
			case 10:
				if (str[i] == '=') S = 8, word += str[i];
				else if (str[i] == '<') S = 227, word += str[i];
				else if (operation(str[i]) || relation(str[i]) || delimiter(str[i])) S = 1222, i--;
				else fl = true;
				break;
			case 11: // разделители
				fl = true;
				break;
			case 12: //a
				if (str[i] == 'u') S = 13, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 13:
				if (str[i] == 't') S = 14, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 14:
				if (str[i] == 'o') S = 400, word += str[i]; //auto
				else keyWord(str[i], word, S, k6, i);
				break;
			case 15: //b
				if (str[i] == 'o') S = 16, word += str[i];
				else if (str[i] == 'r') S = 18, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 16:
				if (str[i] == 'o') S = 17, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 17:
				if (str[i] == 'l') S = 400, word += str[i]; //bool
				else keyWord(str[i], word, S, k6, i);
				break;
			case 18: 
				if (str[i] == 'e') S = 19, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 19:
				if (str[i] == 'a') S = 20, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 20:
				if (str[i] == 'k') S = 400, word += str[i]; //break
				else keyWord(str[i], word, S, k6, i);
				break;
			case 21: //c
				if (str[i] == 'a') S = 22, word += str[i];
				else if (str[i] == 'h') S = 26, word += str[i];
				else if (str[i] == 'l') S = 28, word += str[i];
				else if (str[i] == 'o') S = 31, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 22:
				if (str[i] == 's') S = 23, word += str[i];
				else if (str[i] == 't') S = 24, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 23:
				if (str[i] == 'e') S = 400, word += str[i]; //case
				else keyWord(str[i], word, S, k6, i);
				break;
			case 24:
				if (str[i] == 'c') S = 25, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 25:
				if (str[i] == 'h') S = 400, word += str[i]; //catch
				else keyWord(str[i], word, S, k6, i);
				break;
			case 26:
				if (str[i] == 'a') S = 27, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 27:
				if (str[i] == 'r') S = 400, word += str[i]; //char
				else keyWord(str[i], word, S, k6, i);
				break;
			case 28:
				if (str[i] == 'a') S = 29, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 29:
				if (str[i] == 's') S = 30, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 30:
				if (str[i] == 's') S = 400, word += str[i]; //class
				else keyWord(str[i], word, S, k6, i);
				break;
			case 31:
				if (str[i] == 'n') S = 32, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 32:
				if (str[i] == 's') S = 33, word += str[i];
				else if (str[i] == 't') S = 34, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 33:
				if (str[i] == 't') S = 400, word += str[i]; //const
				else keyWord(str[i], word, S, k6, i);
				break;
			case 34:
				if (str[i] == 'i') S = 35, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 35:
				if (str[i] == 'n') S = 36, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 36:
				if (str[i] == 'u') S = 37, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 37:
				if (str[i] == 'e') S = 400, word += str[i]; //continue
				else keyWord(str[i], word, S, k6, i);
				break;
			case 38:
				if (str[i] == 'e') S = 39, word += str[i]; //d
				else if (str[i] == 'o') S = 47, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 39:
				if (str[i] == 'f') S = 40, word += str[i];
				else if (str[i] == 'l') S = 44, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 40:
				if (str[i] == 'a') S = 41, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 41:
				if (str[i] == 'u') S = 42, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 42:
				if (str[i] == 'l') S = 43, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 43:
				if (str[i] == 't') S = 400, word += str[i]; //default
				else keyWord(str[i], word, S, k6, i);
				break;
			case 44:
				if (str[i] == 'e') S = 45, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 45:
				if (str[i] == 't') S = 46, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 46:
				if (str[i] == 'e') S = 400, word += str[i]; //delete
				else keyWord(str[i], word, S, k6, i);
				break;
			case 47:
				if (str[i] == 'u') S = 48, word += str[i];
				else if (str[i] == ' ' || str[i] == '{') S = 400, i--; //do
				else keyWord(str[i], word, S, k6, i);
				break;
			case 48:
				if (str[i] == 'b') S = 49, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 49:
				if (str[i] == 'l') S = 50, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 50:
				if (str[i] == 'e') S = 400, word += str[i]; //double
				else keyWord(str[i], word, S, k6, i);
				break;
			case 51: //e
				if (str[i] == 'l') S = 52, word += str[i];
				else if (str[i] == 'n') S = 54, word += str[i];
				else if (str[i] == 'x') S = 56, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 52:
				if (str[i] == 's') S = 53, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 53:
				if (str[i] == 'e') S = 400, word += str[i]; //else
				else keyWord(str[i], word, S, k6, i);
				break;
			case 54:
				if (str[i] == 'u') S = 55, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 55: 
				if (str[i] == 'm') S = 400, word += str[i]; //enum
				else keyWord(str[i], word, S, k6, i);
				break;
			case 56:
				if (str[i] == 'p') S = 57, word += str[i];
				else if (str[i] == 't') S = 64, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 57:
				if (str[i] == 'l') S = 58, word += str[i];
				else if (str[i] == 'o') S = 62, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 58:
				if (str[i] == 'i') S = 59, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 59:
				if (str[i] == 'c') S = 60, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 60:
				if (str[i] == 'i') S = 61, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 61: 
				if (str[i] == 't') S = 400, word += str[i];//explicit
				else keyWord(str[i], word, S, k6, i);
				break;
			case 62:
				if (str[i] == 'r') S = 63, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 63:
				if (str[i] == 't') S = 400, word += str[i];  //export
				else keyWord(str[i], word, S, k6, i);
				break;
			case 64:
				if (str[i] == 'e') S = 65, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 65:
				if (str[i] == 'r') S = 66, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 66: 
				if (str[i] == 'n') S = 400, word += str[i]; //extern
				else keyWord(str[i], word, S, k6, i);
				break;
			case 67: //f
				if (str[i] == 'a') S = 68, word += str[i];
				else if (str[i] == 'l') S = 71, word += str[i];
				else if (str[i] == 'o') S = 74, word += str[i];
				else if (str[i] == 'r') S = 75, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 68:
				if (str[i] == 'l') S = 69, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 69:
				if (str[i] == 's') S = 70, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 70: 
				if (str[i] == 'e') S = 400, word += str[i]; //false
				else keyWord(str[i], word, S, k6, i);
				break;
			case 71:
				if (str[i] == 'o') S = 72, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 72:
				if (str[i] == 'a') S = 73, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 73: 
				if (str[i] == 't') S = 400, word += str[i]; //float
				else keyWord(str[i], word, S, k6, i);
				break;
			case 74: 
				if (str[i] == 'r') S = 400, word += str[i]; //for
				else keyWord(str[i], word, S, k6, i);
				break;
			case 75:
				if (str[i] == 'i') S = 76, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 76:
				if (str[i] == 'e') S = 77, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 77:
				if (str[i] == 'n') S = 78, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 78: 
				if (str[i] == 'd') S = 400, word += str[i]; //friend
				else keyWord(str[i], word, S, k6, i);
				break;
			case 79: //g
				if (str[i] == 'o') S = 80, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 80:
				if (str[i] == 't') S = 81, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 81: 
				if (str[i] == 'o') S = 400, word += str[i]; //goto
				else keyWord(str[i], word, S, k6, i);
				break;
			case 82: //i
				if (str[i] == 'f') S = 400, word += str[i]; //if
				else if (str[i] == 'n') S = 83, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 83: 
				if (str[i] == 't') S = 400, word += str[i]; //int
				else if (str[i] == 'l') S = 84, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 84:
				if (str[i] == 'i') S = 85, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 85:
				if (str[i] == 'n') S = 86, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 86: 
				if (str[i] == 'e') S = 400, word += str[i]; //inline
				else keyWord(str[i], word, S, k6, i);
				break;
			case 87: //l
				if (str[i] == 'o') S = 88, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 88:
				if (str[i] == 'n') S = 89, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 89: 
				if (str[i] == 'g') S = 400, word += str[i]; //long
				else keyWord(str[i], word, S, k6, i);
				break;
			case 90: //m
				if (str[i] == 'u') S = 91, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 91:
				if (str[i] == 't') S = 92, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 92:
				if (str[i] == 'a') S = 93, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 93:
				if (str[i] == 'b') S = 94, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 94:
				if (str[i] == 'l') S = 95, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 95: 
				if (str[i] == 'e') S = 400, word += str[i]; //mutable
				else keyWord(str[i], word, S, k6, i);
				break;
			case 96: //n
				if (str[i] == 'a') S = 97, word += str[i];
				else if (str[i] == 'e') S = 104, word += str[i];
				else if (str[i] == 'o') S = 105, word += str[i];
				else if (str[i] == 'u') S = 111, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 97:
				if (str[i] == 'm') S = 98, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 98:
				if (str[i] == 'e') S = 99, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 99:
				if (str[i] == 's') S = 100, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 100:
				if (str[i] == 'p') S = 101, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 101:
				if (str[i] == 'a') S = 102, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 102:
				if (str[i] == 'c') S = 103, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 103: 
				if (str[i] == 'e') S = 400, word += str[i]; //namespace
				else keyWord(str[i], word, S, k6, i);
				break;
			case 104: 
				if (str[i] == 'w') S = 400, word += str[i]; //new
				else keyWord(str[i], word, S, k6, i);
				break;
			case 105:
				if (str[i] == 'e') S = 106, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 106:
				if (str[i] == 'x') S = 107, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 107:
				if (str[i] == 'c') S = 108, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 108:
				if (str[i] == 'e') S = 109, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 109:
				if (str[i] == 'p') S = 110, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 110: 
				if (str[i] == 't') S = 400, word += str[i]; //noexcept
				else keyWord(str[i], word, S, k6, i);
				break;
			case 111:
				if (str[i] == 'l') S = 112, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 112:
				if (str[i] == 'l') S = 113, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 113:
				if (str[i] == 'p') S = 114, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 114:
				if (str[i] == 't') S = 115, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 115: 
				if (str[i] == 'r') S = 400, word += str[i]; //nullptr
				else keyWord(str[i], word, S, k6, i);
				break;
			case 116: //o
				if (str[i] == 'p') S = 117, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 117:
				if (str[i] == 'e') S = 118, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 118:
				if (str[i] == 'r') S = 119, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 119:
				if (str[i] == 'a') S = 120, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 120:
				if (str[i] == 't') S = 121, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 121:
				if (str[i] == 'o') S = 122, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 122: 
				if (str[i] == 'r') S = 400, word += str[i]; //operator
				else keyWord(str[i], word, S, k6, i);
				break;
			case 123: //p
				if (str[i] == 'r') S = 124, word += str[i];
				else if (str[i] == 'u') S = 135, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 124:
				if (str[i] == 'i') S = 125, word += str[i];
				else if (str[i] == 'o') S = 129, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 125:
				if (str[i] == 'v') S = 126, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 126:
				if (str[i] == 'a') S = 127, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 127:
				if (str[i] == 't') S = 128, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 128: 
				if (str[i] == 'e') S = 400, word += str[i]; //private
				else keyWord(str[i], word, S, k6, i);
				break;
			case 129:
				if (str[i] == 't') S = 130, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 130:
				if (str[i] == 'e') S = 131, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 131:
				if (str[i] == 'c') S = 132, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 132:
				if (str[i] == 't') S = 133, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 133:
				if (str[i] == 'e') S = 134, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 134: 
				if (str[i] == 'd') S = 400, word += str[i]; //protected
				else keyWord(str[i], word, S, k6, i);
				break;
			case 135:
				if (str[i] == 'b') S = 136, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 136:
				if (str[i] == 'l') S = 137, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 137:
				if (str[i] == 'i') S = 138, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 138:
				if (str[i] == 'c') S = 400, word += str[i];  //public
				else keyWord(str[i], word, S, k6, i);
				break;
			case 139: //r
				if (str[i] == 'e') S = 140, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 140:
				if (str[i] == 'g') S = 141, word += str[i];
				else if (str[i] == 't') S = 146, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 141:
				if (str[i] == 'i') S = 142, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 142:
				if (str[i] == 's') S = 143, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 143:
				if (str[i] == 't') S = 144, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 144:
				if (str[i] == 'e') S = 145, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 145: 
				if (str[i] == 'r') S = 400, word += str[i]; //register
				else keyWord(str[i], word, S, k6, i);
				break;
			case 146:
				if (str[i] == 'u') S = 147, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 147:
				if (str[i] == 'r') S = 148, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 148: 
				if (str[i] == 'n') S = 400, word += str[i]; //return
				else keyWord(str[i], word, S, k6, i);
				break;
			case 149: //s
				if (str[i] == 'h') S = 150, word += str[i];
				else if (str[i] == 'i') S = 153, word += str[i];
				else if (str[i] == 't') S = 160, word += str[i];
				else if (str[i] == 'w') S = 167, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 150:
				if (str[i] == 'o') S = 151, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 151:
				if (str[i] == 'r') S = 152, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 152: 
				if (str[i] == 't') S = 400, word += str[i]; //short
				else keyWord(str[i], word, S, k6, i);
				break;
			case 153:
				if (str[i] == 'g') S = 154, word += str[i];
				else if (str[i] == 'z') S = 157, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 154:
				if (str[i] == 'n') S = 155, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 155:
				if (str[i] == 'e') S = 156, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 156: 
				if (str[i] == 'd') S = 400, word += str[i]; //signed
				else keyWord(str[i], word, S, k6, i);
				break;
			case 157:
				if (str[i] == 'e') S = 158, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 158:
				if (str[i] == 'o') S = 159, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 159:
				if (str[i] == 'f') S = 400, word += str[i]; //sizeof
				else keyWord(str[i], word, S, k6, i);
				break;
			case 160:
				if (str[i] == 'a') S = 161, word += str[i];
				else if (str[i] == 'r') S = 164, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 161:
				if (str[i] == 't') S = 162, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 162:
				if (str[i] == 'i') S = 163, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 163:
				if (str[i] == 'c') S = 400, word += str[i]; //static
				else keyWord(str[i], word, S, k6, i);
				break;
			case 164:
				if (str[i] == 'u') S = 165, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 165:
				if (str[i] == 'c') S = 166, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 166: 
				if (str[i] == 't') S = 400, word += str[i]; //struct
				else keyWord(str[i], word, S, k6, i);
				break;
			case 167:
				if (str[i] == 'i') S = 168, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 168:
				if (str[i] == 't') S = 169, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 169:
				if (str[i] == 'c') S = 170, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 170: 
				if (str[i] == 'h') S = 400, word += str[i]; //switch
				else keyWord(str[i], word, S, k6, i);
				break;
			case 171: //t
				if (str[i] == 'e') S = 172, word += str[i];
				else if (str[i] == 'h') S = 178, word += str[i];
				else if (str[i] == 'r') S = 182, word += str[i];
				else if (str[i] == 'y') S = 184, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 172:
				if (str[i] == 'm') S = 173, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 173:
				if (str[i] == 'p') S = 174, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 174:
				if (str[i] == 'l') S = 175, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 175:
				if (str[i] == 'a') S = 176, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 176:
				if (str[i] == 't') S = 177, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 177: 
				if (str[i] == 'e') S = 400, word += str[i];//template
				else keyWord(str[i], word, S, k6, i);
				break;
			case 178:
				if (str[i] == 'i') S = 179, word += str[i];
				else if (str[i] == 'r') S = 180, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 179: 
				if (str[i] == 's') S = 400, word += str[i]; //this
				else keyWord(str[i], word, S, k6, i);
				break;
			case 180:
				if (str[i] == 'o') S = 181, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 181: 
				if (str[i] == 'w') S = 400, word += str[i]; //throw
				else keyWord(str[i], word, S, k6, i);
				break;
			case 182: 
				if (str[i] == 'u') S = 183, word += str[i];
				else if (str[i] == 'y') S = 400, word += str[i]; //try
				else keyWord(str[i], word, S, k6, i);
				break;
			case 183: 
				if (str[i] == 'e') S = 400, word += str[i]; //true
				else keyWord(str[i], word, S, k6, i);
				break;
			case 184:
				if (str[i] == 'p') S = 185, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 185:
				if (str[i] == 'e') S = 186, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 186:
				if (str[i] == 'd') S = 187, word += str[i];
				else if (str[i] == 'i') S = 189, word += str[i];
				else if (str[i] == 'n') S = 190, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 187:
				if (str[i] == 'e') S = 188, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 188: 
				if (str[i] == 'f') S = 400, word += str[i]; //typedef
				else keyWord(str[i], word, S, k6, i);
				break;
			case 189: 
				if (str[i] == 'd') S = 400, word += str[i]; //typeid
				else keyWord(str[i], word, S, k6, i);
				break;
			case 190:
				if (str[i] == 'a') S = 191, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 191:
				if (str[i] == 'm') S = 192, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 192: 
				if (str[i] == 'e') S = 400, word += str[i];//typename
				else keyWord(str[i], word, S, k6, i);
				break;
			case 193: //u
				if (str[i] == 'n') S = 194, word += str[i];
				else if (str[i] == 's') S = 202, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 194:
				if (str[i] == 'i') S = 195, word += str[i];
				else if (str[i] == 's') S = 197, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 195:
				if (str[i] == 'o') S = 196, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 196: 
				if (str[i] == 'n') S = 400, word += str[i]; //union
				else keyWord(str[i], word, S, k6, i);
				break;
			case 197:
				if (str[i] == 'i') S = 198, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 198:
				if (str[i] == 'g') S = 199, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 199:
				if (str[i] == 'n') S = 200, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 200:
				if (str[i] == 'e') S = 201, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 201: 
				if (str[i] == 'd') S = 400, word += str[i]; //unsigned
				else keyWord(str[i], word, S, k6, i);
				break;
			case 202:
				if (str[i] == 'i') S = 203, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 203:
				if (str[i] == 'n') S = 204, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 204: 
				if (str[i] == 'g') S = 400, word += str[i];//using
				else keyWord(str[i], word, S, k6, i);
				break;
			case 205: //v
				if (str[i] == 'i') S = 206, word += str[i];
				else if (str[i] == 'o') S = 211, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 206:
				if (str[i] == 'r') S = 207, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 207:
				if (str[i] == 't') S = 208, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 208:
				if (str[i] == 'u') S = 209, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 209:
				if (str[i] == 'a') S = 210, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 210:
				if (str[i] == 'l') S = 400, word += str[i]; //virtual
				else keyWord(str[i], word, S, k6, i);
				break;
			case 211:
				if (str[i] == 'i') S = 212, word += str[i];
				else if (str[i] == 'l') S = 213, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 212: 
				if (str[i] == 'd') S = 400, word += str[i];//void
				else keyWord(str[i], word, S, k6, i);
				break;
			case 213:
				if (str[i] == 'a') S = 214, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 214:
				if (str[i] == 't') S = 215, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 215:
				if (str[i] == 'i') S = 216, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 216:
				if (str[i] == 'l') S = 217, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 217: 
				if (str[i] == 'e') S = 400, word += str[i];//volatile
				else keyWord(str[i], word, S, k6, i);
				break;
			case 218: //w
				if (str[i] == 'c') S = 219, word += str[i];
				else if (str[i] == 'h') S = 224, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 219:
				if (str[i] == 'h') S = 220, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 220:
				if (str[i] == 'a') S = 221, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 221:
				if (str[i] == 'r') S = 222, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 222:
				if (str[i] == '_') S = 223, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 223: 
				if (str[i] == 't') S = 400, word += str[i]; //wchar_t
				else keyWord(str[i], word, S, k6, i);
				break;
			case 224:
				if (str[i] == 'i') S = 225, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 225:
				if (str[i] == 'l') S = 226, word += str[i];
				else keyWord(str[i], word, S, k6, i);
				break;
			case 226: 
				if (str[i] == 'e') S = 400, word += str[i]; //while
				else keyWord(str[i], word, S, k6, i);
				break;


			case 227: // >> <<
				if (operation(str[i]) || relation(str[i]) || delimiter(str[i])) S = 1111, i--;
				else fl = true;
				break;

			case 300: //"
				if (str[i] != '"') word += str[i];
				else fl = true;
				break;

			case 301: //'
				if (str[i] != 39) word += str[i];
				else fl = true;
				break;

			case 302: //.
				if (number(str[i])) word += str[i], S = 307;
				else word += str[i], S = 1333;
				break;

			case 303:
				if (number(str[i])) word += str[i];
				else if (str[i] == ' ' || delimiter(str[i]) || str[i] == '\n') fl = true;
				else if (str[i] == 'e' || str[i] == 'E') word += str[i], S = 304;
				else word += str[i], S = 1333;
				break;

			case 304: //e
				if (number(str[i])) word += str[i];
				else if (str[i] == ' ' || delimiter(str[i]) || str[i] == '\n') fl = true;
				else if (str[i] == '-') word += str[i], S = 305;
				else if (str[i] == '+') word += str[i], S = 306;
				else word += str[i], S = 1333;
				break;

			case 305: //e-
				if (number(str[i])) word += str[i];
				else if (str[i] == ' ' || delimiter(str[i]) || str[i] == '\n') fl = true;
				else if (str[i] == '+') S = 1333, word += str[i];
				else word += str[i], S = 1333;
				break;

			case 306: //e+
				if (number(str[i])) word += str[i];
				else if (str[i] == ' ' || delimiter(str[i]) || str[i] == '\n') fl = true;
				else if (str[i] == '-') S = 1333, word += str[i];
				else word += str[i], S = 1333;
				break;

			case 307: //.
				if (number(str[i])) word += str[i], S = 307;
				else if (str[i] == ' ' || delimiter(str[i]) || str[i] == '\n') fl = true;
				else if (str[i] == 'e' || str[i] == 'E') word += str[i], S = 304;
				else word += str[i], S = 1333;
				break;

			case 400: //ключевые слова
				if (str[i] == '&' || str[i] == '*') word += str[i];
				else if (str[i] == ' ' || delimiter(str[i])) fl = true;
				else keyWord(str[i], word, S, k6, i);
				break;

			case 500: //константы
				if (number(str[i])) word += str[i];
				else if (str[i] == ' ' || delimiter(str[i]) || str[i] == '\n') fl = true;
				else if (str[i] == '.') word += str[i], S = 303;
				else if (str[i] == 'e' || str[i] == 'E') word += str[i], S = 304;
				else if (letter(str[i])) word += str[i], S = 1444;
				else word += str[i], S = 1333;
				break;

			case 600: //идентификаторы
				if (letter(str[i]) || number(str[i]) || str[i] == '_') word += str[i];
				else if (symbol(str[i])) word += str[i], S = 1444;
				else fl = true;
				break;

			case 1111: //ошибка операции
				fl = true;
				break;

			case 1222: //ошибка отношения
				fl = true;
				break;

			case 1333: //ошибка константы
				if (str[i] == ' ' || str[i] == '\n') fl = true;
				else word += str[i];
				break;

			case 1444: //ошибка идентификатора или ключевого слова
				if (str[i] == ' ' || str[i] == '\n') fl = true;
				else word += str[i];
				break;


			}
			if (fl)//проверка на конечное состояние
			{
				if (S == 1 || S == 2 || S == 3 || S == 4 || S == 5 || S == 6 || S == 9 || S == 227) correct(word, k1, S, i, dataGridView1); // для знаков операций	
				else if (S == 7 || S == 8 || S == 10) correct(word, k2, S, i, dataGridView2); // для операторов отношений
				else if (S == 11) correct(word, k3, S, i, dataGridView3);
				else if (S == 1111)
				{
					reportError(num, "Ошибка знака операции " + word + " :\n" + str[i] + " после " + word);
					correct(word, k1, S, i, dataGridView1);
				}
				else if (S == 1222)
				{
					reportError(num, "Ошибка операции отношения " + word + " :\n" + str[i] + " после " + word);
					correct(word, k2, S, i, dataGridView2);
				}
				else if (S == 1333)
				{
					S = 0;
					errorNumber(word, k5, num);
					word = "";
				}
				else if (S == 1444)
				{
					S = 0;
					errorWord(word, k4, k6, num);
					word = "";
				}
				else if (S == 400) correct(word, k4, S, i, dataGridView4);
				else if (S == 500) correct(word, k5, S, i, dataGridView5);
				else if (S == 300 || S == 301)
				{
					word += str[i];
					search(dataGridView5, word, k5);
					word = "";
					S = 0;
				}
				else if (S == 303 || S == 304 || S == 305 || S == 306 || S == 307) correct(word, k5, S, i, dataGridView5);
				else if (S == 600) correct(word, k6, S, i, dataGridView6);
			}
			fl = false;
			i++;
		}
		if (S == 300 || S == 301) reportError(num, "Незакрытый литерал");
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();
		richTextBox2->Clear();
		richTextBox3->Clear();
		richTextBox4->Clear();
		richTextBox5->Clear();
		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		dataGridView3->Rows->Clear();
		dataGridView4->Rows->Clear();
		dataGridView5->Rows->Clear();
		dataGridView6->Rows->Clear();
	}
	};
};
