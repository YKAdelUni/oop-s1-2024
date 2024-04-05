#include "vehicle.h"

class Motorbike : public Vehicle {
public:
    Motorbike(int id) : Vehicle(id) {}
    int getParkingDuration();
};