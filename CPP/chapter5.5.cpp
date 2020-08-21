//¡¶C++ Primer Plus¡·µÚ5ÕÂ ±à³ÌÁ·Ï°5 chapter5.5.cpp

#include <iostream>
#include <string>

int main()
{
	std::string months[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	int sales[12]{ 0 },sum=0;

	for (int i = 0; i < 12; i++)
	{
		std::cout << "Enter the books sales on " << months[i] << ": ";
		std::cin >> sales[i];
		sum += sales[i];
	}

	std::cout << "Total sales number of this years is : " << sum<<".\n";

	return 1;
}