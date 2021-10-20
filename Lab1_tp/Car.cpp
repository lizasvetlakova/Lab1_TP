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

string Car::info() {
	string line;
	line += "Автомобиль " + tr.get_brand() + " " + tr.get_model();
	line += "\nОбъём двигателя (л): " + volume;
	line += "\nЦвет: " + color;
	line += "\nТип КПП: " + type;
	return line;
}
void Car::change() {
	string s;
	cout << endl << "Введите марку: ";
	cin >> s;
	tr.set_brand(s);

	cout << endl << "Введите модель: ";
	cin >> s;
	tr.set_model(s);

	cout << endl << "Введите объём двигателя(л): ";
	cin >> s;
	volume = s;

	cout << endl << "Введите цвет: ";
	cin >> s;
	color = s;

	cout << endl << "Введите тип КПП: ";
	cin >> s;
	type = s;
}