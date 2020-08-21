//sales.cpp for chapter9.4.cpp

#include <iostream>
#include "sales.h"

namespace SALES
{
	void setSales(Sales& s, const double ar[], int n)
	{
		double total = 0;
		s.max = 0;
		s.min = ar[0];
		s.average = 0;

		if (n >= 4)
			n = 4;
		for (int i = 0; i < n; i++)
		{
			s.sales[i] = ar[i];
			if (ar[i] > s.max)
				s.max = ar[i];
			if (ar[i] < s.min)
				s.min = ar[i];
			total += ar[i];
		}
		s.average = total/n;
	}

	void setSales(Sales& s)
	{
		double total = 0;
		s.max = 0;
		s.average = 0;

		std::cout << "Please enter the sales number for 4 Quarters:\n";
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Enter " << i+1 << ". Quarter: ";
			std::cin >> s.sales[i];
			total += s.sales[i];
			if (s.max < s.sales[i])
				s.max = s.sales[i];

		}
		s.min = s.sales[0];
		for (int i = 0; i < 4; i++)
		{
			if (s.min > s.sales[i])
				s.min = s.sales[i];
		}
		s.average = total/4;

	}
	void showSales(const Sales& s)
	{
		for (int i = 0; i < 4; i++)
		{
			if (s.sales[i] == 0)
				break;
			std::cout << i + 1 << ". Quarter: " << s.sales[i] << " | ";
		}
		std::cout << "\n" << "Sales max: " << s.max << " | Sales min: " << s.min << " | Sales average: " << s.average << "\n";
		std::cout << "\n";
	}
}

