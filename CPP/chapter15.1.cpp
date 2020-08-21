//¡¶C++ Primer Plus¡·µÚ15ÕÂ ±à³ÌÁ·Ï°1 chapter15.1.cpp
#include <iostream>
#include "TV.h"
#include "remote.h"

int main()
{
	using std::cout;
	Tv s42;
	cout << "Initial Setings for 42\"TV:\n";
	s42.settings();
	s42.onff();
	s42.chanup();
	cout << "\nAdjusted settings for 42\" TV:\n";
	s42.chanup();
	cout << "\nAdjusted settings for 42\" TV:\n";
	s42.settings();

	Remote grey;
	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);


	cout << "\n42\" settings after using remote:\n";
	s42.settings();

	grey.set_remote_mode();
	cout << "Remote mode: \n";
	grey.show_remote_mode();

	Tv s58(Tv::on);
	s58.set_mode();
	grey.set_chan(s58, 28);
	cout << "\n58\" settings:\n";
	s58.settings();

	cout << "using TV to set Remote mode: \n";
	s58.set_remote_mode(grey);
	grey.show_remote_mode();

	return 1;
}