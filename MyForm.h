#pragma once
#include "Stack.h"
using namespace System::IO;
using namespace System::Collections::Generic;

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
			Arr = gcnew List < String^>(MAX_SIZE);
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
		List < String^>^ Arr;

	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Label^ label2;

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

		void View(List < String^>^ Arr, System::Windows::Forms::ListBox^ LB) //Показать Стек на Лист Боксе
		{
			LB->Items->Clear(); //Чистим листбокс
			for (int i = 0; i < Arr->Count; i++)
			{
				LB->Items->Add(Arr[i]);//Добавляем элемент массива
			}
		} 

		My_Stack^ Del_Main(List < String^>^ Arr) //Затолкать в стек только те слова, которые не содержат заглавных букв
		{
			My_Stack^ B = gcnew My_Stack(); //Создаем Стэк
			for (int i = 0; i< Arr->Count; i++)
			{//проверка на наличие заглавных букв
				if (!(System::Text::RegularExpressions::Regex::IsMatch(Arr[i], "[A-Z]") || System::Text::RegularExpressions::Regex::IsMatch(Arr[i], "[А-Я]")))
				{
					B->Push(Arr[i]); //Добавляем в стек, если нет заглавных букв в слове
				}
			}
			return B;//возвращаем стек
		}

		My_Stack^ Del_One(List < String^>^ Arr) //Затолкать в стек только те слова, длина которых больше единицы
		{
			My_Stack^ B = gcnew My_Stack();//Создаем Стэк
			for (int i = 0; i < Arr->Count; i++)
			{
				if (!(Arr[i]->Length == 1)) //Проверяем длину слова массива
				{
					B->Push(Arr[i]);//Если не состоит из одной буквы, добавляем в стэк
				} 
			}
			return B;//возвращаем стек
		}

		void From_Stack_In_Array(List < String^>^ Arr, My_Stack^ B) //Вытолкнуть элемента стека в массив
		{
			Arr->Clear(); //Чистим массив
			String^ word = gcnew String("1");  //даем память
			while (word != "0")
			{
				word = gcnew String(B->Pop()); //Выталкиваем последний элемент стека и сохраняем в переменную
				if (word != "0")
				{
					Arr->Add(word);//Добавляем слово
				}
			}

		}

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(26, 52);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(244, 244);
			this->listBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(22, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Список слов:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tan;
			this->button1->Location = System::Drawing::Point(306, 126);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(253, 36);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Pop";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Tan;
			this->button2->Location = System::Drawing::Point(306, 84);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(253, 36);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Push";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(306, 52);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(253, 26);
			this->richTextBox1->TabIndex = 11;
			this->richTextBox1->Text = L"";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Tan;
			this->button4->Location = System::Drawing::Point(306, 234);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(253, 60);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Удалить слова,\nсодержащие только одну букву";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Tan;
			this->button5->Location = System::Drawing::Point(306, 168);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(253, 60);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Удалить слова,\nсодержащие заглавные буквы";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(332, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 18);
			this->label2->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 335);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Стек";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (Arr->Count != 0) Arr->Remove(Arr[Arr->Count-1]);
	View(Arr, listBox1);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text != "")
	{
		Arr->Add(richTextBox1->Text);
	}
	View(Arr, listBox1);
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{ 
	A = gcnew My_Stack(Del_One(Arr));
	From_Stack_In_Array(Arr, A);
	View(Arr, listBox1);
}
	
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	A = gcnew My_Stack(Del_Main(Arr));
	From_Stack_In_Array(Arr, A);
	View(Arr, listBox1);
}
};
}
