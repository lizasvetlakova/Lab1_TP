#pragma once
#include <string>

using namespace std;

class Garage {
	string brand;
	string model;
public:
	Garage();
	Garage(string &newBrand, string &newModel);
	~Garage() {};

	void set_brand(string &newBrand);
	void set_model(string &newModel);

	string get_brand();
	string get_model();
};