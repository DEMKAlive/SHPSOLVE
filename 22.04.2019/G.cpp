//#include "pch.h"

#include <iostream>

#include <algorithm>

#include <vector>

using std::cout;

using std::cin;

using std::endl;



int main()

{

	int Am;

	cin >> Am;

	std::vector<int> Arr;

	for (size_t i = 0; i < Am; i++)

	{

		int Temp;

		cin >> Temp;

		Arr.push_back(Temp);

	}

	int min = Arr[0], max = Arr[0], maxI = 0, minI = 0;

	for (size_t i = 0; i < Am; i++)

	{

		if (Arr[i] < min)

		{

			min = Arr[i];

			minI = i;

		}

		if (Arr[i] > max)

		{

			max = Arr[i];

			maxI = i;

		}

	}

	auto MaxIt = Arr.begin(), MinIt = Arr.begin();

	for (size_t i = 0; i < Am; i++)

	{

		if (Arr[i] == max)

		{

			MaxIt += i;

		}

		if (Arr[i] == min)

		{

			MinIt += i;

		}

	}

	*MaxIt = min;

	*MinIt = max;

	for (auto el : Arr)

	{

		cout << el << ' ';

	}

}
