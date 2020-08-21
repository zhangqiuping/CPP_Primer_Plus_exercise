#include <iostream>
#include "cow00.h"

using  std::cout;

Cow00::Cow00()
{
	strcpy_s(m_name, 20,"no name");
	int len = strlen("default hobby");
	m_hobby = new char[len+1];
	strcpy_s(m_hobby, len + 1, "default hobby");
	//m_hobby = const_cast<char*>("default hobby");
	m_weight = 0.0;
}

Cow00::Cow00(const char* name, const char* hobby, double weight)
{
	strcpy_s(m_name, 20, name);
	int len = strlen(hobby);
	m_hobby = new char[len+1];
	strcpy_s(m_hobby, len + 1, hobby);
	m_weight = weight;
}

Cow00::Cow00(const Cow00& c)
{
	strcpy_s(m_name, 20, c.m_name);
	m_weight = c.m_weight;
	int len = strlen(c.m_hobby);
	m_hobby = new char[len+1];
	strcpy_s(m_hobby, len + 1, c.m_hobby);
}

Cow00::~Cow00()
{
	cout << "Now " << m_name << " is going to delete\n";
	delete [] m_hobby;
}

Cow00 &Cow00::operator=(const Cow00& c)
{
	strcpy_s(m_name, 20, c.m_name);
	m_weight = c.m_weight;
	if (this == &c)
		return *this;
	delete [] m_hobby;
	int len=strlen(c.m_hobby);
	m_hobby = new char[len+1];
	strcpy_s(m_hobby, len + 1, c.m_hobby);
	//m_hobby = const_cast<char*>(c.m_hobby);
	return *this;
}

void Cow00::ShowCow()const
{
	cout << "Name: " << m_name << " | Hobby: " << m_hobby << " | Weight= " << m_weight << "\n";
}