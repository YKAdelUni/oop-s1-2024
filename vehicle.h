#include <ctime>

class Vehicle {
protected:
    std::time_t timeOfEntry;
    int ID;
public:
    Vehicle(int id);
    int getID();
};