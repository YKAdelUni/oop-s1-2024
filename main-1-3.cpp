#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"
#include "parkingLot.h"

int main() {
    ParkingLot lot(10);
    
    for (int i = 0; i < 5; ++i) {
        Car* car = new Car();
        lot.parkVehicle(car);
    }
  
    for (int i = 0; i < 3; ++i) {
        Bus* bus = new Bus();
        lot.parkVehicle(bus);
    }
    
    for (int i = 0; i < 2; ++i) {
        Motorbike* motorbike = new Motorbike();
        lot.parkVehicle(motorbike);
    }
  
    int count = lot.countOverstayingVehicles(15);
    
    std::cout << "Number of vehicles that overstayed: " << count << "\n";
    
    return 0;
}
