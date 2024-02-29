#include <iostream>

using namespace std;

void print_pass_fail(char grade){
    switch (grade){
        case 'A':
        case 'B':
        case 'C':
            cout << "PASS" << endl;
            break;
        case 'D':
        case 'E':
            cout << "FAIL" << endl;
            break;
        default:
            cout << "Not a valid character." << endl;
    }
}