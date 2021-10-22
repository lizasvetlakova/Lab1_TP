#include "Menu.h"

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