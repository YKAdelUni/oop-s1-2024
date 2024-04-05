#include "vehicle.h"

class Car : public Vehicle {
public:
    Car(int id) : Vehicle(id) {}
    int getParkingDuration();
};