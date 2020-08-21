//personmi.h for chapter14.4.cpp
#pragma once
#ifndef PERSONMI_H_
#define PERSONMI_H_

#include  <string>

class Person
{
private:
	std::string name;
public:
	Person():name("no name"){}
	Person(const std::string s):name(s){}
	virtual ~Person() = 0;
	virtual void Show() const=0;
	virtual Person& operator=(const Person& p);
};

class Gunslinger : virtual public Person
{
private:
	double speed;
	int nick;
public:
	Gunslinger():speed(0.0),nick(0){}
	Gunslinger(const std::string s,double sp, int n):Person(s),speed(sp),nick(n){}
	//Gunslinger(const Person p,double sp,int n):Person(p),speed(sp),nick(n){}
	Gunslinger& operator=(const Gunslinger& gl);
	void Show()const;
	double Draw()const { return speed; }
	void Data() const;

};

class PokerPlayer : virtual public Person
{
private:
public:
	PokerPlayer() {};
	PokerPlayer(const std::string s):Person(s){}
	int Draw()const ;
	void Show() const;
	void Data() const;

};

class BadDude :public Gunslinger, public PokerPlayer
{
public:
	BadDude(const std::string s, double sp, int n):Gunslinger(s,sp,n){}
	int CDraw() const;
	double GDraw()const;
	void Show() const;
	void Data() const;


};



#endif // !PERSONMI_H_
