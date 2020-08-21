//customer.h for chapter16.5.cpp
#ifndef CUSTOMER_H_
#define CUSTOMER_H_

class Customer
{
private:
	long m_arrive;
	int m_processtime;
public:
	Customer() { m_arrive = m_processtime = 0; }
	void set(long when);
	long when()const { return m_arrive; }
	int ptime()const { return m_processtime; }
};


#endif // !CUSTOMER_H_

