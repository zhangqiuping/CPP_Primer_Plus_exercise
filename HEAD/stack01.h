//stack01.h for chapter12.4.cpp
#pragma once
#ifndef STACK01_H_
#define STACK01_H_

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
	Item *m_items;
	int m_size;
	int m_top;
public:
	Stack(int n=MAX);
	Stack(const Stack& s);
	~Stack();

	int top()const;
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);

	Stack& operator= (const Stack & s);

};




#endif // !STACK00_H_
#pragma once
