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

int size(Node* head) { // o(n)
    Node *tmp = head;
    int count = 0;
    while(tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void print_linked_list(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void insert_at_head(Node *&head, int val) {
    Node *newNode = new Node(500);
    newNode->next = head; // new node link old head
    head = newNode; // head update
}

void insert_at_position(Node* head, int pos, int val) { // o(n)
    Node *newNode = new Node(val);
    Node *tmp = head;

    // got at position
    for(int i =1; i <= pos - 1; i++) {
        tmp = tmp->next;
    }
    // temp = pos - 1
    newNode->next = tmp->next; 
    // new node connect at pos - 1
    // position - 1 ar left node
    tmp->next = newNode; 
}

void insert_at_tail(Node * head, Node * tail, int val) {
    Node *newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    } 
    // else
    tail->next = newNode;
    tail = newNode;
}

void delete_at_pos(Node* head, int pos) {
    Node *tmp = head;
    // got at position
    for(int i =1; i <= pos - 1; i++) {
        tmp = tmp->next;
    }
    // now temp is pos - 1
    Node* delNode = tmp->next; // delete pos - 1 node
    tmp->next = tmp->next->next; // link del node before and after node link
    delete delNode;
}

void delete_head(Node *&head) {
    Node *delNode = head;
    head = head->next; // head shift next node
    delete delNode;
}

int main() {
    Node* head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node * tail = b; 

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // insert
    int pos, val;
    cin >> pos >> val;
    if(pos > size(head)) {
        cout << "Invalid index" << endl;
    } else if(pos == 0) {
        // insert_at_head(head, val);
        delete_head(head);
    } else if(pos == size(head)) {
        insert_at_tail(head, tail, val);
    }
    else {
        insert_at_position(head, pos, val);
    }

    print_linked_list(head);
    
    if(pos >= size(head)) {
        delete_at_pos(head, 2);
    }
    print_linked_list(head);
    return 0;
}