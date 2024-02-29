#include <iostream>

bool is_ascending(int array[], int n){
    if (n <= 0){
        return false;
    }

    int isAscending = 0;

    for (int i = 0; i < n - 1; i++){
        if (array[i] <= array[i+1]){
            isAscending++;
        }
    }

    if (isAscending == n - 1){
        return true;
    } else {
        return false;
    }
}