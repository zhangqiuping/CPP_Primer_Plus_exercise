//¡¶C++ Primer Plus¡·µÚ10ÕÂ ±à³ÌÁ·Ï°4 chapter10.4.cpp
#include <iostream>
#include "sales00.h"

int main()
{
	using namespace SALES;
	double ar[] = { 100.34,99.48,101.23,98.99 };
	Sales one(ar, 4);
	Sales two;
	two.SetSales();
	one.ShowSales();
	two.ShowSales();
	return 1;
}