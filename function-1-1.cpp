#include <iostream>

double arrayMin(double* array, int size){
    int min = 0;
    for (int i = 0; i < size; i++){
        if (array[i] <= array[i+1]){
            min++;
        }
    }
    return array[min];
}