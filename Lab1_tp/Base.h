#ifndef BASE_H
#define BASE_H
#include <string>
#include <iostream>

using namespace std;

class Base {
public:
	Base() { cout << "Сработал конструктор класса Base" << endl; };
	virtual ~Base() { cout << "Сработал деструктор класса Base" << endl; };

	virtual string info() = 0;
	virtual void change() = 0;
};
#endif