#include "Menu.h"

void Add(Keeper& kpr) {
	Base* ptr = nullptr; //ptr - указатель на объект
	bool flag = 1;
	int c;
	string b, m, v, k, t;
	while (flag) {
		system("cls");
		cout << "1. Автомобиль\n2. Мотоцикл\n3. Автобус\n4. Вернуться в меню\n";
		cout << "\nВыберите какой объект добавить >> ";
		cin >> b;
		c = atoi(b.c_str());
		if (c < 1 || c > 4) {
			cout << "\nОшибка при выборе!\n";
			break;
		}
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
		else { break; }
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
	string s;
	int i = 0;
	system("cls");
	cout << "Введите номер объекта, который нужно удалить >> ";
	cin >> s;
	i = atoi(s.c_str());
	i -= 1;
	cout << endl;
	try {
		kpr.remove(i);
		cout << "\nОбъект удалён!" << endl;
	}
	catch (const char* exc) {
		cout << exc << endl;
	}
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
	string s;
	int i = 0;
	system("cls");
	cout << "Введите номер объекта, данные которого нужно изменить >> ";
	cin >> s;
	i = atoi(s.c_str());
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