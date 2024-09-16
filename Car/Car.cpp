#include "Car.h"
#include <string.h>
#include <iostream>
#include <Windows.h>
using namespace std;
Car::Car()
{
	this->model = nullptr;
	this->color = nullptr;
	this->year = 0;
	this->price = 0.0;
}

Car::Car(const char* m, const char* c, int y, double p)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);

	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);

	this->year = y;
	this->price = p;
}

Car::~Car()
{
	if (model != nullptr)delete[] model;
	if (color != nullptr) delete[] color;

	cout << "Destruct\n";
	Sleep(1000);
}

void Car::Input()
{
	char buff[20];
	cout << "Enter model -> ";
	cin >> buff;
	// 
	if (this->model != nullptr) 
	{
		cout << "Delete " << this->model << endl;
		delete[] this->model;
	}
	this->model = new char[strlen(buff) + 1];
	strcpy_s(this->model, strlen(buff) + 1, buff);

	cout << "Enter color -> ";
	cin >> buff;
	// 
	if (this->color != nullptr)
	{
		cout << "Delete " << this->color << endl;
		delete[] this->color;
	}
	this->color = new char[strlen(buff) + 1];
	strcpy_s(this->color, strlen(buff) + 1, buff);

	cout << "Enter year -> ";
	cin >> this->year;

	cout << "Enter price -> ";
	cin >> this->price;
}

void Car::Print()
{
	cout << this->color << " " << this->model << endl;
	cout << "Year: " << this->year << endl;
	cout << "Price: " << this->price << endl << endl;
}

char* Car::GetModel()
{
	return this->model;
}

char* Car::GetColor()
{
	return this->color;
}

int Car::GetYear()
{
	return this->year;
}

double Car::GetPrice()
{
	return this->price;
}

void Car::SetModel(const char* m)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);
}

void Car::SetColor(const char* c)
{
	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);
}

void Car::SetYear(int y)
{
	this->year = y;
}

void Car::SetPrice(double p)
{
	this->price = p;
}
