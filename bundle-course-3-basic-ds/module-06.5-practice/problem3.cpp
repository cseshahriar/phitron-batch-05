#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }

};


void insert_at_tail(Node *&head, int val) {
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

void print_middle_elements(Node *head) {
    
}


int main() {
    int val;
    Node * head = NULL;

    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, val);
    }

    print_middle_elements(head);
    return 0;
}