#include <iostream>
#include "list00.h"

using std::cout;
using std::cin;

List00::List00(Item item[], int pos)
{
	for (int i = 0; i < pos; i++)
		it[i] = item[i];
	for (int i = pos; i < MAX; i++)
		it[i] = 0;
	m_pos = pos;
}

bool List00::isempty() const
{
	return m_pos == 0;
}

bool List00::isfull() const 
{
	return m_pos == MAX;
}

void List00::insert_data(const Item& item)
{
	if (this->isfull())
		cout << "List is full\n";
	else
		{
			it[m_pos] = item;
			m_pos++;
		}

}

void List00::visit(void (*pf)(Item& item))
{
	for (int i = 0; i <= m_pos; i++)
		pf(it[i]);
}

void List00::showitem()const
{
	for (int i = 0; i < m_pos; i++)
		cout << i + 1 << ". item: " << it[i]<<" |";
	cout << "\n";
}