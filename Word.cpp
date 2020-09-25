#include "Word.h"
#include <iostream>
#include <CTYPE.H>
using namespace System::IO;

#define MAX_SIZE 25
//1. ����������� ����� ����� �� ������ ������� � ������ �������� �������.
//2. ��������� ���� ��� ��������� ���������, ������ ���������� ������ �� ������� ����, 
//������ ������ ������������ ������������������ �������� ���������� ��������.
//������� �� ������������������ �� �����, ������� ������������� ��������� ������� ������ :
//1) �������� ��������� �����;
//2) ������� �� ������ �������.
//��������: ��� ��������� ��������, ��������, ������� ������������ ����� ������

word::word(String ^word) //���� ���� ����� �����
{
	len = word->Length;
	let = gcnew array <wchar_t^>(len);
	for (int i = 0; i < len; i++)
	{
		let[i] = word[i];
	}
}

word::word()//�� ���������
{
	len = 0;
	let = gcnew array <wchar_t^>(MAX_SIZE);
}

word::word(word^ other)//�����������
{
	this->len = other->len;
	this->let= gcnew array <wchar_t^>(len);
	for (int i = 0; i < len; i++)
	{
		this->let[i] = other->let[i];
	}
}


bool word::one_sym()//�������� �� ���� ������
{
	return len == 1;
}

bool word::capital()//�������� �� ��������� ����� ���������� ��������
{
	String^ Word = gcnew String("");
	for (int i = 0; i < len; i++)
	{
		Word += let[i];
	}
	bool T = System::Text::RegularExpressions::Regex::IsMatch(Word, "[A-Z]");
	return T;
}

String^ word::ToString()
{
	String^ line = gcnew String("");
	for (int i = 0; i < len; i++)
	{
		line += let[i];
	}
	return line;
}

