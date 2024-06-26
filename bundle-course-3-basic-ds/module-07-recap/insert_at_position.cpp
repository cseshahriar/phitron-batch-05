#include <bits/stdc++.h>
using namespace std;

/*
A linked list is a fundamental data structure in computer 
science. It consists of nodes where each node contains data 
and a reference (link) to the next node in the sequence. 
This allows for dynamic memory allocation and efficient 
insertion and deletion operations compared to arrays.
*/

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

void print_linked_list(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // insert
    int pos, val;
    cin >> pos >> val;
    if(pos > size(head)) {
        cout << "Invalid index" << endl;
    } else {
        insert_at_position(head, pos, val);
    }

    print_linked_list(head);
    return 0;
}