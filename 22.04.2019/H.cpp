//#include "pch.h"

#include <iostream>

#include <algorithm>

#include <vector>

using std::cout;

using std::cin;

using std::endl;



int main()

{

	std::vector<int> V;

	int Am;

	cin >> Am;

	for (size_t i = 0; i < Am; i++)

	{

		int Temp;

		cin >> Temp;

		V.push_back(Temp);

	}

	std::sort(std::begin(V), std::end(V));

	for (auto el : V)

	{

		cout << el << ' ';

	}

}
