#include <iostream>

using namespace std;

void print_summed(int array1[3][3],int array2[3][3]){
    int arraySum[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            arraySum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    for (int k = 0; k < 3; k++){
        for (int l = 0; l < 3; l++){
            cout << arraySum[k][l] << " ";
        }
        cout << endl;
    }
}