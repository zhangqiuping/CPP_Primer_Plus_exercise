//��C++ Primer Plus����14�� �����ϰ4 chapter14.4.cpp
#include "personmi.h"
#include <iostream>

int main()
{
	Gunslinger gl("jack", 1.3, 5);
	PokerPlayer pp("elaine");
	BadDude bd("badboy", 1.1, 5);
	std::cout << "######################### Show Class of Gunslinger #########################\n";
	gl.Show();
	std::cout << "######################### Show Class of PokerPlayer #########################\n";
	pp.Show();
	std::cout << "######################### Show Class of BadDude     #########################\n";
	bd.Show();
	return 1;
}