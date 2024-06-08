#include <bits/stdc++.h>

using namespace std;

int main() {
    // 5 + 10 = 15 yes
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    int result;
    if(s == '+') {
        result = a + b;
        if(result == c) {
            cout << "Yes" << endl;
        }  else {
            cout << result << endl;
        }
    } else if(s == '-') {
        result = a - b;
        if(result == c) {
            cout << "Yes" << endl;
        }  else {
            cout << result << endl;
        }
    } else if(s == '*') {
        result = a * b;
        if(result == c) {
            cout << "Yes" << endl;
        }  else {
            cout << result << endl;
        }
    }
    return 0;
}