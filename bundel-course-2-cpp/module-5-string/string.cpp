#include <bits/stdc++.h>

using namespace std;

int main() {
    string s = "Hello"; // dynamic size
    s = "World";
    cout << s << endl;

    string s1 = "Hello";
    string s2 = "Hello";

    // compare
    if(s1 == s2) {
        cout << "same";
    } else {
        cout << "Not same";
    }
    cout << endl;
    return 0;
}