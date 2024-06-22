#include <bits/stdc++.h>
using namespace std;

class Node { // node
    public:
        int val;
        Node* next;
};

int main() {
    Node a, b; // 2 node created
    
    a.val = 10; // node a value
    b.val = 20; // node b value

    a.next = &b; // a ar next node b node
    b.next = NULL;

    cout << a.val << endl;
    cout << b.val << endl;

    cout << (*a.next).val << endl;
    cout << a.next->val << endl; // de reference

    return 0;
}