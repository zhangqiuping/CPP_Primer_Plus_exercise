//��C++ Primer Plus����9�� �����ϰ1 chapter9.1.cpp

#include <iostream>
#include "golf.h"

const int number = 5;

int main()
{
	golf g[number]{};
	int judge;
	std::cout << "++++++SetGolf_Main Function++++++\n";
	for (int i = 0; i < number; i++)
	{
		judge = setgolf(g[i]);
		if (!judge)
			break;
	}
	for (int i = 0; i < number; i++)
	{
		showgolf(g[i]);
	}
	return 1;
}