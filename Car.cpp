#include "Car.h"

Car::Car(string maker, int year, int doors) : Vehicle(maker, year) {
	door_number = doors;
}

void Car::set_doors(int doors) {
	door_number = doors;
}

int Car::get_doors() {
	return door_number;
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Doors: " << door_number << endl;
}