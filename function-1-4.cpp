#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n){
    if (n < 1){
        return 0;
    }

    int sum1 = 0;

    for (int i = 0; i < n; i++){
        sum1 += array[i];
    }

    int sum2 = 0;

    for (int j = 0; j < n; j++){
        sum2 += secondarray[j];
    }

    return sum1 + sum2;
}