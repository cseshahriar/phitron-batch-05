#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st; //  LIFO
    for(char c:s) {
        if(!st.empty() && ((c == '1' && st.top() == '0' ) || (c == '0' && st.top() == '1'))) {
            st.pop(); // remove jodi matching
        } else {
            st.push(c); // push jodi match na hoy to stack
        }
    }
    // if(st.empty()) return true; else return false;
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