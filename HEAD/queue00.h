//queue00.h for chapter12.5 #pragma once
#ifndef QUEUE00_H_
#define QUEUE00_H_
#include <iostream>

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

typedef Customer Item;

class Queue
{
private:
	struct Node { Item item; struct Node* next; };
	enum{Q_SIZE=10};
	Node* front;
	Node* rear;
	int items;
	const int qsize;
	Queue(const Queue& q) :qsize(0) { front = rear = NULL; items = 0; }
	Queue& operator=(const Queue& q) { return *this; }
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty() const;
	bool isfull()const;
	int queuecount() const;
	bool enqueue(const Item& item);
	bool dequeue(Item& item);
};

#endif // !QUEUE00_H_
