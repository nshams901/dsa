// find union of two array, assume no duplicate value

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a[] = { 1, 3, 5, 7};
    int b[] = { 2, 4, 6};
    int sizea = 4, sizeb = 3;
    vector<int> result;

    // insert the element of first array
    for(int i = 0; i < sizea; i++){
        result.push_back(a[i]);
    };
    
    // insert the element of second array
    for(int i = 0; i < sizeb; i ++){
        result.push_back(b[i]);
    }

    // print the array
    for(int i=0; i < result.size(); i++){
        cout << result[i] << " ";
    }
}