//《C++ Primer Plus》第17章 编程练习6 chapter17.6.cpp
#include <iostream>
#include "emp16.h"

using namespace std;
const int MAX = 10;
const string file = "chapter17.6.dat";

int main()
{
	abstr_emp* pc[MAX];
	int classtype=0;
	ifstream fin;
	ofstream fout;
	char ch;
	int index = 0;

	//打开文件 fin
	fin.open(file);
	if (fin.fail())
	{
		std::cout << "FIN:Could not open the file. Program terminated.\n";
		exit(EXIT_FAILURE);
	}
	if (fin.is_open())
	{
		while ((fin >> classtype).get(ch) && index < MAX)
		{
			switch (classtype)
			{
			case Employee:	pc[index] = new employee;	break;
			case Manager:	pc[index] = new manager;	break;
			case Fink:			pc[index] = new fink;			break;
			case Highfink:	pc[index] = new highfink;	break;
			default:				cerr << "Wrong input\n";	break;
			}
			pc[index]->setall(fin);
			pc[index]->ShowAll();
			cout << endl;
			index++;
		}
		fin.close();
		fin.clear();
		for (int i = 0; i < index; i++)
			delete pc[i];
	}

	//	//打开文件 fout 
	fout.open(file, ios::app);
	if (fout.fail())
	{
		std::cout << "FOUT:Could not open the file. Program terminated.\n";
		exit(EXIT_FAILURE);
	}

	index = 0;//将index重新设置为0
	std::cout << "Enter the proper Alphabet (0 for Employee; 1 for Manager; 2 for fink; 3 for Highfink; q to quit)to input:\n";
	while ((cin >>classtype).get(ch) && index<MAX) //get(ch)的目的是因为classtype在文件中是单独一行存储的，需要将换行符'\n'去除
	{
		switch (classtype)
		{
		case Employee:	pc[index] = new employee;	pc[index]->SetAll();	index++;	break;
		case Manager:	pc[index] = new manager;	pc[index]->SetAll();	index++;	break;
		case Fink:			pc[index] = new fink;			pc[index]->SetAll();	index++;	break;
		case Highfink:	pc[index] = new highfink;	pc[index]->SetAll();	index++;	break;
		default:cerr << "Wrong Type" << endl;break;//如果输入不在enum classkind内则输出cerr，但index无需+1。
		}
		std::cout << "Enter the proper Alphabet (0 for Employee; 1 for Manager; 2 for fink; 3 for Highfink; q to quit)to input:\n";
	}
	//使用WirteAll写入，由于指针数组是abstr_emp类型，因此会根据自动选择合理的对象::WriteAll(fout)。
	for(int i=0;i<index;i++)
		pc[i]->WriteAll(fout);

	//删除对应new产生的内存，避免内存泄露
	for (int i = 0; i < index; i++)
			delete pc[i];
	
	//关闭文件并清楚fout，非必需。
	fout.close();
	fout.clear();

	fin.open(file);
	index = 0;
	while ((fin >> classtype).get(ch) && index < MAX)
	{
		if (fin.eof())
			break;
		switch (classtype)
		{
			case Employee:	pc[index] = new employee;		break;
			case Manager:	pc[index] = new manager;		break;
			case Fink:			pc[index] = new fink;				break;
			case Highfink:	pc[index] = new highfink;		break;
			default:				cerr << "Wrong input\n";		break;
		}
		pc[index]->setall(fin);
		pc[index]->ShowAll();
		std::cout << endl;
		index++;
	}
	//关闭文件并清楚fin，非必需。
	fin.close();
	fin.clear();

	//删除对应new产生的内存，避免内存泄露;
	for (int i = 0; i < index; i++)
		delete pc[i];

	return 1;
}