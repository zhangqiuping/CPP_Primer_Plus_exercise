//��C++ Primer Plus����10�� �����ϰ1 chapter10.1.cpp
#include <iostream>
#include "accout_00.h"
#include <string>

using namespace std;

int main()
{
	std::string name1;
	std::string ac_name2;
	double deposit1;

	Account ac[3] = { Account(), Account("zhang","CNS001",100000) }; //���캯����ʼ��ac[0]ac[1],ac[2]Ĭ�Ϲ��캯��;

	std::cout << "Enter your name:\n";
	getline(cin, name1);
	std::cout << "Enter your acount name:\n";
	getline(cin, ac_name2);
	std::cout << "Enter your deposit:\n";
	cin >> deposit1;
	ac[2] = Account(name1, ac_name2, deposit1);//Account������ac[2]��ֵ

	for (int i = 0; i<3;i++)
		ac[i].Show();
	cout << "\n";

	ac[1].Save(10000);
	ac[2].take_out(500);

	for (int i = 0; i<3;i++)
		ac[i].Show();
	cout << "\n";

	return 1;
}

