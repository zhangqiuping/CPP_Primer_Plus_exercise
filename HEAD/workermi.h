//workermi.h for chapter14.3.cpp	
#pragma once
#ifndef WORKERMI_H_
#define WORKERMI_H_

#include <string>
class Worker
{
private:
	std::string fullname;
	long id;
protected:
	virtual void Data() const;
	virtual void Get();
public:
	Worker() :fullname("no name"), id(0L) {}
	Worker(const std::string& s, long n) :fullname(s), id(n) {}
	virtual ~Worker();
	virtual void Set();
	virtual void Show() const;
	virtual Worker& operator=(const Worker& wk);
};

class Waiter : virtual public Worker
{
private:
	int panache;
protected:
	void Data() const;
	void Get();
public:
	Waiter():Worker(),panache(0){}
	Waiter(const std::string& s, long n, int p = 0) :Worker(s, n), panache(p) {}
	Waiter(const Worker&wt,int p=0):Worker(wt),panache(p){}
	Waiter& operator=(const Waiter& wt);
	~Waiter(){}
	void Set();
	void Show() const;
};

class Singer : virtual public Worker
{
protected:
	enum{other, alto,contralto,soprano,bass,baritone, tenor};
	enum{Vtypes=7};
	void Data()const;
	void Get();
private:
	static char* pv[Vtypes];
	int voice;
public:
	Singer() :Worker(), voice(other) {}
	Singer(const std::string& s, long n, int v = other) :Worker(s, n), voice(v) {}
	Singer(const Worker& wt,int v=other):Worker(wt),voice(v){}
	Singer& operator=(const Singer& s);
	~Singer() {};
	void Set();
	void Show() const;
};

//multiple inheritance
class SingingWaiter : public Singer, public Waiter
{
protected:
	void Data() const;
	void Get();
public:
	SingingWaiter(){}
	SingingWaiter(const std::string& s,long n,int p=0,int v=other):
		Worker(s,n),Waiter(s,n,p),Singer(s,n,v){}
	SingingWaiter(const Worker & wk,int p=0,int v=other):
		Worker(wk),Waiter(wk,p),Singer(wk,v){}
	SingingWaiter(const Waiter& wt,int v=other):
		Worker(wt),Waiter(wt),Singer(wt,v){}
	SingingWaiter(const Singer& wt,int p=0):
		Worker(wt),Singer(wt),Waiter(wt,p){}
	SingingWaiter& operator=(const SingingWaiter& s);
	~SingingWaiter() {}
	void Set();
	void Show() const;
};

#endif // !WORKERMI_H_

