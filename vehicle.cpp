#include "vehicle.h"

Vehicle::Vehicle(int id) {
    timeOfEntry = std::time(nullptr);
    ID = id;
}

int Vehicle::getID() {
    return ID;
}