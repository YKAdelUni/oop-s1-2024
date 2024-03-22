#include "Person.h"
#include <iostream>

extern PersonList createPersonList(int n);

int main() {
    // Create a PersonList with 5 people
    PersonList list = createPersonList(5);

    // Print out the names and ages of each person in the list
    for (int i = 0; i < list.numPeople; i++) {
        std::cout << "Name: " << list.people[i].name << "\n";
        std::cout << "Age: " << list.people[i].age << "\n\n";
    }

    return 0;
}
