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

void insert_at_tail(Node *&head, Node *&tail, int val) { 
    Node* newNode = new Node(val);
    if(tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode; // current tail replace with new tail
    newNode->prev = tail; // now node prev is old tail
    tail = tail->next; // current tail update to new node
}

bool is_palindrome(Node* head, Node* tail) {
    if(head == NULL) return true;
    Node* left = head;
    Node* right = tail;
    while(left != right && left->prev != right) {
        if(left->val != right->val) {
            return false;
        }   
        left = left->next;
        right = right->prev;
    }
    return true;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }
    bool is_palindrome_flag = is_palindrome(head, tail);
    if(is_palindrome_flag == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}