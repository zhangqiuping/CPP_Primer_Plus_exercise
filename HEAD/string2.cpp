//string2.cpp for chapter12.2.cpp
#include <cstring>
#include"string2.h"
#include <cctype>

using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
	return num_strings;
}

String::String(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0]='\0';
	num_strings++;
}

String::String(const String& st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
}

String::~String()
{
	--num_strings;
	delete[] str;
}

String& String::operator=(const String& st)
{
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
	return *this;
}

String& String::operator=(const char* s)
{
	delete[] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	return *this;
}


String& String::operator+(const String& st)
{
	int totallen = len + st.len;
	char* temp = new char[totallen + 1];
	strcpy_s(temp,len+1,str);
	delete[] str;
	str = new char[totallen + 1];
	strcat_s(temp, totallen+1, st.str);
	strcpy_s(str, totallen + 1, temp);
	len = totallen;
	delete[] temp;
	return *this;
}

char& String::operator[](int i)
{
	return str[i];
}

void String::stringlow()
{
	for (int i = 0; i < len + 1; i++)
		str[i] = tolower(str[i]);
}

void String::stringup()
{
	for (int i = 0; i < len + 1; i++)
		str[i] = toupper(str[i]);
}

int String::has(char a)const
{
	int n = 0;
	for (int i = 0; i < len + 1; i++)
	{
		if (str[i] == a)
		n++;
	}
	return n;
}


String  operator+(const char* ch1, const String& st2)
{
	String st;
	st.len = strlen(ch1) + st2.len;
	char* temp = new char[st.len+ 1];
	strcpy_s(temp, strlen(ch1)+1, ch1);
	strcat_s(temp, st.len+1,st2.str);
	//strcat_s(temp, st.len + 1, st2.str);
	delete[] st.str;
	st.str = new char[st.len + 1];
	strcpy_s(st.str, st.len + 1, temp);
	delete[] temp;
	return st;
}

bool operator<(const String& st1, const String& st2)
{
	return (strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, String& st2)
{
	return st2 < st2;
}

bool operator==(const String& st1, const String& st2)
{
	return (strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}

istream& operator>>(istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}