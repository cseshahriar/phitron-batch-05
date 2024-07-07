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

void insert_at_position(Node* head, int pos, int val) { //o(n)
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

int size(Node *head) { // o(n)
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_at_head(Node *&head, Node *&tail, int val) { // o(1)
    Node* newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    // current head shift at new node
    newNode->next = head;
    head->prev = newNode;

    // now make new node is head
    head = newNode; // update head
}

void insert_at_tail(Node *head, Node *&tail, int val) { // o(1)
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

void delete_at_position(Node* head, int pos) { // o(n)
    Node* tmp = head;
    for(int i=1; i <= pos - 1; i++) {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}

void delete_tail(Node *&tail) { // o(1)
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}


void delete_head(Node *&head) { // o(1)
    Node* deleteNode = head;
    head = head->prev;
    delete deleteNode;
    head->prev = NULL;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int pos, val;
    cin >> pos >> val;
    if(pos > size(head)) {
        cout << " invalid" << endl;
    } else if(pos == 0) {
        delete_head(head);
    } else if(pos == size(head) - 1) {
        delete_tail(tail);
    } else {
        delete_at_position(head, pos);
    }
    print_linked_list(head);
    return 0;
}