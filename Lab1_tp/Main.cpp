#include "Libs.h"

using namespace std;

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
	}
	
	while (flag) {
		system("cls");
		cout << "1. Добавить\n2. Удалить\n3. Вывести на экран\n4. Изменить данные\n5. Сохранить и выйти\n";
		cout << "\nВыберите действие >> ";
		c = _getch();
		switch (c){
		case '1':

			break;
		case '2':

			break;
		case '3':

			break;
		case '4':

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
	return 0;
}

void Add(Keeper& kpr) {

}

void Delete(Keeper& kpr) {

}

void Print(Keeper& kpr) {

}

void Change(Keeper& kpr) {

}