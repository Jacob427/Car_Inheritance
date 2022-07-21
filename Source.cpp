/*
Jacob Amerin
CIS 1202 800
7/21/2022
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Vehicle.h"
using namespace std;


int main() {
	string manufacturer_input;
	int year_input;

	cout << "Vehicle: " << endl;
	cout << "Enter manufacturer: ";
	getline(cin, manufacturer_input);
	cout << "Enter year built: ";
	cin >> year_input;

	Vehicle vehicle(manufacturer_input, year_input);
	vehicle.displayInfo();

}