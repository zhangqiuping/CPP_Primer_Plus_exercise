//stack01.cpp stack member functions for chapter12.4

#include "stack01.h"

Stack::Stack(int n)
{
	m_items = new Item[n];
	m_size = n;
	m_top = 0;
}

Stack::Stack(const Stack& s)
{
	m_items = new Item[s.m_size+1];
	m_top = s.m_top;
	m_size = s.m_size;
	for (int i = 0; i <=m_top; i++)
	{
		m_items[i] = s.m_items[i];
	}
}

Stack::~Stack()
{
	delete[] m_items;
}

int Stack::top()const
{
	return m_top;
}

bool Stack::isempty()const
{
	return m_top == 0;
}

bool Stack::isfull() const
{
	return m_top == MAX;
}

bool Stack::push(const Item& item)
{
	if (m_top < MAX)
	{
		m_items[m_top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item& item)
{
	if (m_top > 0)
	{
		item = m_items[--m_top];
		return true;
	}
	else
		return false;
}

Stack& Stack::operator= (const Stack & s)
{
	if (this == &s)
		return *this;
	delete[] m_items;
	m_items = new Item[s.m_size];
	m_size = s.m_size;
	m_top = s.m_top;
	for (int i = 0; i <= m_top; i++)
	{
		m_items[i] = s.m_items[i];
	}
	return *this;
}