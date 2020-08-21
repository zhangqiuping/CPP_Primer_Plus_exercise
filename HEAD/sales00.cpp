//sales00.cpp for chapter10.4.cpp

#include <iostream>
#include "sales00.h"

namespace SALES
{
	Sales::Sales(const double sales[], int numberofQuarters)
	{
		//for (int i = 0; i < QUARTERS; i++)
			//m_sales[i] = 0;
		m_average = 0;
		m_max =0;
		for (int i = 0; i < numberofQuarters; i++)
		{
			m_sales[i] = sales[i];
			if (m_max < sales[i])
				m_max = sales[i];
			m_average += sales[i];
		}
		m_min = m_max;
		for (int i = 0; i < numberofQuarters; i++)
		{
			if (m_min > sales[i])
				m_min = sales[i];
		}
		m_average = m_average / numberofQuarters;
		if (numberofQuarters < QUARTERS)
			for (int i = numberofQuarters; i < QUARTERS; i++)
				m_sales[i] = 0;
	}

	void Sales::SetSales()
	{
		int n = 0;
		std::cout << "########################################SetSales########################################\n";
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "Please input Sales number for " << i + 1 << " Quarter: \n";
			std::cin >> m_sales[i];
			if (std::cin.fail())
				break; 
			n = i+1;
		}
		*this = Sales::Sales(m_sales, n);
	}

	void Sales::ShowSales()const
	{
		std::cout << "########################################ShowSales########################################\n";
		for (int i = 0; i < QUARTERS; i++)
			std::cout << i + 1 << ". Quarter: " << m_sales[i] << " | ";
		std::cout << "\n"<<"Max: "<<m_max<<" |Min: "<<m_min<<" | Average: "<<m_average<<"\n";

	}
	/*
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
		s.average = total / n;
	}

	void setSales(Sales& s)
	{
		double total = 0;
		s.max = 0;
		s.average = 0;

		std::cout << "Please enter the sales number for 4 Quarters:\n";
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Enter " << i + 1 << ". Quarter: ";
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
		s.average = total / 4;

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
	}*/
}

