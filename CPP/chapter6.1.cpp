//¡¶C++ Primer Plus¡·µÚ6ÕÂ ±à³ÌÁ·Ï°1 chapter6.1.cpp

#include <iostream>
#include <cctype>

int main()
{
	char ch;
	std::cin >> ch;
	while (ch != '@')
	{
		if (isalpha(ch))
		{
			 if (isupper(ch))
			{
				ch = tolower(ch);
				std::cout << ch;
			}
			else
			{
				ch = toupper(ch);
				std::cout << ch;
			}
		}
		if (ispunct(ch)) std::cout << ch;
		std::cin >> ch;
		
	}

	return 1;
}