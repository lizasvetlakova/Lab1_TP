#include "Car.h"

Car::~Car() { 
	tr.~Garage();
	cout << "Сработал деструктор объекта автомобиль" << endl; 
}

Car::Car() {
	Garage();
	volume = "Null";
	color = type = "None";
	cout << "Сработал конструктор объекта автомобиль" << endl;
}

void Car::set_brand(string& Brand) { 
	tr.set_brand(Brand);
}
void Car::set_model(string& Model){ 
	tr.set_model(Model); 
}
void Car::set_volume(string& Volume) { 
	volume = Volume; 
}
void Car::set_color(string& Color) { 
	color = Color; 
}
void Car::set_type(string& Type) { 
	type = Type; 
}

string Car::get_brand() { 
	return tr.get_brand(); 
}
string Car::get_model() { 
	return tr.get_model(); 
}
string Car::get_volume() { 
	return volume; 
}
string Car::get_color() { 
	return color; 
}
string Car::get_type() { 
	return type; 
}

void Car::print() {
	cout << "Автомобиль " << tr.get_brand() << " " << tr.get_model() << endl
		<< "\tОбъём двигателя (л): " << volume << endl
		<< "\tЦвет: " << color << endl
		<< "\tТип КПП: " << type << endl;
}
void Car::change() {
	string s;
	cout << endl << "Введите марку: ";
	getline(cin, s);
	tr.set_brand(s);

	cout << endl << "Введите модель: ";
	getline(cin, s);
	tr.set_model(s);

	cout << endl << "Введите объём двигателя: ";
	getline(cin, s);
	volume = s;

	cout << endl << "Введите цвет: ";
	getline(cin, s);
	color = s;

	cout << endl << "Введите тип КПП: ";
	getline(cin, s);
	type = s;
}