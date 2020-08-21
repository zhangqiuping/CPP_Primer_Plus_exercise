

//Tv.cpp for chapter15.1.cpp
#include <iostream>
#include "TV.h"
#include "remote.h"

bool Tv::volup()
{
	if (volume < MaxVal)
	{
		volume++;
		return true;
	}
	else
		return false;
}

bool Tv::voldown()
{
	if (volume > MinVal)
	{
		volume--;
		return true;
	}
	else
		return false;
}

void Tv::chanup()
{
	if (channel < maxchannel)
		channel++;
	else
		channel = 1;
}

void Tv::chandown()
{
	if (channel > 1)
		channel--;
	else
		channel = maxchannel;
}

void Tv::settings()const
{
	using std::cout;
	using std::endl;
	cout << "TV is " << (state == off ? "off" : "on") << endl;
	if (state == on)
	{
		cout << "Volume setting= " << volume << endl;
		cout << "Channel setting= " << channel << endl;
		cout << "Mode = " << (mode == Antenna ? "Antenna" : "Cable") << endl;
		cout << "Input = " << (input == TV ? "TV" : "DVD") << endl;
	}
}

void Tv::set_remote_mode(Remote &r)
{
	if (ison())
	{
		r.set_remote_mode();
		//std::cout << "set sucessfully!\n";
	}
}

