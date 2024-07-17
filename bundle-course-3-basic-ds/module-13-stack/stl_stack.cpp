#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st; // LIFO

    int n;
    cin >> n;

    // input 
    for(int i=0;i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    // output
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}