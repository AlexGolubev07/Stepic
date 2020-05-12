#include <iostream>
#include "MyString.h"

using namespace std;

char* getline()
{
	char* result = new char;
	char current = 'a';
	int i = 0;
	while (current != '\n' && current != '\0')
	{
		std::cin >> current;
		result = new char[i];
		result[i] = current;
		++i;
	}
	for (int j = 0; j < i; ++i)
	{
		cout << result[i];
	}
	cout << endl;
	return result;
}

int main()
{
	cout << getline;
}