#include <bits/stdc++.h>
using namespace std;

class myStack {
    public:
        vector<int> values;

    void push(int val) {
        values.push_back(val);
    }

    void pop() {
        values.pop_back();
    }

    int top() {
        return values.back();
    }

    bool empty() {
        if(values.size() == 0) return true;
        else return false;
    }
};

class myQueue {
    public:
        list<int> lst;

    void push(int val) {
        lst.push_back(val);
    }

    void pop() {
        lst.pop_front();
    }

    int front() {
        return lst.front();
    }

    bool empty() {
        if(lst.size() == 0) return true;
        else return false;
    }
};


int main() {
    int n, m;
    cin >> n >> m;

    myStack s; // push, pop, empty, top
    myQueue q; // push, pop, empty, front

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