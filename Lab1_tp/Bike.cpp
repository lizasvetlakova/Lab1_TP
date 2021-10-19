#include "Bike.h"

Bike::~Bike() { 
	tr2.~Garage();
	cout << "Сработал деструктор объекта мотоцикл" << endl; 
}

Bike::Bike() {
	Garage();
	volume = power = "Null";
	area = "None";
	cout << "Сработал конструктор объекта мотоцикл" << endl;
}

void Bike::set_brand(string& Brand) {
	tr2.set_brand(Brand);
}
void Bike::set_model(string& Model) {
	tr2.set_model(Model);
}
void Bike::set_volume(string& Volume) {
	volume = Volume;
}
void Bike::set_power(string& Power) {
	power = Power;
}
void Bike::set_area(string& Area) {
	area = Area;
}

string Bike::get_brand() {
	return tr2.get_brand();
}
string Bike::get_model() {
	return tr2.get_model();
}
string Bike::get_volume() { 
	return volume; 
}
string Bike::get_power() { 
	return power; 
}
string Bike::get_area() { 
	return area; 
}

void Bike::print() {
	cout << "Мотоцикл" << endl << endl
		<< "Марка: " << tr2.get_brand() << endl
		<< "Модель: " << tr2.get_model() << endl
		<< "Объём двигателя (л): " << volume << endl
		<< "Мощность двигаетеля(л.с.): " << power << endl
		<< "Местность: " << area << endl;
}
void Bike::change() {
	string s = "";
	cout << endl << "Введите марку: ";
	getline(cin, s);
	tr2.set_brand(s);

	cout << endl << "Введите модель: ";
	getline(cin, s);
	tr2.set_model(s);

	cout << endl << "Введите объём двигателя: ";
	getline(cin, s);
	volume = s;

	cout << endl << "Введите мощность двигаетеля: ";
	getline(cin, s);
	power = s;

	cout << endl << "Введите местность: ";
	getline(cin, s);
	area = s;
}