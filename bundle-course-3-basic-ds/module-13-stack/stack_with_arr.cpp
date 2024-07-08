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
    st.push(1);
    st.push(2);
    st.push(3);

    cout << "top " << st.top() << endl;
    st.pop();
    cout << "top " << st.top() << endl;
    st.pop();
    cout << "top " << st.top() << endl;

    if(st.empty() == false) {
        cout << "top " << st.top() << endl;
    }

    // loop through
    // for(int i = 0; i < st.size(); i++) {
    //     cout << st.values[i] << " ";
    // }
    // cout << endl;
    return 0;
}