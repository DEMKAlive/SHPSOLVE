//#include "pch.h"
//#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;
typedef vector<int> at_vinta;

int main()
{
	int Amount, Index;
	cin >> Amount;
	at_vinta v;
	for (size_t i = 0; i < Amount; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	cin >> Index>>Amount;
	v.insert(v.begin()+Index, Amount);
	for (auto el : v)
	{
		cout << el << ' ';
	}
	cout << std::endl;
	return NULL;
}
