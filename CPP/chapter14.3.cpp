//¡¶C++ Primer Plus¡·µÚ14ÕÂ ±à³ÌÁ·Ï°3 chapter14.3.cpp
#include <iostream>
#include <cstring>
#include <string>
#include "workermi.h"
#include"QueueCT.h"

const int SIZE = 5;
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;

	//QueueCT<Worker> locas;
	QueueCT<Worker> *lolas = new QueueCT<Worker>(SIZE);

	//Worker Jimmy("Jimmy", 10110);
	//Worker Jack("Jack Ma", 00123);
	//Worker AWorker[5];
	Worker Jimmy("Jimmy", 123);;
	Worker Jack;
	for (int i = 0; i < SIZE; i++)
	{
		Jimmy.Set();
		lolas->enqueue(Jimmy);
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		lolas->dequeue(Jack);
		Jack.Show();
	}


	return 1;
}