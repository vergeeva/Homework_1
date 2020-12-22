#pragma once
#define MAX_SIZE 30
using namespace System;

ref class My_Stack
{
	array <String^>^ A;
	int top;
	bool Is_Empty() //проверка на пустоту
	{
		return top == 0;
	}
	bool Is_Full()//Проверка на заполненность
	{
		return top == MAX_SIZE;
	}
	// Положить в стек.
public:
	My_Stack(void) //Конструктор по умолчанию
	{
		top = 0;
		A = gcnew array <String^>(MAX_SIZE);
	}
	My_Stack(My_Stack ^other) //Конструктор копирования
	{
		this->top = other->top;
		A = gcnew array <String^>(MAX_SIZE);
		this->A = other->A;
	}

	bool Push(String^ Word) //Добавление элемента в конец Стека
	{
		if (!Is_Full())		// Если не заполнено, то добавить.
		{
			A[top++] = gcnew String(Word);
			return true;
		}
		else
			return false;
	}

	String^ Pop()//Удаление последнего элемента стека
	{
		String^ Word;
		if (!Is_Empty())		
		{
			Word = gcnew String(A[--top]);
			return Word;
		}
		else
			return "0";		
	}

};