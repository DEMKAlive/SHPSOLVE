//#include "pch.h"

#include <iostream>

#include <string>



using std::cin;

using std::cout;

using std::endl;



int main()

{

	std::string StrA, StrB;

	cin >> StrA >> StrB;

	int StartIndex = 0;

	for (size_t i = 0; i < StrA.size(); i++)

	{

		bool Good = false;

		for (size_t j = 0; j < StrB.size(); j++)

		{

			if (StrA[i + j] != StrB[j])

			{

				Good = false;

				break;

			}

			else

			{

				if (!Good)

				{

					StartIndex = i;

				}

				Good = true;

			}

		}

		if (Good)

		{

			cout << StartIndex << ' ' ;

		}

	}

}
