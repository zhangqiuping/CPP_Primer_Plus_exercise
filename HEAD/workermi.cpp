//workermi.cpp for chapter14.3.cpp
#include<iostream>
#include "workermi.h"

using std::cout;
using std::cin;
using std::endl;


// define Class Worker
Worker::~Worker(){}
void Worker::Data()const
{
	cout << "Name: " << fullname << endl;
	cout << "Employee ID: " << id << endl;
}
Worker& Worker::operator=(const Worker& wk)
{
	this->fullname = wk.fullname;
	this->id = wk.id;
	return *this;
}
void Worker::Get()
{
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
void Worker::Show()const
{
	cout << "Name: " << fullname << endl;
	cout << "ID: " << id << endl;
}
void Worker::Set()
{
	cout << "Please enter Worker's name: ";
	Worker::Get();
}

//define Class Waiter
void Waiter::Set()
{
	cout << "Enter waiter's name: ";
	Worker::Get();
	Get();
}
void Waiter::Show() const
{
	cout << "Category: waiter\n";
	Worker::Data();
	Data();
}
Waiter& Waiter::operator=(const Waiter& wk)
{
	this->Worker::operator=(wk);
	this->panache = wk.panache;
	return *this;
}
void Waiter::Data()const
{
	cout << "Panache  rating: " << panache << endl;
}
void Waiter::Get()
{
	cout << "Enter waiter's panache rating: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}

//define Class Singer
char* Singer::pv[Singer::Vtypes] = { const_cast<char*>("other"), const_cast<char*>("alto"), const_cast<char*>("contralto"),
 const_cast<char*>("soprano"), const_cast<char*>("bass"), const_cast<char*>("baritone"), const_cast<char*>("tenor") };
void Singer::Set()
{
	cout << "Enter Singer's name: ";
	Worker::Get();
	Get();
}
Singer& Singer::operator=(const Singer& s)
{
	this->Worker::operator=(s);
	this->voice = s.voice;
	return *this;
}
void Singer::Show()const
{
	cout << "Category: singer\n";
	Worker::Data();
	Data();
}
void Singer::Data()const
{
	cout << "Vovcal range: " << pv[voice] << endl;
}
void Singer::Get()
{
	cout << "Enter number for singer's vocal range:\n";
	int i;
	for (i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << "   ";
		if (i % 4 == 3)
			cout << endl;
	}
	if (i % 4 != 0)
		cout << "\n";
	cin >> voice;
	while (cin.get() != '\n')
		continue;
}

//define Class SingingWaiter
void SingingWaiter::Data() const
{
	Singer::Data();
	Waiter::Data();
}
void SingingWaiter::Get()
{
	Waiter::Get();
	Singer::Get();
}
SingingWaiter& SingingWaiter::operator=(const SingingWaiter& s)
{
	this->Singer::operator=(s);
	this->Waiter::operator=(s);
	return *this;
}
void SingingWaiter::Set()
{
	cout << "Enter singing waiter's name: ";
	Worker::Get();
	Get();
}
void SingingWaiter::Show()const
{
	cout << "Category: singingWaiter\n";
	Worker::Data();
	Data();
}