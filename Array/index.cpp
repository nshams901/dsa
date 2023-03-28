#include <iostream>
#include <array>
using namespace std;

void getLength(int x[]){
     cout<< sizeof(x);
    //  for(int i = 0; i < 5; i++){
    //     cout<< x[i];
    //  };
};
int main(){
    int a[5] = { 1, 2, 3, 7};

    getLength(a);
    // cout<< sizeof(a)/ sizeof(a[0]);
}