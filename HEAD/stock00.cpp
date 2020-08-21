//stock00.cpp for chapter12.3.cpp

#include <iostream>
#include "stock00.h"

Stock::Stock()
{
	company = new char[2];
	const char* temp = "\0";
	strcpy_s(company,1,temp);
	shares = 0;
	share_val = 0;
	set_tot();
}

Stock::Stock(const char* company_name, long n, double price)
{
	int len = strlen(company_name);
	company = new char[len+1];
	strcpy_s(company, len+1, company_name);
	shares = n;
	share_val = price;
	set_tot();
}

Stock::~Stock()
{
	delete[] company;
	//std::cout << "delete is runing...\n";
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Numbers of shares purchased can't be negative. " << "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares sold can't be negative" << " Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		std::cout << "You can't sell more than you have!" << " Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

const Stock& Stock::topval(const Stock& s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}

std::ostream& operator<<(std::ostream& os, const Stock& s)
{
	os << "Company: " << s.company << " Shares: " << s.shares << " Shares_price: " << s.share_val << " Total Worth: $" << s.total_val;
	return os;
}


/*
Stock& Stock::operator=(const Stock& s)
{
	if (this == &s)
		return *this;
	delete[] company;
	int len = strlen(s.company);
	company = new char[len + 1];
	strcpy_s(company, len + 1, s.company);
	shares = s.shares;
	share_val = s.share_val;
	set_tot();
	return *this;
}*/