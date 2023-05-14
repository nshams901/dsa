#include <iostream>

using namespace std;

void printArray(int a[][100], int r, int c){     //passing 2D array into a function.
    for (int i = 0; i < r; i++)
    { // outer loop iterates over rows.
        for (int j = 0; j < c; j++)
        { // inner loop iterates over the columns.
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // initialize a two-dimensional array
    int arr[3][4] = {           //here 3 represents rows and 4 represents column.
        {1, 2, 4, 7},
        {3, 8, 6, 8},
        {2, 6, 5, 9}
    };

    // Printing a 2D Array
    for (int i = 0; i< 3; i++){             //outer loop iterates over rows.
        for(int j = 0; j < 4; j++){         //inner loop iterates over the columns.
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int m =10;
    int n =10;
    // taking 2D array as input from user.
    int brr[m][n], r, c;
    cout << "Enter total number of rows: "<< endl;
    // cin >> r;
    cout << "Enter total number of cols: "<< endl;
    // cin >> c;
    // int brr[r][c];
    cout << "Enter the elements of the matrix: "<< endl;

    for(int i =0; i < r; i++){
        for(int j =0; j < c; j++){
            cin >> brr[i][j];
        }
    }


    // print the array
    printArray(brr , r, c);
}