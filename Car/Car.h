#pragma once
class Car
{
	char* model;
	char* color;
	int year;
	double price;
public:
	//constructors
	Car();
	Car(const char* m, const char* c, int y, double p);
	~Car();

	void Input();
	void Print();

	//inspectors
	char* GetModel();
	char* GetColor();
	int GetYear();
	double GetPrice();

	//modisicators
	void SetModel(const char* m);
	void SetColor(const char* c);
	void SetYear(int y);
	void SetPrice(double p);
};

