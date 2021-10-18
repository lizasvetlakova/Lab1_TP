#ifndef BASE_H
#define BASE_H
#include <string>

using namespace std;

class Base {
public:
	Base() { std::cout << "Сработал конструктор класса Base" << std::endl; };
	virtual ~Base() { std::cout << "Сработал деструктор класса Base" << std::endl; };
	virtual void Print() = 0;
	virtual void Change() = 0;
};
#endif