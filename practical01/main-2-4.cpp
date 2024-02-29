#include <iostream>

using namespace std;

extern bool is_ascending(int array[], int n);

int main(void){
    int array[6] = {1,2,3,4,5,6};
    int arraySize = 6;

    cout << is_ascending(array, arraySize) << endl;

    return 0;
}