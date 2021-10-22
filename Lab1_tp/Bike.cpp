#include "Bike.h"

Bike::~Bike() { 
	cout << "Сработал деструктор объекта мотоцикл" << endl; 
}
Bike::Bike() {
	volume = power = "Null";
	area = "None";
	cout << "Сработал конструктор объекта мотоцикл" << endl;
}
Bike::Bike(string& B, string& M, string& V, string& P, string& A) {
	set_brand(B);
	set_model(M);
	volume = V; power = P; area = A;
	cout << "Сработал конструктор объекта мотоцикл" << endl;
}
Bike::Bike(const Bike& bike) {
	Garage(bike.tr2);
	volume = bike.volume; power = bike.power; area = bike.area;
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
	string s;
	int c;
	bool f = 1;
	while (f) {
		cout << "\nВыберите какой параметр нужно изменить:\n"
			<< "1.Марка  2.Модель  3.Объем двигателя  4.Мощность двигаетеля  5.Местность\n"
			<< "6.Вернуться в меню\n\n" << ">> ";
		cin >> s;
		c = atoi(s.c_str());
		if (c < 1 || c > 6) {
			throw "\nОшибка при выборе!\n";
		}
		switch (c) {
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
			cout << endl << "Введите объём двигателя(л): ";
			cin >> s;
			volume = s;
			break;
		case 4:
			cout << endl << "Введите мощность двигаетеля(л.с.): ";
			cin >> s;
			power = s;
			break;
		case 5:
			cout << endl << "Введите местность: ";
			cin >> s;
			area = s;
			break;
		case 6:
			f = 0;
			break;
		}
	}
}

void Bike::print() {
	cout << " Мотоцикл " << get_brand()
		<< " " << get_model()
		<< "\n   Объём двигателя (л): " << volume
		<< "\n   Мощность двигаетеля(л.с.): " << power
		<< "\n   Местность: " + area << endl << endl;
}