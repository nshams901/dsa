#include <iostream>
#include <cstring>
using namespace std;


// WAP to check whether a given subtring is present in the given string
int main(){
    string str;
    char subStr[10];
    int i,j,l;
    cout << "Enter main string\n";
    getline(cin, str);
    cout <<"Enter substring\n";
    cin>> subStr;
    l = strlen(subStr);
    for( i = 0; str[i + l - 1]; i++){
        for(j=0; j < l; j++){
            if(str[i + j] != subStr[j])
                break;
        }
        if( j == l){
            cout << i;
            return i;
        };
    }
    cout << -1;
}