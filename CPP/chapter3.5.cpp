//��C++ Primer Plus����3�� �����ϰ5 chapter3.5.cpp

#include <iostream>

int main()
{
	long long world_population, us_population;
	float percentage;

	std::cout << "Enter the world's population:";
	std::cin >> world_population;
	std::cout << "Enter thepopulation of U.S.:";
	std::cin >> us_population;

	percentage = (long float)us_population / (long float)world_population * 100; //ǿ��ת��long longΪlong float��������Ϊ0��
	std::cout << "The population of U.S. is " << percentage << "% of the world population." << std::endl;

	return 1;
}