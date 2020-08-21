//accout_00.h for chapter10.4.cpp
#pragma once

#ifndef ACCOUNT_00_H_
#define ACCOUNT_00_H_

#include <iostream>

using std::cout;

class Account
{
private:
	std::string name;
	std::string account_name;
	double deposit;
public:
	//Account();
	Account(std::string name1="No Name",std::string ac_name="No Accout Name", double deposit1=0.0);
	void Show() const;
	void Save(double money);
	void take_out(double money);
	~Account();
};

#endif