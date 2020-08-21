// winec00.h for chapter14.2.cpp

#pragma once

#ifndef WINEC01_H_
#define WINEC01_H_
#include <iostream>
#include <cstring>
#include <valarray>

typedef std::valarray<int> arrayi;


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
	Pair(const T1& aval, const T2& bval) :a(aval), b(bval) {}
	Pair() {}
};

typedef Pair<arrayi, arrayi>  Pa;


class Wine: private std::string, private Pa
{
private:
	int year;
public:
	Wine(const char* l, int y, const int yr[], const int  bot[]);
	Wine(const char* l, int y);
	void GetBottles();
	std::string& Label();
	int sum()const;
	void Show()const;
};


#endif // !WINEC00_H_



#pragma once
