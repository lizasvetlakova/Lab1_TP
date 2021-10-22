#include "Libs.h"

using namespace std;

void Add(Keeper& kpr);
void Delete(Keeper& kpr);
void Print(Keeper& kpr);
void Change(Keeper& kpr);

int main(void) {
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	char c;
	bool flag = 1;
	Keeper kpr;

	try{
		kpr.upload();
	}
	catch (const char* exc) {
		cout << exc << endl;
		return 1;
	}
	
	while (flag) {
		system("cls");
		cout << "\tМеню\n\n1. Добавить объект\n2. Удалить объект\n3. Вывести на экран\n4. Изменить данные\n5. Сохранить и выйти\n";
		cout << "\nВыберите действие >> ";
		c = _getch();
		switch (c){
		case '1':
			Add(kpr);
			break;
		case '2':
			Delete(kpr);
			break;
		case '3':
			Print(kpr);
			break;
		case '4':
			Change(kpr);
			break;
		case '5':
			flag = 0;
			break;
		default:
			cout << "\nОшибка при выборе! Попробуйте снова.\n";
			break;
		}
		system("pause");
	}

	try {
		kpr.save();
	}
	catch (const char* exc) {
		cout << exc << endl;
		return 1;
	}
	return 0;
}

void Add(Keeper& kpr) {
	Base* ptr; //ptr - указатель на объект
	bool flag = 1;
	int c = 0;
	string b, m, v, k, t;
	while (flag) {
		system("cls");
		cout << "1. Автомобиль\n2. Мотоцикл\n3. Автобус\n4. Вернуться в меню\n";
		cout << "\nВыберите какой объект добавить >> ";
		cin >> c;
		if (c == 4) {
			flag = 0;
			break;
		}
		cout << endl << "Введите марку: ";
		cin >> b;
		cout << endl << "Введите модель: ";
		cin >> m;
		if (c == 1) {
			cout << endl << "Введите объём двигателя(л): ";
			cin >> v;
			cout << endl << "Введите цвет: ";
			cin >> k;
			cout << endl << "Введите тип КПП: ";
			cin >> t;
			ptr = new Car(b, m, v, k, t); 
		}
		else if (c == 2) {
			cout << endl << "Введите объём двигателя(л): ";
			cin >> v;
			cout << endl << "Введите мощность двигаетеля(л.с.): ";
			cin >> k;
			cout << endl << "Введите местность: ";
			cin >> t;
			ptr = new Bike(b, m, v, k, t);
		}
		else if (c == 3) {
			cout << endl << "Введите кол-во сидячих мест: ";
			cin >> v;
			cout << endl << "Введите общее кол-во мест: ";
			cin >> k;
			cout << endl << "Введите конечный пункт: ";
			cin >> t;
			ptr = new Bus(b, m, v, k, t);
		}
		else {
			cout << "\nОшибка при выборе! Попробуйте снова.\n";
			break;
		}

		kpr.insert(*ptr);	
		cout << endl << "Объект добавлен!" << endl;
		ptr = nullptr;
		delete ptr;
		system("pause");
	}
}

void Delete(Keeper& kpr) {
	if (kpr.get_size() == 0) {
		cout << "Контейнер пуст!" << endl;
		return;
	}
	int i = 0;
	system("cls");
	cout << "Введите номер объекта, который нужно удалить >> ";
	cin >> i;
	i -= 1;
	cout << endl;
	try {
		kpr.remove(i);
	}
	catch (const char* exc) {
		cout << exc << endl;
	}
	cout << "\nОбъект удалён!" << endl;
}

void Print(Keeper& kpr) {
	if (kpr.get_size() == 0) {
		cout << "Контейнер пуст!" << endl;
		return;
	}
	system("cls");
	for (int i = 0; i < kpr.get_size(); i++) {
		cout << "#" << i + 1;
		kpr[i].print();
	}
}

void Change(Keeper& kpr) {
	if (kpr.get_size() == 0) {
		cout << "Контейнер пуст!" << endl;
		return;
	}
	int i = 0;
	system("cls");
	cout << "Введите номер объекта, данные которого нужно изменить >> ";
	cin >> i;
	i -= 1;
	try {
		cout << endl << "Текущие данные объекта:\n  ";
		kpr[i].print(); 
		kpr[i].change();
	}
	catch (const char* exc) {
		cout << exc << endl;
	}
}