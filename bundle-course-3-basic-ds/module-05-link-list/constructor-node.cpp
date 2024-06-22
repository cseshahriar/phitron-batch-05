#include <bits/stdc++.h>
using namespace std;

class Node { // node
    public:
        int val;
        Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }

};

int main() {
    Node a(10);
    Node b(20);
    a.next = &b; // a ar next node b node

    cout << a.val << endl;
    cout << b.val << endl;

    cout << (*a.next).val << endl; // de reference
    cout << a.next->val << endl; // short cut de reference

    return 0;
}