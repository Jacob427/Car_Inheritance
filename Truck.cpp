#include "Truck.h"

Truck::Truck(string maker, int year, int towing) : Vehicle(maker, year) {
	towing_capacity = towing;
}

void Truck::set_towing(int towing) {
	towing_capacity = towing;
}

int Truck::get_towing() {
	return towing_capacity;
}

void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towing_capacity << endl;
}