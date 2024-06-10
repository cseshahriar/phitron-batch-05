#include <bits/stdc++.h>
using namespace std;

/**
3
hello
world
example
*/

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for(int i = 0; i < n; i++) {
        getline(cin, v[i]);
    }
    for(string s:v) {
        s[0] = s[0] - 32; // lower to upper case
        cout << s << endl;
    }
    cout << endl;
    return 0;
}