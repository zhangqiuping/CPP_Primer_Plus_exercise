//list00.h for chapter10.8.cpp
#ifndef LIST00_H_
#define LIST00_H_

typedef int Item;

class List00
{
private:
	static const int MAX = 10;
	Item it[MAX];
	int m_pos;
public:
	List00(Item item[] = { 0 },int pos=0);
	bool isempty() const;
	bool isfull() const;
	void insert_data(const Item& item);
	void visit(void(*pf)(Item& item));
	void showitem()const;
};


#endif // !LIST00_H_
