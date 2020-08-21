//¡¶C++ Primer Plus¡·µÚ10ÕÂ ±à³ÌÁ·Ï°3 chapter10.3.cpp

#include <iostream>
#include "golf00.h"

const int number = 5;

int main()
{
	Golf00 g[number]{};
	int judge;
	std::cout << "++++++SetGolf_Main Function++++++\n";
	for (int i = 0; i < number; i++)
	{
		judge= g[i].setgolf();
		if (!judge)
			break;
	}
	for (int i = 0; i < number; i++)
	{
		g[i].show();
	}
	return 1;
}