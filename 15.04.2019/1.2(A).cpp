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
	for (size_t i = 0; i < b+1; i++)
	{
		a.push_back(i);
	}
	for (size_t i = 1; i < b+1; i++)
	{
		cout<<a.at(i)<<' ';
	}
	return NULL;
}
