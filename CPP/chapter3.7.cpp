//��C++ Primer Plus����3�� �����ϰ37 chapter3.7.cpp

#include <iostream>

const float km_miles = 0.6214;
const float galon_liter = 3.875;

int main()
{
	float miles, galon;
	float km, liter;
	float mpg, lpk;
	std::cout << "Enter the distance(miles):";
	std::cin >> miles;
	std::cout << "Enter the fuel consumption(galon):";
	std::cin >> galon;

	//��miles��galonת��Ϊ����km����liter��
	km = miles / km_miles;
	liter = galon * galon_liter;

	//����ÿ����Ӣ����mpg��ÿ100�����ͺģ�
	mpg = miles / galon;
	lpk = liter / km * 100;
	
	std::cout << "Your �� miles per galon�� mpg is " << mpg<<" mpg, so your ��Liter per 100 km�� lpk is "<<lpk<<"Liter per 100 km."<<std::endl;
	return 1;
}