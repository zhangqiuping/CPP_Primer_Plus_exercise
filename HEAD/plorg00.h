//plorg00.h for chapter10.7.cpp
#pragma once

#ifndef PLORG00_H_
#define PLORG_H_

class Plorg
{
private:
	char m_name[20];
	int m_CI;
public:
	Plorg(const char* name = "Plorga", int CI = 50);
	void SetCi(int CI);
	void ShowPlorg()const;
};

#endif