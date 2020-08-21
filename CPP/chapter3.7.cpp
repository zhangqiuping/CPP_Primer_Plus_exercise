//《C++ Primer Plus》第3章 编程练习37 chapter3.7.cpp

#include <iostream>

const float km_miles = 0.6214;
const float galon_liter = 3.875;

int main()
{
	float miles, galon;
	float km, liter;
	float mpg, lpk;
	std::cout << "Enter the distance(miles):";
	std::cin >> miles;
	std::cout << "Enter the fuel consumption(galon):";
	std::cin >> galon;

	//将miles和galon转换为公里km和升liter。
	km = miles / km_miles;
	liter = galon * galon_liter;

	//计算每加仑英里数mpg和每100公里油耗；
	mpg = miles / galon;
	lpk = liter / km * 100;
	
	std::cout << "Your “ miles per galon” mpg is " << mpg<<" mpg, so your “Liter per 100 km” lpk is "<<lpk<<"Liter per 100 km."<<std::endl;
	return 1;
}