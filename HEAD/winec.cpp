#include "winec.h"
template<class T1, class T2>
T1& Pair<T1, T2>::first()
{
	return a;
}

template<class T1,class T2>
T2& Pair<T1, T2>::second()
{
	return b;
}

Wine::Wine(const char* l, int y, const int yr[], const int bot[])
{
	name = l;
	year = y;
	std::valarray<int> v1(yr, year);
	std::valarray<int>v2(bot, year);
	p= Pair<std::valarray<int>, std::valarray<int>>(v1,v2);
}

Wine::Wine(const char* l, int y)
{
	name = l;
	year = y;
	std::valarray<int> v1(0,year);
	std::valarray<int>v2(0,year);
	p = Pair<std::valarray<int>, std::valarray<int>>(v1, v2);
}

void Wine::GetBottles()
{
	std::valarray<int> v1(year);
	std::valarray<int> v2(year);
	for (int i = 0; i < year; i++)
	{
		std::cout << "Please enter the " <<i+ 1 << " years:\n";
		std::cin >> v1[i];
		std::cin.get();
		std::cout << "Please enter the number of  bottles for year "<<v1[i]<<":\n";
		std::cin >> v2[i];
		std::cin.get();
	}
	p = Pair<std::valarray<int>, std::valarray<int>>(v1, v2);
}

std::string& Wine::Label()
{
	return name;
}

int Wine::sum()const
{
	return p.second().sum();
}

void Wine::Show() const
{
	std::cout << "Name: " << name << "\n";
	std::cout.width(5);
	for (int i = 0; i < year; i++)
	{
		std::cout <<"Year: "<< p.first()[i] <<" | Bottles: "<< p.second()[i]<<"\n";
	}
	std::cout.width();
}
