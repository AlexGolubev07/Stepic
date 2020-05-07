#pragma once

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <iostream>

struct MyString
{
	MyString(const char* str = "");

	MyString(size_t n, char c);

	void append(MyString& other);

	friend std::ostream& operator<<(std::ostream& out, MyString const& s);

	~MyString();

	size_t size;
	char* str;
};