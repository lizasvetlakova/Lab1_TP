#include "Bike.h"

Bike::~Bike() { 
	tr2.~Garage();
	cout << "Сработал деструктор объекта мотоцикл" << endl; 
}

Bike::Bike() {
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

string Bike::getinfo() {
	string line = "2\n";
	line += get_brand() + "\n" + get_model();
	line += "\n" + volume + "\n" + power + "\n" + area;
	return line;
}

void Bike::setinfo(ifstream& in) {
	string s;
	getline(in, s);
	set_brand(s);
	getline(in, s);
	set_model(s);
	getline(in, s);
	set_volume(s);
	getline(in, s);
	set_power(s);
	getline(in, s);
	set_area(s);
}

void Bike::change() {
	string s = "";
	cout << endl << "Введите марку: ";
	cin >> s;
	set_brand(s);

	cout << endl << "Введите модель: ";
	cin >> s;
	set_model(s);

	cout << endl << "Введите объём двигателя(л): ";
	cin >> s;
	volume = s;

	cout << endl << "Введите мощность двигаетеля(л.с.): ";
	cin >> s;
	power = s;

	cout << endl << "Введите местность: ";
	cin >> s;
	area = s;
}

void Bike::print() {
	cout << " Мотоцикл " << get_brand()
		<< " " << get_model()
		<< "\n   Объём двигателя (л): " << volume
		<< "\n   Мощность двигаетеля(л.с.): " << power
		<< "\n   Местность: " + area << endl << endl;
}