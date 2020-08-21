//¡¶C++ Primer Plus¡·µÚ7ÕÂ ±à³ÌÁ·Ï°9 chapter7.9.cpp

#include <iostream>
using namespace std;

const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{	
	int class_size;

	cout << "Enter class_size:";
	cin >> class_size;

	//È¥³ý'\n'
	while (cin.get() != '\n')
		continue;

	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;

	cout << "done!\n";

	return 1;
}

int getinfo(student pa[], int n)
{
	int i = 0;
	while(i<n)
	{
		cout << "Enter the fullname(type - to exit):";
		cin.getline(pa[i].fullname,SLEN);
		if (!strcmp(pa[i].fullname, "-"))
			break; //type - to exit
		cout << "Enter the hobby:";
		cin.getline(pa[i].hobby, SLEN);
		pa[i].ooplevel = i;
		i++;
	}
	return i;
}

void display1(student st)
{
	cout << "Student.Fullname= " << st.fullname << " | Student.Hobby= " << st.hobby << " | " << "student.ooplevel= " << st.ooplevel << "\n";
}

void display2(const student* ps)
{
	cout << "Student.Fullname= " << ps->fullname << " | Student.Hobby= " << ps->hobby << " | " << "student.ooplevel= " << ps->ooplevel << "\n";
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
		display1(pa[i]);
}

