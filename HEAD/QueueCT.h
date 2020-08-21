//QueueCT.h for chapter14.3.cpp
#pragma once

#ifndef QUEUECT_H_
#define QUEUECT_H_
//#include <iostream>

template<class T>
class QueueCT
{
private:
	struct Node { T item; struct Node* next; };
	enum {MAX =  10 };
	Node* front;
	Node* rear;
	int items;
	const int q_size;
	//QueueCT(const QueueCT& q) : q_size(0) {}
	//QueueCT& operator=(const QueueCT& q) { return *this; }

public:
	explicit QueueCT(const QueueCT& q);
	QueueCT& operator=(const QueueCT& q);

	QueueCT(int qs = MAX);
	~QueueCT();
	bool isfull()const;
	bool isempty()const;
	int queuecount()const;
	bool enqueue(const T& item);
	bool dequeue(T& item);
};


template <class T> QueueCT<T>& QueueCT<T>::operator=(const QueueCT& q)
{
	if (this->front == q.front)
		return *this;
	if (q.front != NULL)
	{
		this->front = q.front;
		this->rear = q.rear;
		items = q.items;
		q_size = q.q_size();
	}
	return *this;
}
template <class T> QueueCT<T>::QueueCT(const QueueCT& q)
{
	if (this = &q)
		return *this;
	this->front = q.front;
	this->rear = q.rear;
	this->q_size = q.q_size;
	this->items = q.items;
	return *this;
}
template <class T> QueueCT<T>::QueueCT(int qs):q_size(qs)
{
	front = rear = NULL;
	//front->next = NULL;
	//rear->next = NULL;
	items = 0;
}
template <class T> QueueCT<T>::~QueueCT()
{
	Node* temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}
template <class T> bool QueueCT<T>::isempty() const
{
	return items == 0;
}
template <class T> bool QueueCT<T>::isfull() const
{
	return items == q_size;
}
template <class T> bool QueueCT<T>::enqueue(const T& item)
{
	if (this->isfull())
		return false;
	else if (this->isempty())
	{
		Node* temp = new Node;
		temp->item = item;
		temp->next = NULL;
		items++;
		front = rear = temp;
		return true;
	}
	else
	{
		Node* temp = new Node;
		temp->item = item;
		temp->next = NULL;
		items++;
		rear->next = temp;
		rear = temp;
		return true;
	}
}
template <class T> bool QueueCT<T>::dequeue(T& item)
{
	if (this->isempty())
		return false;

	Node* temp;
	item = front->item;
	temp = front;
	items--;
	front = front->next;
	delete temp;
	if (items == 0)
	{
		rear = NULL;
	}

	return true;
}
template <class T> int QueueCT<T>::queuecount()const
{
	return items;
}



#endif // !QUEUECT_H_

