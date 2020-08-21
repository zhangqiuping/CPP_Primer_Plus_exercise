//¡¶C++ Primer Plus¡·µÚ5ÕÂ ±à³ÌÁ·Ï°6 chapter5.6.cpp

#include <iostream>
#include <string>

int main()
{
	std::string months[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	int sales[3][12]{ 0 }, sum[3]{ 0 }, total = 0;

	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 12; i++)
		{
			std::cout << "Enter the " << j + 1 << " years books sales on " << months[i] << ": ";
			std::cin >> sales[j][i];
			sum[j] += sales[j][i];
		}
		total += sum[j];
		std::cout << "Total sales number of Year " << j + 1 << " is : " << sum[j] << ".\n";
	}

	std::cout << "Total sales number of all 3 years is : " << total << ".\n";

	return 1;
}