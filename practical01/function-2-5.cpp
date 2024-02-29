#include <iostream>

bool is_descending(int array[], int n){
    if (n <= 0){
        return false;
    }

    int isDescending = 0;

    for (int i = 0; i < n - 1; i++){
        if (array[i] >= array[i+1]){
            isDescending++;
        }
    }

    if (isDescending == n - 1){
        return true;
    } else {
        return false;
    }
}