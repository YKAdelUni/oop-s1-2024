#include <iostream>

using namespace std;

extern bool is_fanarray(int array[], int n);

int main() {
    int array[5] = {1, 2, 3, 2, 1};
    int arraySize = 5;

    if (is_fanarray(array, arraySize) == true){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
