#include "Garage.h"

Garage::Garage() {
	brand = "Null";
	model = "Null";
}
Garage::Garage(string &newBrand, string &newModel) {
	this->set_brand(newBrand);
	this->set_model(newModel);
}
void Garage::set_brand(string &newBrand) {
	brand = newBrand;
}
void Garage::set_model(string &newModel) {
	model = newModel;
}
string Garage::get_brand() { return brand; }
string Garage::get_model() { return model; }