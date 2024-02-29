#include <iostream>

extern void print_pass_fail(char grade);

using namespace std;

int main(void){
    char grade = 's';

    print_pass_fail(grade);

    return 0;
}