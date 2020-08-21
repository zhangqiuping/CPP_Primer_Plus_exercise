//classic00.cpp for chapter13.1.cpp

#include <iostream>
#include "classic00.h"

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	label = new char[strlen(s2) + 1];
	//strncpy_s(performers, s1,strlen(s1)+1);
	//strncpy_s(label, s2,strlen(s2)+1);
	strcpy_s(performers, strlen(s1) + 1, s1);
	strcpy_s(label, strlen(s2) + 1, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	//char* temp_performers = d.performers;
	//char* temp_label = d.label;
	//strncpy_s(performers, d.performers, 50);
	//strncpy_s(label, d.label, 20);

	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	strcpy_s(label, strlen(d.label) + 1, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = new char[2];
	label = new char[2];
	strcpy_s(performers, 2, "");
	strcpy_s(label, 2, "");
	//strncpy_s(performers, "no name", 50);
	//strncpy_s(label, "no name", 20);
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd()
{
	delete[] performers;
	delete[] label;
}

void Cd::Report()const
{
	std::cout << "###################INFO of " << performers << "###################\n";
	std::cout << "Label: " << label << " | selections: " << selections << " | playtime: " << playtime << "\n";
}

Cd& Cd::operator=(const Cd& d)
{
	//strncpy_s(performers, d.performers, 50);
	//strncpy_s(label, d.label, 20);
	if (this == &d)
		return *this;
	delete[] performers;
	delete[] label;
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	strcpy_s(label, strlen(d.label) + 1, d.label);
	//strcpy_s(performers, 50, d.performers);
	//strcpy_s(label, 20, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}


Classic::Classic(const char* s1, const char* s2, const char* s3, int n, double x) : Cd(s1, s2, n, x)
{
	works = new char[strlen(s3) + 1];
	//strncpy_s(works, s3, 50);
	strcpy_s(works, strlen(s3)+1, s3);
}

Classic::Classic(const char* s3, const Cd& d) : Cd(d)
{
	//strncpy_s(works, s3, 50);
	works = new char[strlen(s3) + 1];
	strcpy_s(works, strlen(s3)+1, s3);
}

Classic::Classic() :Cd()
{
	works = new char[2];
	strcpy_s(works, 2, "");
	//strncpy_s(works, "no name", 50);
}

Classic::~Classic()
{
	delete[] works;
}

void Classic::Report()const
{
	std::cout << "###################INFO of " << performers << "###################\n";
	std::cout << "Label: " << label << " | works: " << works << " | selections: " << selections << " | playtime: " << playtime << "\n";
}

Classic& Classic::operator=(const Classic& cd)
{
	if (this == &cd)
		return *this;

	delete[] performers;
	delete[] label;
	delete[] works;

	performers = new char[strlen(cd.performers) + 1];
	label = new char[strlen(cd.label) + 1];
	works = new char[strlen(cd.works) + 1];

	strcpy_s(performers, strlen(cd.performers) + 1, cd.performers);
	strcpy_s(label, strlen(cd.label) + 1, cd.label);
	strcpy_s(works, strlen(cd.works) + 1, cd.works);

	selections = cd.selections;
	playtime =cd.playtime;

	return *this;
}