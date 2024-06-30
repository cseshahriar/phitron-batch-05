#include <bits/stdc++.h>
using namespace std;
// 9.3
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

void print_forward(Node * head) {
    Node * tmp = head;
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node * tail) {
    Node * tmp = tail;
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_pos(Node* head, int pos, int val) {
    Node* newNode = new Node(val); // create new node
    // get position node
    Node* tmp = head;
    for(int i=1; i <= pos - 1; i++) {
        tmp = tmp->next;
    }
    // now tmp at pos - 1 = 2-1 = 1 is 20
    
    // 10 20 30 40
    // 10 20 '100' 30 40
    newNode->prev = tmp; // 20 <- 100 new node -> prev (20)
    newNode->next = tmp->next; // new node next is tmp->next 20->next(30) 100 -> 30

    newNode->next->prev = newNode; // 30 ar prev 100
    tmp->next = newNode; // 100 are prev 20
}

int size(Node* head) {
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;

    // connection
    head->next = a;

    a->prev = head;
    a->next = b;

    b->prev = a;
    b->next = c;

    c->prev = b;
    // c->next = NULL nai
    
    int list_size = size(head);
    int pos, val;
    cin >> pos >> val;
    
    if(pos  >= list_size) {
        cout << "Invalid" << endl;
    } else {
        insert_at_pos(head, 2, 100);
    }

    print_forward(head);
    cout << endl;
    print_backward(tail);

    cout << " " << list_size << endl;
    return 0;
}