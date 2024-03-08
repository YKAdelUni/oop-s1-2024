#include <iostream>

using namespace std;

extern void print_summed(int array1[3][3],int array2[3][3]);

int main(void){
    int array1[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
    int array2[3][3] = {{0,2,3},{4,5,6},{7,8,9}};

    print_summed(array1,array2);
}