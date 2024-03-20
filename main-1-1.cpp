#include <iostream>

extern int* readNumbers();
extern void printNumbers(int*, int);

int main(void){
    int* numbers = readNumbers();
    printNumbers(numbers, 10);
    delete[] numbers;
    return 0;
}