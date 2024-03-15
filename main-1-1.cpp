#include <iostream>

using namespace std;

extern double arrayMin(double* array, int size);

int main(void){
    double arrayTest[5] = {2,3,4,1,5};
    int size = 5;
    cout << "The minimum value of the array is " << arrayMin(arrayTest,size) << endl;
    return 0;
}