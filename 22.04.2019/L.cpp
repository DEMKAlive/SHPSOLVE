//#include "pch.h"

#include <iostream>

#include <set>

#include <vector>

#include <iomanip>

using std::cout;

using std::cin;

using std::endl;



int main()

{

	std::set<int> S;

	std::vector<int> Sk;

	int n, k;

	cin >> n >> k;

	for (size_t i = 0; i < n; i++)

	{

		int Temp;

		cin >> Temp;

		S.emplace(Temp);

	}



	for (size_t i = 0; i < k; i++)

	{

		int Temp;

		cin >> Temp;

		Sk.push_back(Temp);

	}

	for (auto el : Sk)

	{

		(S.find(el) == S.end()) ? cout << "NO" << endl : cout << "YES" << endl;

	}

}
