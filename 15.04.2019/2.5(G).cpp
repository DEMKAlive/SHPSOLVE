//#include "pch.h"

#include <iostream>

#include <string>



using std::cin;

using std::cout;

using std::endl;



int main()

{

	std::string Str;

	std::getline(std::cin, Str);

	int K;

	cin >> K;

	for (size_t i = 0; i < Str.size(); i++)

	{

		if (i%K != 0)

		{

			cout << Str[i];

		}

		else if(i!= 0)

		{

			cout << endl<<Str[i];

		}

		else if (i == 0)

		{

			cout << Str[i];

		}

	}

}
