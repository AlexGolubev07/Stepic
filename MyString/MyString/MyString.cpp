#include "MyString.h"
#include <iostream>

MyString::MyString(const char* str)
{
	this->size = strlen(str);
	this->str = new char[this->size + 1];

	for (int i = 0; i < this->size; ++i)
	{
		this->str[i] = str[i];
	}
	this->str[this->size] = '\0';
}

MyString::MyString(size_t n, char c)
{
	this->str = new char[n + 1];
	this->size = n;

	for (int i = 0; i < n; ++i)
	{
		this->str[i] = c;
	}
	this->str[n] = '\0';
}

void MyString::append(MyString& other)
{
	char* n = new char[this->size + other.size + 1];
	for (int i = 0; i < this->size; ++i)
	{
		n[i] = this->str[i];
	}
	for (int i = this->size; i < this->size + other.size; ++i)
	{
		n[i] = other.str[i - this->size];
	}
	n[this->size + other.size] = '\0';
	delete[] this->str;
	this->str = n; 
	this->size = this->size + other.size;
}

std::ostream& operator<<(std::ostream& out, MyString const& s)
{
	for (int i = 0; i < s.size; ++i)
	{
		out << s.str[i];
	}

	return out;
}

/* и деструктор */
MyString::~MyString()
{
	delete[] this->str;
}

