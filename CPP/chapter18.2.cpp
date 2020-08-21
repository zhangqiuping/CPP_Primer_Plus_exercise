//¡¶C++ Primer Plus¡·µÚ18ÕÂ ±à³ÌÁ·Ï°2 chapter18.2.cpp
#include <iostream>
#include <utility>

class Cpmv
{
public:
	struct Info
	{
		std::string qcode;
		std::string zcode;
	};
private:
	Info* pi;
public:
	Cpmv();
	Cpmv(std::string q, std::string z);
	Cpmv(const Cpmv& cp);
	Cpmv(Cpmv&& mv);
	~Cpmv();
	Cpmv& operator=(const Cpmv& cp);
	Cpmv& operator=(Cpmv&& mv);
	Cpmv operator+(const Cpmv& obj) const;
	void Display() const;
};

int main()
{
	Cpmv a("good", "day");
	std::cout << std::endl;
	Cpmv b(a);
	std::cout << std::endl;
	Cpmv c(a + b);
	std::cout << std::endl;
	a.Display();
	std::cout << std::endl;
	b.Display();
	std::cout << std::endl;
	c.Display();
	std::cout << std::endl;
	Cpmv d = std::move(c);
	std::cout << std::endl;
	d.Display();
	std::cout << std::endl;
	return 1;
}

Cpmv::Cpmv()
{
	pi = new Info;
	pi->qcode = "Null";
	pi->zcode = " Null";
	std::cout << "Cpmv::Cpmv() is used." << std::endl;

}

Cpmv::Cpmv(std::string q, std::string z)
{
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
	std::cout << "Cpmv::Cpmv(std::string q, std::string z) is used." << std::endl;
}

Cpmv::Cpmv(const Cpmv& cp)
{
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	std::cout << "Cpmv::Cpmv(const Cpmv& cp) is used." << std::endl;
}

Cpmv::Cpmv(Cpmv&& mv)
{
	pi = mv.pi;
	mv.pi = nullptr;
	std::cout << "Cpmv::Cpmv(Cpmv&& mv) is used." << std::endl;

}

Cpmv::~Cpmv()
{
	delete pi;
	std::cout << "Cpmv::~Cpmv() is used." << std::endl;

}

Cpmv& Cpmv::operator=(const Cpmv& cp)
{
	if (this == &cp)
		return *this;
	delete pi;
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	std::cout << "Cpmv& Cpmv::operator=(const Cpmv& cp) is used." << std::endl;
	return *this;
}

Cpmv& Cpmv::operator=(Cpmv&& mv)
{
	if (this == &mv)
		return *this;
	delete pi;
	pi = new Info;
	pi = mv.pi;
	mv.pi = nullptr;
	std::cout << "Cpmv& Cpmv::operator=(Cpmv&& mv) is used." << std::endl;
	return *this;
}

Cpmv Cpmv::operator+(const Cpmv& obj) const
{
	Cpmv temp;
	temp.pi->qcode= this->pi->qcode+obj.pi->qcode;
	temp.pi->zcode = this->pi->zcode + obj.pi->zcode;
	std::cout << "Cpmv Cpmv::operator+(const Cpmv& obj) const is used." << std::endl;
	return temp;
}

void Cpmv::Display()const
{
	std::cout << "Now Display() is used:" << std::endl;
	std::cout << "Info.qcode:" << pi->qcode << std::endl;
	std::cout << "Info.zcode:" << pi->zcode << std::endl;

}