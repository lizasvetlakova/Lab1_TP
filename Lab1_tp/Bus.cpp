#include "Bus.h"

Bus::~Bus() { 
	tr1.~Garage(); 
	cout << "Сработал деструктор объекта автобус" << endl; 
}

Bus::Bus() {
	Garage();
	seats = total_seats = "Null";
	final_point = "None";
	cout << "Сработал конструктор объекта автобус" << endl;
}

void Bus::set_brand(string& Brand){ 
	tr1.set_brand(Brand); 
}
void Bus::set_model(string& Model){ 
	tr1.set_model(Model); 
}
void Bus::set_seats(string& Seats) { 
	seats = Seats; 
}
void Bus::set_total(string& TotalSeats) { 
	total_seats = TotalSeats; 
}
void Bus::set_point(string& FinalPoint) { 
	final_point = FinalPoint; 
}

string Bus::get_brand() { 
	return tr1.get_brand(); 
}
string Bus::get_model(){ 
	return tr1.get_model(); 
}
string Bus::get_seats() { 
	return seats; 
}
string Bus::get_total() { 
	return total_seats; 
}
string Bus::get_point() { 
	return final_point; 
}

void Bus::print() {
	cout << "Автобус" << endl << endl
		<< "Марка: " << tr1.get_brand() << endl
		<< "Модель: " << tr1.get_model() << endl
		<< "Кол-во сидячих мест: " << seats << endl
		<< "Общее кол-во мест " << total_seats << endl
		<< "Конечный пункт: " << final_point << endl;
}
void Bus::change() {
		string s = "";
		cout << endl << "Введите марку: ";
		getline(cin, s);
		tr1.set_brand(s);

		cout << endl << "Введите модель: ";
		getline(cin, s);
		tr1.set_model(s);

		cout << endl << "Введите кол-во сидячих мест: ";
		getline(cin, s);
		seats = s;

		cout << endl << "Введите общее кол-во мест: ";
		getline(cin, s);
		total_seats = s;

		cout << endl << "Введите конечный пункт: ";
		getline(cin, s);
		final_point = s;
}