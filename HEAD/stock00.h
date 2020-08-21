//stock00.h for chapter12.3.cpp
#ifndef STOCK00_H_
#define STOCK00_H_

#include <iostream>

class Stock
{
private:
	char* company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();
	Stock(const char*, long n = 0, double price = 0.0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	//void show()const;
	const Stock& topval(const Stock& s)const;

	//Stock& operator=(const Stock& s);
	friend std::ostream &  operator<<(std::ostream& os, const Stock& s);

};


#endif