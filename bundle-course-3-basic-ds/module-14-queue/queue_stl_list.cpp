#include <bits/stdc++.h>
using namespace std;


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

    int size() {
        return lst.size();
    }

    bool empty() {
        if(lst.size() == 0) return true;
        else return false;
    }
};

int main() {
    myQueue q;
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    while(!q.empty()) {
        cout << q.front() << endl;
        q.pop();

    }
    return 0;
}