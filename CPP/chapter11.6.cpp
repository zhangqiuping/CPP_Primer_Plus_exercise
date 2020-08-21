//¡¶C++ Primer Plus¡·µÚ11ÕÂ ±à³ÌÁ·Ï°6 chapter11.6.cpp
#include <iostream>
#include "stonewt01.h"

int main()
{
	using std::cout;

	Stonewt st[6] = { 375.2, 10.98,11 };
	double pounds[3];
	Stonewt comp = 11.0;
	Stonewt minSt;
	Stonewt maxSt;
	int n = 0; 

	cout << "Please input 3 x Weights (Pounds):\n";
	for (int i = 0; i < 3; i++)
	{
		cout <<i+1<< ". Weight: ";
		std::cin >> pounds[i];
		std::cin.get();
	}

	for (int i = 0; i < 3; i++)
	{
		st[3 + i]=pounds[i];
	}
	
	for (int i = 0; i < 6; i++)
	{
		if (i ==0)
		{
			minSt = maxSt = st[i];
		}
		if (minSt > st[i])
			minSt = st[i];
		if (maxSt < st[i])
			maxSt = st[i];
		if (st[i] >= comp)
			n++;
	}

	cout << "maxSt:" << maxSt<<"\n";
	cout << "minSt:" << minSt << "\n";
	cout << "number of Stonewt bigger than 11.0: " << n << "\n";

	return 1;
}