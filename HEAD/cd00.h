//cd00.h for chapter13.1.cpp

#ifndef CD00_H_
#define CD00_H_

//base class cd:
class Cd
{
protected:
	char performers[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd(const char* s1,const char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	virtual ~Cd() {};
	virtual void Report()const;
	virtual Cd& operator=(const Cd& d);
};

class Classic : public Cd
{
private:
	char works[50];
public:
	Classic();
	Classic(const char* s1, const char* s2,const  char* s3, int n, double x);
	Classic(const char* s3, const Cd& d);
	Classic(const Classic& c);
	~Classic() {};
	void Report()const;
	Classic& operator=(const Classic& d);
};
#endif // !CD00_H_
