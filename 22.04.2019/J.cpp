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

	int Temp;

	cin >> Temp;

	V.push_back(Temp);

	while (Temp)

	{

		cin >> Temp;

		if (!(Temp))

		{

			break;

		}

		V.push_back(Temp);

	}

	for (auto el : V)

	{

		cout << el << ' ';

	}

	cout << endl;

	std::sort(std::begin(V), std::end(V));

	(V[0] == V[1]) ? cout << V[1] << ' ' << V[2] : cout << V[0] << ' ' << V[1];

}
