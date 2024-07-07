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


void print_linked_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_rev(Node* tail) {
    Node* tmp = tail;
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_position(Node* head, int pos, int val) {
    Node* newNode = new Node(val); // create new node
    Node* tmp = head;
    for(int i =1; i <= pos - 1; i++) {
        tmp = tmp->next;
    }
    // cout << "tmp " << tmp->val; // 20
    // tmp is now insert position
    // 10 20 30 40
    // 10 20 100 30 40
    
    // next connection
    newNode->next = tmp->next; // 100 ar next 30
    tmp->next = newNode; // 20 ar next 100

    // prev
    newNode->next->prev = newNode; // 30 ar prev 100
    newNode->prev = tmp; // 100 ar prev 20
}

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    
    print_linked_list(head);
    cout << "after insert " << endl;    
    insert_at_position(head, 2, 100);
    print_linked_list(head);

    return 0;
}