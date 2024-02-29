#include <iostream>

using namespace std;

extern bool is_descending(int array[], int n);

int main(void){
    int array[6] = {6,5,4,3,2,1};
    int arraySize = 6;

    cout << is_descending(array, arraySize) << endl;

    return 0;
}