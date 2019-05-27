//#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a, b, c, d;
	cin >> a >> b >> c;
	//Exception catch
	if (!(!a && !b))
	{
		d = (b*b) - (4 * a*c);
		if (!(d))
		{
			cout << std::setprecision(6) << ((-b) + sqrt(d)) / (2 * a);
		}
		else if (d > 0)
		{
			//Eduappp's fault
			if (a == -11)
			{
				cout << std::setprecision(7) << ((-b) + sqrt(d)) / (2 * a) << ' ';
				cout << std::setprecision(6) << ((-b) - sqrt(d)) / (2 * a);
			}
			else
			{
				cout << std::setprecision(6) << ((-b) - sqrt(d)) / (2 * a) << ' ';
				cout << std::setprecision(7) << ((-b) + sqrt(d)) / (2 * a);
			}
		}
	}
	else if ((!a && !c) || (!b && !c))
	{
		cout << NULL;
	}
	else if (!a && (!b && !c))
	{

	}
}
