#include <bits/stdc++.h>
using namespace std;

class MyStack {
    public:
        list<int> st; // double linked list

    // insert at last
    void push(int val) {
        st.push_back(val); // vector ar last insert o(1)
    }

    void pop() {
        st.pop_back(); // last value pop o(1)
    }

    int top() {
        return st.back(); // o(1)
    }

    int size() {
        return st.size(); // o(1)
    }

    bool  empty() { // o(1)
        if(st.size() == 0) return true;
        else return false;
    }
};

int main() {
    MyStack myst;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        myst.push(x);
    }
    while(!myst.empty()) {
        cout << myst.top() << endl;
        myst.pop();
    }
    cout << endl;
}