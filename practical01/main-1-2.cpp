#include <iostream>

extern double array_mean(int array[], int n);

using namespace std;

int main(void){
    int array[5] = {1,2,3,5,5};
    int arraySize = 5;

    cout << "The average of this array is " << array_mean(array, arraySize) << endl;

    return 0;
}