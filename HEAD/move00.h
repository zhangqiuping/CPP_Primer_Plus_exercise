//move00.h for chapter10.6.cpp
#pragma once

#ifndef MOVE00_H_
#define MOVE00_H_

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);
	void showmove()const;
	Move addmove(const Move& m)const;
	void reset(double a = 0,double b = 0);
};

#endif
