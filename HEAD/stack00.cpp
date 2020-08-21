//stack00.cpp stack member functions

#include "stack00.h"

Stack::Stack()
{
	m_top = 0;
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