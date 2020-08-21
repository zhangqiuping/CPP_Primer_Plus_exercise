//《C++ Primer Plus》第17章 编程练习7 chapter17.7.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <functional>


class Store
{
private:
	std::ofstream *m_fout;
public:
	Store(std::ofstream& fout) { m_fout = &fout; }
	Store(const Store& s);
	~Store() {}
	void operator()(const std::string& str);
};

void Store::operator()(const std::string& str)
{
	size_t len = str.length();
	m_fout->write((char*)(&len), sizeof(size_t));
	m_fout->write(str.data(),len);
}

//for_each语句多次调用深度赋值语句，因此必须重载
Store::Store(const Store& s)
{
	m_fout = s.m_fout;
}


void ShowStr(std::string& str);
void GetStrs(std::ifstream& fin, std::vector<std::string>& vs);

int main()
{
	using namespace std;
	vector<string> vostr;
	string temp;

	//acquire strings
	cout << "Enter strings(empty line to quit):\n";
	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
	cout << "Here is your input.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);

	//store in a file
	ofstream fout("strings.txt", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();
	fout.clear();
	
	
	vector<string> vistr;
	ifstream fin("strings.txt", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Could not open file for input.\n";
		exit(EXIT_FAILURE);
	}

	GetStrs(fin, vistr);
	fin.close();
	fin.clear();
	cout << "\nHere are the strings read from the file:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);
	
	return 1;

}


void ShowStr(std::string& str)
{
	std::cout << str << std::endl;
}

void GetStrs(std::ifstream& fin, std::vector<std::string> &vs)
{
	size_t len;
	while (fin.read((char*)&len, sizeof(size_t)))
	{
		char* temp = new char[len+1];//将char* 设置为len+1长度，最后一位添加‘/0’，否则读取文件时显示乱码
		fin.read(temp, len);
		temp[len] = '\0';
		vs.push_back(temp);
		delete [] temp;
	}
	
}