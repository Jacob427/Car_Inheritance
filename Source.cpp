/*
Jacob Amerin
CIS 1202 800
7/21/2022
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Vehicle.h"
#include "Car.h"
using namespace std;


int main() {
	string manufacturer_input;	//hold naufacturer name
	int year_input;				//hold Year made
	int doors;					//hold door amount
	int towing;					//hold towing capacity

	cout << "Vehicle: " << endl;
	cout << "Enter manufacturer: ";
	getline(cin, manufacturer_input);
	cout << "Enter year built: ";
	cin >> year_input;
	
	Vehicle motor_vehicle(manufacturer_input, year_input);
	motor_vehicle.displayInfo();

	cout << endl << "Car: " << endl;
	cout << "Enter manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer_input);
	cout << "Enter year built: ";
	cin >> year_input;
	cout << "Enter number of doors: ";
	cin >> doors;
	Car motor_car (manufacturer_input, year_input, doors);
	motor_car.displayInfo();



}