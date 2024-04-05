#include "bus.h"

int Bus::getParkingDuration() {
    std::time_t now = std::time(nullptr);
    return (now - timeOfEntry) * 0.75;
}