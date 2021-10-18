#ifndef GARAGE_H
#define GARAGE_H
#include <string>

using namespace std;

class Garage {
	string brand;
	string model;
public:
	Garage();
	Garage(string &Brand, string &Model);
	~Garage() {};

	void set_brand(string &Brand);
	void set_model(string &Model);

	string get_brand();
	string get_model();
};
#endif 