#include <iostream>
#include <map>

extern double weighted_average(int array[], int n);

using namespace std;

int main() {
    int array[6] = {1,2,1,4,1,3};
    int arraySize = 6;

    cout << "The weighted average is: " << weighted_average(array, arraySize) << endl;

    return 0;
}


