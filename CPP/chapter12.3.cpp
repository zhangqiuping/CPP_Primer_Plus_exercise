//¡¶C++ Primer Plus¡·µÚ12ÕÂ ±à³ÌÁ·Ï°3 chapter12.3.cpp
#include <iostream>
#include "stock00.h"

const int STKS = 4;

int main()
{
	Stock stocks[STKS] =
	{
		Stock("NanoSmart",12,20.0),
		Stock("Boffo Objckts",200,2.0),
		Stock("Monolicthic Obelisks",130,3.25),
		Stock("Fleep Enterprises",60,6.5)
	};

	std::cout << "Stock holdings\n";
	int st;
	for (st = 0; st < STKS; st++)
		std::cout<<stocks[st]<<"\n";
	const Stock* top = &stocks[0];
	for (st = 1; st < STKS; st++)
		top = &top->topval(stocks[st]);
	std::cout << "\nMost valuabule holding:\n";
	std::cout << (*top);
	return 1;
}