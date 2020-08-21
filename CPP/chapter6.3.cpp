//¡¶C++ Primer Plus¡·µÚ6ÕÂ ±à³ÌÁ·Ï°3 chapter6.3.cpp

#include <iostream>

int main()
{
	char ch='0';
	std::cout << "Please enter c, p, t, g\n";
	while (!(ch=='c'||ch=='p'||ch=='t'||ch=='g'))
	{
		std::cin >> ch;
		switch (ch)
		{
		case 'c':std::cout << " A dinasour is a carnivore.\n"; break;
		case 'p':std::cout << "Beethoven is a painist\n"; break;
		case 't':std::cout << "A maple is a tree.\n"; break;
		case 'g':std::cout << "I love viedo games!\n"; break;
		default: std::cout << "Please enter c, p, t, g\n";
		}
	}
	return 1;
}