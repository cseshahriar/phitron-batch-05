#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    getchar();
    for(int i:arr) { // for as loop
        cout << i << " ";
    }
    cout << endl;

    string s;
    cin >> s;
    // for(int i = 0; i < s.size(); i++) {
    //     cout << s[i] << endl;
    // }
    for(char ch:s) { // for as loop
        cout << ch;
    }
    return 0;
}