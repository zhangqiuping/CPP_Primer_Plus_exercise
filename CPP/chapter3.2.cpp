//¡¶C++ Primer Plus¡·µÚ3ÕÂ ±à³ÌÁ·Ï°2 chapter3.2.cpp

#include <iostream>

const float Factor_inch_feet = 12.0;
const float Factor_inch_meter = 0.0254;
const float Factor_kilo_pond = 2.2;

void show_BMI(float feet, float inch, float pond);

int main()
{
	float feetofheight, inchofheight, ponds;
	std::cout << "\aEnter your height wiht feet (first input)and inches(second input): ";
	std::cin >> feetofheight;
	std::cin >> inchofheight;
	std::cout << "\aEnter your weight with ponds:";
	std::cin >> ponds;
	show_BMI(feetofheight,inchofheight,ponds);
	return 1;
}

void show_BMI(float feet, float inch, float pond)
{
	float height, weight,bmi;
	inch = feet * Factor_inch_feet + inch;
	height = inch * Factor_inch_meter;
	weight = pond / Factor_kilo_pond;
	bmi = weight / (height * height);
	std::cout << "Your height is " << height << " meters, and your weight is " << weight << " kilograms!" << std::endl;
	std::cout << "Your BMI(Body Mass Index) is " << bmi << std::endl;
}

