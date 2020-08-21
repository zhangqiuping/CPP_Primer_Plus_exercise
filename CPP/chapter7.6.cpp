//��C++ Primer Plus����7�� �����ϰ6 chapter7.6.cpp

#include<iostream>

const int MAX = 10;

int Fill_array(double ar[], const int n);
void Show_array(double ar[], const int n);
void Reserve_array(double ar[], const int n);

int main()
{
	double ar[MAX];
	int n = 0;
	double temp;
	n=Fill_array(ar, MAX); //�������
	Show_array(ar, n);//��ʾ����
	Reserve_array(ar, n);//��ת����

	//��ת��1�������1������
	temp = ar[0];
	ar[0] = ar[n - 1];
	ar[n-1] = temp;

	Show_array(ar, n);//��ʾ��ת������

	return 1;
}

int Fill_array(double ar[], const int n)
{
	int i = 0;
	std::cout << "Enter the double numbers(type non-number to exit,maxmail)" << n << " numbers allowed!\n";
	for (; i < n; i++)
	{
		if (!bool(std::cin >> ar[i]))
			break;
	}
	return i;
}

void Show_array(double ar[], const int n)
{
	std::cout << "+++++++++++Show_Array+++++++++++\n";
	for (int i = 0; i < n; i++)
		std::cout << ar[i] << "|";
	std::cout << "\n";
}

void Reserve_array(double ar[], const int n)
{
	double temp;
	for (int i = 0; i < n/2; i++)
	{
		temp=ar[i];
		ar[i] = ar[n-1-i];
		ar[n - 1 - i] = temp;
	}
}
