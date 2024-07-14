#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class MyStack {
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node *newNode = new Node(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail; // now node prev is old tail
        tail->next = newNode; // current tail replace with new tail
        tail = tail->next; // current tail update to new node
    }

    void pop() { // pop means del tail
        if (sz == 0) return; // prevent pop on empty stack
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL) {
            head = NULL;
        } else {
            tail->next = NULL;
        }
        delete deleteNode;
    }

    int top() {
        return tail->val;
    }

    int size() {
        return sz;
    }

    bool empty() { // O(1)
        if(sz==0) return true;
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
        cout << myst.top() << " ";
        myst.pop();
    }
    cout << endl;

    return 0;
}
