#include "Bus.h"

Bus::~Bus() { cout << "Сработал деструктор объекта автобус" << endl; }

Bus::Bus() {
	seats = total_seats= 0;
	final_point = "";
	cout << "Сработал конструктор без параметров объекта автобус" << endl;
}

int Bus::get_seats() { return seats; }
int Bus::get_total() { return total_seats; }
string Bus::get_point() { return final_point; }

void Bus::print() {
	cout << "Автобус" << endl << endl
		<< "Марка: " << tr.get_brand() << endl
		<< "Модель: " << tr.get_model() << endl
		<< "Кол-во сидячих мест: " << seats << endl
		<< "Общее кол-во мест " << total_seats << endl
		<< "Конечный пункт: " << final_point << endl;
}
void Bus::change() {

}