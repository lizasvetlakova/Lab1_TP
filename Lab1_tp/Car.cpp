#include "Car.h"

Car::~Car() { cout << "Сработал деструктор объекта автомобиль" << endl; }

Car::Car() {
	volume = 0;
	color = type = "";
	cout << "Сработал конструктор без параметров объекта автомобиль" << endl;
}

int Car::get_vol() { return volume; }
string Car::get_color() { return color; }
string Car::get_type() { return type; }

void Car::print() {
	cout << "Автомобиль" << endl << endl
		<< "Марка: " << tr.get_brand() << endl
		<< "Модель: " << tr.get_model() << endl
		<< "Объём двигателя (л): " << volume << endl
		<< "Цвет: " << color << endl
		<< "Тип КПП: " << type << endl;
}
void Car::change() {

}
