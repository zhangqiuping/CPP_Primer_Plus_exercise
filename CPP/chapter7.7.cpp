//��C++ Primer Plus����7�� �����ϰ7 chapter7.7.cpp
#include<iostream>

const int MAX = 10;

double* Fill_array(double ar[], const int n);
void Show_array(double ar[], double* end_of_array);
void Reserve_array(double ar[], double* end_of_array);

int main()
{
	double ar[MAX];
	double* p;
	double temp;

	p=Fill_array(ar, MAX); //�������,�����������Ԫ�ض�Ӧ��ָ��
	Show_array(ar, p);//��ʾ����
	Reserve_array(ar+1, p-1);//��ת���飨��������1�����������1һ�����֣�
	Show_array(ar, p);//��ʾ��ת������

	return 1;
}

double* Fill_array(double ar[], const int n)
{
	int i = 0;
	std::cout << "Enter the double numbers(type non-number to exit,maxmail)" << n << " numbers allowed!\n";
	for (; i < n; i++)
	{
		if (!bool(std::cin >> ar[i]))
			break;
	}
	return ar+i-1;
}

void Show_array(double ar[],  double* end_of_array)
{
	int i = 0;
	std::cout << "+++++++++++Show_Array+++++++++++\n";
	for (i = 0; (ar+i)!=(end_of_array+1) ; i++)
		std::cout << ar[i] << "|";
	std::cout << "\n";
}

void Reserve_array(double ar[], double* end_of_array)
{
	double *temp=new double;

	while (!(ar == end_of_array||(ar-1)==end_of_array)) //��ת��ֹͣ������
	{
		*temp = *ar;
		*ar = *end_of_array;
		*end_of_array = *temp;
		ar++; 
		end_of_array--;
	}
	delete temp;
}
