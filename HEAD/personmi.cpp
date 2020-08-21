//personmi.cpp for chatper14.4.cpp

#include "personmi.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


using std::cout;
using std::cin;
using std::endl;


void Person::Show()const
{
	cout << "name: " << name << endl;
}

Person& Person::operator=(const Person& p)
{
	this->name = p.name;
	return *this;
}

Person::~Person(){}

Gunslinger& Gunslinger::operator=(const Gunslinger& gl)
{
	this->Person::operator=(gl);
	this->speed = gl.speed;
	this->nick = gl.nick;
	return *this;
}

void Gunslinger::Show()const
{
	Person::Show();
	Data();
}

void Gunslinger::Data()const
{
	cout << "Speed of draw a gun: " << speed << endl;
	cout << "Nick of gun: " << nick << endl;
}

int PokerPlayer::Draw()const
{
	srand((unsigned)time(NULL));
	return rand() % 52;
}

void PokerPlayer::Show()const
{
	Person::Show();
	cout << "current card: " << PokerPlayer::Draw()<< endl;
}

void PokerPlayer::Data()const
{
	cout << "current card: " << PokerPlayer::Draw() << endl;
}

int BadDude::CDraw()const
{
	return PokerPlayer::Draw();
}

double BadDude::GDraw()const
{
	return Gunslinger::Draw();
}

void BadDude::Show()const
{
	Person::Show();
	Gunslinger::Data();
	PokerPlayer::Data();
}