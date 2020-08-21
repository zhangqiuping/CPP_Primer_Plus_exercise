//��C++ Primer Plus����8�� �����ϰ2 chapter8.2.cpp

#include<iostream>
#include<cstring>
#include<string>

using namespace std;

struct CandyBar
{
	char *name;
	double weight;
	int calorie;
};

void set_CandyBar(CandyBar& cb, const char *ch= "Millennium Munch", const double wt = 2.85, const int cal = 350);
void show_CandyBar(const CandyBar& cb);

int main()
{
	CandyBar cb1, cb2;
	string str_name;
	char* name;
	double weight;
	int cal;
	cout << "Please input name:\n";
	getline(cin, str_name); //ʹ��stringȷ��������ո�
	name = const_cast<char*>(str_name.data()); //��ν�string��Դ�� ��ֵ��char*��Ŀ�꣩
	cout << "Please input weight:\n";
	cin >> weight;
	cin.get();
	cout << "Please input calorie:\n";
	cin >> cal;
	cin.get();

	set_CandyBar(cb1);
	set_CandyBar(cb2, name, weight,cal);

	cout << "Show the CandyBar with the defaut function parameter:\n";
	show_CandyBar(cb1);
	cout << "Show the CandyBar without the defaut function parameter:\n";
	show_CandyBar(cb2);
	return 1;
}

void set_CandyBar(CandyBar& cb, const char *ch, const double wt, const int cal)
{
	cb.name = const_cast<char*> (ch);//��ν�const char*��Դ�� ��ֵ��char*��Ŀ�꣩
	cb.weight = wt;
	cb.calorie = cal;
}

void show_CandyBar(const CandyBar& cb)
{
	cout << "CandyBar.Name= " << cb.name << " | " << "Candybar.Weight= " << cb.weight << " | " << "CandyBar.Calorie= " << cb.calorie << "\n";
}

