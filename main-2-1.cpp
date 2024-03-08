#include <iostream>
#include <string>

using namespace std;

extern void print_binary_str(string decimal_number);

int main(void){
    string decNum = "155";
    print_binary_str(decNum);
    return 0;
}