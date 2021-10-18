#ifndef BUS_H
#define BUS_H
#include "Garage.h"
#include "Base.h"
#include <iostream>

class Bus : public Base {
	Garage tr1;
	string seats;
	string total_seats;
	string final_point;
public:
	Bus();
	~Bus();

	virtual void Print() override;
	virtual void Change() override;

	void set_brand(string& Brand);
	void set_model(string& Model);
	void set_seats(string& Seats);
	void set_total(string& TotalSeats);
	void set_point(string& FinalPoint);

	string get_brand();
	string get_model();
	string get_seats();
	string get_total();
	string get_point();
};
#endif 