//golf00.cpp for chapter10.3.cpp

#include <iostream>
#include <cstring>
#include "golf00.h"

Golf00::Golf00(const char* fullname, int handicap)
{
	strncpy_s(mfullname, fullname, LEN);
	mhandicap = handicap;
}

int Golf00::setgolf()
{
	char ch[LEN];
	int handicap;
	std::cout << "Please enter fullname:\n";
	std::cin.getline(ch, LEN);
	std::cout << "Please enter handicap:\n";
	std::cin >> handicap;
	std::cin.get();
	strncpy_s(mfullname, ch, LEN);
	mhandicap = handicap;
	return 1;
}

void Golf00::handicap(int handicap)
{
	mhandicap = handicap;
}

void Golf00::show()const
{
	std::cout << "Name: " << mfullname << " | Handicap: " << mhandicap << "\n";
}

/*void setgolf(golf& g, const char* name, int hc)
{
	strncpy_s(g.fullname, name, Len);
	g.handicap = hc;
}

int setgolf(golf& g)
{
	std::cout << "+++++++SetGolf+++++++\n";
	std::cout << "Please input the name of golf player:\n";
	std::cin.getline(g.fullname, Len);

	//如何判断输入为空:strlen
	if (strlen(g.fullname) == 0)
		return 0;
	std::cout << "Please input the handicap of golf player:\n";
	std::cin >> g.handicap;
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

}*/
