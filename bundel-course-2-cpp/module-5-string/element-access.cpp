#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s[0] << endl; // first
    cout << s.at(0) << endl; // first
    cout << s.front() << endl; // first
    cout << s[s.size()-1] << endl; // last
    cout << s.back() << endl; // last el
    return 0;
}