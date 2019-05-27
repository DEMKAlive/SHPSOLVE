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

	int Am;

	cin >> Am;

	for (size_t i = 0; i < Am; i++)

	{

		int Temp;

		cin >> Temp;

		V.push_back(Temp);

	}

	std::sort(std::begin(V), std::end(V));

	if (!(Am % 2))

	{

		double res = (double(V[(Am / 2) - 1]) + double(V[(((Am / 2) + 1) - 1)])) / 2;

		cout << std::setprecision(5) << res;

	}

	else

	{

		cout << V[((Am + 1) / 2)-1];

	}

}
