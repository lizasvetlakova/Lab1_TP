#ifndef KEEPER_H
#define KEEPER_H
#include "Base.h"
#include "Car.h"
#include "Bike.h"
#include "Bus.h"

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

	int get_size();

	void insert(Base& val); //добавление
	void remove(int index); //удаление
	void erase();           //отчистка
	void save();            //сохранение в файл
	void upload();          //загрузка из файла

	Base& operator[] (const int index); //оператор индексации
};
#endif 