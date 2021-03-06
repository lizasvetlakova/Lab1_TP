#ifndef CAR_H
#define CAR_H
#include "Garage.h"
#include "Base.h"

class Car : public Base {
	Garage tr;
	string volume;
	string color;
	string type;
public:
	Car();
	Car(string& B, string& M, string& V, string& C, string& T);
	Car(const Car& car);
	~Car();

	virtual string getinfo() override;
	virtual void setinfo(ifstream& in) override;
	virtual void change() override;
	virtual void print() override;

	void set_brand(string& Brand);
	void set_model(string& Model);
	void set_volume(string& Volume);
	void set_color(string& Color);
	void set_type(string& Type);

	string get_brand();
	string get_model();
	string get_volume();
	string get_color();
	string get_type();
};
#endif 