//remote.h for chapter15.1.cpp


#pragma once
#include "TV.h"

#ifndef REMOTE_H_
#define REMOTE_H_



class Remote
{
private:
	int mode;
	int remote_mode;
public:
	friend class Tv;
	enum{regular,interact};
	Remote(int m = Tv::TV):mode(m),remote_mode(regular){}
	bool volup(Tv& t) { return t.volup(); }
	bool voldown(Tv& t) { return t.voldown(); }
	void onff(Tv& t) { t.onff(); }
	void chanup(Tv& t) { t.chanup(); }
	void chandown(Tv& t) { t.chandown(); }
	void set_chan(Tv& t, int c) { t.channel =c; }
	void set_mode(Tv& t) { t.set_mode(); }
	void set_input(Tv& t) { t.set_input(); }
	void set_remote_mode() { remote_mode = remote_mode==regular ? interact : regular; }
	void show_remote_mode() { std::cout << "remote_mode: " << (remote_mode == regular ? "regular":"interact")<< "\n"; }
};
#endif // !REMOTE_H_
