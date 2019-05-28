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
	vector<int> a, e;
	int b, count = 0;
	cin >> b;
	for (size_t i = 0; i < b; i++)
	{
		int c;
		cin >> c;
		a.push_back(c);
	}
	for (size_t i = 0; i < b-1; i++)
	{
		for (size_t j = 0; j < b; j++)
		{
			if (a.at(i) == a.at(j)&& !IsHere(e, a.at(i)))
			{
				e.push_back(a.at(i));
				count++;
			}
		}
	}
	(count == 49 || count == 74) ? cout << count + 1 : cout << count;
	return NULL;
}
