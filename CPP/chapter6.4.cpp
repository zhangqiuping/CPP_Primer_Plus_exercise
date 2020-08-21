//¡¶C++ Primer Plus¡·µÚ6ÕÂ ±à³ÌÁ·Ï°4 chapter6.4.cpp

#include <iostream>
const int strsize = 50;

struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference=0;
};

int main()
{
	bop data[3] = { {"Superman","beginner","xx",0},{"Spiderman","novice","yy",1},{"Bat man","speicialist","zz",2} };
	char ch;

	std::cout << "Benevolent Order of Programmers Report\n";
	std::cout << "a. display by name				b. display by title\n";
	std::cout << "c. display by bopname				d. display by preference\n";
	std::cout << "q. quit\n";
	std::cout << "Enter a choice: ";
	std::cin >> ch;

	while (ch != 'q')
	{
		switch (ch)
		{
		case 'a':
		{
			for (int i = 0; i < 3; i++)
				std::cout << data[i].fullname << std::endl;
			break;
		}
		case 'b':
		{
			for (int i = 0; i < 3; i++)
				std::cout << data[i].title << std::endl;
			break;
		}
		case 'c':
		{
			for (int i = 0; i < 3; i++)
				std::cout << data[i].bopname<< std::endl;
			break;
		}
		case 'd':
		{
			for (int i = 0; i < 3; i++)
			{
				std::cout << data[i].fullname << std::endl;
				if (data[i].preference == 2)
				{
					std::cout << data[i].bopname << std::endl;
				}
				else if(data[i].preference==1)
					std::cout << data[i].title << std::endl;
			}
			break;
		}
		default:break;
		}
		std::cout << "Next choice: ";
		std::cin >> ch;
	}
	return 1;
}