//¡¶C++ Primer Plus¡·µÚ7ÕÂ ±à³ÌÁ·Ï°3 chapter7.3.cpp
#include<iostream>

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void showbox(box b1);
void update_box(box* b2);

int main()
{
	box bbb = { "Three-body",50.0,40.0,30.0,0.0 };
	showbox(bbb);
	update_box(&bbb);
	showbox(bbb);
	return 1;
}

void showbox(box b1)
{
	std::cout << "maker[40]= " << b1.maker << "|height= " << b1.height << "|width= " << b1.width << "|length= " << b1.length<<"|volume= "<<b1.volume << "\n";
}
void update_box(box* b2)
{
	b2->volume = b2->height * b2->width * b2->length;
}
