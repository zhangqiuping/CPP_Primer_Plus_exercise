//customer.cpp for chapter16.5.cpp
#include "customer.h"
#include <cstdlib>	

void Customer::set(long when)
{
	m_processtime = std::rand() % 3 + 1;
	m_arrive = when;
}