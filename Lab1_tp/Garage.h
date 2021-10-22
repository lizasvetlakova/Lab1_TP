#ifndef GARAGE_H
#define GARAGE_H
#include <string>
#include <iostream>

using namespace std;

class Garage {
	string brand;
	string model;
public:
	Garage();
	Garage(const Garage& g);
	~Garage();

	void set_brand(string &Brand);
	void set_model(string &Model);

	string get_brand();
	string get_model();
};
#endif 