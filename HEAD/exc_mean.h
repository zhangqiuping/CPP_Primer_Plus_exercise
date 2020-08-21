//exc_mean.h for chapter15.2.cpp
#pragma once
#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_
#include <iostream>
#include <stdexcept>

class bad_hmean: public std::logic_error 
{
private:
	double v1;
	double v2;
public:
	bad_hmean(double a = 0, double b = 0):logic_error("bad_hmean"),v1(a),v2(b){}
	const char* what() { return "bad_hmean, invaild arguments: a=-b\n"; }

	void mesg();
};

inline void bad_hmean::mesg()
{
	std::cout << "hmean(" << v1 << ", " << v2 << "): " << "invalid arguments: a= -b" << "\n";
}

class bad_gmean: public std::logic_error
{
public:
	double v1;
	double v2;
	const char* what() { return "bad_gmean, invaild arguments <=0 \n"; }
	bad_gmean(double a=0,double b=0):logic_error("bad_gmean"),v1(a),v2(b){}
	const char* mesg();
};

inline const char* bad_gmean::mesg()
{
	return "gmean() arguments should be >=0\n";
}



#endif // !EXC_MEAN_H_


