//¡¶C++ Primer Plus¡·µÚ6ÕÂ ±à³ÌÁ·Ï°5 chapter6.5.cpp
#include <iostream>

int main()
{
	double salary;
	double tax;
	//std::cin >> salary;
	std::cout << "Enter your salary(input a minus number or a non-number to stop the program):\n";
	while (bool(std::cin>>salary)&&salary >= 0)
	{
		if (salary <= 5000)
			tax = 0;
		else if (salary > 5000 && salary <= 15000)
			tax = (salary - 5000) * 0.10;
		else if (salary > 15000 && salary <= 35000)
			tax = 5000 * 0.0 + 10000 * 0.1 + (salary - 15000) * 0.15;
		else if (salary > 35000)
			tax = 5000 * 0 + 10000 * 0.1 + 20000 * 0.15 + (salary - 35000) * 0.2;
		std::cout << "Your Salary is " << salary << ". Your Tax is " << tax << ".\n";
	}
	std::cout << "You have input a minus salary or not a number. Bye!\n";
	return 1;
}