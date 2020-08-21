#pragma once
#ifndef STACK00_H_
#define STACK00_H_

//struct customer for Chpater10.5
struct customer
{
	char fullname[35];
	double payment;
};

typedef customer Item;

class Stack
{
private:
	enum { MAX = 10 };
	Item m_items[MAX];
	int m_top;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);

};




#endif // !STACK00_H_
