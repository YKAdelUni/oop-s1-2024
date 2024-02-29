#include <iostream>

extern int count_evens(int number);

using namespace std;

int main(void){
    int number = 7;

    cout << "The number of even values between 1 and " << number << " is " << count_evens(number) << endl;

    return 0;
}