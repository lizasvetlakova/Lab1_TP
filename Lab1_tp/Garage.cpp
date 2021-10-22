#include "Garage.h"

Garage::~Garage() { cout << "Сработал деструктор класса Garage" << endl; }

Garage::Garage() {
	brand = "None";
	model = "None";
	cout << "Сработал конструктор класса Garage" << endl;
}
Garage::Garage(const Garage& g) {
	brand = g.brand;
	model = g.model;
}
void Garage::set_brand(string &Brand) {
	brand = Brand;
}
void Garage::set_model(string &Model) {
	model = Model;
}
string Garage::get_brand() { return brand; }
string Garage::get_model() { return model; }