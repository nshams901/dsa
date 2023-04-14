#include <iostream>
#include <array>
using namespace std;

void printArray(int x[], int size){
    for(int i = 0; i < size; i++){
        cout << x[i] << " ";
    }
}
int main(){
    int a[10] = { 1, 8, 9, 5, 3, 5, 0, 4, 12, 11};

    for (int i = 0; i < 10; i++){
        for( int j = 0; j < 10 - i -1; j++){
            if(a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j+1] = temp;
            }
        }
    }
    printArray(a, 10);
}