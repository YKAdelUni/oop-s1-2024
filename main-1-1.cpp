#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main() {
    Person* arr = createPersonArray(5);
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i].name << " is " << arr[i].age << " years old." << std::endl;
    }
    return 0;
}