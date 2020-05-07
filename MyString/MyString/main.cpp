#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
	MyString s = "abc";
	MyString s1 = "123";
	s.append(s1);
	cout << s;
	int n = static_cast<int>(1.5);
	cout << n;
	return 0;
}