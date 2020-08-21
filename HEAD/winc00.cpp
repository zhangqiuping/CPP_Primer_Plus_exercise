//winc00.cpp for chapter 14.2.cpp

#include <iostream>
#include "winc00.h"
template<class T1, class T2>
T1& Pair<T1, T2>::first()
{
	return a;
}

template<class T1, class T2>
T2& Pair<T1, T2>::second()
{
	return b;
}

Wine::Wine(const char* l, int y, const int yr[], const int bot[]):std::string (l),Pa(arrayi(yr,y),arrayi(bot,y))
{
	year = y;
}

Wine::Wine(const char* l, int y): std::string(l),Pa(arrayi(0,y),arrayi(0,y))
{
	year = y;
}

void Wine::GetBottles()
{
	std::valarray<int> v1(year);
	std::valarray<int> v2(year);
	for (int i = 0; i < year; i++)
	{
		std::cout << "Please enter the " << i + 1 << " years:\n";
		std::cin >> v1[i];
		std::cin.get();
		std::cout << "Please enter the number of  bottles for year " << v1[i] << ":\n";
		std::cin >> v2[i];
		std::cin.get();
	}
	Pa::operator=(Pa(v1, v2));
}

std::string& Wine::Label()
{
	return ( std::string&) (*this);
}

int Wine::sum()const
{
	return ((const Pa)(*this)).second().sum();
}

void Wine::Show() const
{
	std::cout << "Name: " << (const std::string &)(*this) << "\n";
	std::cout.width(5);
	for (int i = 0; i < year; i++)
	{
		std::cout << "Year: " << ((const Pa&)(*this)).first()[i] << " | Bottles: " << ((const Pa&)(*this)).second()[i] << "\n";
	}
	std::cout.width();
}
