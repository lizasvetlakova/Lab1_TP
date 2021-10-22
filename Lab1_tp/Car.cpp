#include "Car.h"

Car::~Car() { 
	cout << "Сработал деструктор объекта автомобиль" << endl; 
}
Car::Car() {
	volume = "Null";
	color = type = "None";
	cout << "Сработал конструктор объекта автомобиль" << endl;
}
Car::Car(string& B, string& M, string& V, string& C, string& T) {
	set_brand(B);
	set_model(M);
	volume = V; color = C; type = T;
	cout << "Сработал конструктор объекта автомобиль" << endl;
}
Car::Car(const Car& car) {
	Garage(car.tr);
	volume = car.volume; color = car.color; type = car.type;
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

string Car::getinfo() {
	string line = "1\n";
	line += get_brand() + "\n" + get_model();
	line += "\n" + volume + "\n" + color + "\n" + type;
	return line;
}

void Car::setinfo(ifstream& in) {
	string s;
	getline(in, s);
	set_brand(s);
	getline(in, s);
	set_model(s);
	getline(in, s);
	set_volume(s);
	getline(in, s);
	set_color(s);
	getline(in, s);
	set_type(s);
}

void Car::change() {
	string s;
	int c;
	bool f = 1;
	while (f) {
		cout << "\nВыберите какой параметр нужно изменить:\n"
			<< "1.Марка  2.Модель  3.Объем двигателя  4.Цвет  5.Тип КПП\n"
			<< "6.Вернуться в меню\n\n" << ">> ";
		cin >> c;
		switch (c) {
		default:
			cout << "\nОшибка при выборе! Попробуйте снова.\n";
			break;
		case 1:
			cout << endl  << "Введите марку: ";
			cin >> s;
			set_brand(s);
			break;
		case 2:
			cout << endl  << "Введите модель: ";
			cin >> s;
			set_model(s);
			break;
		case 3:
			cout << endl  << "Введите объём двигателя(л): ";
			cin >> s;
			volume = s;
			break;
		case 4:
			cout << endl  << "Введите цвет: ";
			cin >> s;
			color = s;
			break;
		case 5:
			cout << endl  << "Введите тип КПП: ";
			cin >> s;
			type = s;
			break;
		case 6:
			f = 0;
			break;
		}
	}
}

void Car::print() {
	cout << " Автомобиль " << get_brand()
		<< " " << get_model()
		<< "\n   Объём двигателя (л): " << volume
		<< "\n   Цвет: " << color
		<< "\n   Тип КПП: " + type << endl << endl;
}