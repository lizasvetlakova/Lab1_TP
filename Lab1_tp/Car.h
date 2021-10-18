#ifndef CAR_H
#define CAR_H
#include "Garage.h"
#include "Base.h"
#include <iostream>

class Car : public Base {
	Garage tr;
	string volume;
	string color;
	string type;
public:
	Car();
	~Car();

	virtual void Print() override;
	virtual void Change() override;

	void set_brand(string& Brand);
	void set_model(string& Model);
	void set_volume(string& Volume);
	void set_color(string& Color);
	void set_type(string& Type);

	string get_brand();
	string get_model();
	string get_volume();
	string get_color();
	string get_type();
};
#endif 