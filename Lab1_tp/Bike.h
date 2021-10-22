#ifndef BIKE_H
#define BIKE_H
#include "Garage.h"
#include "Base.h"

class Bike : public Base {
	Garage tr2;
	string volume;
	string power;
	string area;
public:
	Bike();
	Bike(string& B, string& M, string& V, string& P, string& A);
	Bike(const Bike& bike);
	~Bike();

	virtual string getinfo() override;
	virtual void setinfo(ifstream& in) override;
	virtual void change() override;
	virtual void print() override;

	void set_brand(string& Brand);
	void set_model(string& Model);
	void set_volume(string& Volume);
	void set_power(string& Power);
	void set_area(string& Area);

	string get_brand();
	string get_model();
	string get_volume();
	string get_power();
	string get_area();
};
#endif 