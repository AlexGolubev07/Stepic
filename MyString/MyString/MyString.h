#pragma once

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <iostream>

using namespace std;

struct MyString
{
	MyString(const char* str = "");

	MyString(size_t n, char c);

	void append(MyString& other);

	friend std::ostream& operator<<(std::ostream& out, MyString const& s);

	MyString& operator=(const MyString& other)
	{
		if (this != &other)
		{
			delete[] str;
			size = other.size;
			str = new char[size];
			str = other.str;
		}
		return *this;
	};

	~MyString();

	size_t size;
	char* str;
};