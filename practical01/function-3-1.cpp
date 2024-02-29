#include <iostream>

bool is_fanarray(int array[], int n) {
    if (n < 1) {
        return false;
    }

    int mid = n / 2;
    for (int i = 0; i < mid; i++) {
        if (array[i] > array[i + 1] || array[i] != array[n - i - 1]) {
            return false;
        }
    }

    return true;
}