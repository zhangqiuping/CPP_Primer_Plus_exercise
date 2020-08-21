//cd00.cpp for chapter13.1.cpp

#include <iostream>
#include "cd00.h"

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	strncpy_s(performers, s1, 50);
	strncpy_s(label, s2, 20);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	//char* temp_performers = d.performers;
	//char* temp_label = d.label;
	strncpy_s(performers, d.performers, 50);
	strncpy_s(label, d.label, 20);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	strncpy_s(performers, "no name", 50);
	strncpy_s(label, "no name", 20);
	selections = 0;
	playtime = 0.0;
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
	strcpy_s(performers, 50, d.performers);
	strcpy_s(label, 20, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}


Classic::Classic(const char* s1, const char* s2, const char* s3, int n, double x) : Cd(s1,s2,n,x)
{
	strncpy_s(works, s3, 50);
	//strcpy_s(works, 50, s3);
}

Classic::Classic(const char* s3, const Cd& d) : Cd(d)
{
	strncpy_s(works, s3, 50);
	//strcpy_s(works, 50, s3);
}

Classic::Classic():Cd()
{
	strncpy_s(works, "no name", 50);
}

void Classic::Report()const
{
	std::cout << "###################INFO of " << performers << "###################\n";
	std::cout << "Label: " << label  << " | works: "<<works <<" | selections: " << selections << " | playtime: " << playtime <<"\n";
}

Classic& Classic::operator=(const Classic& cd)
{
	strncpy_s(performers, cd.performers, 50);
	strncpy_s(label, cd.label, 20);
	strncpy_s(works, cd.works, 50);
	selections = cd.selections;
	playtime = cd.playtime;
	return *this;
}