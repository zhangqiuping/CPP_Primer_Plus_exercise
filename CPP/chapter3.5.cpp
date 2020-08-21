//《C++ Primer Plus》第3章 编程练习5 chapter3.5.cpp

#include <iostream>

int main()
{
	long long world_population, us_population;
	float percentage;

	std::cout << "Enter the world's population:";
	std::cin >> world_population;
	std::cout << "Enter thepopulation of U.S.:";
	std::cin >> us_population;

	percentage = (long float)us_population / (long float)world_population * 100; //强制转换long long为long float，否则结果为0。
	std::cout << "The population of U.S. is " << percentage << "% of the world population." << std::endl;

	return 1;
}