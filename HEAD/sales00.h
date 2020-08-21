//sales00.h for chapter10.4.cpp
#include <iostream>

#ifndef SALES00_H_
#define SALES00_H_

namespace SALES
{
	class Sales
	{
	private:
		static const int QUARTERS = 4;
		double m_sales[QUARTERS];
		double m_average;
		double m_max;
		double m_min;
	public:
		Sales(const double sales[] = { 0 }, int numberofQuarters = 0);
		void SetSales();
		void ShowSales()const;
	

	};

	/*const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};

	void setSales(Sales& s, const double ar[], int n);
	void setSales(Sales& s);
	void showSales(const Sales& s);*/
}

#endif