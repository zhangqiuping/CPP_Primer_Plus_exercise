//stonewt00.h for chapter11.5.cpp

#ifndef STONEWT00_H_
#define STONEWT00_H_
#include<iostream>

class Stonewt
{
public:
	enum Mode { STONE, int_POUNDS, float_POUNDS };
private:
	enum {Lbs_per_stn=14};
	Mode mode;
	int stone;
	double pds_left;
	double pounds;
	void set_stone();
	void set_pounds();
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	Stonewt operator+(const Stonewt& st1)const;
	Stonewt operator-(const Stonewt& st1)const;
	Stonewt operator*(double mult)const;
	friend Stonewt operator*(double mult, Stonewt& st1);
	void set_Mode(Mode form);
	friend std::ostream& operator<<(std::ostream& os, Stonewt& st1);

	//void show_lbs() const;
	//void show_stn() const;
};


#endif // !STONEWT00_H_
