//#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
	auto it = a.begin();
	for (size_t i = 0; i < a.length(); i++)
	{
		if (a[i] == (char)111)
		{
			string cop = "";
			for (size_t j = 0; j < i; j++)
			{
				cop += a[i];
			}
			a[i] = '\n';
			break;
		}
	}
	for (size_t i = 0; i < a.length(); i++)
	{
		if (!(a[i] == '\n'))
		{
			cout << a[i];
		}
	}
	return NULL;
}
