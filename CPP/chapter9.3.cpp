//¡¶C++ Primer Plus¡·µÚ9ÕÂ ±à³ÌÁ·Ï°3 chapter9.3.cpp

#include <iostream>
#include <new>

struct chaff
{
	char dross[20];
	int slag;
};

void setChaff(chaff& ch1);
void showChaff(chaff& ch1);


int main()
{
	chaff  *temp= new chaff[10];
	chaff* pa1 = new(temp) chaff[2];
	for (int i = 0; i < 2; i++)
		setChaff(*(pa1 + i));
	for (int i = 0; i < 2; i++)
		showChaff(*(pa1 + i));

	return 1;

	return 1;
}

void setChaff(chaff& ch1)
{
	std::cout << "Enter dross:\n";
	std::cin.getline(ch1.dross, 20);
	std::cout << "Enter slag:\n";
	std::cin >> ch1.slag;
	std::cin.get();
}
void showChaff(chaff& ch1)
{
	std::cout << "Dross: " << ch1.dross << " | Slag: " << ch1.slag << "\n";
}
