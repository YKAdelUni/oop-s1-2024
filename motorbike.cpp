#include "motorbike.h"

int Motorbike::getParkingDuration() {
    std::time_t now = std::time(nullptr);
    return (now - timeOfEntry) * 0.85;
}