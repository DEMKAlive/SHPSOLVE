//#include "pch.h"

#include <iostream>

#include <set>

#include <algorithm>

#include <vector>

using std::cin;

using std::cout;

using std::endl;

using std::set;

int main()

{

	int AmA, AmB;

	cin >> AmA;

	int *Arr = new int[AmA];

	for (size_t i = 0; i < AmA; i++)

	{

		cin >> Arr[i];

	}

	cin >> AmB;

	std::vector<int> arr(AmB);

	for (size_t i = 0; i < AmB; i++)

	{

		cin >> arr[i];

	}

	std::reverse(std::begin(arr), std::end(arr));

	int BP;

	cin >> BP;

	for (size_t i = 0; i < AmA+AmB; i++)

	{

		if (i < BP)

		{

			cout << Arr[i] << ' ';

		}

		else

		{

			if ((i - BP) < AmB)

			{

				cout << arr[i - BP] << ' ';

			}

			else

			{

				cout << Arr[i - AmB] << ' ';

			}

		}

	}

}
