#include <iostream>

using namespace std;

extern void modifyArray(double* array, int size, double value);

int main(void){
    double array[5] = {1,2,3,4,5};
    int size = 5;
    modifyArray(array,size,4);
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}