#include "parkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) {
    maxCapacity = capacity;
    count = 0;
    vehicles = new Vehicle*[capacity];
}

ParkingLot::~ParkingLot() {
    delete[] vehicles;
}

int ParkingLot::getCount() {
    return count;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (count < maxCapacity) {
        vehicles[count++] = vehicle;
    } else {
        std::cout << "The lot is full\n";
    }
}

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < count; ++i) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            
            --count; 
            for (; i < count; ++i) {
                vehicles[i] = vehicles[i + 1]; 
            }
            
            return;
        }
    }
    
    std::cout << "Vehicle not in the lot\n";
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int count = 0;
    
    for (int i = 0; i < this->count; ++i) {
        time_t currentTime = time(NULL);
        
        double diffInSeconds = difftime(currentTime, vehicles[i]->getTimeOfEntry());
        if (diffInSeconds > maxParkingDuration) {
            ++count;
        }
    }
    
    return count;
}