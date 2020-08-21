//¡¶C++ Primer Plus¡·µÚ10ÕÂ ±à³ÌÁ·Ï°7 chapter10.7.cpp
#include <iostream>
#include "plorg00.h"

int main()
{
	Plorg pl1;
	char ch[20];
	int CI;
	std::cout << "++++++++++++++++++++++++++++++++++++++++SetPlorg with Parameter++++++++++++++++++++++++++++++++++++++++\n";
	std::cout << "Enter the name: \n";
	std::cin.getline(ch, 20);
	std::cout << "Enter the satification CI:\n";
	std::cin >> CI;
	std::cin.get();
	Plorg pl2(ch, CI);
	std::cout << "++++++++++++++++++++++++++++++++++++ShowPlorg before ++++++++++++++++++++++++++++++++++++\n";
	pl1.ShowPlorg();
	pl2.ShowPlorg();
	std::cout << "++++++++++++++++++++++++++++++++++++++++SetCI with Parameter++++++++++++++++++++++++++++++++++++++++\n";
	std::cout << "Enter the satification CI:\n";
	std::cin >> CI;
	std::cin.get();
	pl1.SetCi(CI);
	std::cout << "++++++++++++++++++++++++++++++++++++ShowPlorg after ++++++++++++++++++++++++++++++++++++\n";
	pl1.ShowPlorg();
	pl2.ShowPlorg();
	return 1;
}