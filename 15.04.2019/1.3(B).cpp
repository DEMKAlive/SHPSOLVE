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

int main()
{
	vector<int> a;
	int b;
	cin >> b;
	for (size_t i = 0; i < b; i++)
	{
		int c;
		cin >> c;
		a.push_back(c);
	}
	int d;
	cin >> d;
	bool IsGood = false;
	for (size_t i = 0; i < b-1; i++)
	{
		if (a.at(i) == d && a.at(i + 1) == d)
		{
			cout << i+1 << ' ' << i + 2 << endl;
			IsGood = !IsGood;
			break;
		}
	}
	if (!IsGood)
	{
		cout << NULL;
	}
	return NULL;
}
