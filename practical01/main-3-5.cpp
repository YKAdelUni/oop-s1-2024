#include <iostream>

extern double sum_even(double array[], int n);

using namespace std;

int main(void){
    int arraySize = 5;
    double array[5] = {1,2,3,4,5};

    cout << "The sum of all the values in the even elements of the array is " << sum_even(array, arraySize) << endl;

    return 0;
}