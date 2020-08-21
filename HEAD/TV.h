//TV.h for chapter15.1.cpp
#pragma once

#ifndef TV_H_
#define TV_H_

class Remote;


class Tv
{
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
public:
	friend class Remote;
	enum{off,on};
	enum{MinVal,MaxVal=20};
	enum{Antenna,Cable};
	enum{TV,DVD};
	Tv(int s=off,int mc=125):state(s),volume(5),
		maxchannel(mc),channel(2),mode(Cable),input(TV){}
	void onff() { state = (state == on) ? off : on; }
	bool ison()const { return state == on; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void set_remote_mode(Remote &r);
	void settings()const;
};

#endif // !TV_H_
