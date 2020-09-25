#pragma once
#include "Word.h"
#define MAX_SIZE 10
using namespace System;

ref class My_Stack
{
	array <word^>^ A;
	int top;
public:
	My_Stack(void) //����������� �� ���������
	{
		top = 0;
		A = gcnew array <word^>(MAX_SIZE);
	}
	My_Stack(My_Stack ^other) //����������� �����������
	{
		this->top = other->top;
		A = gcnew array <word^>(MAX_SIZE);
		this->A = other->A;
	}
	bool Is_Empty() //�������� �� �������
	{
		return top == 0;
	}
	bool Is_Full()//�������� �� �������������
	{
		return top == MAX_SIZE;
	}
	// �������� � ����.
	bool Push(String^ Word) //���������� �������� � ����� �����
	{
		if (!Is_Full())		// ���� �� ���������, �� ��������.
		{
			A[top++] = gcnew word(Word);
			return true;
		}
		else
			return false;
	}
	// ������� �� �����
	bool Pop()//�������� ���������� �������� �����
	{
		word ^Word;
		if (!Is_Empty())		// ���� �� �����, �� �������.
		{
			Word = gcnew word(A[--top]);
			return true;
		}
		else
			return false;		// ������������� �����. 
	}

	void View(System::Windows::Forms::ListBox^LB) //�������� ���� �� ���� �����
	{
		LB->Items->Clear();
		for (int i = 0; i < top; i++)
		{
			LB->Items->Add(A[i]->ToString());
		}
	}

	word^ Top() //�������� ��������� �������
	{
		int temp = top; //����� �� �������� �� ���������� top
		return this->A[--temp];
	}


};