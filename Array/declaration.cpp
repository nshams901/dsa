#include <iostream>
#include <array>
using namespace std;

// ------------------------------ Notes -------------------------------
// memory to an array element is allocated when the program is being compiled before execution
// operation performed on an array - "Traversing", "Insertion", "Deletion", "Search", "Update", "Sorting", "Reversing".


void lengthOfArray()
{
    int x[10];
    // method 1
    int getArrayLength = sizeof(x) / sizeof(x[0]);
    cout <<"lenth occupied by array" << getArrayLength << endl;

    // method 2
     cout<<"The Length of the Array is : "<<end(x)-begin(x) <<endl;

    // method 3
    // Using the size() function in STL
    //   cout<<"\nThe length of the given Array is: "<< x.size();

    // METHOD 4
    // Using Pointers to Find Array Length in C++
    int len = *(&x + 1) - x;
    cout << "The length of the array is: " << len <<endl;
    //*(&arr + 1) is the address of the next memory location
    // just after the last element of the array
}

int main()
{
    // int a[3];                      // create array of length 3 with garbage value
    // int a[3] = {1, 2, 3};          //[1, 2, 3]
    // int a[3] = {};                 //[0, 0, 0]
    // int a[3] = {[0] = 3, [1] = 4}; // [3, 4, 0]

    // int a[3] = {1}; // [1, 0, 0]
    // Compiler creates an array of size 6, initializes first 4 elements as specified by user and rest two elements as 0.

    int arr[] = {10, 20, 30, 40}; // Compiler creates an array of size 4.
    // above is same as  "int arr[4] = {10, 20, 30, 40}"

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    // accessing i-th element of an array
    int i = 3;
    // cout << a[i];

    // over-riding the array
    int a[4] = {1, 2, 3, 4};
    a[1] = 0; // value at index 1 (i.e. 2) will be replace by 0,hence int a[] will be [1, 0, 3, 4]

    cout << sizeof(a) << endl;          // sizeof() operator returns the size of a type in bytes.
    cout << "total elements : " << sizeof(a) / sizeof(a[0]) << endl;

    lengthOfArray();

    return 0;
}


