#include <iostream>

extern int median_array(int array[], int n);

using namespace std;

int main(void){
    int array[7] = {3,9,2,6,4,1,8};
    int arraySize = 7;

    cout << "The median of this array is " << median_array(array,arraySize) << endl;

    return 0;
}