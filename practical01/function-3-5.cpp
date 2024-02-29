#include <iostream>

double sum_even(double array[], int n){
    if (n < 1){
        return 0;
    }

    int evenSum = 0;

    if (n < 3){
        evenSum += array[0];
        return evenSum;
    }

    if (n % 2 == 0){
        n = n - 1;
    }

    for (int i = 0; i < n; i += 2){
        evenSum += array[i];
    }

    return evenSum;
}