#include "Word.h"
#include <iostream>
#include <CTYPE.H>
using namespace System::IO;

#define MAX_SIZE 25
//1. Разработать класс «Стек» на основе массива с полной системой функций.
//2. Используя стек как временную структуру, решить прикладную задачу на массиве слов, 
//считая словом произвольную последовательность символов латинского алфавита.
//Удалить из последовательности те слова, которые удовлетворяют некоторой системе правил :
//1) включают заглавные буквы;
//2) состоят из одного символа.
//Указание: для упрощения проверок, возможно, следует использовать класс «Слово»

word::word(String ^word) //Если дано целое слово
{
	len = word->Length;
	let = gcnew array <wchar_t^>(len);
	for (int i = 0; i < len; i++)
	{
		let[i] = word[i];
	}
}

word::word()//по умолчанию
{
	len = 0;
	let = gcnew array <wchar_t^>(MAX_SIZE);
}

word::word(word^ other)//копирование
{
	this->len = other->len;
	this->let= gcnew array <wchar_t^>(len);
	for (int i = 0; i < len; i++)
	{
		this->let[i] = other->let[i];
	}
}


bool word::one_sym()//проверка на один символ
{
	return len == 1;
}

bool word::capital()//Проверка на заглавные буквы латинского алфавита
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

