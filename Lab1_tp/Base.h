#ifndef BASE_H
#define BASE_H
#include <string>
#include <iostream>

using namespace std;

class Base {
public:
	Base() { cout << "Сработал конструктор класса Base" << endl; };
	virtual ~Base() { cout << "Сработал деструктор класса Base" << endl; };
	virtual void Print() = 0;
	virtual void Change() = 0;
};
#endif