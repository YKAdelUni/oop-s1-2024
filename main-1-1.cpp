#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"

using namespace std;

int main() {
    int n;
    cout << "Enter number of vehicles: "; 
    cin >> n;
    
    Vehicle* vehicles[n];
    
    for (int i = 0; i < n; ++i) {
        char type;
        int id;
        cout << "Enter vehicle type and ID (C/B/M for Car, Bus, Motorbike respectively): "; 
        cin >> type >> id;
        
        switch(type) {
            case 'C':
                vehicles[i] = new Car(id);
                break;
            case 'B':
                vehicles[i] = new Bus(id);
                break;
            case 'M':
                vehicles[i] = new Motorbike(id);
                break;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << "Vehicle ID: " << vehicles[i]->getID() 
                  << ", Parking Duration: " << vehicles[i]->getParkingDuration() 
                  << " seconds.\n";
    }
    
    for (int i = 0; i < n; ++i) {
        delete vehicles[i];
    }
    
    return 0;
}