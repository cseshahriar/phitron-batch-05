#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-05/challenges/browser-history-1

class Node {
    public:
        string address;
        Node* next;
        Node* prev;

    Node(string address) {
        this->address = address;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val) { 
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

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    string val;
    while(true) {
        cin >> val;
        if(val == "end") break;
        insert_at_tail(head, tail, val);
    }
    return 0;
}