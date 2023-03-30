#include <iostream>
using namespace std;

void bubbleSort(int *x, int size)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (x[j] > x[j + 1])
            {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}

void printArray (int x[],int size){
    for (int i = 0; i < size; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[10] = {1, 8, 9, 5, 3, 5, 0, 4, 12, 11};
    int size = sizeof(a) / sizeof(a[0]);
    bubbleSort(a, size);

    printArray(a, size);
}