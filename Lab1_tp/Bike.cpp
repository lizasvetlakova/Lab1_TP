#include "Bike.h"

Bike::~Bike() { cout << "Сработал деструктор объекта мотоцикл" << endl; }

Bike::Bike() {
	volume = power = 0;
	area = "";
	cout << "Сработал конструктор без параметров объекта мотоцикл" << endl;
}
int Bike::get_vol_b() { return volume; }
int Bike::get_pwr() { return power; }
string Bike::get_area() { return area; }

void Bike::print() {
	cout << "Мотоцикл" << endl << endl
		<< "Марка: " << tr.get_brand() << endl
		<< "Модель: " << tr.get_model() << endl
		<< "Объём двигателя (л): " << volume << endl
		<< "Мощность двигаетеля(л.с.): " << power << endl
		<< "Местность: " << area << endl;
}
void Bike::change() {

}