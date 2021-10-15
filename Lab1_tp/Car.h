#pragma once
#include "Garage.h"
#include "Base.h"//
#include <iostream>


class Car : public Base {
	Garage tr;
	int volume;
	string color;
	string type;
public:
	Car();
	~Car();

	void print();//
	void change();

	//+ set-методы

	int get_vol();
	string get_color();
	string get_type();
};