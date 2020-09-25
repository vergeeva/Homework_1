#pragma once
#include "Word.h"
#define MAX_SIZE 10
using namespace System;

ref class My_Stack
{
	array <word^>^ A;
	int top;
public:
	My_Stack(void) //Конструктор по умолчанию
	{
		top = 0;
		A = gcnew array <word^>(MAX_SIZE);
	}
	My_Stack(My_Stack ^other) //Конструктор копирования
	{
		this->top = other->top;
		A = gcnew array <word^>(MAX_SIZE);
		this->A = other->A;
	}
	bool Is_Empty() //проверка на пустоту
	{
		return top == 0;
	}
	bool Is_Full()//Проверка на заполненность
	{
		return top == MAX_SIZE;
	}
	// Положить в стек.
	bool Push(String^ Word) //Добавление элемента в конец Стека
	{
		if (!Is_Full())		// Если не заполнено, то добавить.
		{
			A[top++] = gcnew word(Word);
			return true;
		}
		else
			return false;
	}
	// Извлечь из стека
	bool Pop()//Удаление последнего элемента стека
	{
		word ^Word;
		if (!Is_Empty())		// Если не пусто, то извлечь.
		{
			Word = gcnew word(A[--top]);
			return true;
		}
		else
			return false;		// Искусственный прием. 
	}

	void View(System::Windows::Forms::ListBox^LB) //Показать Стек на Лист Боксе
	{
		LB->Items->Clear();
		for (int i = 0; i < top; i++)
		{
			LB->Items->Add(A[i]->ToString());
		}
	}

	word^ Top() //Показать последний элемент
	{
		int temp = top; //Чтобы не вычитать из переменной top
		return this->A[--temp];
	}


};