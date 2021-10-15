#pragma once
#include "Garage.h"
#include "Base.h"
#include <iostream>

class Bus : public Base {
	Garage tr;
	int seats;
	int total_seats;
	string final_point;
public:
	Bus();
	~Bus();

	void print();
	void change();
	//+ set-методы
	int get_seats();
	int get_total();
	string get_point();
};