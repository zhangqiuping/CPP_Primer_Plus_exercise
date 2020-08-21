#include "plorg00.h"
#include <iostream>
#include <cstring>

Plorg::Plorg(const char* name, int CI)
{
	strncpy_s(m_name, name, 20);
	m_CI = CI;
}

void Plorg::SetCi(int CI)
{
	m_CI = CI;
}

void Plorg::ShowPlorg()const
{
	std::cout << "Name: "<<m_name <<" | Satisfication CI: "<< m_CI<<"\n";
}