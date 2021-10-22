#include "Menu.h"

void Add(Keeper& kpr) {
	Base* ptr = nullptr; //ptr - ��������� �� ������
	bool flag = 1;
	int c;
	string b, m, v, k, t;
	while (flag) {
		system("cls");
		cout << "1. ����������\n2. ��������\n3. �������\n4. ��������� � ����\n";
		cout << "\n�������� ����� ������ �������� >> ";
		cin >> b;
		c = atoi(b.c_str());
		if (c < 1 || c > 4) {
			cout << "\n������ ��� ������!\n";
			break;
		}
		if (c == 4) {
			flag = 0;
			break;
		}
		cout << endl << "������� �����: ";
		cin >> b;
		cout << endl << "������� ������: ";
		cin >> m;
		if (c == 1) {
			cout << endl << "������� ����� ���������(�): ";
			cin >> v;
			cout << endl << "������� ����: ";
			cin >> k;
			cout << endl << "������� ��� ���: ";
			cin >> t;
			ptr = new Car(b, m, v, k, t);
		}
		else if (c == 2) {
			cout << endl << "������� ����� ���������(�): ";
			cin >> v;
			cout << endl << "������� �������� ����������(�.�.): ";
			cin >> k;
			cout << endl << "������� ���������: ";
			cin >> t;
			ptr = new Bike(b, m, v, k, t);
		}
		else if (c == 3) {
			cout << endl << "������� ���-�� ������� ����: ";
			cin >> v;
			cout << endl << "������� ����� ���-�� ����: ";
			cin >> k;
			cout << endl << "������� �������� �����: ";
			cin >> t;
			ptr = new Bus(b, m, v, k, t);
		}
		else { break; }
		kpr.insert(*ptr);
		cout << endl << "������ ��������!" << endl;
		ptr = nullptr;
		delete ptr;
		system("pause");
	}
}

void Delete(Keeper& kpr) {
	if (kpr.get_size() == 0) {
		cout << "��������� ����!" << endl;
		return;
	}
	string s;
	int i = 0;
	system("cls");
	cout << "������� ����� �������, ������� ����� ������� >> ";
	cin >> s;
	i = atoi(s.c_str());
	i -= 1;
	cout << endl;
	try {
		kpr.remove(i);
		cout << "\n������ �����!" << endl;
	}
	catch (const char* exc) {
		cout << exc << endl;
	}
}

void Print(Keeper& kpr) {
	if (kpr.get_size() == 0) {
		cout << "��������� ����!" << endl;
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
		cout << "��������� ����!" << endl;
		return;
	}
	string s;
	int i = 0;
	system("cls");
	cout << "������� ����� �������, ������ �������� ����� �������� >> ";
	cin >> s;
	i = atoi(s.c_str());
	i -= 1;
	try {
		cout << endl << "������� ������ �������:\n  ";
		kpr[i].print();
		kpr[i].change();
	}
	catch (const char* exc) {
		cout << exc << endl;
	}
}