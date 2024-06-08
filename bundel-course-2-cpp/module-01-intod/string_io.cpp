#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    getchar(); // int ar por string or char input nile
    // drop new chart line

    // // int array input 
    // int arr[n];
    // for(int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // // output 
    // for(int i = 0; i < n; i++) {
    //     cout << arr[i] << " " << endl;
    // }

    // string without space
    // char s[100];
    // cin >> s; // without space
    // cout << s << endl;
    // cout << "strlen " << strlen(s) << endl;

    // with space
    char ch[100];
    cin.getline(ch, 100);
    cout << ch << endl;
    return 0;
}