//¡¶C++ Primer Plus¡·µÚ2ÕÂ ±à³ÌÁ·Ï°5 chapter2.5.cpp

#include <iostream>

float Celsius_to_Fahrenheit(float _fCelsius);

int main()
{
	float Celsius,Fahrenheit;
	std::cout << "Please enter a Celsius value:";
	std::cin >> Celsius;
	Fahrenheit = Celsius_to_Fahrenheit(Celsius);
	std::cout << "\n" << Celsius << " degrees Celsius is " << Fahrenheit << " degrees Fahrenheit" << std::endl;
	return 1;
}

float Celsius_to_Fahrenheit(float _fCelsius)
{
	return _fCelsius * 1.8+32.0;
}
