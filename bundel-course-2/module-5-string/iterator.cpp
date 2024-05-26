#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    cout << *s.begin() << endl; // first
    cout << *(s.end() - 1) << endl; // last

    cout << endl;
    // string:: iterator it;
    // for(it=s.begin(); it < s.end(); it++) {
    //     cout << *it << endl; // pointer de reference for print
    // }

    // for(auto it=s.begin(); it < s.end(); it++) {
    //     cout << *it << endl; // pointer de reference for print
    // }
    for(string::iterator it=s.begin(); it < s.end(); it++) {
        cout << *it << endl; // pointer de reference for print
    }
    // cpp 17 +

    return 0;
}