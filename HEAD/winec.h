// winec.h for chapter14.1.cpp

#pragma once

#ifndef WINEC00_H_
#define WINEC00_H_
#include <iostream>
#include <cstring>
#include <valarray>

template <class T1, class T2>
class Pair
{
private:
	T1 a;
	T2 b;
public:
	T1& first();
	T2& second();
	T1 first()const { return a; }
	T2 second()const { return b; }
	Pair(const T1& aval,const T2& bval):a(aval),b(bval){}
	Pair() {}
};

class Wine
{
private:
	std::string name;
	int year;
	Pair<std::valarray<int>, std::valarray<int>> p;
public:
	Wine(const char* l, int y, const int yr[], const int  bot[]);
	Wine(const char* l, int y);
	void GetBottles();
	std::string& Label();
	int sum()const;
	void Show()const;
};


#endif // !WINEC00_H_



