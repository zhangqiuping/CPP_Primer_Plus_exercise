#ifndef DMA00_H_
#define DMA00_H_
#include <iostream>

class abcDMA
{
private:
	char* label;
	int rating;
public:
	const char* get_label()const { return label; }
	int get_rating()const { return rating; }
	abcDMA(const char* l="NULL",int r=0);
	abcDMA(const abcDMA& rs);
	virtual ~abcDMA()=0;
	abcDMA& operator=(const abcDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const abcDMA& rs);
};

class baseDMA : public abcDMA
{
public:
	baseDMA(const char* l = "NULL", int r = 0);
	baseDMA(const baseDMA& rs);
	~baseDMA();
	baseDMA& operator=(const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};

class lacksDMA :public abcDMA
{
private:
	enum{COL_LEN=40};
	char color[COL_LEN];
public:
	lacksDMA(const char* c = "blank", const char* l = "NULL", int r = 0);
	lacksDMA(const char* c, const abcDMA& rs);
	lacksDMA(const lacksDMA& rs);
};

class hasDMA :public abcDMA
{
private:
	char* style;
public:
	hasDMA(const char* s = "none", const char* l = "NULL", int r = 0);
	hasDMA(const char* s, const abcDMA& rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();

	hasDMA& operator=(const hasDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);
};

#endif // !DMA00_H_
