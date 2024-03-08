#include <iostream>
#include <string>

using namespace std;

void print_binary_str(string decimal_number){
    string binary;
    int decNum = stoi(decimal_number);

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

    cout << binary << endl;
}