#include <iostream>

extern int max_element(int array[], int n);

using namespace std;

int main(void){
    int arraySize = 5;
    int array[5] = {3,4,2,5,1};

    cout << "The maximum value of the array is " << max_element(array, arraySize) << endl;

    return 0;
}