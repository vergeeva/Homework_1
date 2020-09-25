#pragma once
#include "Stack.h"
#include "Word.h"

namespace Homework1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			A = gcnew My_Stack();
			Word = gcnew word();
		}
	private: System::Windows::Forms::Button^ button1;
	public:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		My_Stack ^A;
		word^ Word;
	private: System::Windows::Forms::Button^ button5;
	protected:

	private: System::Windows::Forms::Button^ button4;
	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(23, 52);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(217, 276);
			this->listBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(20, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Список слов";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Tan;
			this->button3->Location = System::Drawing::Point(418, 311);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 33);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Закрыть окно";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tan;
			this->button1->Location = System::Drawing::Point(246, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 36);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Pop";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Tan;
			this->button2->Location = System::Drawing::Point(246, 94);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 36);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Push";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(246, 52);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(138, 36);
			this->richTextBox1->TabIndex = 11;
			this->richTextBox1->Text = L"";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Tan;
			this->button4->Location = System::Drawing::Point(246, 241);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(330, 60);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Удалить слова,\nсодержащие только одну букву";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Tan;
			this->button5->Location = System::Drawing::Point(246, 178);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(330, 60);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Удалить слова,\nсодержащие заглавные буквы";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(598, 356);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Стек";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	A->View(listBox1); 
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	A->Pop();
	A->View(listBox1);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text != "")
	{
		A->Push(richTextBox1->Text);
	}
	A->View(listBox1);
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	My_Stack^ Copy = gcnew My_Stack();
	while (!(A->Is_Empty()))//Цикл выполняется, пока Стек наполнен
	{
		if (!(A->Top()->one_sym())) //Если слово состоит не из одного символа, тогда:
		{
			Copy->Push(A->Top()->ToString());//Добавляем в новый стек подходящие элементы
		}
		A->Pop();//Удаляем последний элемент
	}

	Copy->View(listBox1); //Выводим на ЛистБокс
	A = gcnew My_Stack(Copy); //Обновляем А
}
	
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	My_Stack^ Copy = gcnew My_Stack();
	while (!(A->Is_Empty()))//Цикл выполняется, пока Стек наполнен
	{
		if (!(A->Top()->capital()))//Смотрим последний элемент. Если в слове есть заглавные буквы,тогда:
		{
			Copy->Push(A->Top()->ToString());//Добавляем в новый стек подходящие элементы
		}
		A->Pop();//Удаляем последний элемент
	}

	Copy->View(listBox1);//Выводим на ЛистБокс
	A = gcnew My_Stack(Copy);//Обновляем А
}


};
}
