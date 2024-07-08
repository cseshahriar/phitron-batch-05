#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack {
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int st_size = 0;

    // inset at tail
    void push(int val) {
        st_size++;
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    void pop() {
        st_size--;
        Node* deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL) {
            head=NULL;
        } else {
            tail->next = NULL;
        }
        delete deleteNode;
    }

    int top() {
        return tail->val;
    }

    int size() {
        return st_size;
    }

    bool empty() {
        if(st_size == 0) return true;
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