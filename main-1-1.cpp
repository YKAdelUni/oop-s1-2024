#include <iostream>

using namespace std;

extern double arrayMin(double* array, int size);

int main() {
    double array[] = {3.5, 2.7, 9.8, 1.2, 5.6};
    int size = sizeof(array) / sizeof(array[0]);
    double min = arrayMin(array, size);
    std::cout << "Minimum value found: " << min << std::endl;
    return 0;
}