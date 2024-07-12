#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for(char c:s) {
        if(
            !st.empty() && (c == '1' && st.top() == '0')
        ) {
            st.pop();
        } else {
            st.push(c); 
        }
    }
    return st.empty();
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        bool flag = isValid(s);
        if(flag == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}