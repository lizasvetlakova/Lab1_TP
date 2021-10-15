#pragma once
#include "Garage.h"
#include "Base.h"//
#include <iostream>

class Bike : public Base {
	Garage tr;
	int volume;
	int power;
	string area;
public:
	Bike();
	~Bike();

	void print();
	void change();
	//+ set-методы
	int get_vol_b();
	int get_pwr();
	string get_area();
};