#include "vehicle.h"

class Bus : public Vehicle {
public:
    Bus(int id) : Vehicle(id) {}
    int getParkingDuration();
};