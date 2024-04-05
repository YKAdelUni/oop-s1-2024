#include "car.h"

int Car::getParkingDuration() {
    std::time_t now = std::time(nullptr);
    return (now - timeOfEntry) * 0.9;
}