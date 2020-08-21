//¡¶C++ Primer Plus¡·µÚ9ÕÂ ±à³ÌÁ·Ï°1 chapter9.1.cpp

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