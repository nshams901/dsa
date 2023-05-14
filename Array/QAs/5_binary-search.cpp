// first occurance, last occurance, total occurance, missing element, peak element
#include <iostream>
using namespace std;

int firstOccurance(int a[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = s+(s-e)/2;
    int ans;

    while( s <= e){
        if(a[mid] == target){
            ans = mid;
            e = mid - 1;
        }else if( target > a[mid] ){
            s = mid + 1;
        }else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    cout << "first occurance at: " << ans << " index" << endl;
    return ans;
}

int lastOccurance(int a[], int n, int target){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans;

    while( s <= e){
        if( a[mid] == target){
            ans = mid;
            s = mid + 1;
        }else if(target > a[mid]){
            s = mid + 1;
        }else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    cout << "last occurance at: "<< ans << " index" << endl;
    return ans;
}
int main(){
    // find first occurance of 4 using binary search in sorted array arr.
    int arr[] = {1, 3, 4, 4, 4, 5, 6, 8};

    int firstOcc = firstOccurance(arr, 8, 4);

    // find last occurance of 4 using binary search in sorted array arr;
    int lastOcc = lastOccurance(arr, 8, 4);

    // find total occurance of 4
    int totalOcc = (lastOcc - firstOcc) + 1;
    cout << "total number of occurance: " << totalOcc;
    
}