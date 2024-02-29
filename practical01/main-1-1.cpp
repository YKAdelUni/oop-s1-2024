#include <iostream>

extern int array_sum(int array[], int n);

using namespace std;

int main(void){
    int arraySize = 5;
    int array[5] = {1,2,3,4,5};

    cout << "The sum of the array is " << array_sum(array, arraySize) << endl;

    return 0;
}