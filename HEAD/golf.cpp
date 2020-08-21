//golf.cpp for chapter9.1.cpp

#include <iostream>
#include <stdio.h>
#include "golf.h"

void setgolf(golf& g, const char* name, int hc)
{
	strncpy_s(g.fullname, name,Len);
	g.handicap = hc;
}

int setgolf(golf& g)
{
	std::cout << "+++++++SetGolf+++++++\n";
	std::cout << "Please input the name of golf player:\n";
	std::cin.getline(g.fullname,Len);

	//如何判断输入为空:strlen
	if (strlen(g.fullname)==0)
		return 0;
	std::cout << "Please input the handicap of golf player:\n";
	std::cin>>g.handicap;
	std::cin.get();
	setgolf(g, g.fullname, g.handicap);
	return 1;
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	std::cout << "++++++ShowGolf++++++\n";
	std::cout << "Golf Player: " << g.fullname << " | ";
	std::cout << " Handicap: " << g.handicap << "\n";

}
