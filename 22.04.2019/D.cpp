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

	int *Arr = new int[Am];

	for (size_t i = 0; i < Am; i++)

	{

		cin >> Arr[i];

	}

	int L, R;

	cin >> R >> L;

	R += L;

	R--;

	L--;

	for (size_t i = 0; (i < Am); i++)

	{

		if (i<L || i>=R)

		{

			cout << Arr[i] << ' ';

		}

	}

	for (size_t i = L; i < R; i++)

	{

		cout << Arr[i] << ' ';

	}

	cout << endl;

}
