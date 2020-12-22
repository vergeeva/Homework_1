#pragma once
#define MAX_SIZE 30
using namespace System;

ref class My_Stack
{
	array <String^>^ A;
	int top;
	bool Is_Empty() //�������� �� �������
	{
		return top == 0;
	}
	bool Is_Full()//�������� �� �������������
	{
		return top == MAX_SIZE;
	}
	// �������� � ����.
public:
	My_Stack(void) //����������� �� ���������
	{
		top = 0;
		A = gcnew array <String^>(MAX_SIZE);
	}
	My_Stack(My_Stack ^other) //����������� �����������
	{
		this->top = other->top;
		A = gcnew array <String^>(MAX_SIZE);
		this->A = other->A;
	}

	bool Push(String^ Word) //���������� �������� � ����� �����
	{
		if (!Is_Full())		// ���� �� ���������, �� ��������.
		{
			A[top++] = gcnew String(Word);
			return true;
		}
		else
			return false;
	}

	String^ Pop()//�������� ���������� �������� �����
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