//emp.cpp for chapter17.6.cpp

#include <iostream>
#include "emp16.h"

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
void abstr_emp::WriteAll(std::ofstream& fout)
{
	fout << fname << std::endl;
	fout << lname << std::endl;
	fout << job << std::endl;

}
void abstr_emp::setall(std::ifstream& fin)
{
	std::getline(fin, fname);
	std::getline(fin, lname);
	std::getline(fin, job);
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
abstr_emp::~abstr_emp() {}

//define class of employee
employee::employee() {}
employee::employee(const std::string& fn, const std::string& ln, const std::string& j) :abstr_emp(fn, ln, j) {}
void employee::ShowAll()const
{
	abstr_emp::ShowAll();
}
void employee::SetAll()
{
	abstr_emp::SetAll();
}
void employee::WriteAll(std::ofstream& fout)
{
	fout << Employee <<std::endl;
	abstr_emp::WriteAll(fout);
}
void employee::setall(std::ifstream& fin)
{
	abstr_emp::setall(fin);
}

//define class of manager
manager::manager() :inchargeof(0) {}
manager::manager(const std::string& fn, const std::string& ln, const std::string& j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico) {}
manager::manager(const abstr_emp& e, int ico) : abstr_emp(e), inchargeof(ico) {}
manager::manager(const manager& m) : abstr_emp(m), inchargeof(m.inchargeof) {}
void manager::ShowAll()const
{
	abstr_emp::ShowAll();
	std::cout << " | In charge of : " << InChargeOf();
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
void manager::setall(std::ifstream& fin)
{
	abstr_emp::setall(fin);
	fin >> inchargeof;
	fin.ignore();
}
void manager::WriteAll(std::ofstream& fout)
{
	fout << Manager << std::endl;
	abstr_emp::WriteAll(fout);
	fout << inchargeof << std::endl;
}

//define class of fink
fink::fink() { reportto = "no report to"; }
fink::fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo) :abstr_emp(fn, ln, j), reportto(rpo) {}
fink::fink(const abstr_emp& e, const std::string& rpo) : abstr_emp(e), reportto(rpo) {}
fink::fink(const fink& e) : abstr_emp(e), reportto(e.reportto) {}
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
void fink::WriteAll(std::ofstream& fout)
{
	fout << Fink << std::endl;
	abstr_emp::WriteAll(fout);
	fout << ReportTo()<<std::endl;
}
void fink::setall(std::ifstream& fin)
{
	abstr_emp::setall(fin);
	std::getline(fin, reportto);
}

//define class of highfink
highfink::highfink() {}
highfink::highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo, int ico) :fink(fn, ln, j, rpo), manager(fn, ln, j, ico) {}
highfink::highfink(const abstr_emp& e, const std::string& rpo, int ico) : manager(e, ico), fink(e, rpo) {}
highfink::highfink(const fink& f, int ico) : abstr_emp(f), manager(f, ico) {}
highfink::highfink(const manager& m, const std::string& rpo) : abstr_emp(m), fink(m, rpo) {}
highfink::highfink(const highfink& h) : fink(h, h.ReportTo()), manager(h, h.InChargeOf()) {}
void highfink::ShowAll()const
{
	abstr_emp::ShowAll();
	std::cout << " | Report to " << this->ReportTo() << "|" << " In charge of : " << InChargeOf();
}
void highfink::SetAll()
{
	abstr_emp::SetAll();
	manager::Data();
	fink::Data();
}
void highfink::WriteAll(std::ofstream& fout)
{
	fout << Highfink << std::endl;
	abstr_emp::WriteAll(fout);
	fout << this->ReportTo() << std::endl;
	fout<< this->InChargeOf()<<std::endl;
}
void highfink::setall(std::ifstream& fin)
{
	abstr_emp::setall(fin);
	fin >> this->ReportTo();
	fin.ignore();
	fin >> this->InChargeOf();
	fin.ignore();
}