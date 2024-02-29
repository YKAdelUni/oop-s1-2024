#include <iostream>

extern int min_element(int array[], int n);

using namespace std;

int main(void){
    int arraySize = 5;
    int array[5] = {3,2,1,4,5};

    cout << "The minimum value of the array is " << min_element(array, arraySize) << endl;

    return 0;
}