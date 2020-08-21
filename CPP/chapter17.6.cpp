//��C++ Primer Plus����17�� �����ϰ6 chapter17.6.cpp
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

	//���ļ� fin
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

	//	//���ļ� fout 
	fout.open(file, ios::app);
	if (fout.fail())
	{
		std::cout << "FOUT:Could not open the file. Program terminated.\n";
		exit(EXIT_FAILURE);
	}

	index = 0;//��index��������Ϊ0
	std::cout << "Enter the proper Alphabet (0 for Employee; 1 for Manager; 2 for fink; 3 for Highfink; q to quit)to input:\n";
	while ((cin >>classtype).get(ch) && index<MAX) //get(ch)��Ŀ������Ϊclasstype���ļ����ǵ���һ�д洢�ģ���Ҫ�����з�'\n'ȥ��
	{
		switch (classtype)
		{
		case Employee:	pc[index] = new employee;	pc[index]->SetAll();	index++;	break;
		case Manager:	pc[index] = new manager;	pc[index]->SetAll();	index++;	break;
		case Fink:			pc[index] = new fink;			pc[index]->SetAll();	index++;	break;
		case Highfink:	pc[index] = new highfink;	pc[index]->SetAll();	index++;	break;
		default:cerr << "Wrong Type" << endl;break;//������벻��enum classkind�������cerr����index����+1��
		}
		std::cout << "Enter the proper Alphabet (0 for Employee; 1 for Manager; 2 for fink; 3 for Highfink; q to quit)to input:\n";
	}
	//ʹ��WirteAllд�룬����ָ��������abstr_emp���ͣ���˻�����Զ�ѡ�����Ķ���::WriteAll(fout)��
	for(int i=0;i<index;i++)
		pc[i]->WriteAll(fout);

	//ɾ����Ӧnew�������ڴ棬�����ڴ�й¶
	for (int i = 0; i < index; i++)
			delete pc[i];
	
	//�ر��ļ������fout���Ǳ��衣
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
	//�ر��ļ������fin���Ǳ��衣
	fin.close();
	fin.clear();

	//ɾ����Ӧnew�������ڴ棬�����ڴ�й¶;
	for (int i = 0; i < index; i++)
		delete pc[i];

	return 1;
}