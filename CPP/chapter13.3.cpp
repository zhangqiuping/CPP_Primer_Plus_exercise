//¡¶C++ Primer Plus¡·µÚ13ÕÂ ±à³ÌÁ·Ï°3 chapter13.3.cpp
#include <iostream>
#include "DMA00.h"

int main()
{
	using std::cout;
	using std::endl;

	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo keys", 5);
	cout << "Displaying baseDMA object:\n";
	cout << shirt << endl;
	cout << "Displaying lacksDMA object:\n";
	cout << balloon << endl;
	cout << "Displaying hasDMA object:\n";
	cout << map << endl;
	lacksDMA balloon2(balloon);
	cout << "Result of lacksDMA copy:\n";
	cout << balloon << endl;
	hasDMA map2;
	map2 = map;
	cout << "Result of hasDMA assigment:\n";
	cout << map2 << endl;
	return 1;
}