#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

using namespace std;

int main(void){
    int arraySize = 5;
    int array1[5] = {1,2,3,4,5};
    int array2[5] = {6,7,8,9,10};

    cout << "The sum of these two arrays are " << sum_two_arrays(array1, array2, arraySize) << endl;

    return 0;
}