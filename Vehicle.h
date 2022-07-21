#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle {
private:
	string manufacturer;
	int year_built;
public:
	Vehicle(string maker, int year);		//Constructor sets two user enter inputs to privaate variables
	void set_manufacturer(string maker);	//set manufacturer
	void set_year(int year);				//set year built
	string get_manufacturer();				//get manufacturer
	int get_year();							//get year built
	void displayInfo();						//display manufacturer and year built
};

#endif