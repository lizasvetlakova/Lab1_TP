#ifndef BASE_H
#define BASE_H
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Base {
public:
	Base() { cout << "Сработал конструктор класса Base" << endl; };
	virtual ~Base() { cout << "Сработал деструктор класса Base" << endl; };

	virtual string getinfo() = 0;
	virtual void setinfo(ifstream& in) = 0;
	virtual void change() = 0;
	virtual void print() = 0;
};
#endif