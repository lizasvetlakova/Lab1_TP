#ifndef BASE_H
#define BASE_H
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Base {
public:
	Base() { cout << "\nСработал конструктор абстрактного базового класса" << endl; };
	virtual ~Base() { cout << "Сработал деструктор абстрактного базового класса" << endl; };

	virtual string getinfo() = 0;
	virtual void setinfo(ifstream& in) = 0;
	virtual void change() = 0;
	virtual void print() = 0;
};
#endif