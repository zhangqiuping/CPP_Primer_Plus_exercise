//emp.cpp for chapter14.5.cpp

#include <iostream>
#include "emp.h"

//define class of abstr_emp

abstr_emp::abstr_emp()
{
	fname = "no fname";
	lname = "no lname";
	job = "no job";
}

abstr_emp::abstr_emp(const std::string& fn, const std::string& ln, const std::string& j)
{
	fname = fn;
	lname = ln;
	job = j;
}

void abstr_emp::ShowAll() const
{
	std::cout << "First name: " << fname << " | last name: " << lname << " | job: " << job;
}

void abstr_emp::SetAll()
{
	std::cout << "Please enter the first name: ";
	std::getline(std::cin, fname);
	std::cout << "Please enter the last name: ";
	std::getline(std::cin, lname);
	std::cout << "Please enter the job: ";
	std::getline(std::cin, job);
}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e)
{
	os << e.fname << " " << e.lname << ", job:  " << e.job;
	return os;
}

abstr_emp::~abstr_emp(){}

employee::employee(){}
employee::employee(const std::string&fn, const std::string& ln, const std::string &j):abstr_emp(fn,ln,j){}
void employee::ShowAll()const
{
	abstr_emp::ShowAll();
}
void employee::SetAll()
{
	abstr_emp::SetAll();
}

manager::manager():inchargeof(0){}
manager::manager(const std::string& fn, const std::string& ln, const std::string& j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico) {}
manager::manager(const abstr_emp& e, int ico) : abstr_emp(e),inchargeof(ico){}
manager::manager(const manager& m) : abstr_emp(m), inchargeof(m.inchargeof){}
void manager::ShowAll()const
{
	abstr_emp::ShowAll();
	std::cout <<" | In charge of : " <<InChargeOf();
}
void manager::Data()
{
	std::cout << "Please enter the in charge of :";
	std::cin >> inchargeof;
	std::cin.get();
}
void manager::SetAll()
{
	abstr_emp::SetAll();
	Data();

}


fink::fink() { reportto = "no report to"; }
fink::fink(const std::string &fn,const std::string &ln, const std::string& j, const std::string &rpo):abstr_emp(fn,ln,j),reportto(rpo){}
fink::fink(const abstr_emp& e, const std::string& rpo) : abstr_emp(e), reportto(rpo){}
fink::fink(const fink& e):abstr_emp(e),reportto(e.reportto){}
void fink::ShowAll()const
{
	abstr_emp::ShowAll();
	std::cout << "| Report to " << reportto;
}

void fink::Data()
{
	std::cout << "Please enter the one to report to:";
	std::getline(std::cin, reportto);
}
void fink::SetAll()
{
	abstr_emp::SetAll();
	Data();
}

highfink::highfink(){}
highfink::highfink(const std::string&fn, const std::string&ln, const std::string& j, const std::string &rpo,int ico):fink(fn,ln,j,rpo),manager(fn,ln,j,ico){}
highfink::highfink(const abstr_emp&e, const std::string &rpo, int ico):manager(e,ico),fink(e,rpo){}
highfink::highfink(const fink& f, int ico) :abstr_emp(f), manager(f, ico){}
highfink::highfink(const manager& m,const std::string& rpo):abstr_emp(m),fink(m,rpo){}
highfink::highfink(const highfink& h):fink(h,h.ReportTo()),manager(h,h.InChargeOf()){}
void highfink::ShowAll()const
{
	abstr_emp::ShowAll();
	std::cout<< " | Report to " << this->ReportTo()<<"|"<<" In charge of : "<< InChargeOf();
}

void highfink::SetAll()
{
	abstr_emp::SetAll();
	manager::Data();
	fink::Data();
}