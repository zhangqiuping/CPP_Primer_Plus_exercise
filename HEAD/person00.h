//person00.h for chapter10.2.cpp
#pragma once
#include <iostream>

#ifndef PERSON00_H_
#define PERSON00_H_

class Person
{
private:
	static const int LIMIT = 25;
	std::string lname;
	char fname[LIMIT];
public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const std::string& str1, const  char* ch = "Heyyou");
	void show() const;
	void Fomalshow() const;
};
#endif