#include "vehicle.h"

class ParkingLot {
private:
    int maxCapacity;
    int count;
    Vehicle** vehicles;
public:
    ParkingLot(int capacity);
    ~ParkingLot();
    int getCount();
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
    int countOverstayingVehicles(int maxParkingDuration);
};
