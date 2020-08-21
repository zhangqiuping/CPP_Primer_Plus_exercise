//¡¶C++ Primer Plus¡·µÚ2ÕÂ ±à³ÌÁ·Ï°3 chapter2.3.cpp

#include <iostream>

void print_first_sentence();
void print_second_sentence();

int main()
{
	print_first_sentence();
	print_first_sentence();
	print_second_sentence();
	print_second_sentence();
	return 1;
}

void print_first_sentence()
{
	std::cout << "Three blind mice!" << std::endl;
}

void print_second_sentence()
{
	std::cout << "See how they run" << std::endl;
}