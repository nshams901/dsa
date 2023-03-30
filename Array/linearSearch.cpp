#include <iostream>
using namespace std;
int linearSearch(int a[], int size, int num){
    int i;
    for( i=0; i< size; i++){
        if(a[i] == num){
            return i;
        }
    }
    if( i == size){
        cout << -1;
    }
}

int main(){
    int arr[20] = {1,2,3,4,5,6,7,};
    cout << linearSearch(arr, 7, 3);
}