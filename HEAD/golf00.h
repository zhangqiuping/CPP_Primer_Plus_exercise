//golf00.h for chapter10.3.cpp
#pragma once

#include <iostream>

#ifndef GOLF00_H_
#define GOLF00_H_
class Golf00
{
private:
	static const int LEN = 40;
	char mfullname[LEN];
	int mhandicap;
public:
	Golf00(const char* fullname="no name", int handicap=0);
	void show()const;
	int setgolf();
	void handicap(int hc);
};
#endif // !GOLF00_H_





/*
const int Len = 40;

struct golf
{
	char fullname[Len];
	int handicap;
};

void setgolf(golf& g, const char* name, int hc);
int setgolf(golf& g);
void handicap(golf& g, int hc);
void showgolf(const golf& g);
*/