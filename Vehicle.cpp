#include "Vehicle.h"

Vehicle::Vehicle(string maker, int year) {
	manufacturer = maker;
	year_built = year;
}

void Vehicle::set_manufacturer(string maker) {
	manufacturer = maker;
}

void Vehicle::set_year(int year) {
	year_built = year;
}

string Vehicle::get_manufacturer() {
	return manufacturer;
}

int Vehicle::get_year() {
	return year_built;
}

void Vehicle::displayInfo() {
	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year built: " << year_built << endl;
}