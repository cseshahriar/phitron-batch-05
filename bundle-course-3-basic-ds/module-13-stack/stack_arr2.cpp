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

    int size() {
        return values.size();
    }

    bool empty() {
        if(values.size() == 0) return true;
        else return false;
    }
};
 
int main() {
    myStack st; // static
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