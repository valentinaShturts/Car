#include "Car.h"
#include <string.h>
#include <iostream>

using namespace std;
int main()
{
	Car car1("Toyota", "Black", 2000, 5000);
	car1.Print();
	Car car2;
	car2.Input();
	car2.Print();
}