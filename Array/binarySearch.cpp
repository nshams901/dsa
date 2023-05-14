// Problem: Given a sorted array arr[] of n elements, 
// write a function to search a given element x in arr[] and 
// return the index of x in the array. Consider array is 0 base index.

// Input: arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170},      x = 110
// Output: 6
#include <iostream>
using namespace std;


// binary search
void binarySearch(int a[], int size, int x)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    cout << end << mid;
    // while (start < end)
    // {
    //     if( x == a[mid]){
    //         cout << "Index of element is: " << mid;
    //         return;
    //     }else  if (x > a[mid])
    //     {
    //         start = mid;
    //     } else{
    //         end = mid;
    //     }
    // }
    cout << -1;
    return;
};

void printArray(int a[], int size){
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {2, 3, 4, 6, 8, 10};
    binarySearch(a, 6, 8);
    // printArray(a, 6);
    return 0;
}


// ------------------------- NOTES --------------------------

// To apply binary search in any data structure, the data structure must maintain the following properties :
//    -> The data structure must be sorted.
//    -> Access to any element of the data structure takes constant time.

// Time complexity of binary search is: O(log(n)). 