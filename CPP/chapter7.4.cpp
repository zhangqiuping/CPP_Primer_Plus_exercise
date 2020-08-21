//¡¶C++ Primer Plus¡·µÚ7ÕÂ ±à³ÌÁ·Ï°4 chapter7.4.cpp
#include <iostream>
#include <iomanip>

long double probability(unsigned int number, unsigned  int picks);

int main()
{
	unsigned int total_ordinary, pick_ordinary;
	unsigned int total_special, pick_special;
	long double probability1, probability2;
	do
	{
		std::cout << "Enter the total number of ordinary array and pick number of ordinary arry(total >=pick): \n";
		std::cin >> total_ordinary >> pick_ordinary;
	} while (total_ordinary < pick_ordinary);
	do
	{
		std::cout << "Enter the total number of special array and pick number of special arry(total >=pick):\n";
		std::cin >> total_special >> pick_special;
	} while (total_special < pick_special);


	probability1 = probability(total_ordinary, pick_ordinary);
	probability2 = probability(total_special, pick_special);
	
	std::cout << std::setiosflags(std::ios::fixed) <<std::setprecision(20) << "You have only " << probability1 * probability2 << " probability of winning the first prize!\n";
	return 1;
}

long double probability(unsigned int number, unsigned int picks)
{
	long double prob=1.0;
	std::cout << "++++++++++++++++++++Probability of Winning Lotto++++++++++++++++++++\n";
	for(;number > 0 && picks >0;picks--,number-- )
	{
		prob = prob * (picks /(double) number);
		std::cout << "picks:" << picks << "|nubmer:" << number << "|probability:" << prob << "\n";
	}
	return prob;
}