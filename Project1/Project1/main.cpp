#include <iostream>

using namespace std;

struct Node
{};

int main()
{
	Child child;
	Parent* parent[1];
	parent[0] = &child;
	parent[0]->method();

	return 0;
}