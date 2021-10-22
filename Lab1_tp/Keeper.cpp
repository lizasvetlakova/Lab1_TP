#include "Keeper.h"

Keeper::Keeper() {
	head = nullptr;
	size = 0;
}

Keeper::~Keeper() {
	if (size == 0) { return;}
	while (head != NULL){
		Element* buf = head;
		head = buf->next;
		delete buf;
	}
}

int Keeper::get_size() {
	return size;
}

void Keeper::insert(Base& val) {
	if (size == 0)
	{
		head = new Element;
		head->value = &val;
		head->next = nullptr;
		size++;
		return;
	}
	else {
		Element* buf = head;
		while (buf->next != nullptr) {
			buf = buf->next;
		}
		Element* tmp = new Element;
		buf->next = tmp;
		tmp->value = &val;
		tmp->next = nullptr;
		size++;
	}
}

void Keeper::remove(int index) {
	if (index >= size || index < 0) {
		throw "\nОшибка: объекта с таким номером не существует!";
	}
	if (size == 1) {
		this->erase();
		return;
	}
	Element* tmp = head;
	Element* prev = head;
	
	for (int i = 0; i < index; i++) {
		prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == prev) { //когда удаляем первый элемент tmp = prev = head
		head = tmp->next;
	}
	else {
		prev->next = tmp->next; //предыдущий ссылается на следующий за удаляемым элементом
	}
	tmp->value->~Base();
	delete tmp;
	size--;
}

void Keeper::erase() {
	Element* buf = head;
	for (int i = 0; i < size; i++) {
		Element* tmp = buf;
		tmp->value->~Base();
		delete tmp;
		buf = buf->next;
	}
	size = 0;
	head = nullptr;//
}

Base& Keeper::operator[] (const int index) {
	if (index >= size || index < 0) {
		throw "\nОшибка: объекта с таким номером не существует!";
	}
	Element* buf= head;
	for (int i = 0; i < index; i++)
	{
		buf = buf->next;
	}
	return *(buf->value);
}

void Keeper::save() {
	ofstream out("kpr.txt");
	if (!out.is_open()) {
		throw "\nОшибка: не удалось открыть файл";
	}
	Element* buf = head;
	for (int i = 0; i < size; i++) {
		out << buf->value->getinfo() << endl; 
		buf = buf->next;
	}
	out.close();
}

void Keeper::upload() {
	ifstream in("kpr.txt");
	if (!in.is_open()) {
		throw "\nОшибка: не удалось открыть файл";
	}
	string line;
	while (getline(in, line)) {
		Element* tmp = new Element;
		int N = atoi(line.c_str());
		if (N == 1) { tmp->value = new Car; }
		else if (N == 2) { tmp->value = new Bike; }
		else if (N == 3) { tmp->value = new Bus; }
		else break; 
		tmp->value->setinfo(in); //добавляем инфо об объекте
		insert(*(tmp->value)); //добавляем объект в контейнер
		delete tmp;
	}
	in.close();
}