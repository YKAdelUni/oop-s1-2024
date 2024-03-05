#include <iostream>
#include <string>

using namespace std;

int main(void){
    string binary;
    int decNum;

    cout << "Enter the number you wish to convert: " << endl;
    cin >> decNum;

    do {
        switch (decNum % 2) {
            case 0:
                binary = "0" + binary;
                break;
            case 1:
                binary = "1" + binary;
                break;
        }
        decNum /= 2;
    } while (decNum > 0);

    cout << "The binary conversion of the provided number is " << binary << endl;

    return 0;
}
