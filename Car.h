#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle {
private:
	int door_number;
public:
	Car(string maker, int year, int doors);
	void set_doors(int doors);
	int get_doors();
	void displayInfo();
};

#endif
