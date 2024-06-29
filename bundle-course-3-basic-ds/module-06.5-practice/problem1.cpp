#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        long long int val;
        Node* next;

    Node(long long int val) {
        this->val = val;
        this->next = NULL;
    }

};


void insert_at_tail(Node *&head, long long int val) {
    Node * newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node * temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    // last 
    temp->next = newNode;
   
}

int main() {
    int val;
    Node * head = NULL;

    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, val);
    }
    return 0;
}