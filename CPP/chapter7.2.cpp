//¡¶C++ Primer Plus¡·µÚ7ÕÂ ±à³ÌÁ·Ï°2 chapter7.2.cpp
#include <iostream>

const int MAX_NUMBER = 10;

void input_scores(double scores[], int n= 10);
void show_scores(const double scores[], int  n= 10);
double average_scores(const double scores[], int n= 10);

int main()
{
	double sc[MAX_NUMBER] = {};
	double result;

	input_scores(sc);
	show_scores(sc);
	result = average_scores(sc);
	std::cout << "The average scores is: " << result << ".\n";

	return 1;
}

void input_scores(double scores[], int n )
{
	int i =0;
	std::cout << "++++++++++++++++++++++++Please enter the scores+++++++++++++++++++++++\n";
	std::cout << "+++++++maximal 10 times(type a minus number to cease the input)+++++++\n";

	for (i = 0; i < n; i++)
	{
		std::cout << "enter " << i+1 << " times score:";
		std::cin >> scores[i];
		if (scores[i] < 0)
			break;
	}
}
void show_scores(const double scores[], int n)
{
	std::cout << "scores are ";
	for (int i = 0; i < n; i++)
	{
		if (scores[i] < 0)
			break;
		std::cout << scores[i]<<"|";
	}
	std::cout << "\n";
}

double average_scores(const double scores[], int n)
{
	int i = 0;
	double sum=0,average=0;
	for (; i < n; i++)
	{
		if (scores[i] < 0)
			break;
		sum+= scores[i];
	}
	average = sum / i;
	return average;
}
