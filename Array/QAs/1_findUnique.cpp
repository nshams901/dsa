// Every element occurs twice except 1 find that unique element

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 2, 3, 1, 4, 6, 4};
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i]; // 5^5 is 0; 0^3 = 3
    }
    cout << "Unique element is: " << ans;
}