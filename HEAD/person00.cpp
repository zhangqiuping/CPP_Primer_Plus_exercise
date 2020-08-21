#include <iostream>
#include "person00.h"
#include <cstring>

Person::Person(const std::string& str1, const  char* ch)
{
	lname = str1;
	strncpy_s(fname, ch, 25);
}


void Person::show() const
{
	std::cout <<"Name: "<< fname << " " << lname << "\n";
}

void Person::Fomalshow()const
{
	std::cout << "Name: " << lname << ", " << fname << "\n";
}