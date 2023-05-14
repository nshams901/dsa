#include <iostream>
using namespace std;

// Given a 2 - d array of integers having N *N elements, print the transpose of the array.

int main(){
    int arr [3][3] = {
        {1, 23, 6},
        {5, 33, 0},
        {4, 8, 12}
    };
    int brr[3][3];

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            brr[j][i] = arr[i][j];
        }
    }

    for(int i=0; i< 3; i++ ){
        for(int j = 0; j < 3; j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
}

