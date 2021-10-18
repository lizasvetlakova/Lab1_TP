#include "Garage.h"

Garage::Garage() {
	brand = "None";
	model = "None";
}
Garage::Garage(string &Brand, string &Model) {
	this->set_brand(Brand);
	this->set_model(Model);
}
void Garage::set_brand(string &Brand) {
	brand = Brand;
}
void Garage::set_model(string &Model) {
	model = Model;
}
string Garage::get_brand() { return brand; }
string Garage::get_model() { return model; }