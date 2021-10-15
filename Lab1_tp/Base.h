#pragma once
#include <string>

using namespace std;

class Base {
public:
	Base() {};
	virtual ~Base() {};
	virtual void print() = 0;
	virtual void change() = 0;
};