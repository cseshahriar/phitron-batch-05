#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    stack<int> s;
    queue<int> q;

    // reading stack
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.push(a);
    }

    // reading queue
    for(int j = 0; j < m; j++) {
        int b;
        cin >> b;
        q.push(b);
    }

    // length match na
    if(n != m) {
        cout << "NO" << endl;
        return 0;
    }

    // check not match
    bool flag = true;
    while(!s.empty() && !q.empty()) {
        if(s.top() != q.front()) {
            flag = false;
            break;
        }
        s.pop();
        q.pop();
    }

    if(flag == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}