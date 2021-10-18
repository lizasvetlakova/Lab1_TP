#ifndef KEEPER_H
#define KEEPER_H
#include "Base.h"

struct Element
{
	Base* value;//элемент контейнера - указатель на Base 
	Element* next;
};

class Keeper {
	Element* head;
	int size;
public:
	Keeper();
	~Keeper();

	Element* get_head();
	int get_size();

	void insert(Base& val); //добавление
	void remove(int index); //удаление
	void erase();           //отчистка

	Base& operator[] (const int index); //оператор индексации
};
#endif 