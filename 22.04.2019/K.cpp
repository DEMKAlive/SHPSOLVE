//#include "pch.h"

#include <iostream>

#include <algorithm>

#include <vector>

#include <iomanip>

using std::cout;

using std::cin;

using std::endl;



int main()

{

	std::vector<int> V;

	int Am, Val;

	cin >> Am >> Val;

	for (size_t i = 0; i < Am; i++)

	{

		int Temp;

		cin >> Temp;

		V.push_back(Temp);

	}

	auto res = std::find_if(V.begin(), V.end(), [&](int &a)

	{

		return a > Val;

	});

	cout << ((res - 1) - V.begin()) + 1 << ' ' << *(res - 1) << '\n' << (res - V.begin())+1 << ' ' << *res << endl;

	std::sort(std::begin(V), std::end(V));

	

}
