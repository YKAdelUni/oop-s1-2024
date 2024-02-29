#include <iostream>

extern int num_count(int array[], int n, int number);

using namespace std;

int main(void){
    int array[5] = {7,3,9,7,2};
    int arraySize = 5;
    int numberMatch = 7;

    cout << "The number of entries in the array that match the number " << numberMatch << " is " << num_count(array, arraySize, numberMatch) << endl;

    return 0;
}