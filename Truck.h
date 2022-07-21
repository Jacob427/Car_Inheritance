#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle {
private:
	int towing_capacity;
public:
	Truck(string maker, int year, int towing);
	void set_towing(int towing);
	int get_towing();
	void displayInfo();
};

#endif