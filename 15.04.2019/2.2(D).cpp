//#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::istream;
using std::endl;
using std::vector;

bool IsHere(vector<int> a, int b)
{
	for (auto var : a)
	{
		if (var == b)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	string a;
	std::getline(cin, a);
	int count = 0;
	for (size_t i = 0; i < a.length(); i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
		{
			count++;
		}
	}
	cout << count;
	return NULL;
}
