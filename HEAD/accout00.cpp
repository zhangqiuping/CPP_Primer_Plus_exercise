#include <iostream>
#include "accout_00.h"

/*
Account::Account()
{
	name = "no name";
	account_name = "no account name";
	deposit = 0.0;
}*/

Account::Account(std::string name1, std::string ac_name,double deposit1)
{
	name =name1;
	account_name = ac_name;
	deposit = deposit1;
}

void Account::Show() const
{
	std::cout << "Name: " << name << " | Acount: " << account_name << " | deposit: " << deposit << "\n";
}

void Account::Save(double money)
{
	if (money < 0)
		cout << "Money should not be negative!\n";
	else
		deposit += money;
}

void Account::take_out(double money)
{
	if (money < 0)
		cout << "Money should not be negative!\n";
	else if (money > deposit)
		cout << "You can not take more money out than you have!\n";
	else
		deposit -= money;
}

Account::~Account()
{
	std::cout << "Bye!\n";
}