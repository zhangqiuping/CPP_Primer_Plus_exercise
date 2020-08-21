//cow00.h for chapter12.1.cpp

#ifndef COW00_H_
#define COW00_H_
class Cow00
{
private:
	char m_name[20];
	char* m_hobby;
	double m_weight;
public:
	Cow00();
	Cow00(const char* name, const char* hobby, double m_weight);
	Cow00(const Cow00& c);
	~Cow00();
	Cow00& operator=(const Cow00& c);
	void ShowCow() const;
};


#endif // !COW00_H_
