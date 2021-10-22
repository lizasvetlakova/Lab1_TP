#include "Bus.h"

Bus::~Bus() { 
	cout << "Сработал деструктор объекта автобус" << endl; 
}
Bus::Bus() {
	seats = total_seats = "Null";
	final_point = "None";
	cout << "Сработал конструктор объекта автобус" << endl;
}
Bus::Bus(string& B, string& M, string& S, string& T, string& F) {
	set_brand(B);
	set_model(M);
	seats = S; total_seats = T; final_point = F;
	cout << "Сработал конструктор объекта автобус" << endl;
}
Bus::Bus(const Bus& bus) {
	Garage(bus.tr1);
	seats = bus.seats; total_seats = bus.total_seats; final_point = bus.final_point;
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

string Bus::getinfo() {
	string line = "3\n";
	line += get_brand() + "\n" + get_model();
	line += "\n" + seats + "\n" + total_seats + "\n" + final_point;
	return line;
}

void Bus::setinfo(ifstream& in) {
	string s;
	getline(in, s);
	set_brand(s);
	getline(in, s);
	set_model(s);
	getline(in, s);
	set_seats(s);
	getline(in, s);
	set_total(s);
	getline(in, s);
	set_point(s);
}

void Bus::change() {
	string s;
	int c;
	bool f = 1;
	while (f) {
		cout << "\nВыберите какой параметр нужно изменить:\n"
			<< "1.Марка  2.Модель  3.Сидячие места  4.Общие места  5.Конечный пункт\n"
			<< "6.Вернуться в меню\n\n" << ">> ";
		cin >> c;
		switch (c) {
		default:
			cout << "\nОшибка при выборе! Попробуйте снова.\n";
			break;
		case 1:
			cout << endl << "Введите марку: ";
			cin >> s;
			set_brand(s);
			break;
		case 2:
			cout << endl << "Введите модель: ";
			cin >> s;
			set_model(s);
			break;
		case 3:
			cout << endl << "Введите кол-во сидячих мест: ";
			cin >> s;
			seats = s;
			break;
		case 4:
			cout << endl << "Введите общее кол-во мест: ";
			cin >> s;
			total_seats = s;
			break;
		case 5:
			cout << endl << "Введите конечный пункт: ";
			cin >> s;
			final_point = s;
			break;
		case 6:
			f = 0;
			break;
		}
	}	
}

void Bus::print() {
	cout << " Автобус " << get_brand()
		<< " " << get_model()
		<< "\n   Кол-во сидячих мест: " << seats
		<< "\n   Общее кол-во мест: " << total_seats
		<< "\n   Конечный пункт: " + final_point << endl << endl;
}