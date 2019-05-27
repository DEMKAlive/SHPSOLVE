//#include "pch.h"

#include <iostream>

#include <set>

using std::cin;

using std::cout;

using std::endl;

using std::set;

int main()

{

	int Am;

	cin >> Am;

	set<int> S;

	int *Arr = new int[Am];

	for (size_t i = 0; i < Am; i++)

	{

		cin >> Arr[i];

	}

	for (int i = 0; i < Am; i++)

	{

		S.insert(Arr[i]);

	}

	for (size_t i = 0; i < Am; i++)

	{

		auto End = S.end();

		if (S.find(Arr[i]) != End)

		{

			cout << Arr[i] << ' ';

		}

		S.erase(Arr[i]);

	}

	cout << endl;

}
