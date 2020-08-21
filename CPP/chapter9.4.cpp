//¡¶C++ Primer Plus¡·µÚ9ÕÂ ±à³ÌÁ·Ï°4 chapter9.4.cpp

#include <iostream>
#include "sales.h"

int main()
{
	using namespace SALES;
	Sales s1,s2;
	double ar[4] = { 1000.23,2000.56,1500.67,1623.45 };

	setSales(s1, ar, 4);
	setSales(s2);
	std::cout << "++++++Show_Sales_s1++++++\n";
	showSales(s1);
	std::cout << "++++++Show_Sales_s2++++++\n";
	showSales(s2);


	return 1;
}