//��C++ Primer Plus����2�� �����ϰ7 chapter2.7.cpp

#include <iostream>

void show_time(int _ihours, int _iminutes);

int main()
{
	int hours, minutes;
	do
	{
		std::cout << "Enter the number of hours(0-24):";
		std::cin >> hours;
	} while (hours < 0 || hours > 24); //do while��佫hours������[0,24]
	
	//std::cout << std ::endl;
	do
	{
		std::cout  << "Enter the number of minutes(0-60):";
		std::cin >> minutes;
	} while (minutes < 0 || minutes > 60);//do while��佫minutes������[0,60]
	

	//std::cout << std::endl;
	show_time(hours, minutes);
	return 1;
}

void show_time(int _ihours, int _iminutes)
{
	std::cout << "Time: " << _ihours << ":" << _iminutes << std::endl;
}