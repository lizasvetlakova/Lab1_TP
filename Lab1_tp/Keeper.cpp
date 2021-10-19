#include "Keeper.h"

Keeper::Keeper() {
	head = nullptr;
	size = 0;
}

Keeper::~Keeper() {
	if (size == 0) { return;}
	Element* buf = head;
	while (buf->next != nullptr)
	{
		Element* tmp = buf;
		tmp->value->~Base();
		delete tmp->value; //
		delete tmp;
		buf = buf->next;
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
		throw "\nОшибка: объекта с таким индексом не существует!";
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
	if (tmp == prev) { //когда удаляем первый элемент = tmp
		head = tmp->next;
	}
	else {
		prev->next = tmp->next; //предыдущий ссылается на следующий за удаляемым элементом
	}
	tmp->value->~Base();
	delete tmp->value;
	delete tmp;
	size--;
}

void Keeper::erase() {
	Element* buf = head;
	for (int i = 0; i < size; i++) {
		Element* tmp = buf;
		tmp->value->~Base();
		delete tmp->value;
		delete tmp;
		buf = buf->next;
	}
	size = 0;
	head = nullptr;//
}

Base& Keeper::operator[] (const int index) {
	if (index >= size || index < 0) {
		throw "\nОшибка: объекта с таким индексом не существует!";
	}
	Element* buf= head;
	for (int i = 0; i < index; i++)
	{
		buf = buf->next;
	}
	return *(buf->value);
}