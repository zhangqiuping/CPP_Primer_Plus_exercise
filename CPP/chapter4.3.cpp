//¡¶C++ Primer Plus¡·µÚ4ÕÂ ±à³ÌÁ·Ï°3 chapter4.3.cpp

#include <iostream>
#include <cstring>

int main()
{
	char firstname[30], lastname[30];
	std::cout << "Enter your first name:";
	std::cin.getline(firstname, 30);
	std::cout << "Enter your last name:";
	std::cin.getline(lastname, 30);

	std::cout << "Here is the information in a singel string: " << lastname << ", " << firstname << std::endl;

	return 1;
}