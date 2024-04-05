#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"
#include "parkingLot.h"

int main() {
    ParkingLot lot(10);
    
    while (lot.getCount() < 10) {  
        char type;
        int id;
        std::cout << "Enter vehicle type and ID (C/B/M for Car, Bus, Motorbike respectively): "; 
        std::cin >> type >> id;
        
        Vehicle* vehicle = nullptr;
        switch(type) {
            case 'C':
                vehicle = new Car(id);
                break;
            case 'B':
                vehicle = new Bus(id);
                break;
            case 'M':
                vehicle = new Motorbike(id);
                break;
        }
        
        if (vehicle) {
            lot.parkVehicle(vehicle);
        } else {
            std::cout << "Invalid type of vehicle\n";
        }
    }
    
    int id;
    std::cout << "Enter ID of vehicle to unpark: "; 
    std::cin >> id;
    lot.unparkVehicle(id);
    
    return 0;
}