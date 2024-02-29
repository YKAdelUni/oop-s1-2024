#include <iostream>

using namespace std;

extern void two_five_nine(int array[], int n);

int main(void){
    int array[6] = {2,5,9,5,2,5};
    int arraySize = 6;
    two_five_nine(array,arraySize);
    return 0;
}