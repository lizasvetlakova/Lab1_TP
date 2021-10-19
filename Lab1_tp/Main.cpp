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
		//загрузка keeper из файла
		//в функции бросить исключение
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
		//сохранение keeper в файл
		//в функции бросить исключение
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
	while (flag) {
		system("cls");
		cout << "1. Автомобиль\n2. Мотоцикл\n3. Автобус\n4. Вернуться в меню\n";
		cout << "\nВыберите какой объект добавить >> ";
		cin >> c;
		if (c == 4) {
			flag = 0;
			break;
		}
		else if (c == 1) {
			ptr = new Car; 
		}
		else if (c == 2) {
			ptr = new Bike;
		}
		else if (c == 3) {
			ptr = new Bus;
		}
		else {
			cout << "\nОшибка при выборе! Попробуйте снова.\n";
			break;
		}
		
		ptr->change();
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
	cout << "\nВведите номер объекта, который нужно удалить >> ";
	cin >> i;
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
		cout << "#" << i << " ";
		kpr[i].print();
		cout << endl << endl;
	}
}

void Change(Keeper& kpr) {
	if (kpr.get_size() == 0) {
		cout << "Контейнер пуст!" << endl;
		return;
	}
	int i = 0;
	system("cls");
	cout << "\nВведите номер объекта, данные которого нужно изменить >> ";
	cin >> i;
	try {
		kpr[i].change();
	}
	catch (const char* exc) {
		cout << exc << endl;
	}
}