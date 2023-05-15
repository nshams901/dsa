#include <iostream>

using namespace std;

void takeUserInput()
{
    int row, col, arr[10][10];
    cout << "Enter the number of columns";
    cin>> col;
    cout << "Enter the number of row";

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
};

void printMatrix(){
    int arr[4][3] = {
        {3, 5, 7},
        {5, 3, 8},
        {4, 6, 9},
        {2, 4, 6},
    };
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void sumOfMatrix(){
    int arr[4][3] = {
        {3, 5, 7},
        {5, 3, 8},
        {4, 6, 9},
        {2, 4, 6},
    };
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans += arr[i][j];
        }
    }
    cout << ans;
}

void rowWiseSum(){
    int arr[4][3] = {
        {3, 5, 7},
        {5, 3, 8},
        {4, 6, 9},
        {2, 4, 6},
    };
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum;
        cout << endl;
    }
}

void columnWiseSum(){
    int arr[4][3] = {
        {3, 5, 7},
        {5, 3, 8},
        {4, 6, 9},
        {2, 4, 6},
    };
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[j][i];
        }
        cout << sum;
        cout << endl;
    }
}

void leftDiagonalSum(){
    int s = 0;
    cout << "enter the size of square matrix: ";
    cin >> s;
    int arr[s][s];

    // taking input
    for(int i = 0; i < s; i++){
        for (int j = 0; j < s; j++){
            cin >> arr[i][j];
        }
    }

    // printing diagonal sum
    int sum = 0;
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if(i == j){
                sum += arr[i][j];
            }
        }
    }
    cout << sum;
}
int main(){

    // 1.1 take 2d array as input
    // takeUserInput();

    // 1.2 display element of matrix
    // printMatrix();

    // 1.3 sum of all elements of matrix
    // sumOfMatrix();

    // 1.4 row wise sum of matrix
    // rowWiseSum();

    // 1.5 column wise sum of matrix
    // columnWiseSum();

    // 2.0 left diagonal sum
    // leftDiagonalSum();
};

